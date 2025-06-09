// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from unitree_interfaces:msg/Rgb.idl
// generated code does not contain a copyright notice

#ifndef UNITREE_INTERFACES__MSG__DETAIL__RGB__BUILDER_HPP_
#define UNITREE_INTERFACES__MSG__DETAIL__RGB__BUILDER_HPP_

#include "unitree_interfaces/msg/detail/rgb__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace unitree_interfaces
{

namespace msg
{

namespace builder
{

class Init_Rgb_b
{
public:
  explicit Init_Rgb_b(::unitree_interfaces::msg::Rgb & msg)
  : msg_(msg)
  {}
  ::unitree_interfaces::msg::Rgb b(::unitree_interfaces::msg::Rgb::_b_type arg)
  {
    msg_.b = std::move(arg);
    return std::move(msg_);
  }

private:
  ::unitree_interfaces::msg::Rgb msg_;
};

class Init_Rgb_g
{
public:
  explicit Init_Rgb_g(::unitree_interfaces::msg::Rgb & msg)
  : msg_(msg)
  {}
  Init_Rgb_b g(::unitree_interfaces::msg::Rgb::_g_type arg)
  {
    msg_.g = std::move(arg);
    return Init_Rgb_b(msg_);
  }

private:
  ::unitree_interfaces::msg::Rgb msg_;
};

class Init_Rgb_r
{
public:
  Init_Rgb_r()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Rgb_g r(::unitree_interfaces::msg::Rgb::_r_type arg)
  {
    msg_.r = std::move(arg);
    return Init_Rgb_g(msg_);
  }

private:
  ::unitree_interfaces::msg::Rgb msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::unitree_interfaces::msg::Rgb>()
{
  return unitree_interfaces::msg::builder::Init_Rgb_r();
}

}  // namespace unitree_interfaces

#endif  // UNITREE_INTERFACES__MSG__DETAIL__RGB__BUILDER_HPP_
