#include <iostream>
#include <cstdint>
#include <cstring>
#include <array>
#include <libusb-1.0/libusb.h>

// USB device IDs for left and right hand
static constexpr uint16_t LEFT_HAND_VENDOR  = 0x34B7;
static constexpr uint16_t LEFT_HAND_PRODUCT = 0x1010;
static constexpr uint16_t RIGHT_HAND_VENDOR  = 0x34B7;
static constexpr uint16_t RIGHT_HAND_PRODUCT = 0x1011;

// USB bulk endpoints
static constexpr unsigned char OUT_EP = 0x02;  // host → device
static constexpr unsigned char IN_EP  = 0x81;  // device → host

// Buffer sizes
static constexpr int BUF_SIZE = 4096;
static constexpr int SUPPORTED_FINGER_NUM    = 5;
static constexpr int SUPPORTED_SEND_BUF_SIZE = 140;
static constexpr int SUPPORTED_RECV_BUF_SIZE = 240;

#pragma pack(push,1)
// Control mode structure for each motor
struct RIS_Mode_t {
    uint8_t id      : 4;    // motor ID, 0~14, 15 = broadcast
    uint8_t status  : 3;    // mode: 0=Lock,1=FOC,6=...
    uint8_t timeout : 1;    // 0=disable timeout,1=enable
};

// Motor command packet (20 bytes + CRC)
struct MotorCmd_t {
    uint8_t  head[2];    // {0xFE,0xEE}
    RIS_Mode_t mode;     // control mode
    uint8_t  res;        // reserved
    int16_t  tor_des;    // torque ×256 = mN·m
    int16_t  spd_des;    // speed ×(256/2π) = rad/s
    int32_t  pos_des;    // position ×(32768/2π) = rad
    int16_t  k_pos;      // stiffness ×1280 = mN·m/rad
    int16_t  k_spd;      // damping ×1280 = mN·m/(100rad/s)
    uint32_t CRC32;      // CRC32 checksum
};

// Sensor (tactile) state packet (44 bytes + CRC)
struct SensorState_t {
    uint8_t  head[2];       // {0x7E,0xE7}
    uint8_t  id : 4;        // sensor ID or broadcast
    uint8_t  status : 4;    // mode (unused)
    uint8_t  reverse;       // reserved
    uint16_t pressure[12];  // 12×2B = 24B, each unit = 8Pa
    int8_t   temperature[12];// 12×1B, -127~+128°C
    uint32_t CRC32;         // CRC32 checksum
};

// Host → MCU command wrapper
struct LinuxToMcuCmd_t {
    uint8_t  head[2];                 // frame header
    uint8_t  mode[4];                 // handshake / mode flags
    uint32_t cmd_size[SUPPORTED_FINGER_NUM];              // size per finger
    uint8_t  cmd[SUPPORTED_FINGER_NUM][SUPPORTED_SEND_BUF_SIZE]; // payloads
    uint32_t reserve;                 // reserved
    uint32_t crc;                     // CRC32 over all above (except head)
};

// MCU → Host state wrapper
struct McuToLinuxState_t {
    uint8_t  head[2];                 // frame header
    uint8_t  mode[2];                 // [0]=hand model, [1]=timeout flag
    uint8_t  fans[2];                 // fan speeds or flags
    uint32_t state_size[SUPPORTED_FINGER_NUM];             // size per finger
    uint8_t  state[SUPPORTED_FINGER_NUM][SUPPORTED_RECV_BUF_SIZE]; // payloads
    uint16_t pin_v;   // power voltage reading
    uint16_t vin_v;   // input voltage reading
    uint16_t vm_v;    // motor voltage reading
    uint16_t pin_a;   // power current reading
    int16_t  imu_data[6]; // ax,ay,az,gx,gy,gz (raw/100)
    uint32_t error;   // error bits
    uint32_t reserve[4];
    uint32_t crc;     // CRC32 checksum
};
#pragma pack(pop)

// CRC32 table generation
constexpr uint32_t POLY = 0x04C11DB7;
constexpr std::array<uint32_t,256> make_crc32_table() {
    std::array<uint32_t,256> table{};
    for (uint32_t i = 0; i < 256; ++i) {
        uint32_t c = i << 24;
        for (int j = 0; j < 8; ++j)
            c = (c & 0x80000000) ? ((c << 1) ^ POLY) : (c << 1);
        table[i] = c;
    }
    return table;
}
static constexpr auto CRC32_TABLE = make_crc32_table();

// Compute CRC32 over an array of 32-bit words
uint32_t crc32(const uint32_t* data, size_t word_len) {
    uint32_t crc = 0xFFFFFFFF;
    for (size_t i = 0; i < word_len; ++i) {
        uint32_t v = data[i];
        for (int b = 0; b < 4; ++b) {
            uint8_t byte = (v >> (24 - 8*b)) & 0xFF;
            crc = (crc << 8) ^ CRC32_TABLE[((crc >> 24) ^ byte) & 0xFF];
        }
    }
    return crc;
}

// High-level USB controller for Dex3-1 hand
class UsbDex3Controller {
public:
    enum HandSide { LEFT = 0, RIGHT = 1 };

    UsbDex3Controller() : handle_(nullptr) {}
    ~UsbDex3Controller() { close(); }

    // Initialize libusb and open the correct USB device
    bool init(HandSide side) {
        int r = libusb_init(nullptr);
        if (r < 0) {
            std::cerr << "libusb init failed: " << libusb_error_name(r) << "\n";
            return false;
        }
        uint16_t vid = (side == RIGHT ? RIGHT_HAND_VENDOR : LEFT_HAND_VENDOR);
        uint16_t pid = (side == RIGHT ? RIGHT_HAND_PRODUCT: LEFT_HAND_PRODUCT);
        handle_ = libusb_open_device_with_vid_pid(nullptr, vid, pid);
        if (!handle_) {
            std::cerr << "Cannot find/open USB device\n";
            return false;
        }
        libusb_detach_kernel_driver(handle_, 0);
        r = libusb_claim_interface(handle_, 0);
        if (r < 0) {
            std::cerr << "Cannot claim interface: " << libusb_error_name(r) << "\n";
            return false;
        }
        return true;
    }

    // Send a prepared LinuxToMcuCmd_t packet
    bool sendCmd(const LinuxToMcuCmd_t& cmd) {
        int actual = 0;
        auto p = reinterpret_cast<const uint8_t*>(&cmd);
        int r = libusb_bulk_transfer(handle_, OUT_EP,
                                     const_cast<uint8_t*>(p),
                                     sizeof(cmd),
                                     &actual, 0);
        if (r || actual != sizeof(cmd)) {
            std::cerr << "USB send error: " << libusb_error_name(r)
                      << " sent="<<actual<<"\n";
            return false;
        }
        return true;
    }

    // Receive McuToLinuxState_t packet (with timeout ms)
    bool receiveState(McuToLinuxState_t& st, int timeout_ms = 1000) {
        int actual = 0;
        auto p = reinterpret_cast<uint8_t*>(&st);
        int r = libusb_bulk_transfer(handle_, IN_EP,
                                     p, sizeof(st),
                                     &actual, timeout_ms);
        if (r) {
            std::cerr << "USB recv error: " << libusb_error_name(r) << "\n";
            return false;
        }
        if (actual < sizeof(McuToLinuxState_t)) {
            std::cerr << "Incomplete packet, got " << actual << " bytes\n";
            return false;
        }
        // verify CRC
        uint32_t recv_crc = st.crc;
        // compute over all except head and crc: data starts at mode[0],
        // length = (sizeof - 2 - 4) / 4 words
        uint32_t* word_ptr = reinterpret_cast<uint32_t*>(&st.mode[0]);
        size_t words = (sizeof(McuToLinuxState_t) - 2 - 4) / 4;
        uint32_t calc = crc32(word_ptr, words);
        if (calc != recv_crc) {
            std::cerr << "CRC mismatch: recv="<<std::hex<<recv_crc
                      <<" calc="<<calc<<"\n";
            return false;
        }
        return true;
    }

    // Release interface and exit libusb
    void close() {
        if (handle_) {
            libusb_release_interface(handle_, 0);
            libusb_close(handle_);
            handle_ = nullptr;
        }
        libusb_exit(nullptr);
    }

private:
    libusb_device_handle* handle_;
};

// Example usage in main()
int main() {
    UsbDex3Controller ctrl;
    // initialize for left hand
    if (!ctrl.init(UsbDex3Controller::LEFT)) {
        return -1;
    }

    // prepare a simple command packet
    LinuxToMcuCmd_t cmd;
    std::memset(&cmd, 0, sizeof(cmd));
    cmd.head[0] = 0xEB;  // example header bytes
    cmd.head[1] = 0x90;
    // set mode flags to zero
    for (int i = 0; i < 4; ++i) cmd.mode[i] = 0;
    // send no actual motor data: all cmd_size=0
    for (int i = 0; i < SUPPORTED_FINGER_NUM; ++i) {
        cmd.cmd_size[i] = 0;
    }
    // compute CRC over everything except head: words = (sizeof/4)-1
    cmd.crc = crc32(reinterpret_cast<uint32_t*>(&cmd.mode[0]),
                    sizeof(cmd)/4 - 1);

    // send command
    if (!ctrl.sendCmd(cmd)) {
        return -2;
    }

    // receive state back from MCU
    McuToLinuxState_t state;
    if (!ctrl.receiveState(state, 500)) {
        return -3;
    }

    // print a few fields
    std::cout << "Input Voltage reading: " << state.vin_v << "\n";
    std::cout << "Power Voltage reading: " << state.pin_v << "\n";
    std::cout << "First IMU accel X: " << state.imu_data[0] << "\n";

    // cleanup
    ctrl.close();
    return 0;
}
