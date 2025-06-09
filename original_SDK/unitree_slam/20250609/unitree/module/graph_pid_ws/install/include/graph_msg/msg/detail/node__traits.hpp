// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from graph_msg:msg/Node.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_MSG__MSG__DETAIL__NODE__TRAITS_HPP_
#define GRAPH_MSG__MSG__DETAIL__NODE__TRAITS_HPP_

#include "graph_msg/msg/detail/node__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<graph_msg::msg::Node>()
{
  return "graph_msg::msg::Node";
}

template<>
inline const char * name<graph_msg::msg::Node>()
{
  return "graph_msg/msg/Node";
}

template<>
struct has_fixed_size<graph_msg::msg::Node>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<graph_msg::msg::Node>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<graph_msg::msg::Node>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GRAPH_MSG__MSG__DETAIL__NODE__TRAITS_HPP_
