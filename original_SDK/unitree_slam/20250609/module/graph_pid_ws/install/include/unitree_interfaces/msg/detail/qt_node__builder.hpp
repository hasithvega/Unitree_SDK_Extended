// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from unitree_interfaces:msg/QtNode.idl
// generated code does not contain a copyright notice

#ifndef UNITREE_INTERFACES__MSG__DETAIL__QT_NODE__BUILDER_HPP_
#define UNITREE_INTERFACES__MSG__DETAIL__QT_NODE__BUILDER_HPP_

#include "unitree_interfaces/msg/detail/qt_node__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace unitree_interfaces
{

namespace msg
{

namespace builder
{

class Init_QtNode_node
{
public:
  explicit Init_QtNode_node(::unitree_interfaces::msg::QtNode & msg)
  : msg_(msg)
  {}
  ::unitree_interfaces::msg::QtNode node(::unitree_interfaces::msg::QtNode::_node_type arg)
  {
    msg_.node = std::move(arg);
    return std::move(msg_);
  }

private:
  ::unitree_interfaces::msg::QtNode msg_;
};

class Init_QtNode_seq
{
public:
  Init_QtNode_seq()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_QtNode_node seq(::unitree_interfaces::msg::QtNode::_seq_type arg)
  {
    msg_.seq = std::move(arg);
    return Init_QtNode_node(msg_);
  }

private:
  ::unitree_interfaces::msg::QtNode msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::unitree_interfaces::msg::QtNode>()
{
  return unitree_interfaces::msg::builder::Init_QtNode_seq();
}

}  // namespace unitree_interfaces

#endif  // UNITREE_INTERFACES__MSG__DETAIL__QT_NODE__BUILDER_HPP_
