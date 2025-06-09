// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from unitree_interfaces:msg/IMU.idl
// generated code does not contain a copyright notice

#ifndef UNITREE_INTERFACES__MSG__DETAIL__IMU__BUILDER_HPP_
#define UNITREE_INTERFACES__MSG__DETAIL__IMU__BUILDER_HPP_

#include "unitree_interfaces/msg/detail/imu__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace unitree_interfaces
{

namespace msg
{

namespace builder
{

class Init_IMU_temperature
{
public:
  explicit Init_IMU_temperature(::unitree_interfaces::msg::IMU & msg)
  : msg_(msg)
  {}
  ::unitree_interfaces::msg::IMU temperature(::unitree_interfaces::msg::IMU::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return std::move(msg_);
  }

private:
  ::unitree_interfaces::msg::IMU msg_;
};

class Init_IMU_accelerometer
{
public:
  explicit Init_IMU_accelerometer(::unitree_interfaces::msg::IMU & msg)
  : msg_(msg)
  {}
  Init_IMU_temperature accelerometer(::unitree_interfaces::msg::IMU::_accelerometer_type arg)
  {
    msg_.accelerometer = std::move(arg);
    return Init_IMU_temperature(msg_);
  }

private:
  ::unitree_interfaces::msg::IMU msg_;
};

class Init_IMU_gyroscope
{
public:
  explicit Init_IMU_gyroscope(::unitree_interfaces::msg::IMU & msg)
  : msg_(msg)
  {}
  Init_IMU_accelerometer gyroscope(::unitree_interfaces::msg::IMU::_gyroscope_type arg)
  {
    msg_.gyroscope = std::move(arg);
    return Init_IMU_accelerometer(msg_);
  }

private:
  ::unitree_interfaces::msg::IMU msg_;
};

class Init_IMU_quaternion
{
public:
  Init_IMU_quaternion()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IMU_gyroscope quaternion(::unitree_interfaces::msg::IMU::_quaternion_type arg)
  {
    msg_.quaternion = std::move(arg);
    return Init_IMU_gyroscope(msg_);
  }

private:
  ::unitree_interfaces::msg::IMU msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::unitree_interfaces::msg::IMU>()
{
  return unitree_interfaces::msg::builder::Init_IMU_quaternion();
}

}  // namespace unitree_interfaces

#endif  // UNITREE_INTERFACES__MSG__DETAIL__IMU__BUILDER_HPP_
