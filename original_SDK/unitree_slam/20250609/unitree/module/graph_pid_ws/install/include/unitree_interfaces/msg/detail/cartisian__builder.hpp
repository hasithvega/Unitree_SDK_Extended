// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from unitree_interfaces:msg/Cartisian.idl
// generated code does not contain a copyright notice

#ifndef UNITREE_INTERFACES__MSG__DETAIL__CARTISIAN__BUILDER_HPP_
#define UNITREE_INTERFACES__MSG__DETAIL__CARTISIAN__BUILDER_HPP_

#include "unitree_interfaces/msg/detail/cartisian__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace unitree_interfaces
{

namespace msg
{

namespace builder
{

class Init_Cartisian_z
{
public:
  explicit Init_Cartisian_z(::unitree_interfaces::msg::Cartisian & msg)
  : msg_(msg)
  {}
  ::unitree_interfaces::msg::Cartisian z(::unitree_interfaces::msg::Cartisian::_z_type arg)
  {
    msg_.z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::unitree_interfaces::msg::Cartisian msg_;
};

class Init_Cartisian_y
{
public:
  explicit Init_Cartisian_y(::unitree_interfaces::msg::Cartisian & msg)
  : msg_(msg)
  {}
  Init_Cartisian_z y(::unitree_interfaces::msg::Cartisian::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Cartisian_z(msg_);
  }

private:
  ::unitree_interfaces::msg::Cartisian msg_;
};

class Init_Cartisian_x
{
public:
  Init_Cartisian_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Cartisian_y x(::unitree_interfaces::msg::Cartisian::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Cartisian_y(msg_);
  }

private:
  ::unitree_interfaces::msg::Cartisian msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::unitree_interfaces::msg::Cartisian>()
{
  return unitree_interfaces::msg::builder::Init_Cartisian_x();
}

}  // namespace unitree_interfaces

#endif  // UNITREE_INTERFACES__MSG__DETAIL__CARTISIAN__BUILDER_HPP_
