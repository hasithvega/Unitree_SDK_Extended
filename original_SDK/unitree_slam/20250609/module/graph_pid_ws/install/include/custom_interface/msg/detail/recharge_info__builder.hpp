// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interface:msg/RechargeInfo.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACE__MSG__DETAIL__RECHARGE_INFO__BUILDER_HPP_
#define CUSTOM_INTERFACE__MSG__DETAIL__RECHARGE_INFO__BUILDER_HPP_

#include "custom_interface/msg/detail/recharge_info__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_interface
{

namespace msg
{

namespace builder
{

class Init_RechargeInfo_target_pose
{
public:
  explicit Init_RechargeInfo_target_pose(::custom_interface::msg::RechargeInfo & msg)
  : msg_(msg)
  {}
  ::custom_interface::msg::RechargeInfo target_pose(::custom_interface::msg::RechargeInfo::_target_pose_type arg)
  {
    msg_.target_pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interface::msg::RechargeInfo msg_;
};

class Init_RechargeInfo_start_flag
{
public:
  Init_RechargeInfo_start_flag()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RechargeInfo_target_pose start_flag(::custom_interface::msg::RechargeInfo::_start_flag_type arg)
  {
    msg_.start_flag = std::move(arg);
    return Init_RechargeInfo_target_pose(msg_);
  }

private:
  ::custom_interface::msg::RechargeInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interface::msg::RechargeInfo>()
{
  return custom_interface::msg::builder::Init_RechargeInfo_start_flag();
}

}  // namespace custom_interface

#endif  // CUSTOM_INTERFACE__MSG__DETAIL__RECHARGE_INFO__BUILDER_HPP_
