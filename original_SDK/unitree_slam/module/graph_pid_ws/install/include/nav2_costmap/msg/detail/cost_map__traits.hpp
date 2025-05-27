// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nav2_costmap:msg/CostMap.idl
// generated code does not contain a copyright notice

#ifndef NAV2_COSTMAP__MSG__DETAIL__COST_MAP__TRAITS_HPP_
#define NAV2_COSTMAP__MSG__DETAIL__COST_MAP__TRAITS_HPP_

#include "nav2_costmap/msg/detail/cost_map__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'origin'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nav2_costmap::msg::CostMap>()
{
  return "nav2_costmap::msg::CostMap";
}

template<>
inline const char * name<nav2_costmap::msg::CostMap>()
{
  return "nav2_costmap/msg/CostMap";
}

template<>
struct has_fixed_size<nav2_costmap::msg::CostMap>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<nav2_costmap::msg::CostMap>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<nav2_costmap::msg::CostMap>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NAV2_COSTMAP__MSG__DETAIL__COST_MAP__TRAITS_HPP_
