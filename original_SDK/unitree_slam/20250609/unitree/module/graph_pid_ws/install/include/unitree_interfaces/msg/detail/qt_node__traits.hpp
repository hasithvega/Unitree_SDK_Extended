// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from unitree_interfaces:msg/QtNode.idl
// generated code does not contain a copyright notice

#ifndef UNITREE_INTERFACES__MSG__DETAIL__QT_NODE__TRAITS_HPP_
#define UNITREE_INTERFACES__MSG__DETAIL__QT_NODE__TRAITS_HPP_

#include "unitree_interfaces/msg/detail/qt_node__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'seq'
#include "std_msgs/msg/detail/string__traits.hpp"
// Member 'node'
#include "graph_msg/msg/detail/node__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<unitree_interfaces::msg::QtNode>()
{
  return "unitree_interfaces::msg::QtNode";
}

template<>
inline const char * name<unitree_interfaces::msg::QtNode>()
{
  return "unitree_interfaces/msg/QtNode";
}

template<>
struct has_fixed_size<unitree_interfaces::msg::QtNode>
  : std::integral_constant<bool, has_fixed_size<graph_msg::msg::Node>::value && has_fixed_size<std_msgs::msg::String>::value> {};

template<>
struct has_bounded_size<unitree_interfaces::msg::QtNode>
  : std::integral_constant<bool, has_bounded_size<graph_msg::msg::Node>::value && has_bounded_size<std_msgs::msg::String>::value> {};

template<>
struct is_message<unitree_interfaces::msg::QtNode>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UNITREE_INTERFACES__MSG__DETAIL__QT_NODE__TRAITS_HPP_
