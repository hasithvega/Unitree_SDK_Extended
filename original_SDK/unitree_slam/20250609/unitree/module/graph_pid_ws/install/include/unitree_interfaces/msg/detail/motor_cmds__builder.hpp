// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from unitree_interfaces:msg/MotorCmds.idl
// generated code does not contain a copyright notice

#ifndef UNITREE_INTERFACES__MSG__DETAIL__MOTOR_CMDS__BUILDER_HPP_
#define UNITREE_INTERFACES__MSG__DETAIL__MOTOR_CMDS__BUILDER_HPP_

#include "unitree_interfaces/msg/detail/motor_cmds__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace unitree_interfaces
{

namespace msg
{

namespace builder
{

class Init_MotorCmds_motor_cmd
{
public:
  Init_MotorCmds_motor_cmd()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::unitree_interfaces::msg::MotorCmds motor_cmd(::unitree_interfaces::msg::MotorCmds::_motor_cmd_type arg)
  {
    msg_.motor_cmd = std::move(arg);
    return std::move(msg_);
  }

private:
  ::unitree_interfaces::msg::MotorCmds msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::unitree_interfaces::msg::MotorCmds>()
{
  return unitree_interfaces::msg::builder::Init_MotorCmds_motor_cmd();
}

}  // namespace unitree_interfaces

#endif  // UNITREE_INTERFACES__MSG__DETAIL__MOTOR_CMDS__BUILDER_HPP_
