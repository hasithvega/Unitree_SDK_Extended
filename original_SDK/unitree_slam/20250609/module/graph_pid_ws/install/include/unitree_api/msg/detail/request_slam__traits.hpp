// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from unitree_api:msg/RequestSlam.idl
// generated code does not contain a copyright notice

#ifndef UNITREE_API__MSG__DETAIL__REQUEST_SLAM__TRAITS_HPP_
#define UNITREE_API__MSG__DETAIL__REQUEST_SLAM__TRAITS_HPP_

#include "unitree_api/msg/detail/request_slam__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'data_info'
#include "unitree_api/msg/detail/request__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<unitree_api::msg::RequestSlam>()
{
  return "unitree_api::msg::RequestSlam";
}

template<>
inline const char * name<unitree_api::msg::RequestSlam>()
{
  return "unitree_api/msg/RequestSlam";
}

template<>
struct has_fixed_size<unitree_api::msg::RequestSlam>
  : std::integral_constant<bool, has_fixed_size<unitree_api::msg::Request>::value> {};

template<>
struct has_bounded_size<unitree_api::msg::RequestSlam>
  : std::integral_constant<bool, has_bounded_size<unitree_api::msg::Request>::value> {};

template<>
struct is_message<unitree_api::msg::RequestSlam>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UNITREE_API__MSG__DETAIL__REQUEST_SLAM__TRAITS_HPP_
