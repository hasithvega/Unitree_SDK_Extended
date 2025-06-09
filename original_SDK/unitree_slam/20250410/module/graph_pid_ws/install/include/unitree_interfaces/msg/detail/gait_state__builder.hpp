// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from unitree_interfaces:msg/GaitState.idl
// generated code does not contain a copyright notice

#ifndef UNITREE_INTERFACES__MSG__DETAIL__GAIT_STATE__BUILDER_HPP_
#define UNITREE_INTERFACES__MSG__DETAIL__GAIT_STATE__BUILDER_HPP_

#include "unitree_interfaces/msg/detail/gait_state__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace unitree_interfaces
{

namespace msg
{

namespace builder
{

class Init_GaitState_yaw_speed
{
public:
  explicit Init_GaitState_yaw_speed(::unitree_interfaces::msg::GaitState & msg)
  : msg_(msg)
  {}
  ::unitree_interfaces::msg::GaitState yaw_speed(::unitree_interfaces::msg::GaitState::_yaw_speed_type arg)
  {
    msg_.yaw_speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::unitree_interfaces::msg::GaitState msg_;
};

class Init_GaitState_velocity
{
public:
  explicit Init_GaitState_velocity(::unitree_interfaces::msg::GaitState & msg)
  : msg_(msg)
  {}
  Init_GaitState_yaw_speed velocity(::unitree_interfaces::msg::GaitState::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_GaitState_yaw_speed(msg_);
  }

private:
  ::unitree_interfaces::msg::GaitState msg_;
};

class Init_GaitState_position
{
public:
  explicit Init_GaitState_position(::unitree_interfaces::msg::GaitState & msg)
  : msg_(msg)
  {}
  Init_GaitState_velocity position(::unitree_interfaces::msg::GaitState::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_GaitState_velocity(msg_);
  }

private:
  ::unitree_interfaces::msg::GaitState msg_;
};

class Init_GaitState_body_height
{
public:
  explicit Init_GaitState_body_height(::unitree_interfaces::msg::GaitState & msg)
  : msg_(msg)
  {}
  Init_GaitState_position body_height(::unitree_interfaces::msg::GaitState::_body_height_type arg)
  {
    msg_.body_height = std::move(arg);
    return Init_GaitState_position(msg_);
  }

private:
  ::unitree_interfaces::msg::GaitState msg_;
};

class Init_GaitState_foot_raise_height
{
public:
  explicit Init_GaitState_foot_raise_height(::unitree_interfaces::msg::GaitState & msg)
  : msg_(msg)
  {}
  Init_GaitState_body_height foot_raise_height(::unitree_interfaces::msg::GaitState::_foot_raise_height_type arg)
  {
    msg_.foot_raise_height = std::move(arg);
    return Init_GaitState_body_height(msg_);
  }

private:
  ::unitree_interfaces::msg::GaitState msg_;
};

class Init_GaitState_gait_type
{
public:
  explicit Init_GaitState_gait_type(::unitree_interfaces::msg::GaitState & msg)
  : msg_(msg)
  {}
  Init_GaitState_foot_raise_height gait_type(::unitree_interfaces::msg::GaitState::_gait_type_type arg)
  {
    msg_.gait_type = std::move(arg);
    return Init_GaitState_foot_raise_height(msg_);
  }

private:
  ::unitree_interfaces::msg::GaitState msg_;
};

class Init_GaitState_mode
{
public:
  Init_GaitState_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GaitState_gait_type mode(::unitree_interfaces::msg::GaitState::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_GaitState_gait_type(msg_);
  }

private:
  ::unitree_interfaces::msg::GaitState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::unitree_interfaces::msg::GaitState>()
{
  return unitree_interfaces::msg::builder::Init_GaitState_mode();
}

}  // namespace unitree_interfaces

#endif  // UNITREE_INTERFACES__MSG__DETAIL__GAIT_STATE__BUILDER_HPP_
