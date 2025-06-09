// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from graph_msg:msg/UnitreeCommond.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_MSG__MSG__DETAIL__UNITREE_COMMOND__BUILDER_HPP_
#define GRAPH_MSG__MSG__DETAIL__UNITREE_COMMOND__BUILDER_HPP_

#include "graph_msg/msg/detail/unitree_commond__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace graph_msg
{

namespace msg
{

namespace builder
{

class Init_UnitreeCommond_faild_flag
{
public:
  explicit Init_UnitreeCommond_faild_flag(::graph_msg::msg::UnitreeCommond & msg)
  : msg_(msg)
  {}
  ::graph_msg::msg::UnitreeCommond faild_flag(::graph_msg::msg::UnitreeCommond::_faild_flag_type arg)
  {
    msg_.faild_flag = std::move(arg);
    return std::move(msg_);
  }

private:
  ::graph_msg::msg::UnitreeCommond msg_;
};

class Init_UnitreeCommond_seq
{
public:
  explicit Init_UnitreeCommond_seq(::graph_msg::msg::UnitreeCommond & msg)
  : msg_(msg)
  {}
  Init_UnitreeCommond_faild_flag seq(::graph_msg::msg::UnitreeCommond::_seq_type arg)
  {
    msg_.seq = std::move(arg);
    return Init_UnitreeCommond_faild_flag(msg_);
  }

private:
  ::graph_msg::msg::UnitreeCommond msg_;
};

class Init_UnitreeCommond_cmd
{
public:
  Init_UnitreeCommond_cmd()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UnitreeCommond_seq cmd(::graph_msg::msg::UnitreeCommond::_cmd_type arg)
  {
    msg_.cmd = std::move(arg);
    return Init_UnitreeCommond_seq(msg_);
  }

private:
  ::graph_msg::msg::UnitreeCommond msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::graph_msg::msg::UnitreeCommond>()
{
  return graph_msg::msg::builder::Init_UnitreeCommond_cmd();
}

}  // namespace graph_msg

#endif  // GRAPH_MSG__MSG__DETAIL__UNITREE_COMMOND__BUILDER_HPP_
