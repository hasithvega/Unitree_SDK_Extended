// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from unitree_interfaces:msg/BmsCmd.idl
// generated code does not contain a copyright notice

#ifndef UNITREE_INTERFACES__MSG__DETAIL__BMS_CMD__TRAITS_HPP_
#define UNITREE_INTERFACES__MSG__DETAIL__BMS_CMD__TRAITS_HPP_

#include "unitree_interfaces/msg/detail/bms_cmd__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<unitree_interfaces::msg::BmsCmd>()
{
  return "unitree_interfaces::msg::BmsCmd";
}

template<>
inline const char * name<unitree_interfaces::msg::BmsCmd>()
{
  return "unitree_interfaces/msg/BmsCmd";
}

template<>
struct has_fixed_size<unitree_interfaces::msg::BmsCmd>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<unitree_interfaces::msg::BmsCmd>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<unitree_interfaces::msg::BmsCmd>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UNITREE_INTERFACES__MSG__DETAIL__BMS_CMD__TRAITS_HPP_
