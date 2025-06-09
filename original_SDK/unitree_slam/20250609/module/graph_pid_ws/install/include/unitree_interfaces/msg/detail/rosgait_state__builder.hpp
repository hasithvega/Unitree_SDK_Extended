// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from unitree_interfaces:msg/RosgaitState.idl
// generated code does not contain a copyright notice

#ifndef UNITREE_INTERFACES__MSG__DETAIL__ROSGAIT_STATE__BUILDER_HPP_
#define UNITREE_INTERFACES__MSG__DETAIL__ROSGAIT_STATE__BUILDER_HPP_

#include "unitree_interfaces/msg/detail/rosgait_state__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace unitree_interfaces
{

namespace msg
{

namespace builder
{

class Init_RosgaitState_temperature
{
public:
  explicit Init_RosgaitState_temperature(::unitree_interfaces::msg::RosgaitState & msg)
  : msg_(msg)
  {}
  ::unitree_interfaces::msg::RosgaitState temperature(::unitree_interfaces::msg::RosgaitState::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return std::move(msg_);
  }

private:
  ::unitree_interfaces::msg::RosgaitState msg_;
};

class Init_RosgaitState_accelerometer
{
public:
  explicit Init_RosgaitState_accelerometer(::unitree_interfaces::msg::RosgaitState & msg)
  : msg_(msg)
  {}
  Init_RosgaitState_temperature accelerometer(::unitree_interfaces::msg::RosgaitState::_accelerometer_type arg)
  {
    msg_.accelerometer = std::move(arg);
    return Init_RosgaitState_temperature(msg_);
  }

private:
  ::unitree_interfaces::msg::RosgaitState msg_;
};

class Init_RosgaitState_gyroscope
{
public:
  explicit Init_RosgaitState_gyroscope(::unitree_interfaces::msg::RosgaitState & msg)
  : msg_(msg)
  {}
  Init_RosgaitState_accelerometer gyroscope(::unitree_interfaces::msg::RosgaitState::_gyroscope_type arg)
  {
    msg_.gyroscope = std::move(arg);
    return Init_RosgaitState_accelerometer(msg_);
  }

private:
  ::unitree_interfaces::msg::RosgaitState msg_;
};

class Init_RosgaitState_quaternion
{
public:
  explicit Init_RosgaitState_quaternion(::unitree_interfaces::msg::RosgaitState & msg)
  : msg_(msg)
  {}
  Init_RosgaitState_gyroscope quaternion(::unitree_interfaces::msg::RosgaitState::_quaternion_type arg)
  {
    msg_.quaternion = std::move(arg);
    return Init_RosgaitState_gyroscope(msg_);
  }

private:
  ::unitree_interfaces::msg::RosgaitState msg_;
};

class Init_RosgaitState_yaw_speed
{
public:
  explicit Init_RosgaitState_yaw_speed(::unitree_interfaces::msg::RosgaitState & msg)
  : msg_(msg)
  {}
  Init_RosgaitState_quaternion yaw_speed(::unitree_interfaces::msg::RosgaitState::_yaw_speed_type arg)
  {
    msg_.yaw_speed = std::move(arg);
    return Init_RosgaitState_quaternion(msg_);
  }

private:
  ::unitree_interfaces::msg::RosgaitState msg_;
};

class Init_RosgaitState_velocity
{
public:
  explicit Init_RosgaitState_velocity(::unitree_interfaces::msg::RosgaitState & msg)
  : msg_(msg)
  {}
  Init_RosgaitState_yaw_speed velocity(::unitree_interfaces::msg::RosgaitState::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_RosgaitState_yaw_speed(msg_);
  }

private:
  ::unitree_interfaces::msg::RosgaitState msg_;
};

class Init_RosgaitState_position
{
public:
  explicit Init_RosgaitState_position(::unitree_interfaces::msg::RosgaitState & msg)
  : msg_(msg)
  {}
  Init_RosgaitState_velocity position(::unitree_interfaces::msg::RosgaitState::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_RosgaitState_velocity(msg_);
  }

private:
  ::unitree_interfaces::msg::RosgaitState msg_;
};

class Init_RosgaitState_body_height
{
public:
  explicit Init_RosgaitState_body_height(::unitree_interfaces::msg::RosgaitState & msg)
  : msg_(msg)
  {}
  Init_RosgaitState_position body_height(::unitree_interfaces::msg::RosgaitState::_body_height_type arg)
  {
    msg_.body_height = std::move(arg);
    return Init_RosgaitState_position(msg_);
  }

private:
  ::unitree_interfaces::msg::RosgaitState msg_;
};

class Init_RosgaitState_foot_raise_height
{
public:
  explicit Init_RosgaitState_foot_raise_height(::unitree_interfaces::msg::RosgaitState & msg)
  : msg_(msg)
  {}
  Init_RosgaitState_body_height foot_raise_height(::unitree_interfaces::msg::RosgaitState::_foot_raise_height_type arg)
  {
    msg_.foot_raise_height = std::move(arg);
    return Init_RosgaitState_body_height(msg_);
  }

private:
  ::unitree_interfaces::msg::RosgaitState msg_;
};

class Init_RosgaitState_gait_type
{
public:
  explicit Init_RosgaitState_gait_type(::unitree_interfaces::msg::RosgaitState & msg)
  : msg_(msg)
  {}
  Init_RosgaitState_foot_raise_height gait_type(::unitree_interfaces::msg::RosgaitState::_gait_type_type arg)
  {
    msg_.gait_type = std::move(arg);
    return Init_RosgaitState_foot_raise_height(msg_);
  }

private:
  ::unitree_interfaces::msg::RosgaitState msg_;
};

class Init_RosgaitState_mode
{
public:
  Init_RosgaitState_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RosgaitState_gait_type mode(::unitree_interfaces::msg::RosgaitState::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_RosgaitState_gait_type(msg_);
  }

private:
  ::unitree_interfaces::msg::RosgaitState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::unitree_interfaces::msg::RosgaitState>()
{
  return unitree_interfaces::msg::builder::Init_RosgaitState_mode();
}

}  // namespace unitree_interfaces

#endif  // UNITREE_INTERFACES__MSG__DETAIL__ROSGAIT_STATE__BUILDER_HPP_
