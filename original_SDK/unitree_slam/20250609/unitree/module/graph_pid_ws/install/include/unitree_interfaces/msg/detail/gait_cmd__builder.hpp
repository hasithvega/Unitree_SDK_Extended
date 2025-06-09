// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from unitree_interfaces:msg/GaitCmd.idl
// generated code does not contain a copyright notice

#ifndef UNITREE_INTERFACES__MSG__DETAIL__GAIT_CMD__BUILDER_HPP_
#define UNITREE_INTERFACES__MSG__DETAIL__GAIT_CMD__BUILDER_HPP_

#include "unitree_interfaces/msg/detail/gait_cmd__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace unitree_interfaces
{

namespace msg
{

namespace builder
{

class Init_GaitCmd_yaw_speed
{
public:
  explicit Init_GaitCmd_yaw_speed(::unitree_interfaces::msg::GaitCmd & msg)
  : msg_(msg)
  {}
  ::unitree_interfaces::msg::GaitCmd yaw_speed(::unitree_interfaces::msg::GaitCmd::_yaw_speed_type arg)
  {
    msg_.yaw_speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::unitree_interfaces::msg::GaitCmd msg_;
};

class Init_GaitCmd_velocity
{
public:
  explicit Init_GaitCmd_velocity(::unitree_interfaces::msg::GaitCmd & msg)
  : msg_(msg)
  {}
  Init_GaitCmd_yaw_speed velocity(::unitree_interfaces::msg::GaitCmd::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_GaitCmd_yaw_speed(msg_);
  }

private:
  ::unitree_interfaces::msg::GaitCmd msg_;
};

class Init_GaitCmd_euler
{
public:
  explicit Init_GaitCmd_euler(::unitree_interfaces::msg::GaitCmd & msg)
  : msg_(msg)
  {}
  Init_GaitCmd_velocity euler(::unitree_interfaces::msg::GaitCmd::_euler_type arg)
  {
    msg_.euler = std::move(arg);
    return Init_GaitCmd_velocity(msg_);
  }

private:
  ::unitree_interfaces::msg::GaitCmd msg_;
};

class Init_GaitCmd_position
{
public:
  explicit Init_GaitCmd_position(::unitree_interfaces::msg::GaitCmd & msg)
  : msg_(msg)
  {}
  Init_GaitCmd_euler position(::unitree_interfaces::msg::GaitCmd::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_GaitCmd_euler(msg_);
  }

private:
  ::unitree_interfaces::msg::GaitCmd msg_;
};

class Init_GaitCmd_body_height
{
public:
  explicit Init_GaitCmd_body_height(::unitree_interfaces::msg::GaitCmd & msg)
  : msg_(msg)
  {}
  Init_GaitCmd_position body_height(::unitree_interfaces::msg::GaitCmd::_body_height_type arg)
  {
    msg_.body_height = std::move(arg);
    return Init_GaitCmd_position(msg_);
  }

private:
  ::unitree_interfaces::msg::GaitCmd msg_;
};

class Init_GaitCmd_foot_raise_height
{
public:
  explicit Init_GaitCmd_foot_raise_height(::unitree_interfaces::msg::GaitCmd & msg)
  : msg_(msg)
  {}
  Init_GaitCmd_body_height foot_raise_height(::unitree_interfaces::msg::GaitCmd::_foot_raise_height_type arg)
  {
    msg_.foot_raise_height = std::move(arg);
    return Init_GaitCmd_body_height(msg_);
  }

private:
  ::unitree_interfaces::msg::GaitCmd msg_;
};

class Init_GaitCmd_speed_level
{
public:
  explicit Init_GaitCmd_speed_level(::unitree_interfaces::msg::GaitCmd & msg)
  : msg_(msg)
  {}
  Init_GaitCmd_foot_raise_height speed_level(::unitree_interfaces::msg::GaitCmd::_speed_level_type arg)
  {
    msg_.speed_level = std::move(arg);
    return Init_GaitCmd_foot_raise_height(msg_);
  }

private:
  ::unitree_interfaces::msg::GaitCmd msg_;
};

class Init_GaitCmd_gait_type
{
public:
  explicit Init_GaitCmd_gait_type(::unitree_interfaces::msg::GaitCmd & msg)
  : msg_(msg)
  {}
  Init_GaitCmd_speed_level gait_type(::unitree_interfaces::msg::GaitCmd::_gait_type_type arg)
  {
    msg_.gait_type = std::move(arg);
    return Init_GaitCmd_speed_level(msg_);
  }

private:
  ::unitree_interfaces::msg::GaitCmd msg_;
};

class Init_GaitCmd_mode
{
public:
  Init_GaitCmd_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GaitCmd_gait_type mode(::unitree_interfaces::msg::GaitCmd::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_GaitCmd_gait_type(msg_);
  }

private:
  ::unitree_interfaces::msg::GaitCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::unitree_interfaces::msg::GaitCmd>()
{
  return unitree_interfaces::msg::builder::Init_GaitCmd_mode();
}

}  // namespace unitree_interfaces

#endif  // UNITREE_INTERFACES__MSG__DETAIL__GAIT_CMD__BUILDER_HPP_
