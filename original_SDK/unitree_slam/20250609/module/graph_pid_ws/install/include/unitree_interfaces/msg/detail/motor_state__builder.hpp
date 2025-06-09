// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from unitree_interfaces:msg/MotorState.idl
// generated code does not contain a copyright notice

#ifndef UNITREE_INTERFACES__MSG__DETAIL__MOTOR_STATE__BUILDER_HPP_
#define UNITREE_INTERFACES__MSG__DETAIL__MOTOR_STATE__BUILDER_HPP_

#include "unitree_interfaces/msg/detail/motor_state__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace unitree_interfaces
{

namespace msg
{

namespace builder
{

class Init_MotorState_ddq_raw
{
public:
  explicit Init_MotorState_ddq_raw(::unitree_interfaces::msg::MotorState & msg)
  : msg_(msg)
  {}
  ::unitree_interfaces::msg::MotorState ddq_raw(::unitree_interfaces::msg::MotorState::_ddq_raw_type arg)
  {
    msg_.ddq_raw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::unitree_interfaces::msg::MotorState msg_;
};

class Init_MotorState_dq_raw
{
public:
  explicit Init_MotorState_dq_raw(::unitree_interfaces::msg::MotorState & msg)
  : msg_(msg)
  {}
  Init_MotorState_ddq_raw dq_raw(::unitree_interfaces::msg::MotorState::_dq_raw_type arg)
  {
    msg_.dq_raw = std::move(arg);
    return Init_MotorState_ddq_raw(msg_);
  }

private:
  ::unitree_interfaces::msg::MotorState msg_;
};

class Init_MotorState_q_raw
{
public:
  explicit Init_MotorState_q_raw(::unitree_interfaces::msg::MotorState & msg)
  : msg_(msg)
  {}
  Init_MotorState_dq_raw q_raw(::unitree_interfaces::msg::MotorState::_q_raw_type arg)
  {
    msg_.q_raw = std::move(arg);
    return Init_MotorState_dq_raw(msg_);
  }

private:
  ::unitree_interfaces::msg::MotorState msg_;
};

class Init_MotorState_torque_estimated
{
public:
  explicit Init_MotorState_torque_estimated(::unitree_interfaces::msg::MotorState & msg)
  : msg_(msg)
  {}
  Init_MotorState_q_raw torque_estimated(::unitree_interfaces::msg::MotorState::_torque_estimated_type arg)
  {
    msg_.torque_estimated = std::move(arg);
    return Init_MotorState_q_raw(msg_);
  }

private:
  ::unitree_interfaces::msg::MotorState msg_;
};

class Init_MotorState_ddq
{
public:
  explicit Init_MotorState_ddq(::unitree_interfaces::msg::MotorState & msg)
  : msg_(msg)
  {}
  Init_MotorState_torque_estimated ddq(::unitree_interfaces::msg::MotorState::_ddq_type arg)
  {
    msg_.ddq = std::move(arg);
    return Init_MotorState_torque_estimated(msg_);
  }

private:
  ::unitree_interfaces::msg::MotorState msg_;
};

class Init_MotorState_dq
{
public:
  explicit Init_MotorState_dq(::unitree_interfaces::msg::MotorState & msg)
  : msg_(msg)
  {}
  Init_MotorState_ddq dq(::unitree_interfaces::msg::MotorState::_dq_type arg)
  {
    msg_.dq = std::move(arg);
    return Init_MotorState_ddq(msg_);
  }

private:
  ::unitree_interfaces::msg::MotorState msg_;
};

class Init_MotorState_q
{
public:
  explicit Init_MotorState_q(::unitree_interfaces::msg::MotorState & msg)
  : msg_(msg)
  {}
  Init_MotorState_dq q(::unitree_interfaces::msg::MotorState::_q_type arg)
  {
    msg_.q = std::move(arg);
    return Init_MotorState_dq(msg_);
  }

private:
  ::unitree_interfaces::msg::MotorState msg_;
};

class Init_MotorState_temperature
{
public:
  explicit Init_MotorState_temperature(::unitree_interfaces::msg::MotorState & msg)
  : msg_(msg)
  {}
  Init_MotorState_q temperature(::unitree_interfaces::msg::MotorState::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return Init_MotorState_q(msg_);
  }

private:
  ::unitree_interfaces::msg::MotorState msg_;
};

class Init_MotorState_mode
{
public:
  Init_MotorState_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorState_temperature mode(::unitree_interfaces::msg::MotorState::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_MotorState_temperature(msg_);
  }

private:
  ::unitree_interfaces::msg::MotorState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::unitree_interfaces::msg::MotorState>()
{
  return unitree_interfaces::msg::builder::Init_MotorState_mode();
}

}  // namespace unitree_interfaces

#endif  // UNITREE_INTERFACES__MSG__DETAIL__MOTOR_STATE__BUILDER_HPP_
