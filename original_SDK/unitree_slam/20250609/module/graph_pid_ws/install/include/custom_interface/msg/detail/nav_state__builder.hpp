// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interface:msg/NavState.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACE__MSG__DETAIL__NAV_STATE__BUILDER_HPP_
#define CUSTOM_INTERFACE__MSG__DETAIL__NAV_STATE__BUILDER_HPP_

#include "custom_interface/msg/detail/nav_state__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_interface
{

namespace msg
{

namespace builder
{

class Init_NavState_state
{
public:
  explicit Init_NavState_state(::custom_interface::msg::NavState & msg)
  : msg_(msg)
  {}
  ::custom_interface::msg::NavState state(::custom_interface::msg::NavState::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interface::msg::NavState msg_;
};

class Init_NavState_id
{
public:
  Init_NavState_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavState_state id(::custom_interface::msg::NavState::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_NavState_state(msg_);
  }

private:
  ::custom_interface::msg::NavState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interface::msg::NavState>()
{
  return custom_interface::msg::builder::Init_NavState_id();
}

}  // namespace custom_interface

#endif  // CUSTOM_INTERFACE__MSG__DETAIL__NAV_STATE__BUILDER_HPP_
