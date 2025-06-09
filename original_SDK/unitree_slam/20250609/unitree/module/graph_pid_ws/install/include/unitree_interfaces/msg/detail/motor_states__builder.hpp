// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from unitree_interfaces:msg/MotorStates.idl
// generated code does not contain a copyright notice

#ifndef UNITREE_INTERFACES__MSG__DETAIL__MOTOR_STATES__BUILDER_HPP_
#define UNITREE_INTERFACES__MSG__DETAIL__MOTOR_STATES__BUILDER_HPP_

#include "unitree_interfaces/msg/detail/motor_states__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace unitree_interfaces
{

namespace msg
{

namespace builder
{

class Init_MotorStates_motor_state
{
public:
  Init_MotorStates_motor_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::unitree_interfaces::msg::MotorStates motor_state(::unitree_interfaces::msg::MotorStates::_motor_state_type arg)
  {
    msg_.motor_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::unitree_interfaces::msg::MotorStates msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::unitree_interfaces::msg::MotorStates>()
{
  return unitree_interfaces::msg::builder::Init_MotorStates_motor_state();
}

}  // namespace unitree_interfaces

#endif  // UNITREE_INTERFACES__MSG__DETAIL__MOTOR_STATES__BUILDER_HPP_
