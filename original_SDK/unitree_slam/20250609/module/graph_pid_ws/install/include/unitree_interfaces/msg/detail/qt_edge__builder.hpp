// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from unitree_interfaces:msg/QtEdge.idl
// generated code does not contain a copyright notice

#ifndef UNITREE_INTERFACES__MSG__DETAIL__QT_EDGE__BUILDER_HPP_
#define UNITREE_INTERFACES__MSG__DETAIL__QT_EDGE__BUILDER_HPP_

#include "unitree_interfaces/msg/detail/qt_edge__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace unitree_interfaces
{

namespace msg
{

namespace builder
{

class Init_QtEdge_edge
{
public:
  explicit Init_QtEdge_edge(::unitree_interfaces::msg::QtEdge & msg)
  : msg_(msg)
  {}
  ::unitree_interfaces::msg::QtEdge edge(::unitree_interfaces::msg::QtEdge::_edge_type arg)
  {
    msg_.edge = std::move(arg);
    return std::move(msg_);
  }

private:
  ::unitree_interfaces::msg::QtEdge msg_;
};

class Init_QtEdge_seq
{
public:
  Init_QtEdge_seq()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_QtEdge_edge seq(::unitree_interfaces::msg::QtEdge::_seq_type arg)
  {
    msg_.seq = std::move(arg);
    return Init_QtEdge_edge(msg_);
  }

private:
  ::unitree_interfaces::msg::QtEdge msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::unitree_interfaces::msg::QtEdge>()
{
  return unitree_interfaces::msg::builder::Init_QtEdge_seq();
}

}  // namespace unitree_interfaces

#endif  // UNITREE_INTERFACES__MSG__DETAIL__QT_EDGE__BUILDER_HPP_
