# **Unitree H1 单关节控制程序文档**

本程序用于控制 **Unitree H1 机器人** 的单个关节（以右肘关节 `kRightElbowPitch` 为例），采用 **PD 位置控制** 方法，通过 **DDS 通信** 发送控制指令。

---

## **1. 程序结构**

| 文件/模块                  | 功能                                   |
| -------------------------- | -------------------------------------- |
| `main.cpp`               | 主程序，包含初始化、控制逻辑、通信接口 |
| `LowCmd_.hpp`            | Unitree 提供的底层控制指令定义         |
| `LowState_.hpp`          | Unitree 提供的关节状态反馈定义         |
| `channel_publisher.hpp`  | DDS 数据发布接口                       |
| `channel_subscriber.hpp` | DDS 数据订阅接口                       |

---

## **2. 程序流程**

### **2.1 初始化阶段**

1. **检查输入参数**

   * 确保用户提供网络接口（如 `eth0`）。

   ```
   if (argc < 2) {
       std::cout << "Usage: " << argv[0] << " networkInterface" << std::endl;
       return -1;
   }
   ```
2. **初始化 DDS 通信**

   * 设置 DDS 域和网络接口。

   ```
   unitree::robot::ChannelFactory::Instance()->Init(0, argv[1]);
   ```
3. **创建 Publisher 和 Subscriber**

   * `Publisher` 用于发送控制指令（`LowCmd_`）。
   * `Subscriber` 用于接收关节状态（`LowState_`）。

   ```
   arm_sdk_publisher.reset(new unitree::robot::ChannelPublisher<unitree_hg::msg::dds_::LowCmd_>(kTopicArmSDK));
   low_state_subscriber.reset(new unitree::robot::ChannelSubscriber<unitree_hg::msg::dds_::LowState_>(kTopicState));
   ```
4. **订阅关节状态回调**

   * 实时更新 `state_msg` 以获取当前关节角度。

   ```
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

```
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

   ```
   JointIndex target_joint = kRightElbowPitch;
   ```
2. **读取当前关节位置**

   * 从 `state_msg` 获取当前角度。

   ```
   float current_pos = state_msg.motor_state().at(target_joint).q();
   ```
3. **设置目标位置**

   * 例如，让关节运动到 **90度（π/2）**。

   ```
   float target_pos = kPi_2; // 1.5708 rad (90°)
   ```

---

### **2.4 主控制循环**

1. **逐步调整目标位置**

   * 使用 `std::clamp` 限制单步变化，避免剧烈运动。

   ```
   current_desired_pos += std::clamp(
       target_pos - current_desired_pos,
       -max_joint_delta,
       max_joint_delta
   );
   ```
2. **发送控制指令**

   * 设置 `q`（目标位置）、`dq`（速度）、`kp`、`kd`、`tau_ff`。

   ```
   cmd_msg.motor_cmd().at(target_joint).q(current_desired_pos);
   cmd_msg.motor_cmd().at(target_joint).dq(dq);
   cmd_msg.motor_cmd().at(target_joint).kp(kp);
   cmd_msg.motor_cmd().at(target_joint).kd(kd);
   cmd_msg.motor_cmd().at(target_joint).tau(tau_ff);
   ```
3. **发布指令并等待**

   * 通过 DDS 发送指令，并按照 `kControlDt` 周期运行。

   ```
   arm_sdk_publisher->Write(cmd_msg);
   std::this_thread::sleep_for(std::chrono::milliseconds(20));
   ```
4. **检查是否到达目标**

   * 当误差 `< 0.01 rad` 时退出循环。

   ```
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

## **4. 扩展功能**

1. **多关节控制**

   * 在循环中同时设置多个关节的 `motor_cmd`。

   ```
   cmd_msg.motor_cmd().at(kRightElbowPitch).q(pos1);
   cmd_msg.motor_cmd().at(kLeftShoulderRoll).q(pos2);
   ```
2. **外部输入控制**

   * 通过 **ROS 话题** 或 **键盘输入** 动态调整 `target_pos`。

   ```
   std::cin >> target_pos; // 从终端输入新目标
   ```
3. **力控模式**

   * 改用 `tau_ff` 直接控制扭矩（需关闭 `kp` 和 `kd`）。

   ```
   cmd_msg.motor_cmd().at(joint).tau(desired_torque);
   ```

---

## **5. 总结**

* 本程序实现了 **Unitree H1 单关节的 PD 位置控制**。
* 关键参数：`kp`、`kd`、`tau_ff`、`max_joint_delta`。
* 可通过调整参数优化运动性能。
* 可扩展为 **多关节控制** 或 **力控模式**。

**运行方式：**

```
./single_joint_ctrl eth0
```

（`eth0` 是机器人的网络接口，需根据实际情况修改。）
