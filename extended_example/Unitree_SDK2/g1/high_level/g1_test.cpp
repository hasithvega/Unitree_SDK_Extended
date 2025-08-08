#include <chrono>
#include <iostream>
#include <thread>
#include <map>
#include <vector>
#include <sstream>

#include <unitree/robot/g1/loco/g1_loco_api.hpp>
#include <unitree/robot/g1/loco/g1_loco_client.hpp>

class UnitreeG1Controller {
public:
    UnitreeG1Controller(const std::string& network_interface = "lo") {
        unitree::robot::ChannelFactory::Instance()->Init(0, network_interface);
        client_.Init();
        client_.SetTimeout(10.0f);
    }

    // Getters
    int getFsmId() {
        int fsm_id;
        client_.GetFsmId(fsm_id);
        return fsm_id;
    }

    int getFsmMode() {
        int fsm_mode;
        client_.GetFsmMode(fsm_mode);
        return fsm_mode;
    }

    int getBalanceMode() {
        int balance_mode;
        client_.GetBalanceMode(balance_mode);
        return balance_mode;
    }

    float getSwingHeight() {
        float swing_height;
        client_.GetSwingHeight(swing_height);
        return swing_height;
    }

    float getStandHeight() {
        float stand_height;
        client_.GetStandHeight(stand_height);
        return stand_height;
    }

    std::vector<float> getPhase() {
        std::vector<float> phase;
        client_.GetPhase(phase);
        return phase;
    }

    // Setters
    void setFsmId(int fsm_id) {
        client_.SetFsmId(fsm_id);
    }

    void setBalanceMode(int balance_mode) {
        client_.SetBalanceMode(balance_mode);
    }

    void setSwingHeight(float swing_height) {
        client_.SetSwingHeight(swing_height);
    }

    void setStandHeight(float stand_height) {
        client_.SetStandHeight(stand_height);
    }

    void setVelocity(float vx, float vy, float omega, float duration = 1.0f) {
        client_.SetVelocity(vx, vy, omega, duration);
    }

    void setTaskId(int task_id) {
        client_.SetTaskId(task_id);
    }

    // Movement commands
    void damp() {
        client_.Damp();
    }

    void start() {
        client_.Start();
    }

    void squat() {
        client_.Squat();
    }

    void sit() {
        client_.Sit();
    }

    void standUp() {
        client_.StandUp();
    }

    void zeroTorque() {
        client_.ZeroTorque();
    }

    void stopMove() {
        client_.StopMove();
    }

    void highStand() {
        client_.HighStand();
    }

    void lowStand() {
        client_.LowStand();
    }

    void balanceStand() {
        client_.BalanceStand();
    }

    void continuousGait(bool flag) {
        client_.ContinuousGait(flag);
    }

    void switchMoveMode(bool flag) {
        client_.SwitchMoveMode(flag);
    }

    void move(float vx, float vy, float omega) {
        client_.Move(vx, vy, omega);
    }

    // Special actions
    void shakeHand() {
        client_.ShakeHand(0);
        std::this_thread::sleep_for(std::chrono::seconds(10));
        client_.ShakeHand(1);
    }

    void waveHand(bool with_turn = false) {
        if (with_turn) {
            client_.WaveHand(true);
        } else {
            client_.WaveHand();
        }
    }

private:
    unitree::robot::g1::LocoClient client_;

    std::vector<float> stringToFloatVector(const std::string &str) {
        std::vector<float> result;
        std::stringstream ss(str);
        float num;
        while (ss >> num) {
            result.push_back(num);
            ss.ignore();
        }
        return result;
    }
};

// Example usage:
int main() {
    UnitreeG1Controller controller("lo");
    
    // Example commands
    // controller.standUp();
    // controller.move(0.5f, 0.0f, 0.0f);
    controller.waveHand(true);
    
    return 0;
}