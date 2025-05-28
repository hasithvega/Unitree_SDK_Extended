# **Unitree G1 单关节控制程序文档**

本程序用于控制 **Unitree G1 机器人** 的单个关节（以右肘关节 `kRightElbowPitch` 为例），采用 **PD 位置控制** 方法，通过 **DDS 通信** 发送控制指令。

---

## **1. 导入模块**

| 文件/模块                  | 功能                                   |
| -------------------------- | -------------------------------------- |
| `main.cpp`               | 主程序，包含初始化、控制逻辑、通信接口 |
| `LowCmd_.hpp`            | Unitree 提供的底层控制指令定义         |
| `LowState_.hpp`          | Unitree 提供的关节状态反馈定义         |
| `channel_publisher.hpp`  | DDS 数据发布接口                       |
| `channel_subscriber.hpp` | DDS 数据订阅接口                       |

---

## **2. 例程分析**

### **2.1 初始化阶段**

1. **检查输入参数**

   * 输入网络接口（如 `eth0`）。

   ```cpp
   if (argc < 2) {
       std::cout << "Usage: " << argv[0] << " networkInterface" << std::endl;
       return -1;
   }
   ```
2. **初始化 DDS 通信**

   * 设置 DDS 域和网络接口。

   ```cpp
   unitree::robot::ChannelFactory::Instance()->Init(0, argv[1]);
   ```
3. **创建 Publisher 和 Subscriber**

   * `Publisher` 用于发送控制指令（`LowCmd_`）。
   * `Subscriber` 用于接收关节状态（`LowState_`）。

   ```cpp
   arm_sdk_publisher.reset(new unitree::robot::ChannelPublisher<unitree_hg::msg::dds_::LowCmd_>(kTopicArmSDK));
   low_state_subscriber.reset(new unitree::robot::ChannelSubscriber<unitree_hg::msg::dds_::LowState_>(kTopicState));
   ```
4. **订阅关节状态回调**

   * 实时更新 `state_msg` 以获取当前关节角度。

   ```cpp
   low_state_subscriber->InitChannel([&](const void *msg) {
       auto s = (const unitree_hg::msg::dds_::LowState_*)msg;
       memcpy(&state_msg, s, sizeof(unitree_hg::msg::dds_::LowState_));
   }, 1);
   ```

---

### **2.2 控制参数设置**

| 参数                  | 说明                                 | 典型值           |
| --------------------- | ------------------------------------ | ---------------- |
| `kp`                | 位置刚度（P 增益）                   | `60.0`         |
| `kd`                | 阻尼系数（D 增益）                   | `1.5`          |
| `tau_ff`            | 前馈力矩（直接输出扭矩）             | `0.0`          |
| `dq`                | 目标速度（设为 `0`表示纯位置控制） | `0.0`          |
| `kControlDt`        | 控制周期（单位：秒）                 | `0.02`（20ms） |
| `kMaxJointVelocity` | 最大关节速度（rad/s）                | `0.5`          |

```cpp
float kp = 60.0f;   // 刚度
float kd = 1.5f;    // 阻尼
float tau_ff = 0.0f; // 前馈力矩
float dq = 0.0f;    // 目标速度
float max_joint_delta = kMaxJointVelocity * kControlDt; // 单步最大角度变化
```

---

### **2.3 关节选择与初始化**

1. **选择目标关节**

   * 通过 `JointIndex` 指定要控制的关节（如 `kRightElbowPitch`）。

   ```cpp
   JointIndex target_joint = kRightElbowPitch;
   ```
2. **读取当前关节位置**

   * 从 `state_msg` 获取当前角度。

   ```cpp
   float current_pos = state_msg.motor_state().at(target_joint).q();
   ```
3. **设置目标位置**

   * 例如，让关节运动到 **90度（π/2）**。

   ```cpp
   float target_pos = kPi_2; // 1.5708 rad (90°)
   ```

---

### **2.4 主控制循环**

1. **逐步调整目标位置**

   * 使用 `std::clamp` 限制单步变化，避免剧烈运动。

   ```cpp
   current_desired_pos += std::clamp(
       target_pos - current_desired_pos,
       -max_joint_delta,
       max_joint_delta
   );
   ```
2. **发送控制指令**

   * 设置 `q`（目标位置）、`dq`（速度）、`kp`、`kd`、`tau_ff`。

   ```cpp
   cmd_msg.motor_cmd().at(target_joint).q(current_desired_pos);
   cmd_msg.motor_cmd().at(target_joint).dq(dq);
   cmd_msg.motor_cmd().at(target_joint).kp(kp);
   cmd_msg.motor_cmd().at(target_joint).kd(kd);
   cmd_msg.motor_cmd().at(target_joint).tau(tau_ff);
   ```
3. **发布指令并等待**

   * 通过 DDS 发送指令，并按照 `kControlDt` 周期运行。

   ```cpp
   arm_sdk_publisher->Write(cmd_msg);
   std::this_thread::sleep_for(std::chrono::milliseconds(20));
   ```
4. **检查是否到达目标**

   * 当误差 `< 0.01 rad` 时退出循环。

   ```cpp
   while (std::abs(current_desired_pos - target_pos) > 0.01f) {
       // 控制逻辑...
   }
   ```

---

## **3. 参数调整建议**

| 问题                       | 可能原因                        | 解决方案                           |
| -------------------------- | ------------------------------- | ---------------------------------- |
| **关节抖动**         | `kp`太大或 `kd`太小         | 降低 `kp`或增加 `kd`           |
| **运动太慢**         | `max_joint_delta`限制过严     | 提高 `kMaxJointVelocity`         |
| **关节无法到达目标** | `tau_ff`不足或摩擦力大        | 增加 `tau_ff`（如 `2.0`）      |
| **控制不稳定**       | 通信延迟或 `kControlDt`不合适 | 检查 DDS 带宽或调整 `kControlDt` |

---

## **4. 控制自定义关节示例**

### **1. 定义目标电机**

```cpp
// 在程序开头定义要控制的电机（示例：右肘关节）
enum JointIndex {
    kRightElbowPitch = 25, // 目标关节ID（根据Unitree文档）
    kNotUsedJoint = 29     // 用于权重控制的虚拟关节
};
```

### **2. 初始化电机控制参数**

```cpp
// 控制参数设置
constexpr float kControlDt = 0.02f;      // 20ms控制周期
constexpr float kMaxJointVelocity = 0.5f; // 最大关节速度(rad/s)

// PD控制参数
float kp = 60.0f;    // 位置刚度
float kd = 1.5f;     // 阻尼系数
float tau_ff = 0.0f; // 前馈力矩（纯位置控制设为0）
float dq = 0.0f;     // 目标速度（纯位置控制设为0）

// 计算单步最大角度变化
float max_step = kMaxJointVelocity * kControlDt;
```

### **3. 获取当前电机状态**

```cpp
// 从DDS消息中读取当前关节位置
float current_pos = state_msg.motor_state().at(kRightElbowPitch).q();
std::cout << "Current position: " << current_pos << " rad" << std::endl;
```

### **4. 设置目标位置**

```cpp
// 设置目标位置（示例：90度）
float target_pos = 1.5708f; // π/2 ≈ 1.5708 rad (90度)
```

### **5. 主控制循环**

```cpp
float desired_pos = current_pos;
while (std::abs(desired_pos - target_pos) > 0.01f) {
    // 计算下一步位置（带速度限制）
    desired_pos += std::clamp(
        target_pos - desired_pos,
        -max_step,
        max_step
    );

    // 构造控制指令
    cmd_msg.motor_cmd().at(kRightElbowPitch).q(desired_pos); // 目标位置
    cmd_msg.motor_cmd().at(kRightElbowPitch).dq(dq);         // 目标速度
    cmd_msg.motor_cmd().at(kRightElbowPitch).kp(kp);         // P增益
    cmd_msg.motor_cmd().at(kRightElbowPitch).kd(kd);         // D增益
    cmd_msg.motor_cmd().at(kRightElbowPitch).tau(tau_ff);    // 前馈力矩

    // 发送指令
    arm_sdk_publisher->Write(cmd_msg);

    // 打印状态
    std::cout << "Moving to: " << desired_pos 
              << " rad (Target: " << target_pos << " rad)" << std::endl;

    // 等待控制周期
    std::this_thread::sleep_for(std::chrono::milliseconds(20));
}
```

### **6. 完整控制程序**

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
    // 初始化DDS通信
    unitree::robot::ChannelFactory::Instance()->Init(0, argv[1]);

    unitree::robot::ChannelPublisherPtr<unitree_hg::msg::dds_::LowCmd_>
          arm_sdk_publisher;
    unitree_hg::msg::dds_::LowCmd_ msg;
    // 创建Publisher/Subscriber
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

    // --- 控制参数设置 ---
    float kp = 60.0f, kd = 1.5f, tau_ff = 0.0f, dq = 0.0f;
    float max_step = 0.5f * 0.02f; // 速度限制
  
    // --- 获取当前状态 ---
    float current_pos = state_msg.motor_state().at(kRightElbowPitch).q();
    float target_pos = 1.5708f; // 90度
  
    // --- 主控制循环 ---
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

### **备注**

1. **更换目标电机**

   修改 `JointIndex`枚举值（如 `kLeftShoulderRoll = 16`）
2. **调整运动参数**

   * 提高 `kp`：增强刚度，但可能导致抖动
   * 提高 `kd`：增强阻尼，抑制振动
   * 调整 `max_step`：控制运动速度
3. **安全停止**

   在异常情况下发送零指令：

   ```
   cmd_msg.motor_cmd().at(kRightElbowPitch).q(0);
   cmd_msg.motor_cmd().at(kRightElbowPitch).tau(0);
   arm_sdk_publisher->Write(cmd_msg);
   ```
