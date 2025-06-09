// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_interface:msg/RechargeInfo.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACE__MSG__DETAIL__RECHARGE_INFO__TRAITS_HPP_
#define CUSTOM_INTERFACE__MSG__DETAIL__RECHARGE_INFO__TRAITS_HPP_

#include "custom_interface/msg/detail/recharge_info__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'target_pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<custom_interface::msg::RechargeInfo>()
{
  return "custom_interface::msg::RechargeInfo";
}

template<>
inline const char * name<custom_interface::msg::RechargeInfo>()
{
  return "custom_interface/msg/RechargeInfo";
}

template<>
struct has_fixed_size<custom_interface::msg::RechargeInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<custom_interface::msg::RechargeInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<custom_interface::msg::RechargeInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_INTERFACE__MSG__DETAIL__RECHARGE_INFO__TRAITS_HPP_
