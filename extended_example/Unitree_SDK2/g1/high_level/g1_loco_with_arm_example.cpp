#include <array>
#include <chrono>
#include <iostream>
#include <thread>
#include <map>
#include <vector>
#include <sstream>

#include <unitree/idl/hg/LowCmd_.hpp>
#include <unitree/idl/hg/LowState_.hpp>
#include <unitree/robot/channel/channel_publisher.hpp>
#include <unitree/robot/channel/channel_subscriber.hpp>
#include <unitree/robot/g1/loco/g1_loco_api.hpp>
#include <unitree/robot/g1/loco/g1_loco_client.hpp>


// Before running this code, make sure to add this program to the CMakeLists.txt file, example:
// add_executable(g1_loco_with_arm_example g1_loco_with_arm_example.cpp)
// and link the necessary libraries:
// target_link_libraries(g1_loco_with_arm_example unitree_sdk2)
// Add these in the CMakeLists.txt file in /example/g1/high_level directory, not that one in the root directory.


// Constant definition
constexpr float kPi = 3.141592654;
constexpr float kPi_2 = 1.57079632;

//Joint index definition
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


    // These joints are used to make motion unit (High Level) to know that it cannot control the motors on arm because the users are going to control the arm by themselfs.
    kNotUsedJoint,
    kNotUsedJoint1,
    kNotUsedJoint2,
    kNotUsedJoint3,
    kNotUsedJoint4,
    kNotUsedJoint5
};

// Global stop flag
std::atomic<bool> stop_program(false);

// Non-blocking keyboard listener function
void CheckKeyboardInput() {
    struct termios oldt, newt;
    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);

    while (!stop_program) {
        if (getchar() == ' ') {  // Detect space key
            stop_program = true;
            break;
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
}

// Arm Controller class
class ArmController {
public:
    ArmController(const std::string& networkInterface) {
        unitree::robot::ChannelFactory::Instance()->Init(0, networkInterface.c_str());

        // Initialize publisher
        arm_sdk_publisher_.reset(
            new unitree::robot::ChannelPublisher<unitree_hg::msg::dds_::LowCmd_>(
                "rt/arm_sdk"));
        arm_sdk_publisher_->InitChannel();

        // Initialize subscriber
        low_state_subscriber_.reset(
            new unitree::robot::ChannelSubscriber<unitree_hg::msg::dds_::LowState_>(
                "rt/lowstate"));
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

        // Control parameters
        control_dt_ = 0.02f;
        max_joint_velocity_ = 0.5f;
        sleep_time_ = std::chrono::milliseconds(static_cast<int>(control_dt_ / 0.001f));
        
        // PID parameters
        kp_ = 60.f;
        kd_ = 1.5f;
        
        // Initial position (arm down)
        init_pos_ = {0, 0, 0, 0, 0, 0, 0,
                     0, 0, 0, 0, 0, 0, 0,
                     0, 0, 0};
        
        // Target position (arm up)
        target_pos_ = {0.f, kPi_2,  0.f, kPi_2, 0.f, 0.f, 0.f,
                       0.f, -kPi_2, 0.f, kPi_2, 0.f, 0.f, 0.f, 
                       0, 0, 0};
    }

    // Initialize arms
    bool InitializeArms(float init_time = 4.0f) {
        std::cout << "Initializing arms..." << std::endl;
        
        std::array<float, 17> current_jpos;
        for (int i = 0; i < arm_joints_.size(); ++i) {
            current_jpos.at(i) = state_msg_.motor_state().at(arm_joints_.at(i)).q();
        }

        int init_time_steps = static_cast<int>(init_time / control_dt_);

        for (int i = 0; i < init_time_steps; ++i) {
            msg_.motor_cmd().at(JointIndex::kNotUsedJoint).q(1.0f);

            float phase = 1.0f * i / init_time_steps;

            for (int j = 0; j < init_pos_.size(); ++j) {
                float target = init_pos_.at(j) * phase + current_jpos.at(j) * (1 - phase);
                SetJointCommand(arm_joints_.at(j), target, 0.f, kp_, kd_, 0.f);
            }

            arm_sdk_publisher_->Write(msg_);
            std::this_thread::sleep_for(sleep_time_);
        }

        std::cout << "Arm initialization done!" << std::endl;
        return true;
    }

    // Move arms to target position
    bool MoveArmsToPosition(const std::array<float, 17>& target_pos, float duration = 4.0f) {
        std::cout << "Moving arms to target position..." << std::endl;
        
        std::array<float, 17> current_jpos_des;
        for (int i = 0; i < arm_joints_.size(); ++i) {
            current_jpos_des.at(i) = msg_.motor_cmd().at(arm_joints_.at(i)).q();
        }

        int num_steps = static_cast<int>(duration / control_dt_);
        float max_joint_delta = max_joint_velocity_ * control_dt_;

        for (int i = 0; i < num_steps; ++i) {
            for (int j = 0; j < target_pos.size(); ++j) {
                current_jpos_des.at(j) += 
                    std::clamp(target_pos.at(j) - current_jpos_des.at(j),
                              -max_joint_delta, max_joint_delta);
                
                SetJointCommand(arm_joints_.at(j), 
                              current_jpos_des.at(j), 
                              0.f, kp_, kd_, 0.f);
            }

            arm_sdk_publisher_->Write(msg_);
            std::this_thread::sleep_for(sleep_time_);
        }

        std::cout << "Arm movement completed!" << std::endl;
        return true;
    }

    // Stop arm control
    bool StopControl(float stop_time = 2.0f) {
        std::cout << "Stopping arm control..." << std::endl;
        
        float weight = 1.0f;
        float delta_weight = 0.2f * control_dt_;
        int stop_steps = static_cast<int>(stop_time / control_dt_);

        for (int i = 0; i < stop_steps; ++i) {
            weight -= delta_weight;
            weight = std::clamp(weight, 0.f, 1.f);
            msg_.motor_cmd().at(JointIndex::kNotUsedJoint).q(weight);

            arm_sdk_publisher_->Write(msg_);
            std::this_thread::sleep_for(sleep_time_);
        }

        std::cout << "Arm control stopped!" << std::endl;
        return true;
    }

    // Set joint command
    void SetJointCommand(JointIndex joint, float q, float dq, float kp, float kd, float tau) {
        msg_.motor_cmd().at(joint).q(q);
        msg_.motor_cmd().at(joint).dq(dq);
        msg_.motor_cmd().at(joint).kp(kp);
        msg_.motor_cmd().at(joint).kd(kd);
        msg_.motor_cmd().at(joint).tau(tau);
    }

private:
    unitree::robot::ChannelPublisherPtr<unitree_hg::msg::dds_::LowCmd_> arm_sdk_publisher_;
    unitree::robot::ChannelSubscriberPtr<unitree_hg::msg::dds_::LowState_> low_state_subscriber_;
    
    unitree_hg::msg::dds_::LowCmd_ msg_;
    unitree_hg::msg::dds_::LowState_ state_msg_;

    std::array<JointIndex, 17> arm_joints_;
    std::array<float, 17> init_pos_;
    std::array<float, 17> target_pos_;

    float kp_;
    float kd_;
    float control_dt_;
    float max_joint_velocity_;
    std::chrono::milliseconds sleep_time_;
};

// Locomotion Controller class
class LocomotionController {
public:
    LocomotionController(const std::string& network_interface = "lo") {
        unitree::robot::ChannelFactory::Instance()->Init(0, network_interface.c_str());
        client_.Init();
        client_.SetTimeout(10.0f);
    }

    // Move the robot
    // vx: forward speed, vy: lateral speed, omega: angular speed
    void move(float vx, float vy, float omega) {
        client_.Move(vx, vy, omega);
    }

    // Stop the robot
    void stopMove() {
        client_.StopMove();
    }

    // Make the robot stand up
    void standUp() {
        client_.StandUp();
    }
    /*If you want to add more motions in SDK, please add here.
    You can refer to the g1_global_highlevel.cpp or g1_loco_client_example.cpp file in the example folder.
    */

private:
    unitree::robot::g1::LocoClient client_;
};

//Main function
int main(int argc, char const *argv[]) {
    if (argc < 2) {
        std::cout << "Usage: " << argv[0] << " networkInterface" << std::endl;
        return -1;
    }

    // Start keyboard listener thread
    std::thread keyboard_thread(CheckKeyboardInput);
    
    // Create controller instances
    ArmController arm_controller(argv[1]);
    LocomotionController loco_controller(argv[1]);

    std::cout << "Press ENTER to start sequence, SPACE to stop at any time..." << std::endl;
    std::cin.get();

    try {
        // Stand up the robot
        if (!stop_program) {
            loco_controller.standUp();
            std::this_thread::sleep_for(std::chrono::seconds(2));
        }

        // Initialize arms
        if (!stop_program) {
            arm_controller.InitializeArms();
        }

        // Define target positions
        std::array<float, 17> arms_up = {0.f, kPi_2,  0.f, kPi_2, 0.f, 0.f, 0.f,
                                        0.f, -kPi_2, 0.f, kPi_2, 0.f, 0.f, 0.f, 
                                        0, 0, 0};
        std::array<float, 17> arms_down = {0, 0, 0, 0, 0, 0, 0,
                                          0, 0, 0, 0, 0, 0, 0,
                                          0, 0, 0};

        // Action sequence function
        auto perform_sequence = [&](float vx, float vy, float omega) {
            if (stop_program) return;

            // Move and raise arms
            std::thread move_thread([&]() {
                if (!stop_program) {
                    loco_controller.move(vx, vy, omega);
                    std::this_thread::sleep_for(std::chrono::seconds(1));
                }
            });
            
            std::thread arms_up_thread([&]() {
                if (!stop_program) {
                    arm_controller.MoveArmsToPosition(arms_up);
                }
            });
            
            move_thread.join();
            arms_up_thread.join();

            if (stop_program) return;

            // Move back and lower arms
            std::thread move_back_thread([&]() {
                if (!stop_program) {
                    loco_controller.move(-vx, -vy, -omega);
                    std::this_thread::sleep_for(std::chrono::seconds(1));
                }
            });
            
            std::thread arms_down_thread([&]() {
                if (!stop_program) {
                    arm_controller.MoveArmsToPosition(arms_down);
                }
            });
            
            move_back_thread.join();
            arms_down_thread.join();
        };

        // 1. Move forward sequence
        if (!stop_program) {
            std::cout << "Starting forward sequence..." << std::endl;
            perform_sequence(0.5f, 0.0f, 0.0f);
        }

        // 2. Left turn sequence
        if (!stop_program) {
            std::cout << "Starting left turn sequence..." << std::endl;
            perform_sequence(0.0f, 0.0f, 1.5f);
        }

        // 3. Backward turn sequence
        if (!stop_program) {
            std::cout << "Starting backward turn sequence..." << std::endl;
            perform_sequence(0.0f, 0.0f, 3.0f);
        }

    } catch (...) {
        stop_program = true;
    }

    // Stop all movements
    if (stop_program) {
        std::cout << "\nEmergency stop triggered! Stopping all movements..." << std::endl;
    }

    arm_controller.StopControl();
    loco_controller.stopMove();

    // Wait for keyboard thread to finish
    stop_program = true;
    keyboard_thread.join();

    std::cout << "Program ended." << std::endl;
    return 0;
}