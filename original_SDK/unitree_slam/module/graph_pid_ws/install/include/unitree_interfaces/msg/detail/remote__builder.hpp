// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from unitree_interfaces:msg/Remote.idl
// generated code does not contain a copyright notice

#ifndef UNITREE_INTERFACES__MSG__DETAIL__REMOTE__BUILDER_HPP_
#define UNITREE_INTERFACES__MSG__DETAIL__REMOTE__BUILDER_HPP_

#include "unitree_interfaces/msg/detail/remote__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace unitree_interfaces
{

namespace msg
{

namespace builder
{

class Init_Remote_remote_data
{
public:
  Init_Remote_remote_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::unitree_interfaces::msg::Remote remote_data(::unitree_interfaces::msg::Remote::_remote_data_type arg)
  {
    msg_.remote_data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::unitree_interfaces::msg::Remote msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::unitree_interfaces::msg::Remote>()
{
  return unitree_interfaces::msg::builder::Init_Remote_remote_data();
}

}  // namespace unitree_interfaces

#endif  // UNITREE_INTERFACES__MSG__DETAIL__REMOTE__BUILDER_HPP_
