// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from graph_msg:msg/Edge.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_MSG__MSG__DETAIL__EDGE__BUILDER_HPP_
#define GRAPH_MSG__MSG__DETAIL__EDGE__BUILDER_HPP_

#include "graph_msg/msg/detail/edge__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace graph_msg
{

namespace msg
{

namespace builder
{

class Init_Edge_edge_state_list
{
public:
  explicit Init_Edge_edge_state_list(::graph_msg::msg::Edge & msg)
  : msg_(msg)
  {}
  ::graph_msg::msg::Edge edge_state_list(::graph_msg::msg::Edge::_edge_state_list_type arg)
  {
    msg_.edge_state_list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::graph_msg::msg::Edge msg_;
};

class Init_Edge_edge_state_4
{
public:
  explicit Init_Edge_edge_state_4(::graph_msg::msg::Edge & msg)
  : msg_(msg)
  {}
  Init_Edge_edge_state_list edge_state_4(::graph_msg::msg::Edge::_edge_state_4_type arg)
  {
    msg_.edge_state_4 = std::move(arg);
    return Init_Edge_edge_state_list(msg_);
  }

private:
  ::graph_msg::msg::Edge msg_;
};

class Init_Edge_edge_state_3
{
public:
  explicit Init_Edge_edge_state_3(::graph_msg::msg::Edge & msg)
  : msg_(msg)
  {}
  Init_Edge_edge_state_4 edge_state_3(::graph_msg::msg::Edge::_edge_state_3_type arg)
  {
    msg_.edge_state_3 = std::move(arg);
    return Init_Edge_edge_state_4(msg_);
  }

private:
  ::graph_msg::msg::Edge msg_;
};

class Init_Edge_edge_state_2
{
public:
  explicit Init_Edge_edge_state_2(::graph_msg::msg::Edge & msg)
  : msg_(msg)
  {}
  Init_Edge_edge_state_3 edge_state_2(::graph_msg::msg::Edge::_edge_state_2_type arg)
  {
    msg_.edge_state_2 = std::move(arg);
    return Init_Edge_edge_state_3(msg_);
  }

private:
  ::graph_msg::msg::Edge msg_;
};

class Init_Edge_edge_state_1
{
public:
  explicit Init_Edge_edge_state_1(::graph_msg::msg::Edge & msg)
  : msg_(msg)
  {}
  Init_Edge_edge_state_2 edge_state_1(::graph_msg::msg::Edge::_edge_state_1_type arg)
  {
    msg_.edge_state_1 = std::move(arg);
    return Init_Edge_edge_state_2(msg_);
  }

private:
  ::graph_msg::msg::Edge msg_;
};

class Init_Edge_edge_state
{
public:
  explicit Init_Edge_edge_state(::graph_msg::msg::Edge & msg)
  : msg_(msg)
  {}
  Init_Edge_edge_state_1 edge_state(::graph_msg::msg::Edge::_edge_state_type arg)
  {
    msg_.edge_state = std::move(arg);
    return Init_Edge_edge_state_1(msg_);
  }

private:
  ::graph_msg::msg::Edge msg_;
};

class Init_Edge_dog_speed
{
public:
  explicit Init_Edge_dog_speed(::graph_msg::msg::Edge & msg)
  : msg_(msg)
  {}
  Init_Edge_edge_state dog_speed(::graph_msg::msg::Edge::_dog_speed_type arg)
  {
    msg_.dog_speed = std::move(arg);
    return Init_Edge_edge_state(msg_);
  }

private:
  ::graph_msg::msg::Edge msg_;
};

class Init_Edge_dog_back_stats
{
public:
  explicit Init_Edge_dog_back_stats(::graph_msg::msg::Edge & msg)
  : msg_(msg)
  {}
  Init_Edge_dog_speed dog_back_stats(::graph_msg::msg::Edge::_dog_back_stats_type arg)
  {
    msg_.dog_back_stats = std::move(arg);
    return Init_Edge_dog_speed(msg_);
  }

private:
  ::graph_msg::msg::Edge msg_;
};

class Init_Edge_dog_stats
{
public:
  explicit Init_Edge_dog_stats(::graph_msg::msg::Edge & msg)
  : msg_(msg)
  {}
  Init_Edge_dog_back_stats dog_stats(::graph_msg::msg::Edge::_dog_stats_type arg)
  {
    msg_.dog_stats = std::move(arg);
    return Init_Edge_dog_back_stats(msg_);
  }

private:
  ::graph_msg::msg::Edge msg_;
};

class Init_Edge_edge_length
{
public:
  explicit Init_Edge_edge_length(::graph_msg::msg::Edge & msg)
  : msg_(msg)
  {}
  Init_Edge_dog_stats edge_length(::graph_msg::msg::Edge::_edge_length_type arg)
  {
    msg_.edge_length = std::move(arg);
    return Init_Edge_dog_stats(msg_);
  }

private:
  ::graph_msg::msg::Edge msg_;
};

class Init_Edge_end_node_name
{
public:
  explicit Init_Edge_end_node_name(::graph_msg::msg::Edge & msg)
  : msg_(msg)
  {}
  Init_Edge_edge_length end_node_name(::graph_msg::msg::Edge::_end_node_name_type arg)
  {
    msg_.end_node_name = std::move(arg);
    return Init_Edge_edge_length(msg_);
  }

private:
  ::graph_msg::msg::Edge msg_;
};

class Init_Edge_start_node_name
{
public:
  explicit Init_Edge_start_node_name(::graph_msg::msg::Edge & msg)
  : msg_(msg)
  {}
  Init_Edge_end_node_name start_node_name(::graph_msg::msg::Edge::_start_node_name_type arg)
  {
    msg_.start_node_name = std::move(arg);
    return Init_Edge_end_node_name(msg_);
  }

private:
  ::graph_msg::msg::Edge msg_;
};

class Init_Edge_edge_name
{
public:
  Init_Edge_edge_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Edge_start_node_name edge_name(::graph_msg::msg::Edge::_edge_name_type arg)
  {
    msg_.edge_name = std::move(arg);
    return Init_Edge_start_node_name(msg_);
  }

private:
  ::graph_msg::msg::Edge msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::graph_msg::msg::Edge>()
{
  return graph_msg::msg::builder::Init_Edge_edge_name();
}

}  // namespace graph_msg

#endif  // GRAPH_MSG__MSG__DETAIL__EDGE__BUILDER_HPP_
