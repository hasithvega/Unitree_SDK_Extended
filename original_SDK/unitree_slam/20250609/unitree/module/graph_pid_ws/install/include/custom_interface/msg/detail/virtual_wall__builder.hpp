// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interface:msg/VirtualWall.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACE__MSG__DETAIL__VIRTUAL_WALL__BUILDER_HPP_
#define CUSTOM_INTERFACE__MSG__DETAIL__VIRTUAL_WALL__BUILDER_HPP_

#include "custom_interface/msg/detail/virtual_wall__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_interface
{

namespace msg
{

namespace builder
{

class Init_VirtualWall_threshold
{
public:
  explicit Init_VirtualWall_threshold(::custom_interface::msg::VirtualWall & msg)
  : msg_(msg)
  {}
  ::custom_interface::msg::VirtualWall threshold(::custom_interface::msg::VirtualWall::_threshold_type arg)
  {
    msg_.threshold = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interface::msg::VirtualWall msg_;
};

class Init_VirtualWall_frame_end_y
{
public:
  explicit Init_VirtualWall_frame_end_y(::custom_interface::msg::VirtualWall & msg)
  : msg_(msg)
  {}
  Init_VirtualWall_threshold frame_end_y(::custom_interface::msg::VirtualWall::_frame_end_y_type arg)
  {
    msg_.frame_end_y = std::move(arg);
    return Init_VirtualWall_threshold(msg_);
  }

private:
  ::custom_interface::msg::VirtualWall msg_;
};

class Init_VirtualWall_frame_end_x
{
public:
  explicit Init_VirtualWall_frame_end_x(::custom_interface::msg::VirtualWall & msg)
  : msg_(msg)
  {}
  Init_VirtualWall_frame_end_y frame_end_x(::custom_interface::msg::VirtualWall::_frame_end_x_type arg)
  {
    msg_.frame_end_x = std::move(arg);
    return Init_VirtualWall_frame_end_y(msg_);
  }

private:
  ::custom_interface::msg::VirtualWall msg_;
};

class Init_VirtualWall_frame_start_y
{
public:
  explicit Init_VirtualWall_frame_start_y(::custom_interface::msg::VirtualWall & msg)
  : msg_(msg)
  {}
  Init_VirtualWall_frame_end_x frame_start_y(::custom_interface::msg::VirtualWall::_frame_start_y_type arg)
  {
    msg_.frame_start_y = std::move(arg);
    return Init_VirtualWall_frame_end_x(msg_);
  }

private:
  ::custom_interface::msg::VirtualWall msg_;
};

class Init_VirtualWall_frame_start_x
{
public:
  explicit Init_VirtualWall_frame_start_x(::custom_interface::msg::VirtualWall & msg)
  : msg_(msg)
  {}
  Init_VirtualWall_frame_start_y frame_start_x(::custom_interface::msg::VirtualWall::_frame_start_x_type arg)
  {
    msg_.frame_start_x = std::move(arg);
    return Init_VirtualWall_frame_start_y(msg_);
  }

private:
  ::custom_interface::msg::VirtualWall msg_;
};

class Init_VirtualWall_wall_type
{
public:
  Init_VirtualWall_wall_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VirtualWall_frame_start_x wall_type(::custom_interface::msg::VirtualWall::_wall_type_type arg)
  {
    msg_.wall_type = std::move(arg);
    return Init_VirtualWall_frame_start_x(msg_);
  }

private:
  ::custom_interface::msg::VirtualWall msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interface::msg::VirtualWall>()
{
  return custom_interface::msg::builder::Init_VirtualWall_wall_type();
}

}  // namespace custom_interface

#endif  // CUSTOM_INTERFACE__MSG__DETAIL__VIRTUAL_WALL__BUILDER_HPP_
