// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from unitree_interfaces:msg/MotorStates.idl
// generated code does not contain a copyright notice

#ifndef UNITREE_INTERFACES__MSG__DETAIL__MOTOR_STATES__TRAITS_HPP_
#define UNITREE_INTERFACES__MSG__DETAIL__MOTOR_STATES__TRAITS_HPP_

#include "unitree_interfaces/msg/detail/motor_states__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'motor_state'
#include "unitree_interfaces/msg/detail/motor_state__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<unitree_interfaces::msg::MotorStates>()
{
  return "unitree_interfaces::msg::MotorStates";
}

template<>
inline const char * name<unitree_interfaces::msg::MotorStates>()
{
  return "unitree_interfaces/msg/MotorStates";
}

template<>
struct has_fixed_size<unitree_interfaces::msg::MotorStates>
  : std::integral_constant<bool, has_fixed_size<unitree_interfaces::msg::MotorState>::value> {};

template<>
struct has_bounded_size<unitree_interfaces::msg::MotorStates>
  : std::integral_constant<bool, has_bounded_size<unitree_interfaces::msg::MotorState>::value> {};

template<>
struct is_message<unitree_interfaces::msg::MotorStates>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UNITREE_INTERFACES__MSG__DETAIL__MOTOR_STATES__TRAITS_HPP_
