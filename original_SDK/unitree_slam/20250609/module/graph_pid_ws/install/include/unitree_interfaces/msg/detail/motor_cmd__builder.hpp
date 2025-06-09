// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from unitree_interfaces:msg/MotorCmd.idl
// generated code does not contain a copyright notice

#ifndef UNITREE_INTERFACES__MSG__DETAIL__MOTOR_CMD__BUILDER_HPP_
#define UNITREE_INTERFACES__MSG__DETAIL__MOTOR_CMD__BUILDER_HPP_

#include "unitree_interfaces/msg/detail/motor_cmd__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace unitree_interfaces
{

namespace msg
{

namespace builder
{

class Init_MotorCmd_k_d
{
public:
  explicit Init_MotorCmd_k_d(::unitree_interfaces::msg::MotorCmd & msg)
  : msg_(msg)
  {}
  ::unitree_interfaces::msg::MotorCmd k_d(::unitree_interfaces::msg::MotorCmd::_k_d_type arg)
  {
    msg_.k_d = std::move(arg);
    return std::move(msg_);
  }

private:
  ::unitree_interfaces::msg::MotorCmd msg_;
};

class Init_MotorCmd_k_p
{
public:
  explicit Init_MotorCmd_k_p(::unitree_interfaces::msg::MotorCmd & msg)
  : msg_(msg)
  {}
  Init_MotorCmd_k_d k_p(::unitree_interfaces::msg::MotorCmd::_k_p_type arg)
  {
    msg_.k_p = std::move(arg);
    return Init_MotorCmd_k_d(msg_);
  }

private:
  ::unitree_interfaces::msg::MotorCmd msg_;
};

class Init_MotorCmd_torque
{
public:
  explicit Init_MotorCmd_torque(::unitree_interfaces::msg::MotorCmd & msg)
  : msg_(msg)
  {}
  Init_MotorCmd_k_p torque(::unitree_interfaces::msg::MotorCmd::_torque_type arg)
  {
    msg_.torque = std::move(arg);
    return Init_MotorCmd_k_p(msg_);
  }

private:
  ::unitree_interfaces::msg::MotorCmd msg_;
};

class Init_MotorCmd_dq
{
public:
  explicit Init_MotorCmd_dq(::unitree_interfaces::msg::MotorCmd & msg)
  : msg_(msg)
  {}
  Init_MotorCmd_torque dq(::unitree_interfaces::msg::MotorCmd::_dq_type arg)
  {
    msg_.dq = std::move(arg);
    return Init_MotorCmd_torque(msg_);
  }

private:
  ::unitree_interfaces::msg::MotorCmd msg_;
};

class Init_MotorCmd_q
{
public:
  explicit Init_MotorCmd_q(::unitree_interfaces::msg::MotorCmd & msg)
  : msg_(msg)
  {}
  Init_MotorCmd_dq q(::unitree_interfaces::msg::MotorCmd::_q_type arg)
  {
    msg_.q = std::move(arg);
    return Init_MotorCmd_dq(msg_);
  }

private:
  ::unitree_interfaces::msg::MotorCmd msg_;
};

class Init_MotorCmd_mode
{
public:
  Init_MotorCmd_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorCmd_q mode(::unitree_interfaces::msg::MotorCmd::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_MotorCmd_q(msg_);
  }

private:
  ::unitree_interfaces::msg::MotorCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::unitree_interfaces::msg::MotorCmd>()
{
  return unitree_interfaces::msg::builder::Init_MotorCmd_mode();
}

}  // namespace unitree_interfaces

#endif  // UNITREE_INTERFACES__MSG__DETAIL__MOTOR_CMD__BUILDER_HPP_
