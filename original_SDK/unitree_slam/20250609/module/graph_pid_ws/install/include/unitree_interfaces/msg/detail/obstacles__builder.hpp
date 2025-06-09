// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from unitree_interfaces:msg/Obstacles.idl
// generated code does not contain a copyright notice

#ifndef UNITREE_INTERFACES__MSG__DETAIL__OBSTACLES__BUILDER_HPP_
#define UNITREE_INTERFACES__MSG__DETAIL__OBSTACLES__BUILDER_HPP_

#include "unitree_interfaces/msg/detail/obstacles__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace unitree_interfaces
{

namespace msg
{

namespace builder
{

class Init_Obstacles_obstacle
{
public:
  Init_Obstacles_obstacle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::unitree_interfaces::msg::Obstacles obstacle(::unitree_interfaces::msg::Obstacles::_obstacle_type arg)
  {
    msg_.obstacle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::unitree_interfaces::msg::Obstacles msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::unitree_interfaces::msg::Obstacles>()
{
  return unitree_interfaces::msg::builder::Init_Obstacles_obstacle();
}

}  // namespace unitree_interfaces

#endif  // UNITREE_INTERFACES__MSG__DETAIL__OBSTACLES__BUILDER_HPP_
