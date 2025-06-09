// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from graph_msg:msg/MutirobotData.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_MSG__MSG__DETAIL__MUTIROBOT_DATA__TRAITS_HPP_
#define GRAPH_MSG__MSG__DETAIL__MUTIROBOT_DATA__TRAITS_HPP_

#include "graph_msg/msg/detail/mutirobot_data__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'robotid'
#include "std_msgs/msg/detail/int64__traits.hpp"
// Member 'data'
#include "std_msgs/msg/detail/string__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<graph_msg::msg::MutirobotData>()
{
  return "graph_msg::msg::MutirobotData";
}

template<>
inline const char * name<graph_msg::msg::MutirobotData>()
{
  return "graph_msg/msg/MutirobotData";
}

template<>
struct has_fixed_size<graph_msg::msg::MutirobotData>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Int64>::value && has_fixed_size<std_msgs::msg::String>::value> {};

template<>
struct has_bounded_size<graph_msg::msg::MutirobotData>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Int64>::value && has_bounded_size<std_msgs::msg::String>::value> {};

template<>
struct is_message<graph_msg::msg::MutirobotData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GRAPH_MSG__MSG__DETAIL__MUTIROBOT_DATA__TRAITS_HPP_
