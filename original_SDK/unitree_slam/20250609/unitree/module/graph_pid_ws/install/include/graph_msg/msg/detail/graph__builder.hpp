// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from graph_msg:msg/Graph.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_MSG__MSG__DETAIL__GRAPH__BUILDER_HPP_
#define GRAPH_MSG__MSG__DETAIL__GRAPH__BUILDER_HPP_

#include "graph_msg/msg/detail/graph__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace graph_msg
{

namespace msg
{

namespace builder
{

class Init_Graph_undefined
{
public:
  explicit Init_Graph_undefined(::graph_msg::msg::Graph & msg)
  : msg_(msg)
  {}
  ::graph_msg::msg::Graph undefined(::graph_msg::msg::Graph::_undefined_type arg)
  {
    msg_.undefined = std::move(arg);
    return std::move(msg_);
  }

private:
  ::graph_msg::msg::Graph msg_;
};

class Init_Graph_edge
{
public:
  explicit Init_Graph_edge(::graph_msg::msg::Graph & msg)
  : msg_(msg)
  {}
  Init_Graph_undefined edge(::graph_msg::msg::Graph::_edge_type arg)
  {
    msg_.edge = std::move(arg);
    return Init_Graph_undefined(msg_);
  }

private:
  ::graph_msg::msg::Graph msg_;
};

class Init_Graph_node
{
public:
  explicit Init_Graph_node(::graph_msg::msg::Graph & msg)
  : msg_(msg)
  {}
  Init_Graph_edge node(::graph_msg::msg::Graph::_node_type arg)
  {
    msg_.node = std::move(arg);
    return Init_Graph_edge(msg_);
  }

private:
  ::graph_msg::msg::Graph msg_;
};

class Init_Graph_edge_num
{
public:
  explicit Init_Graph_edge_num(::graph_msg::msg::Graph & msg)
  : msg_(msg)
  {}
  Init_Graph_node edge_num(::graph_msg::msg::Graph::_edge_num_type arg)
  {
    msg_.edge_num = std::move(arg);
    return Init_Graph_node(msg_);
  }

private:
  ::graph_msg::msg::Graph msg_;
};

class Init_Graph_node_num
{
public:
  explicit Init_Graph_node_num(::graph_msg::msg::Graph & msg)
  : msg_(msg)
  {}
  Init_Graph_edge_num node_num(::graph_msg::msg::Graph::_node_num_type arg)
  {
    msg_.node_num = std::move(arg);
    return Init_Graph_edge_num(msg_);
  }

private:
  ::graph_msg::msg::Graph msg_;
};

class Init_Graph_flag
{
public:
  explicit Init_Graph_flag(::graph_msg::msg::Graph & msg)
  : msg_(msg)
  {}
  Init_Graph_node_num flag(::graph_msg::msg::Graph::_flag_type arg)
  {
    msg_.flag = std::move(arg);
    return Init_Graph_node_num(msg_);
  }

private:
  ::graph_msg::msg::Graph msg_;
};

class Init_Graph_header
{
public:
  Init_Graph_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Graph_flag header(::graph_msg::msg::Graph::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Graph_flag(msg_);
  }

private:
  ::graph_msg::msg::Graph msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::graph_msg::msg::Graph>()
{
  return graph_msg::msg::builder::Init_Graph_header();
}

}  // namespace graph_msg

#endif  // GRAPH_MSG__MSG__DETAIL__GRAPH__BUILDER_HPP_
