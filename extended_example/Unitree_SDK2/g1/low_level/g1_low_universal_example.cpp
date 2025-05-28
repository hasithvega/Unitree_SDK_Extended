#include <cmath>
#include <memory>
#include <mutex>
#include <shared_mutex>
#include <array>
#include <iostream>
#include <unordered_map>

// DDS communication
#include <unitree/robot/channel/channel_publisher.hpp>
#include <unitree/robot/channel/channel_subscriber.hpp>

// IDL messages
#include <unitree/idl/hg/IMUState_.hpp>
#include <unitree/idl/hg/LowCmd_.hpp>
#include <unitree/idl/hg/LowState_.hpp>
#include <unitree/robot/b2/motion_switcher/motion_switcher_client.hpp>

// Constant definitions
const std::string HG_CMD_TOPIC = "rt/lowcmd";
const std::string HG_IMU_TORSO = "rt/secondary_imu";
const std::string HG_STATE_TOPIC = "rt/lowstate";

// Namespace
using namespace unitree::common;
using namespace unitree::robot;
using namespace unitree_hg::msg::dds_;

// ================== Degree of Freedom Mode Definitions ==================
enum class DofMode : uint8_t {
    MODE_23DOF = 1,   // 23-DOF mode
    MODE_29DOF = 2,   // 29-DOF mode
    MODE_10DOF = 9,   // 10-DOF dual-arm mode
    MODE_14DOF = 14   // 14-DOF mode
};

// ================== Joint Index Definitions ==================
struct JointConfig {
    int num_motors;
    std::unordered_map<std::string, int> joint_map;
    std::vector<int> active_joints;
};

// 23-DOF joint configuration
const JointConfig CONFIG_23DOF = {
    23,
    {
        {"L_LEG_HIP_PITCH", 0}, {"L_LEG_HIP_ROLL", 1}, {"L_LEG_HIP_YAW", 2},
        {"L_LEG_KNEE", 3}, {"L_LEG_ANKLE_PITCH", 4}, {"L_LEG_ANKLE_ROLL", 5},
        {"R_LEG_HIP_PITCH", 6}, {"R_LEG_HIP_ROLL", 7}, {"R_LEG_HIP_YAW", 8},
        {"R_LEG_KNEE", 9}, {"R_LEG_ANKLE_PITCH", 10}, {"R_LEG_ANKLE_ROLL", 11},
        {"WAIST_YAW", 12},
        {"L_SHOULDER_PITCH", 15}, {"L_SHOULDER_ROLL", 16}, {"L_SHOULDER_YAW", 17},
        {"L_ELBOW", 18}, {"L_WRIST_ROLL", 19},
        {"R_SHOULDER_PITCH", 22}, {"R_SHOULDER_ROLL", 23}, {"R_SHOULDER_YAW", 24},
        {"R_ELBOW", 25}, {"R_WRIST_ROLL", 26}
    },
    {0,1,2,3,4,5,6,7,8,9,10,11,12,15,16,17,18,19,22,23,24,25,26}
};

// 29-DOF joint configuration
const JointConfig CONFIG_29DOF = {
    29,
    {
        {"L_LEG_HIP_PITCH", 0}, {"L_LEG_HIP_ROLL", 1}, {"L_LEG_HIP_YAW", 2},
        {"L_LEG_KNEE", 3}, {"L_LEG_ANKLE_PITCH", 4}, {"L_LEG_ANKLE_ROLL", 5},
        {"R_LEG_HIP_PITCH", 6}, {"R_LEG_HIP_ROLL", 7}, {"R_LEG_HIP_YAW", 8},
        {"R_LEG_KNEE", 9}, {"R_LEG_ANKLE_PITCH", 10}, {"R_LEG_ANKLE_ROLL", 11},
        {"WAIST_YAW", 12}, {"WAIST_ROLL", 13}, {"WAIST_PITCH", 14},
        {"L_SHOULDER_PITCH", 15}, {"L_SHOULDER_ROLL", 16}, {"L_SHOULDER_YAW", 17},
        {"L_ELBOW", 18}, {"L_WRIST_ROLL", 19}, {"L_WRIST_PITCH", 20}, {"L_WRIST_YAW", 21},
        {"R_SHOULDER_PITCH", 22}, {"R_SHOULDER_ROLL", 23}, {"R_SHOULDER_YAW", 24},
        {"R_ELBOW", 25}, {"R_WRIST_ROLL", 26}, {"R_WRIST_PITCH", 27}, {"R_WRIST_YAW", 28}
    },
    {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28}
};

// 10-DOF dual-arm configuration
const JointConfig CONFIG_10DOF = {
    10,
    {
        {"L_SHOULDER_PITCH", 15}, {"L_SHOULDER_ROLL", 16}, {"L_SHOULDER_YAW", 17},
        {"L_ELBOW", 18}, {"L_WRIST_ROLL", 19},
        {"R_SHOULDER_PITCH", 22}, {"R_SHOULDER_ROLL", 23}, {"R_SHOULDER_YAW", 24},
        {"R_ELBOW", 25}, {"R_WRIST_ROLL", 26},
        {"NOT_USED", 29}  // Special joint for control authority switching
    },
    {15,16,17,18,19,22,23,24,25,26,29}
};

// 14-DOF configuration
const JointConfig CONFIG_14DOF = {
    14,
    {
        {"L_LEG_HIP_PITCH", 0}, {"L_LEG_HIP_ROLL", 1}, {"L_LEG_HIP_YAW", 2},
        {"L_LEG_KNEE", 3}, {"L_LEG_ANKLE", 4}, {"L_LEG_ANKLE_ROLL", 5},
        {"R_LEG_HIP_PITCH", 6}, {"R_LEG_HIP_ROLL", 7}, {"R_LEG_HIP_YAW", 8},
        {"R_LEG_KNEE", 9}, {"R_LEG_ANKLE", 10}, {"R_LEG_ANKLE_ROLL", 11},
        {"WAIST_YAW", 12}, {"WAIST_ROLL", 13}, {"WAIST_PITCH", 14},
        {"NOT_USED", 29}  // Special joint for control authority switching
    },
    {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,29}
};

// ================== Control Mode Definitions ==================
enum class ControlMode {
    POSITION,   // Position control
    VELOCITY,   // Velocity control
    TORQUE      // Torque control
};

// ================== Core Control Class ==================
class G1UniversalController {
public:
    G1UniversalController(const std::string& networkInterface) 
        : network_interface_(networkInterface) {
        Initialize();
    }

    // Initialize robot
    void Initialize() {
        ChannelFactory::Instance()->Init(0, network_interface_);
        
        // Initialize motion switcher client
        msc_ = std::make_shared<unitree::robot::b2::MotionSwitcherClient>();
        msc_->SetTimeout(5.0f);
        msc_->Init();
        
        // Create DDS communication
        lowcmd_publisher_.reset(new ChannelPublisher<LowCmd_>(HG_CMD_TOPIC));
        lowcmd_publisher_->InitChannel();
        
        lowstate_subscriber_.reset(new ChannelSubscriber<LowState_>(HG_STATE_TOPIC));
        lowstate_subscriber_->InitChannel(
            [this](const void* msg) { LowStateHandler(msg); }, 1);
    }

    // Set degree-of-freedom mode
    bool SetDofMode(DofMode mode) {
        current_mode_ = mode;
        
        // Release current control authority
        std::string form, name;
        msc_->CheckMode(form, name);
        if (!name.empty()) {
            if (!msc_->ReleaseMode()) {
                std::cerr << "Failed to release current mode!" << std::endl;
                return false;
            }
        }
        
        // Set new mode
        switch (mode) {
            case DofMode::MODE_23DOF:
                current_config_ = CONFIG_23DOF;
                cmd_.mode_machine() = 1;
                break;
            case DofMode::MODE_29DOF:
                current_config_ = CONFIG_29DOF;
                cmd_.mode_machine() = 2;
                break;
            case DofMode::MODE_10DOF:
                current_config_ = CONFIG_10DOF;
                cmd_.mode_machine() = 9;
                // 10-DOF mode requires special initialization
                Initialize10DofMode();
                break;
            case DofMode::MODE_14DOF:
                current_config_ = CONFIG_14DOF;
                cmd_.mode_machine() = 14;
                break;
            default:
                std::cerr << "Unknown DOF mode!" << std::endl;
                return false;
        }
        
        // Reset all motor commands
        ResetMotorCommands();
        return true;
    }

    // Set joint control command
    void SetJointCommand(const std::string& joint_name, ControlMode mode, 
                        float value, float kp = -1.0f, float kd = -1.0f) {
        std::lock_guard<std::mutex> lock(mutex_);
        // The default values of kp and kd are defined as -1.0f, indicating not to set, 
        // which does not mean the default value is -1.0f. See the logic at the bottom of the function.
        auto it = current_config_.joint_map.find(joint_name);
        if (it == current_config_.joint_map.end()) {
            std::cerr << "Joint " << joint_name << " not found in current mode!" << std::endl;
            return;
        }
        
        int joint_id = it->second;
        switch (mode) {
            case ControlMode::POSITION:
                motor_commands_.q_target[joint_id] = value;
                break;
            case ControlMode::VELOCITY:
                motor_commands_.dq_target[joint_id] = value;
                break;
            case ControlMode::TORQUE:
                motor_commands_.tau_ff[joint_id] = value;
                break;
        }
        
        if (kp > 0) motor_commands_.kp[joint_id] = kp;
        if (kd > 0) motor_commands_.kd[joint_id] = kd;
    }

    // Get joint state
    std::pair<float, float> GetJointState(const std::string& joint_name) {
        auto it = current_config_.joint_map.find(joint_name);
        if (it == current_config_.joint_map.end()) {
            std::cerr << "Joint " << joint_name << " not found in current mode!" << std::endl;
            return {0.0f, 0.0f};
        }
        
        auto state = motor_state_buffer_.GetData();
        if (state) {
            int joint_id = it->second;
            return {state->q[joint_id], state->dq[joint_id]};
        }
        return {0.0f, 0.0f};
    }

    // Set PR/AB mode
    void SetJointMode(bool is_ab_mode) {
        cmd_.mode_pr() = is_ab_mode ? 1 : 0;
    }

    // Send control command
    void SendCommand() {
        std::lock_guard<std::mutex> lock(mutex_);
        
        // Set commands for all active joints
        for (int joint_id : current_config_.active_joints) {
            cmd_.motor_cmd()[joint_id].mode() = 1; // Enable motor
            cmd_.motor_cmd()[joint_id].q() = motor_commands_.q_target[joint_id];
            cmd_.motor_cmd()[joint_id].dq() = motor_commands_.dq_target[joint_id];
            cmd_.motor_cmd()[joint_id].tau() = motor_commands_.tau_ff[joint_id];
            cmd_.motor_cmd()[joint_id].kp() = motor_commands_.kp[joint_id];
            cmd_.motor_cmd()[joint_id].kd() = motor_commands_.kd[joint_id];
        }
        
        lowcmd_publisher_->Write(cmd_);
    }

private:
    // Motor command structure
    struct MotorCommands {
        std::array<float, 29> q_target;   // Target position
        std::array<float, 29> dq_target;  // Target velocity
        std::array<float, 29> tau_ff;     // Feedforward torque
        std::array<float, 29> kp;         // Stiffness coefficient
        std::array<float, 29> kd;         // Damping coefficient
    };

    // Motor state structure
    struct MotorState {
        std::array<float, 29> q;          // Current position
        std::array<float, 29> dq;         // Current velocity
    };

    // Data buffer (thread-safe)
    template <typename T>
    class DataBuffer {
    public:
        void SetData(const T& newData) {
            std::unique_lock<std::shared_mutex> lock(mutex_);
            data_ = std::make_shared<T>(newData);
        }

        std::shared_ptr<const T> GetData() {
            std::shared_lock<std::shared_mutex> lock(mutex_);
            return data_ ? data_ : nullptr;
        }

    private:
        std::shared_ptr<T> data_;
        std::shared_mutex mutex_;
    };

    // Special initialization for 10-DOF mode
    void Initialize10DofMode() {
        // Set NOT_USED joint to 1.0, indicating full control authority
        motor_commands_.q_target[29] = 1.0f;
        motor_commands_.kp[29] = 0.0f;
        motor_commands_.kd[29] = 0.0f;
    }

    // Reset all motor commands
    void ResetMotorCommands() {
        std::lock_guard<std::mutex> lock(mutex_);
        motor_commands_ = MotorCommands();
        
        // Set default PID parameters
        for (int joint_id : current_config_.active_joints) {
            motor_commands_.kp[joint_id] = 60.0f;
            motor_commands_.kd[joint_id] = 1.5f;
        }
    }

    // Low-level state callback
    void LowStateHandler(const void* message) {
        LowState_ low_state = *(const LowState_*)message;
        MotorState state;
        
        for (int i = 0; i < 29; ++i) {
            state.q[i] = low_state.motor_state()[i].q();
            state.dq[i] = low_state.motor_state()[i].dq();
        }
        
        motor_state_buffer_.SetData(state);
    }

    // Member variables
    std::string network_interface_;
    DofMode current_mode_ = DofMode::MODE_29DOF;
    JointConfig current_config_ = CONFIG_29DOF;
    
    // DDS communication
    ChannelPublisherPtr<LowCmd_> lowcmd_publisher_;
    ChannelSubscriberPtr<LowState_> lowstate_subscriber_;
    std::shared_ptr<unitree::robot::b2::MotionSwitcherClient> msc_;
    
    // Data storage
    DataBuffer<MotorState> motor_state_buffer_;
    MotorCommands motor_commands_;
    LowCmd_ cmd_;
    std::mutex mutex_;
};

// ================== Usage Example ==================
int main(int argc, char** argv) {
    if (argc < 2) {
        std::cout << "Usage: " << argv[0] << " network_interface" << std::endl;
        return -1;
    }

    // Create controller
    G1UniversalController controller(argv[1]);

    // Example 1: 29-DOF mode control
    controller.SetDofMode(DofMode::MODE_29DOF);
    controller.SetJointCommand("R_LEG_HIP_PITCH", ControlMode::POSITION, 0.5f);
    controller.SetJointCommand("L_LEG_KNEE", ControlMode::POSITION, -0.3f);
    controller.SendCommand();

    // Example 2: 10-DOF dual-arm mode control
    controller.SetDofMode(DofMode::MODE_10DOF);
    controller.SetJointCommand("L_SHOULDER_PITCH", ControlMode::POSITION, 1.0f);
    controller.SetJointCommand("R_ELBOW", ControlMode::TORQUE, 0.8f);
    controller.SendCommand();

    // State query
    auto [pos, vel] = controller.GetJointState("L_SHOULDER_PITCH");
    std::cout << "Left Shoulder Position: " << pos << ", Velocity: " << vel << std::endl;

    return 0;
}