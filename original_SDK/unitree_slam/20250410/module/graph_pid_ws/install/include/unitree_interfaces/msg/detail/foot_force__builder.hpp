// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from unitree_interfaces:msg/FootForce.idl
// generated code does not contain a copyright notice

#ifndef UNITREE_INTERFACES__MSG__DETAIL__FOOT_FORCE__BUILDER_HPP_
#define UNITREE_INTERFACES__MSG__DETAIL__FOOT_FORCE__BUILDER_HPP_

#include "unitree_interfaces/msg/detail/foot_force__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace unitree_interfaces
{

namespace msg
{

namespace builder
{

class Init_FootForce_foot_force_estimated
{
public:
  explicit Init_FootForce_foot_force_estimated(::unitree_interfaces::msg::FootForce & msg)
  : msg_(msg)
  {}
  ::unitree_interfaces::msg::FootForce foot_force_estimated(::unitree_interfaces::msg::FootForce::_foot_force_estimated_type arg)
  {
    msg_.foot_force_estimated = std::move(arg);
    return std::move(msg_);
  }

private:
  ::unitree_interfaces::msg::FootForce msg_;
};

class Init_FootForce_foot_force
{
public:
  Init_FootForce_foot_force()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FootForce_foot_force_estimated foot_force(::unitree_interfaces::msg::FootForce::_foot_force_type arg)
  {
    msg_.foot_force = std::move(arg);
    return Init_FootForce_foot_force_estimated(msg_);
  }

private:
  ::unitree_interfaces::msg::FootForce msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::unitree_interfaces::msg::FootForce>()
{
  return unitree_interfaces::msg::builder::Init_FootForce_foot_force();
}

}  // namespace unitree_interfaces

#endif  // UNITREE_INTERFACES__MSG__DETAIL__FOOT_FORCE__BUILDER_HPP_
