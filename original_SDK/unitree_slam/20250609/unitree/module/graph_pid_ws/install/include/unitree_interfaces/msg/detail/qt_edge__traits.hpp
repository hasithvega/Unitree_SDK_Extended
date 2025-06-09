// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from unitree_interfaces:msg/QtEdge.idl
// generated code does not contain a copyright notice

#ifndef UNITREE_INTERFACES__MSG__DETAIL__QT_EDGE__TRAITS_HPP_
#define UNITREE_INTERFACES__MSG__DETAIL__QT_EDGE__TRAITS_HPP_

#include "unitree_interfaces/msg/detail/qt_edge__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'seq'
#include "std_msgs/msg/detail/string__traits.hpp"
// Member 'edge'
#include "graph_msg/msg/detail/edge__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<unitree_interfaces::msg::QtEdge>()
{
  return "unitree_interfaces::msg::QtEdge";
}

template<>
inline const char * name<unitree_interfaces::msg::QtEdge>()
{
  return "unitree_interfaces/msg/QtEdge";
}

template<>
struct has_fixed_size<unitree_interfaces::msg::QtEdge>
  : std::integral_constant<bool, has_fixed_size<graph_msg::msg::Edge>::value && has_fixed_size<std_msgs::msg::String>::value> {};

template<>
struct has_bounded_size<unitree_interfaces::msg::QtEdge>
  : std::integral_constant<bool, has_bounded_size<graph_msg::msg::Edge>::value && has_bounded_size<std_msgs::msg::String>::value> {};

template<>
struct is_message<unitree_interfaces::msg::QtEdge>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UNITREE_INTERFACES__MSG__DETAIL__QT_EDGE__TRAITS_HPP_
