// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from graph_msg:msg/MutirobotMission.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_MSG__MSG__DETAIL__MUTIROBOT_MISSION__TRAITS_HPP_
#define GRAPH_MSG__MSG__DETAIL__MUTIROBOT_MISSION__TRAITS_HPP_

#include "graph_msg/msg/detail/mutirobot_mission__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'robotid'
// Member 'missionid'
// Member 'missionstate'
#include "std_msgs/msg/detail/int64__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<graph_msg::msg::MutirobotMission>()
{
  return "graph_msg::msg::MutirobotMission";
}

template<>
inline const char * name<graph_msg::msg::MutirobotMission>()
{
  return "graph_msg/msg/MutirobotMission";
}

template<>
struct has_fixed_size<graph_msg::msg::MutirobotMission>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Int64>::value> {};

template<>
struct has_bounded_size<graph_msg::msg::MutirobotMission>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Int64>::value> {};

template<>
struct is_message<graph_msg::msg::MutirobotMission>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GRAPH_MSG__MSG__DETAIL__MUTIROBOT_MISSION__TRAITS_HPP_
