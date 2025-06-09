// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from unitree_interfaces:msg/BmsCmd.idl
// generated code does not contain a copyright notice

#ifndef UNITREE_INTERFACES__MSG__DETAIL__BMS_CMD__BUILDER_HPP_
#define UNITREE_INTERFACES__MSG__DETAIL__BMS_CMD__BUILDER_HPP_

#include "unitree_interfaces/msg/detail/bms_cmd__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace unitree_interfaces
{

namespace msg
{

namespace builder
{

class Init_BmsCmd_off
{
public:
  Init_BmsCmd_off()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::unitree_interfaces::msg::BmsCmd off(::unitree_interfaces::msg::BmsCmd::_off_type arg)
  {
    msg_.off = std::move(arg);
    return std::move(msg_);
  }

private:
  ::unitree_interfaces::msg::BmsCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::unitree_interfaces::msg::BmsCmd>()
{
  return unitree_interfaces::msg::builder::Init_BmsCmd_off();
}

}  // namespace unitree_interfaces

#endif  // UNITREE_INTERFACES__MSG__DETAIL__BMS_CMD__BUILDER_HPP_
