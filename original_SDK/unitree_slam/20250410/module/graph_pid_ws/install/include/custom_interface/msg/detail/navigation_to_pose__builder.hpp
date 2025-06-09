// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interface:msg/NavigationToPose.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACE__MSG__DETAIL__NAVIGATION_TO_POSE__BUILDER_HPP_
#define CUSTOM_INTERFACE__MSG__DETAIL__NAVIGATION_TO_POSE__BUILDER_HPP_

#include "custom_interface/msg/detail/navigation_to_pose__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_interface
{

namespace msg
{

namespace builder
{

class Init_NavigationToPose_quat_w
{
public:
  explicit Init_NavigationToPose_quat_w(::custom_interface::msg::NavigationToPose & msg)
  : msg_(msg)
  {}
  ::custom_interface::msg::NavigationToPose quat_w(::custom_interface::msg::NavigationToPose::_quat_w_type arg)
  {
    msg_.quat_w = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interface::msg::NavigationToPose msg_;
};

class Init_NavigationToPose_quat_z
{
public:
  explicit Init_NavigationToPose_quat_z(::custom_interface::msg::NavigationToPose & msg)
  : msg_(msg)
  {}
  Init_NavigationToPose_quat_w quat_z(::custom_interface::msg::NavigationToPose::_quat_z_type arg)
  {
    msg_.quat_z = std::move(arg);
    return Init_NavigationToPose_quat_w(msg_);
  }

private:
  ::custom_interface::msg::NavigationToPose msg_;
};

class Init_NavigationToPose_quat_y
{
public:
  explicit Init_NavigationToPose_quat_y(::custom_interface::msg::NavigationToPose & msg)
  : msg_(msg)
  {}
  Init_NavigationToPose_quat_z quat_y(::custom_interface::msg::NavigationToPose::_quat_y_type arg)
  {
    msg_.quat_y = std::move(arg);
    return Init_NavigationToPose_quat_z(msg_);
  }

private:
  ::custom_interface::msg::NavigationToPose msg_;
};

class Init_NavigationToPose_quat_x
{
public:
  explicit Init_NavigationToPose_quat_x(::custom_interface::msg::NavigationToPose & msg)
  : msg_(msg)
  {}
  Init_NavigationToPose_quat_y quat_x(::custom_interface::msg::NavigationToPose::_quat_x_type arg)
  {
    msg_.quat_x = std::move(arg);
    return Init_NavigationToPose_quat_y(msg_);
  }

private:
  ::custom_interface::msg::NavigationToPose msg_;
};

class Init_NavigationToPose_pose_z
{
public:
  explicit Init_NavigationToPose_pose_z(::custom_interface::msg::NavigationToPose & msg)
  : msg_(msg)
  {}
  Init_NavigationToPose_quat_x pose_z(::custom_interface::msg::NavigationToPose::_pose_z_type arg)
  {
    msg_.pose_z = std::move(arg);
    return Init_NavigationToPose_quat_x(msg_);
  }

private:
  ::custom_interface::msg::NavigationToPose msg_;
};

class Init_NavigationToPose_pose_y
{
public:
  explicit Init_NavigationToPose_pose_y(::custom_interface::msg::NavigationToPose & msg)
  : msg_(msg)
  {}
  Init_NavigationToPose_pose_z pose_y(::custom_interface::msg::NavigationToPose::_pose_y_type arg)
  {
    msg_.pose_y = std::move(arg);
    return Init_NavigationToPose_pose_z(msg_);
  }

private:
  ::custom_interface::msg::NavigationToPose msg_;
};

class Init_NavigationToPose_pose_x
{
public:
  explicit Init_NavigationToPose_pose_x(::custom_interface::msg::NavigationToPose & msg)
  : msg_(msg)
  {}
  Init_NavigationToPose_pose_y pose_x(::custom_interface::msg::NavigationToPose::_pose_x_type arg)
  {
    msg_.pose_x = std::move(arg);
    return Init_NavigationToPose_pose_y(msg_);
  }

private:
  ::custom_interface::msg::NavigationToPose msg_;
};

class Init_NavigationToPose_id
{
public:
  Init_NavigationToPose_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigationToPose_pose_x id(::custom_interface::msg::NavigationToPose::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_NavigationToPose_pose_x(msg_);
  }

private:
  ::custom_interface::msg::NavigationToPose msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interface::msg::NavigationToPose>()
{
  return custom_interface::msg::builder::Init_NavigationToPose_id();
}

}  // namespace custom_interface

#endif  // CUSTOM_INTERFACE__MSG__DETAIL__NAVIGATION_TO_POSE__BUILDER_HPP_
