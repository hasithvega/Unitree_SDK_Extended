// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from graph_msg:msg/Graph.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_MSG__MSG__DETAIL__GRAPH__TRAITS_HPP_
#define GRAPH_MSG__MSG__DETAIL__GRAPH__TRAITS_HPP_

#include "graph_msg/msg/detail/graph__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'node'
#include "graph_msg/msg/detail/node__traits.hpp"
// Member 'edge'
#include "graph_msg/msg/detail/edge__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<graph_msg::msg::Graph>()
{
  return "graph_msg::msg::Graph";
}

template<>
inline const char * name<graph_msg::msg::Graph>()
{
  return "graph_msg/msg/Graph";
}

template<>
struct has_fixed_size<graph_msg::msg::Graph>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<graph_msg::msg::Graph>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<graph_msg::msg::Graph>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GRAPH_MSG__MSG__DETAIL__GRAPH__TRAITS_HPP_
