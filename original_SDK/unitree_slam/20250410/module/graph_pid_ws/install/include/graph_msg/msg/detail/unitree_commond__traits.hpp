// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from graph_msg:msg/UnitreeCommond.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_MSG__MSG__DETAIL__UNITREE_COMMOND__TRAITS_HPP_
#define GRAPH_MSG__MSG__DETAIL__UNITREE_COMMOND__TRAITS_HPP_

#include "graph_msg/msg/detail/unitree_commond__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'cmd'
// Member 'seq'
#include "std_msgs/msg/detail/string__traits.hpp"
// Member 'faild_flag'
#include "std_msgs/msg/detail/int8__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<graph_msg::msg::UnitreeCommond>()
{
  return "graph_msg::msg::UnitreeCommond";
}

template<>
inline const char * name<graph_msg::msg::UnitreeCommond>()
{
  return "graph_msg/msg/UnitreeCommond";
}

template<>
struct has_fixed_size<graph_msg::msg::UnitreeCommond>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Int8>::value && has_fixed_size<std_msgs::msg::String>::value> {};

template<>
struct has_bounded_size<graph_msg::msg::UnitreeCommond>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Int8>::value && has_bounded_size<std_msgs::msg::String>::value> {};

template<>
struct is_message<graph_msg::msg::UnitreeCommond>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GRAPH_MSG__MSG__DETAIL__UNITREE_COMMOND__TRAITS_HPP_
