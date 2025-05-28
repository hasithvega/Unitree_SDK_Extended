# **Unitree G1 Single-Joint Control Program Documentation**

This program controls a **single joint** (e.g., the right elbow joint `kRightElbowPitch`) of the **Unitree H1 robot** using **PD position control** and sends commands via **DDS communication**.

---

## **1. Imported Modules**

| File/Module                | Functionality                                                         |
| -------------------------- | --------------------------------------------------------------------- |
| `main.cpp`               | Main program (initialization, control logic, communication interface) |
| `LowCmd_.hpp`            | Unitree-provided low-level control command definitions                |
| `LowState_.hpp`          | Unitree-provided joint state feedback definitions                     |
| `channel_publisher.hpp`  | DDS data publishing interface                                         |
| `channel_subscriber.hpp` | DDS data subscription interface                                       |

---

## **2. Code Walkthrough**

### **2.1 Initialization Phase**

1. **Check Input Parameters**

   * Input the network interface (e.g., `eth0`).

   ```cpp
   if (argc < 2) {  
       std::cout << "Usage: " << argv[0] << " networkInterface" << std::endl;  
       return -1;  
   }  
   ```
2. **Initialize DDS Communication**

   * Set the DDS domain and network interface.

   ```cpp
   unitree::robot::ChannelFactory::Instance()->Init(0, argv[1]);  
   ```
3. **Create Publisher and Subscriber**

   * `Publisher` sends control commands (`LowCmd_`).
   * `Subscriber` receives joint state feedback (`LowState_`).

   ```cpp
   arm_sdk_publisher.reset(new unitree::robot::ChannelPublisher<unitree_hg::msg::dds_::LowCmd_>(kTopicArmSDK));  
   low_state_subscriber.reset(new unitree::robot::ChannelSubscriber<unitree_hg::msg::dds_::LowState_>(kTopicState));  
   ```
4. **Subscribe to Joint State Callback**

   * Continuously update `state_msg` to get the current joint angle.

   ```cpp
   low_state_subscriber->InitChannel([&](const void *msg) {  
       auto s = (const unitree_hg::msg::dds_::LowState_*)msg;  
       memcpy(&state_msg, s, sizeof(unitree_hg::msg::dds_::LowState_));  
   }, 1);  
   ```

---

### **2.2 Control Parameter Settings**

| Parameter             | Description                                      | Typical Value  |
| --------------------- | ------------------------------------------------ | -------------- |
| `kp`                | Position stiffness (P gain)                      | `60.0`       |
| `kd`                | Damping coefficient (D gain)                     | `1.5`        |
| `tau_ff`            | Feedforward torque (direct torque output)        | `0.0`        |
| `dq`                | Target velocity (`0`for pure position control) | `0.0`        |
| `kControlDt`        | Control cycle (seconds)                          | `0.02`(20ms) |
| `kMaxJointVelocity` | Maximum joint velocity (rad/s)                   | `0.5`        |

```cpp
float kp = 60.0f;   // Stiffness  
float kd = 1.5f;    // Damping  
float tau_ff = 0.0f; // Feedforward torque  
float dq = 0.0f;    // Target velocity  
float max_joint_delta = kMaxJointVelocity * kControlDt; // Maximum angle change per step  
```

---

### **2.3 Joint Selection and Initialization**

1. **Select Target Joint**

   * Specify the joint to control (e.g., `kRightElbowPitch`) via `JointIndex`.

   ```cpp
   JointIndex target_joint = kRightElbowPitch;  
   ```
2. **Read Current Joint Position**

   * Get the current angle from `state_msg`.

   ```cpp
   float current_pos = state_msg.motor_state().at(target_joint).q();  
   ```
3. **Set Target Position**

   * Example: Move the joint to **90 degrees (π/2)**.

   ```cpp
   float target_pos = kPi_2; // 1.5708 rad (90°)  
   ```

---

### **2.4 Main Control Loop**

1. **Gradually Adjust Target Position**

   * Use `std::clamp` to limit step changes and avoid abrupt movements.

   ```cpp
   current_desired_pos += std::clamp(  
       target_pos - current_desired_pos,  
       -max_joint_delta,  
       max_joint_delta  
   );  
   ```
2. **Send Control Command**

   * Set `q` (target position), `dq` (velocity), `kp`, `kd`, and `tau_ff`.

   ```cpp
   cmd_msg.motor_cmd().at(target_joint).q(current_desired_pos);  
   cmd_msg.motor_cmd().at(target_joint).dq(dq);  
   cmd_msg.motor_cmd().at(target_joint).kp(kp);  
   cmd_msg.motor_cmd().at(target_joint).kd(kd);  
   cmd_msg.motor_cmd().at(target_joint).tau(tau_ff);  
   ```
3. **Publish Command and Wait**

   * Send the command via DDS and run at the `kControlDt` cycle.

   ```
   arm_sdk_publisher->Write(cmd_msg);  
   std::this_thread::sleep_for(std::chrono::milliseconds(20));  
   ```
4. **Check if Target is Reached**

   * Exit the loop when the error is `< 0.01 rad`.

   ```cpp
   while (std::abs(current_desired_pos - target_pos) > 0.01f) {  
       // Control logic...  
   }  
   ```

---

## **3. Parameter Tuning Recommendations**

| Issue                                 | Possible Cause                                 | Solution                                     |
| ------------------------------------- | ---------------------------------------------- | -------------------------------------------- |
| **Joint Jitter**                | `kp`too high or `kd`too low                | Reduce `kp`or increase `kd`              |
| **Motion Too Slow**             | `max_joint_delta`too restrictive             | Increase `kMaxJointVelocity`               |
| **Joint Fails to Reach Target** | Insufficient `tau_ff`or high friction        | Increase `tau_ff`(e.g.,`2.0`)            |
| **Control Instability**         | Communication delay or improper `kControlDt` | Check DDS bandwidth or adjust `kControlDt` |

---

## **4. Custom Joint Control Example**

### **1. Define Target Motor**

```cpp
// Define the motor to control (e.g., right elbow joint)  
enum JointIndex {  
    kRightElbowPitch = 25, // Target joint ID (per Unitree documentation)  
    kNotUsedJoint = 29     // Virtual joint for weight control  
};  
```

### **2. Initialize Motor Control Parameters**

```cpp
// Control parameter settings  
constexpr float kControlDt = 0.02f;      // 20ms control cycle  
constexpr float kMaxJointVelocity = 0.5f; // Maximum joint velocity (rad/s)  

// PD control parameters  
float kp = 60.0f;    // Position stiffness  
float kd = 1.5f;     // Damping coefficient  
float tau_ff = 0.0f; // Feedforward torque (0 for pure position control)  
float dq = 0.0f;     // Target velocity (0 for pure position control)  

// Calculate maximum angle change per step  
float max_step = kMaxJointVelocity * kControlDt;  
```

### **3. Read Current Motor State**

```cpp
// Read current joint position from DDS message  
float current_pos = state_msg.motor_state().at(kRightElbowPitch).q();  
std::cout << "Current position: " << current_pos << " rad" << std::endl;  
```

### **4. Set Target Position**

```cpp
// Set target position (e.g., 90 degrees)  
float target_pos = 1.5708f; // π/2 ≈ 1.5708 rad (90 degrees)  
```

### **5. Main Control Loop**

```cpp
float desired_pos = current_pos;  
while (std::abs(desired_pos - target_pos) > 0.01f) {  
    // Calculate next position (with velocity limit)  
    desired_pos += std::clamp(  
        target_pos - desired_pos,  
        -max_step,  
        max_step  
    );  

    // Construct control command  
    cmd_msg.motor_cmd().at(kRightElbowPitch).q(desired_pos); // Target position  
    cmd_msg.motor_cmd().at(kRightElbowPitch).dq(dq);         // Target velocity  
    cmd_msg.motor_cmd().at(kRightElbowPitch).kp(kp);         // P gain  
    cmd_msg.motor_cmd().at(kRightElbowPitch).kd(kd);         // D gain  
    cmd_msg.motor_cmd().at(kRightElbowPitch).tau(tau_ff);    // Feedforward torque  

    // Send command  
    arm_sdk_publisher->Write(cmd_msg);  

    // Print status  
    std::cout << "Moving to: " << desired_pos   
              << " rad (Target: " << target_pos << " rad)" << std::endl;  

    // Wait for control cycle  
    std::this_thread::sleep_for(std::chrono::milliseconds(20));  
}  
```

### **6. Complete Control Program**

```cpp
#include <iostream>  
#include <chrono>  
#include <thread>  
#include <cmath>  

#include <unitree/idl/hg/LowCmd_.hpp>  
#include <unitree/idl/hg/LowState_.hpp>  
#include <unitree/robot/channel/channel_publisher.hpp>  
#include <unitree/robot/channel/channel_subscriber.hpp>  

enum JointIndex { kRightElbowPitch = 25, kNotUsedJoint = 29 };  

int main(int argc, char** argv) {  
    if (argc < 2) {  
    std::cout << "Usage: " << argv[0] << " networkInterface" << std::endl;  
    exit(-1);  
    }  
    // Initialize DDS communication  
    unitree::robot::ChannelFactory::Instance()->Init(0, argv[1]);  

    unitree::robot::ChannelPublisherPtr<unitree_hg::msg::dds_::LowCmd_>  
          arm_sdk_publisher;  
    unitree_hg::msg::dds_::LowCmd_ msg;  
    // Create Publisher/Subscriber  
    arm_sdk_publisher.reset(  
          new unitree::robot::ChannelPublisher<unitree_hg::msg::dds_::LowCmd_>(  
             kTopicArmSDK));  
    arm_sdk_publisher->InitChannel();  

    unitree::robot::ChannelSubscriberPtr<unitree_hg::msg::dds_::LowState_>  
          low_state_subscriber;  

    // create subscriber  
    unitree_hg::msg::dds_::LowState_ state_msg;  
    low_state_subscriber.reset(  
          new unitree::robot::ChannelSubscriber<unitree_hg::msg::dds_::LowState_>(  
             kTopicState));  
    low_state_subscriber->InitChannel([&](const void *msg) {  
          auto s = ( const unitree_hg::msg::dds_::LowState_* )msg;  
          memcpy( &state_msg, s, sizeof( unitree_hg::msg::dds_::LowState_ ) );  
    }, 1);  

    // --- Control parameter setup ---  
    float kp = 60.0f, kd = 1.5f, tau_ff = 0.0f, dq = 0.0f;  
    float max_step = 0.5f * 0.02f; // Velocity limit  
  
    // --- Read current state ---  
    float current_pos = state_msg.motor_state().at(kRightElbowPitch).q();  
    float target_pos = 1.5708f; // 90 degrees  
  
    // --- Main control loop ---  
    float desired_pos = current_pos;  
    while (std::abs(desired_pos - target_pos) > 0.01f) {  
        desired_pos += std::clamp(target_pos - desired_pos, -max_step, max_step);  
  
        cmd_msg.motor_cmd().at(kRightElbowPitch).q(desired_pos);  
        cmd_msg.motor_cmd().at(kRightElbowPitch).dq(dq);  
        cmd_msg.motor_cmd().at(kRightElbowPitch).kp(kp);  
        cmd_msg.motor_cmd().at(kRightElbowPitch).kd(kd);  
        cmd_msg.motor_cmd().at(kRightElbowPitch).tau(tau_ff);  
  
        arm_sdk_publisher->Write(cmd_msg);  
        std::this_thread::sleep_for(std::chrono::milliseconds(20));  
    }  

    std::cout << "Control finished!" << std::endl;  
    return 0;  
}  
```

### **Notes**

1. **Change Target Motor**

   Modify the `JointIndex` enum (e.g., `kLeftShoulderRoll = 16`).
2. **Adjust Motion Parameters**

   * Increase `kp`: Higher stiffness, but may cause jitter.
   * Increase `kd`: Higher damping, suppresses vibration.
   * Adjust `max_step`: Controls motion speed.
3. **Emergency Stop**

   Send zero commands in case of anomalies:

   ```
   cmd_msg.motor_cmd().at(kRightElbowPitch).q(0);  
   cmd_msg.motor_cmd().at(kRightElbowPitch).tau(0);  
   arm_sdk_publisher->Write(cmd_msg);  
   ```

EOF
