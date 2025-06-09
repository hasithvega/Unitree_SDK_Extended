// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from graph_msg:msg/Node.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_MSG__MSG__DETAIL__NODE__BUILDER_HPP_
#define GRAPH_MSG__MSG__DETAIL__NODE__BUILDER_HPP_

#include "graph_msg/msg/detail/node__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace graph_msg
{

namespace msg
{

namespace builder
{

class Init_Node_node_state_list
{
public:
  explicit Init_Node_node_state_list(::graph_msg::msg::Node & msg)
  : msg_(msg)
  {}
  ::graph_msg::msg::Node node_state_list(::graph_msg::msg::Node::_node_state_list_type arg)
  {
    msg_.node_state_list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::graph_msg::msg::Node msg_;
};

class Init_Node_node_state_3
{
public:
  explicit Init_Node_node_state_3(::graph_msg::msg::Node & msg)
  : msg_(msg)
  {}
  Init_Node_node_state_list node_state_3(::graph_msg::msg::Node::_node_state_3_type arg)
  {
    msg_.node_state_3 = std::move(arg);
    return Init_Node_node_state_list(msg_);
  }

private:
  ::graph_msg::msg::Node msg_;
};

class Init_Node_node_state_2
{
public:
  explicit Init_Node_node_state_2(::graph_msg::msg::Node & msg)
  : msg_(msg)
  {}
  Init_Node_node_state_3 node_state_2(::graph_msg::msg::Node::_node_state_2_type arg)
  {
    msg_.node_state_2 = std::move(arg);
    return Init_Node_node_state_3(msg_);
  }

private:
  ::graph_msg::msg::Node msg_;
};

class Init_Node_undefined
{
public:
  explicit Init_Node_undefined(::graph_msg::msg::Node & msg)
  : msg_(msg)
  {}
  Init_Node_node_state_2 undefined(::graph_msg::msg::Node::_undefined_type arg)
  {
    msg_.undefined = std::move(arg);
    return Init_Node_node_state_2(msg_);
  }

private:
  ::graph_msg::msg::Node msg_;
};

class Init_Node_node_attribute
{
public:
  explicit Init_Node_node_attribute(::graph_msg::msg::Node & msg)
  : msg_(msg)
  {}
  Init_Node_undefined node_attribute(::graph_msg::msg::Node::_node_attribute_type arg)
  {
    msg_.node_attribute = std::move(arg);
    return Init_Node_undefined(msg_);
  }

private:
  ::graph_msg::msg::Node msg_;
};

class Init_Node_node_yaw
{
public:
  explicit Init_Node_node_yaw(::graph_msg::msg::Node & msg)
  : msg_(msg)
  {}
  Init_Node_node_attribute node_yaw(::graph_msg::msg::Node::_node_yaw_type arg)
  {
    msg_.node_yaw = std::move(arg);
    return Init_Node_node_attribute(msg_);
  }

private:
  ::graph_msg::msg::Node msg_;
};

class Init_Node_node_position_z
{
public:
  explicit Init_Node_node_position_z(::graph_msg::msg::Node & msg)
  : msg_(msg)
  {}
  Init_Node_node_yaw node_position_z(::graph_msg::msg::Node::_node_position_z_type arg)
  {
    msg_.node_position_z = std::move(arg);
    return Init_Node_node_yaw(msg_);
  }

private:
  ::graph_msg::msg::Node msg_;
};

class Init_Node_node_position_y
{
public:
  explicit Init_Node_node_position_y(::graph_msg::msg::Node & msg)
  : msg_(msg)
  {}
  Init_Node_node_position_z node_position_y(::graph_msg::msg::Node::_node_position_y_type arg)
  {
    msg_.node_position_y = std::move(arg);
    return Init_Node_node_position_z(msg_);
  }

private:
  ::graph_msg::msg::Node msg_;
};

class Init_Node_node_position_x
{
public:
  explicit Init_Node_node_position_x(::graph_msg::msg::Node & msg)
  : msg_(msg)
  {}
  Init_Node_node_position_y node_position_x(::graph_msg::msg::Node::_node_position_x_type arg)
  {
    msg_.node_position_x = std::move(arg);
    return Init_Node_node_position_y(msg_);
  }

private:
  ::graph_msg::msg::Node msg_;
};

class Init_Node_node_name
{
public:
  Init_Node_node_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Node_node_position_x node_name(::graph_msg::msg::Node::_node_name_type arg)
  {
    msg_.node_name = std::move(arg);
    return Init_Node_node_position_x(msg_);
  }

private:
  ::graph_msg::msg::Node msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::graph_msg::msg::Node>()
{
  return graph_msg::msg::builder::Init_Node_node_name();
}

}  // namespace graph_msg

#endif  // GRAPH_MSG__MSG__DETAIL__NODE__BUILDER_HPP_
