// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from unitree_interfaces:msg/MotorCmds.idl
// generated code does not contain a copyright notice

#ifndef UNITREE_INTERFACES__MSG__DETAIL__MOTOR_CMDS__TRAITS_HPP_
#define UNITREE_INTERFACES__MSG__DETAIL__MOTOR_CMDS__TRAITS_HPP_

#include "unitree_interfaces/msg/detail/motor_cmds__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'motor_cmd'
#include "unitree_interfaces/msg/detail/motor_cmd__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<unitree_interfaces::msg::MotorCmds>()
{
  return "unitree_interfaces::msg::MotorCmds";
}

template<>
inline const char * name<unitree_interfaces::msg::MotorCmds>()
{
  return "unitree_interfaces/msg/MotorCmds";
}

template<>
struct has_fixed_size<unitree_interfaces::msg::MotorCmds>
  : std::integral_constant<bool, has_fixed_size<unitree_interfaces::msg::MotorCmd>::value> {};

template<>
struct has_bounded_size<unitree_interfaces::msg::MotorCmds>
  : std::integral_constant<bool, has_bounded_size<unitree_interfaces::msg::MotorCmd>::value> {};

template<>
struct is_message<unitree_interfaces::msg::MotorCmds>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UNITREE_INTERFACES__MSG__DETAIL__MOTOR_CMDS__TRAITS_HPP_
