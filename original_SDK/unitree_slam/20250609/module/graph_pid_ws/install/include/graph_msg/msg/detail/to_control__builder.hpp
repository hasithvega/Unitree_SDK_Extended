// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from graph_msg:msg/ToControl.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_MSG__MSG__DETAIL__TO_CONTROL__BUILDER_HPP_
#define GRAPH_MSG__MSG__DETAIL__TO_CONTROL__BUILDER_HPP_

#include "graph_msg/msg/detail/to_control__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace graph_msg
{

namespace msg
{

namespace builder
{

class Init_ToControl_undefined
{
public:
  explicit Init_ToControl_undefined(::graph_msg::msg::ToControl & msg)
  : msg_(msg)
  {}
  ::graph_msg::msg::ToControl undefined(::graph_msg::msg::ToControl::_undefined_type arg)
  {
    msg_.undefined = std::move(arg);
    return std::move(msg_);
  }

private:
  ::graph_msg::msg::ToControl msg_;
};

class Init_ToControl_back_flag
{
public:
  explicit Init_ToControl_back_flag(::graph_msg::msg::ToControl & msg)
  : msg_(msg)
  {}
  Init_ToControl_undefined back_flag(::graph_msg::msg::ToControl::_back_flag_type arg)
  {
    msg_.back_flag = std::move(arg);
    return Init_ToControl_undefined(msg_);
  }

private:
  ::graph_msg::msg::ToControl msg_;
};

class Init_ToControl_err_flag
{
public:
  explicit Init_ToControl_err_flag(::graph_msg::msg::ToControl & msg)
  : msg_(msg)
  {}
  Init_ToControl_back_flag err_flag(::graph_msg::msg::ToControl::_err_flag_type arg)
  {
    msg_.err_flag = std::move(arg);
    return Init_ToControl_back_flag(msg_);
  }

private:
  ::graph_msg::msg::ToControl msg_;
};

class Init_ToControl_goal_flag
{
public:
  explicit Init_ToControl_goal_flag(::graph_msg::msg::ToControl & msg)
  : msg_(msg)
  {}
  Init_ToControl_err_flag goal_flag(::graph_msg::msg::ToControl::_goal_flag_type arg)
  {
    msg_.goal_flag = std::move(arg);
    return Init_ToControl_err_flag(msg_);
  }

private:
  ::graph_msg::msg::ToControl msg_;
};

class Init_ToControl_edge
{
public:
  explicit Init_ToControl_edge(::graph_msg::msg::ToControl & msg)
  : msg_(msg)
  {}
  Init_ToControl_goal_flag edge(::graph_msg::msg::ToControl::_edge_type arg)
  {
    msg_.edge = std::move(arg);
    return Init_ToControl_goal_flag(msg_);
  }

private:
  ::graph_msg::msg::ToControl msg_;
};

class Init_ToControl_node
{
public:
  explicit Init_ToControl_node(::graph_msg::msg::ToControl & msg)
  : msg_(msg)
  {}
  Init_ToControl_edge node(::graph_msg::msg::ToControl::_node_type arg)
  {
    msg_.node = std::move(arg);
    return Init_ToControl_edge(msg_);
  }

private:
  ::graph_msg::msg::ToControl msg_;
};

class Init_ToControl_header
{
public:
  Init_ToControl_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ToControl_node header(::graph_msg::msg::ToControl::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ToControl_node(msg_);
  }

private:
  ::graph_msg::msg::ToControl msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::graph_msg::msg::ToControl>()
{
  return graph_msg::msg::builder::Init_ToControl_header();
}

}  // namespace graph_msg

#endif  // GRAPH_MSG__MSG__DETAIL__TO_CONTROL__BUILDER_HPP_
