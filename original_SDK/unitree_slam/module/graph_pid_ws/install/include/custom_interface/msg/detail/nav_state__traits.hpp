// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_interface:msg/NavState.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACE__MSG__DETAIL__NAV_STATE__TRAITS_HPP_
#define CUSTOM_INTERFACE__MSG__DETAIL__NAV_STATE__TRAITS_HPP_

#include "custom_interface/msg/detail/nav_state__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<custom_interface::msg::NavState>()
{
  return "custom_interface::msg::NavState";
}

template<>
inline const char * name<custom_interface::msg::NavState>()
{
  return "custom_interface/msg/NavState";
}

template<>
struct has_fixed_size<custom_interface::msg::NavState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<custom_interface::msg::NavState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<custom_interface::msg::NavState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_INTERFACE__MSG__DETAIL__NAV_STATE__TRAITS_HPP_
