// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from graph_msg:msg/UnitreeError.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_MSG__MSG__DETAIL__UNITREE_ERROR__BUILDER_HPP_
#define GRAPH_MSG__MSG__DETAIL__UNITREE_ERROR__BUILDER_HPP_

#include "graph_msg/msg/detail/unitree_error__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace graph_msg
{

namespace msg
{

namespace builder
{

class Init_UnitreeError_error_flag
{
public:
  explicit Init_UnitreeError_error_flag(::graph_msg::msg::UnitreeError & msg)
  : msg_(msg)
  {}
  ::graph_msg::msg::UnitreeError error_flag(::graph_msg::msg::UnitreeError::_error_flag_type arg)
  {
    msg_.error_flag = std::move(arg);
    return std::move(msg_);
  }

private:
  ::graph_msg::msg::UnitreeError msg_;
};

class Init_UnitreeError_error_log
{
public:
  Init_UnitreeError_error_log()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UnitreeError_error_flag error_log(::graph_msg::msg::UnitreeError::_error_log_type arg)
  {
    msg_.error_log = std::move(arg);
    return Init_UnitreeError_error_flag(msg_);
  }

private:
  ::graph_msg::msg::UnitreeError msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::graph_msg::msg::UnitreeError>()
{
  return graph_msg::msg::builder::Init_UnitreeError_error_log();
}

}  // namespace graph_msg

#endif  // GRAPH_MSG__MSG__DETAIL__UNITREE_ERROR__BUILDER_HPP_
