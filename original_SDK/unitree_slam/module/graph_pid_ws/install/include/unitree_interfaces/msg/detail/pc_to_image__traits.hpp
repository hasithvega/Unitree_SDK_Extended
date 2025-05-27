// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from unitree_interfaces:msg/PcToImage.idl
// generated code does not contain a copyright notice

#ifndef UNITREE_INTERFACES__MSG__DETAIL__PC_TO_IMAGE__TRAITS_HPP_
#define UNITREE_INTERFACES__MSG__DETAIL__PC_TO_IMAGE__TRAITS_HPP_

#include "unitree_interfaces/msg/detail/pc_to_image__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'image'
#include "sensor_msgs/msg/detail/image__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<unitree_interfaces::msg::PcToImage>()
{
  return "unitree_interfaces::msg::PcToImage";
}

template<>
inline const char * name<unitree_interfaces::msg::PcToImage>()
{
  return "unitree_interfaces/msg/PcToImage";
}

template<>
struct has_fixed_size<unitree_interfaces::msg::PcToImage>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<unitree_interfaces::msg::PcToImage>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<unitree_interfaces::msg::PcToImage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UNITREE_INTERFACES__MSG__DETAIL__PC_TO_IMAGE__TRAITS_HPP_
