#include <array>
#include <chrono>
#include <iostream>
#include <thread>
#include <eigen3/Eigen/Dense>
#include <cmath>
#include <termios.h>
#include <unistd.h>
#include <fcntl.h>

#include <unitree/idl/hg/LowCmd_.hpp>
#include <unitree/idl/hg/LowState_.hpp>
#include <unitree/robot/channel/channel_publisher.hpp>
#include <unitree/robot/channel/channel_subscriber.hpp>

static const std::string kTopicArmSDK = "rt/arm_sdk";
static const std::string kTopicState = "rt/lowstate";
constexpr float kPi = 3.141592654;
constexpr float kPi_2 = 1.57079632;

enum JointIndex {
    // Left leg
    kLeftHipPitch,
    kLeftHipRoll,
    kLeftHipYaw,
    kLeftKnee,
    kLeftAnkle,
    kLeftAnkleRoll,

    // Right leg
    kRightHipPitch,
    kRightHipRoll,
    kRightHipYaw,
    kRightKnee,
    kRightAnkle,
    kRightAnkleRoll,

    kWaistYaw,
    kWaistRoll,
    kWaistPitch,

    // Left arm
    kLeftShoulderPitch,
    kLeftShoulderRoll,
    kLeftShoulderYaw,
    kLeftElbow,
    kLeftWristRoll,
    kLeftWristPitch,
    kLeftWristYaw,
    // Right arm
    kRightShoulderPitch,
    kRightShoulderRoll,
    kRightShoulderYaw,
    kRightElbow,
    kRightWristRoll,
    kRightWristPitch,
    kRightWristYaw,

    kNotUsedJoint,
    kNotUsedJoint1,
    kNotUsedJoint2,
    kNotUsedJoint3,
    kNotUsedJoint4,
    kNotUsedJoint5
};

class ArmController {
public:
    ArmController(const std::string& networkInterface) {
        unitree::robot::ChannelFactory::Instance()->Init(0, networkInterface.c_str());

        // Initialize publisher
        arm_sdk_publisher_.reset(
            new unitree::robot::ChannelPublisher<unitree_hg::msg::dds_::LowCmd_>(
                kTopicArmSDK));
        arm_sdk_publisher_->InitChannel();

        // Initialize subscriber
        low_state_subscriber_.reset(
            new unitree::robot::ChannelSubscriber<unitree_hg::msg::dds_::LowState_>(
                kTopicState));
        low_state_subscriber_->InitChannel([this](const void* msg) {
            auto s = (const unitree_hg::msg::dds_::LowState_*)msg;
            memcpy(&state_msg_, s, sizeof(unitree_hg::msg::dds_::LowState_));
        }, 1);

        // Arm joint indices
        arm_joints_ = {
            JointIndex::kLeftShoulderPitch,  JointIndex::kLeftShoulderRoll,
            JointIndex::kLeftShoulderYaw,    JointIndex::kLeftElbow,
            JointIndex::kLeftWristRoll,      JointIndex::kLeftWristPitch,
            JointIndex::kLeftWristYaw,
            JointIndex::kRightShoulderPitch, JointIndex::kRightShoulderRoll,
            JointIndex::kRightShoulderYaw,   JointIndex::kRightElbow,
            JointIndex::kRightWristRoll,     JointIndex::kRightWristPitch,
            JointIndex::kRightWristYaw,
            JointIndex::kWaistYaw,
            JointIndex::kWaistRoll,
            JointIndex::kWaistPitch};

        // Default control parameters
        control_dt_ = 0.02f;
        max_joint_velocity_ = 0.5f;
        sleep_time_ = std::chrono::milliseconds(static_cast<int>(control_dt_ / 0.001f));
        
        // Default PD gains
        kp_ = 60.f;
        kd_ = 1.5f;
        
        // Default target positions (arms down)
        init_pos_ = {0, 0, 0, 0, 0, 0, 0,
                     0, 0, 0, 0, 0, 0, 0,
                     0, 0, 0};
        
        // Default target positions (arms up)
        target_pos_ = {0.f, kPi_2,  0.f, kPi_2, 0.f, 0.f, 0.f,
                       0.f, -kPi_2, 0.f, kPi_2, 0.f, 0.f, 0.f, 
                       0, 0, 0};

        // Initialize arm lengths based on URDF
        left_arm_lengths_ = {
            0.038,    // shoulder_roll to shoulder_yaw
            0.1032,   // shoulder_yaw to elbow
            0.080518, // elbow to wrist_roll
            0.100,    // wrist_roll to wrist_pitch
            0.038,    // wrist_pitch to wrist_yaw
            0.046     // wrist_yaw to hand
        };

        right_arm_lengths_ = left_arm_lengths_; // Symmetrical arms

        // Initialize DH parameters for left arm
        left_arm_dh_ = {
            // alpha, a, d, theta_offset
            {0, 0, 0, 0},                    // shoulder_pitch
            {-kPi_2, 0, 0.038, 0},           // shoulder_roll
            {kPi_2, 0, 0.1032, 0},           // shoulder_yaw
            {0, 0, 0.080518, 0},             // elbow
            {-kPi_2, 0, 0.100, 0},           // wrist_roll
            {kPi_2, 0, 0.038, 0},            // wrist_pitch
            {0, 0, 0.046, 0}                 // wrist_yaw
        };

        // Right arm DH parameters (mirrored)
        right_arm_dh_ = {
            {0, 0, 0, 0},                    // shoulder_pitch
            {kPi_2, 0, 0.038, 0},            // shoulder_roll
            {kPi_2, 0, 0.1032, 0},           // shoulder_yaw
            {0, 0, 0.080518, 0},             // elbow
            {kPi_2, 0, 0.100, 0},            // wrist_roll
            {kPi_2, 0, 0.038, 0},            // wrist_pitch
            {0, 0, 0.046, 0}                 // wrist_yaw
        };

        // Initialize keyboard control
        keyboard_step_size_ = 0.01f; // 1 cm per step
        controlled_arm_ = 'b'; // 'b' for both, 'l' for left, 'r' for right
    }

    // Initialize arms to default position
    bool InitializeArms(float init_time = 2.0f) {
        std::cout << "Initializing arms ..." << std::endl;
        
        // Get current joint positions
        std::array<float, 17> current_jpos;
        for (int i = 0; i < arm_joints_.size(); ++i) {
            current_jpos.at(i) = state_msg_.motor_state().at(arm_joints_.at(i)).q();
        }

        int init_time_steps = static_cast<int>(init_time / control_dt_);

        for (int i = 0; i < init_time_steps; ++i) {
            // Set weight to 1.0 (full control)
            msg_.motor_cmd().at(JointIndex::kNotUsedJoint).q(1.0f);

            float phase = 1.0f * i / init_time_steps;

            // Interpolate between current and target positions
            for (int j = 0; j < init_pos_.size(); ++j) {
                float target = init_pos_.at(j) * phase + current_jpos.at(j) * (1 - phase);
                SetJointCommand(arm_joints_.at(j), target, 0.f, kp_, kd_, 0.f);
            }

            // Send command and sleep
            arm_sdk_publisher_->Write(msg_);
            std::this_thread::sleep_for(sleep_time_);
        }

        std::cout << "Initialization done!" << std::endl;
        return true;
    }

    // Move arms to target position
    bool MoveArmsToPosition(const std::array<float, 17>& target_pos, float duration = 5.0f) {
        std::cout << "Moving arms to target position..." << std::endl;
        
        // Get current desired positions (from message)
        std::array<float, 17> current_jpos_des;
        for (int i = 0; i < arm_joints_.size(); ++i) {
            current_jpos_des.at(i) = msg_.motor_cmd().at(arm_joints_.at(i)).q();
        }

        int num_steps = static_cast<int>(duration / control_dt_);
        float max_joint_delta = max_joint_velocity_ * control_dt_;

        for (int i = 0; i < num_steps; ++i) {
            // Update desired positions with velocity limits
            for (int j = 0; j < target_pos.size(); ++j) {
                current_jpos_des.at(j) += 
                    std::clamp(target_pos.at(j) - current_jpos_des.at(j),
                              -max_joint_delta, max_joint_delta);
                
                SetJointCommand(arm_joints_.at(j), 
                              current_jpos_des.at(j), 
                              0.f, kp_, kd_, 0.f);
            }

            // Send command and sleep
            arm_sdk_publisher_->Write(msg_);
            std::this_thread::sleep_for(sleep_time_);
        }

        std::cout << "Movement completed!" << std::endl;
        return true;
    }

    // Move arms to target end-effector position using IK
    bool MoveArmsToTargetEE(const Eigen::Vector3f& left_target, const Eigen::Vector3f& right_target, 
                           float duration = 5.0f) {
        std::cout << "Moving arms to target end-effector positions..." << std::endl;

        // Get current joint positions
        std::array<float, 17> current_jpos;
        for (int i = 0; i < arm_joints_.size(); ++i) {
            current_jpos.at(i) = state_msg_.motor_state().at(arm_joints_.at(i)).q();
        }

        // Solve IK for left and right arms
        std::array<float, 7> left_joints = SolveIK(left_target, true);
        std::array<float, 7> right_joints = SolveIK(right_target, false);

        // Create target positions array
        std::array<float, 17> target_pos;
        for (int i = 0; i < 7; ++i) {
            target_pos[i] = left_joints[i];
            target_pos[i+7] = right_joints[i];
        }
        // Keep waist joints at current position
        for (int i = 14; i < 17; ++i) {
            target_pos[i] = current_jpos[i];
        }

        // Move using joint space trajectory
        return MoveArmsToPosition(target_pos, duration);
    }

    // Solve inverse kinematics for arm
    std::array<float, 7> SolveIK(const Eigen::Vector3f& target, bool is_left_arm, 
                                const std::array<float, 7>* initial_guess = nullptr) {
        // Simple analytical IK for 3DOF arm (shoulder_pitch, shoulder_roll, elbow)
        // Wrist joints are set to default positions
        
        std::array<float, 7> joint_positions;
        
        if (is_left_arm) {
            // For left arm
            float shoulder_pitch, shoulder_roll, elbow;
            
            // Distance from shoulder to target in x-z plane
            float dx = target.x();
            float dz = target.z() - left_arm_lengths_[0]; // Adjust for shoulder height
            
            // Distance in x-z plane
            float distance = sqrt(dx*dx + dz*dz);
            
            // Arm lengths (shoulder to elbow + elbow to wrist)
            float L1 = left_arm_lengths_[1] + left_arm_lengths_[2];
            float L2 = left_arm_lengths_[3] + left_arm_lengths_[4] + left_arm_lengths_[5];
            
            // Check if target is reachable
            if (distance > (L1 + L2) || distance < fabs(L1 - L2)) {
                std::cerr << "Target position unreachable!" << std::endl;
                return joint_positions;
            }
            
            // Solve for elbow angle using law of cosines
            float cos_elbow = (distance*distance - L1*L1 - L2*L2) / (2 * L1 * L2);
            elbow = acos(cos_elbow);
            
            // Solve for shoulder angles
            float alpha = atan2(dz, dx);
            float beta = acos((L1*L1 + distance*distance - L2*L2) / (2 * L1 * distance));
            
            shoulder_pitch = alpha - beta;
            shoulder_roll = atan2(target.y(), distance);
            
            // Set joint positions
            joint_positions[0] = shoulder_pitch;
            joint_positions[1] = shoulder_roll;
            joint_positions[2] = 0; // shoulder_yaw (fixed for simple IK)
            joint_positions[3] = elbow;
            joint_positions[4] = 0; // wrist_roll (default)
            joint_positions[5] = 0; // wrist_pitch (default)
            joint_positions[6] = 0; // wrist_yaw (default)
        } else {
            // For right arm (similar but mirrored)
            float shoulder_pitch, shoulder_roll, elbow;
            
            float dx = target.x();
            float dz = target.z() - right_arm_lengths_[0];
            
            float distance = sqrt(dx*dx + dz*dz);
            float L1 = right_arm_lengths_[1] + right_arm_lengths_[2];
            float L2 = right_arm_lengths_[3] + right_arm_lengths_[4] + right_arm_lengths_[5];
            
            if (distance > (L1 + L2) || distance < fabs(L1 - L2)) {
                std::cerr << "Target position unreachable!" << std::endl;
                return joint_positions;
            }
            
            float cos_elbow = (distance*distance - L1*L1 - L2*L2) / (2 * L1 * L2);
            elbow = acos(cos_elbow);
            
            float alpha = atan2(dz, dx);
            float beta = acos((L1*L1 + distance*distance - L2*L2) / (2 * L1 * distance));
            
            shoulder_pitch = alpha - beta;
            shoulder_roll = -atan2(target.y(), distance); // Mirrored
            
            joint_positions[0] = shoulder_pitch;
            joint_positions[1] = shoulder_roll;
            joint_positions[2] = 0;
            joint_positions[3] = elbow;
            joint_positions[4] = 0;
            joint_positions[5] = 0;
            joint_positions[6] = 0;
        }
        
        return joint_positions;
    }

    // Keyboard control for exploring end-effector positions
    void KeyboardControl() {
        // Initialize terminal for non-blocking keyboard input
        struct termios oldt, newt;
        tcgetattr(STDIN_FILENO, &oldt);
        newt = oldt;
        newt.c_lflag &= ~(ICANON | ECHO);
        tcsetattr(STDIN_FILENO, TCSANOW, &newt);
        fcntl(STDIN_FILENO, F_SETFL, fcntl(STDIN_FILENO, F_GETFL) | O_NONBLOCK);

        // Let user choose which arm to control
        std::cout << "Which arm would you like to control? (l=left, r=right, b=both): ";
        char arm_choice;
        std::cin >> arm_choice;
        controlled_arm_ = tolower(arm_choice);

        // Start from current position
        Eigen::Vector3f left_ee(0.2f, 0.1f, 0.0f);  // Initial position
        Eigen::Vector3f right_ee(0.2f, -0.1f, 0.0f); // Mirrored for right arm

        std::cout << "\nKeyboard control activated!" << std::endl;
        std::cout << "Controlling " << 
            (controlled_arm_ == 'l' ? "LEFT arm" : 
             controlled_arm_ == 'r' ? "RIGHT arm" : "BOTH arms") << std::endl;
        std::cout << "Controls:" << std::endl;
        std::cout << "  W/S: Move end-effector forward/back (X axis)" << std::endl;
        std::cout << "  A/D: Move end-effector left/right (Y axis)" << std::endl;
        std::cout << "  Q/E: Move end-effector up/down (Z axis)" << std::endl;
        std::cout << "  R: Reset to initial position" << std::endl;
        std::cout << "  ESC or Space: Exit keyboard control" << std::endl;

        bool running = true;
        while (running) {
            // Check for keyboard input
            int ch = getchar();
            bool position_changed = false;

            if (ch != EOF) {
                switch (ch) {
                    case 'w': case 'W':
                        if (controlled_arm_ == 'l' || controlled_arm_ == 'b') left_ee.x() += keyboard_step_size_;
                        if (controlled_arm_ == 'r' || controlled_arm_ == 'b') right_ee.x() += keyboard_step_size_;
                        position_changed = true;
                        break;
                    case 's': case 'S':
                        if (controlled_arm_ == 'l' || controlled_arm_ == 'b') left_ee.x() -= keyboard_step_size_;
                        if (controlled_arm_ == 'r' || controlled_arm_ == 'b') right_ee.x() -= keyboard_step_size_;
                        position_changed = true;
                        break;
                    case 'a': case 'A':
                        if (controlled_arm_ == 'l' || controlled_arm_ == 'b') left_ee.y() += keyboard_step_size_;
                        if (controlled_arm_ == 'r' || controlled_arm_ == 'b') right_ee.y() -= keyboard_step_size_;
                        position_changed = true;
                        break;
                    case 'd': case 'D':
                        if (controlled_arm_ == 'l' || controlled_arm_ == 'b') left_ee.y() -= keyboard_step_size_;
                        if (controlled_arm_ == 'r' || controlled_arm_ == 'b') right_ee.y() += keyboard_step_size_;
                        position_changed = true;
                        break;
                    case 'q': case 'Q':
                        if (controlled_arm_ == 'l' || controlled_arm_ == 'b') left_ee.z() += keyboard_step_size_;
                        if (controlled_arm_ == 'r' || controlled_arm_ == 'b') right_ee.z() += keyboard_step_size_;
                        position_changed = true;
                        break;
                    case 'e': case 'E':
                        if (controlled_arm_ == 'l' || controlled_arm_ == 'b') left_ee.z() -= keyboard_step_size_;
                        if (controlled_arm_ == 'r' || controlled_arm_ == 'b') right_ee.z() -= keyboard_step_size_;
                        position_changed = true;
                        break;
                    case 'r': case 'R':
                        left_ee = Eigen::Vector3f(0.2f, 0.1f, 0.0f);
                        right_ee = Eigen::Vector3f(0.2f, -0.1f, 0.0f);
                        position_changed = true;
                        break;
                    case 27: // ESC
                    case ' ': // Space
                        running = false;
                        break;
                }

                if (position_changed) {
                    if (controlled_arm_ == 'l' || controlled_arm_ == 'b') {
                        std::cout << "Left EE position: (" << left_ee.x() << ", " 
                                  << left_ee.y() << ", " << left_ee.z() << ")" << std::endl;
                    }
                    if (controlled_arm_ == 'r' || controlled_arm_ == 'b') {
                        std::cout << "Right EE position: (" << right_ee.x() << ", " 
                                  << right_ee.y() << ", " << right_ee.z() << ")" << std::endl;
                    }
                    
                    // Move to new position
                    MoveArmsToTargetEE(left_ee, right_ee, 0.5f);
                }
            }

            // Small delay to prevent high CPU usage
            std::this_thread::sleep_for(std::chrono::milliseconds(10));
        }

        // Restore terminal settings
        tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    }

    // Stop arm control gradually
    bool StopControl(float stop_time = 2.0f) {
        std::cout << "Stopping arm control..." << std::endl;
        
        float weight = 1.0f;
        float delta_weight = 0.2f * control_dt_;
        int stop_steps = static_cast<int>(stop_time / control_dt_);

        for (int i = 0; i < stop_steps; ++i) {
            // Gradually reduce weight
            weight -= delta_weight;
            weight = std::clamp(weight, 0.f, 1.f);
            msg_.motor_cmd().at(JointIndex::kNotUsedJoint).q(weight);

            // Send command and sleep
            arm_sdk_publisher_->Write(msg_);
            std::this_thread::sleep_for(sleep_time_);
        }

        std::cout << "Control stopped!" << std::endl;
        return true;
    }

    // Set individual joint command
    void SetJointCommand(JointIndex joint, float q, float dq, float kp, float kd, float tau) {
        msg_.motor_cmd().at(joint).q(q);
        msg_.motor_cmd().at(joint).dq(dq);
        msg_.motor_cmd().at(joint).kp(kp);
        msg_.motor_cmd().at(joint).kd(kd);
        msg_.motor_cmd().at(joint).tau(tau);
    }

    // Get current joint positions
    std::array<float, 17> GetCurrentJointPositions() {
        std::array<float, 17> positions;
        for (int i = 0; i < arm_joints_.size(); ++i) {
            positions.at(i) = state_msg_.motor_state().at(arm_joints_.at(i)).q();
        }
        return positions;
    }

    // Set control parameters
    void SetControlParameters(float kp, float kd, float dt, float max_vel) {
        kp_ = kp;
        kd_ = kd;
        control_dt_ = dt;
        max_joint_velocity_ = max_vel;
        sleep_time_ = std::chrono::milliseconds(static_cast<int>(control_dt_ / 0.001f));
    }

    // Set target positions
    void SetTargetPositions(const std::array<float, 17>& target_pos) {
        target_pos_ = target_pos;
    }

private:
    unitree::robot::ChannelPublisherPtr<unitree_hg::msg::dds_::LowCmd_> arm_sdk_publisher_;
    unitree::robot::ChannelSubscriberPtr<unitree_hg::msg::dds_::LowState_> low_state_subscriber_;
    
    unitree_hg::msg::dds_::LowCmd_ msg_;
    unitree_hg::msg::dds_::LowState_ state_msg_;

    std::array<JointIndex, 17> arm_joints_;
    std::array<float, 17> init_pos_;
    std::array<float, 17> target_pos_;

    // Arm parameters
    std::vector<float> left_arm_lengths_;
    std::vector<float> right_arm_lengths_;
    std::vector<std::tuple<float, float, float, float>> left_arm_dh_; // alpha, a, d, theta_offset
    std::vector<std::tuple<float, float, float, float>> right_arm_dh_;

    float kp_;
    float kd_;
    float control_dt_;
    float max_joint_velocity_;
    std::chrono::milliseconds sleep_time_;
    float keyboard_step_size_;
    char controlled_arm_; // 'l' for left, 'r' for right, 'b' for both
};

int main(int argc, char const *argv[]) {
    bool keyboard_control = false;
    
    // Check for keyboard control flag
    for (int i = 1; i < argc; ++i) {
        if (std::string(argv[i]) == "-k") {
            keyboard_control = true;
            // Remove the flag from arguments
            for (int j = i; j < argc - 1; ++j) {
                argv[j] = argv[j + 1];
            }
            argc--;
            break;
        }
    }

    if (argc < 2) {
        std::cout << "Usage: " << argv[0] << " [-k] networkInterface" << std::endl;
        std::cout << "  -k: Enable keyboard control for exploring end-effector positions" << std::endl;
        return -1;
    }

    // Create arm controller
    ArmController arm_controller(argv[1]);

    // Wait for user input to initialize
    std::cout << "Press ENTER to initialize arms..." << std::endl;
    std::cin.get();
    arm_controller.InitializeArms();

    if (keyboard_control) {
        // Enter keyboard control mode
        arm_controller.KeyboardControl();
    } else {
        // Original demo mode
        // Test IK control
        std::cout << "Press ENTER to move arms using IK..." << std::endl;
        std::cin.get();
        
        // Define target positions for left and right end-effectors
        Eigen::Vector3f left_target(0.3f, 0.2f, 0.1f);  // x, y, z in meters
        Eigen::Vector3f right_target(0.3f, -0.2f, 0.1f); // mirrored for right arm
        
        arm_controller.MoveArmsToTargetEE(left_target, right_target);

        // Move back to initial position
        std::cout << "Press ENTER to move arms back to initial position..." << std::endl;
        std::cin.get();
        
        Eigen::Vector3f left_home(0.1f, 0.1f, -0.1f);
        Eigen::Vector3f right_home(0.1f, -0.1f, -0.1f);
        arm_controller.MoveArmsToTargetEE(left_home, right_home);
    }

    // Stop control
    std::cout << "Press ENTER to stop control..." << std::endl;
    std::cin.get();
    arm_controller.StopControl();

    return 0;
}