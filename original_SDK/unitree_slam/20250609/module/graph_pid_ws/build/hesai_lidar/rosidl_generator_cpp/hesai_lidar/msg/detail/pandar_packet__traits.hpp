// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from hesai_lidar:msg/PandarPacket.idl
// generated code does not contain a copyright notice

#ifndef HESAI_LIDAR__MSG__DETAIL__PANDAR_PACKET__TRAITS_HPP_
#define HESAI_LIDAR__MSG__DETAIL__PANDAR_PACKET__TRAITS_HPP_

#include "hesai_lidar/msg/detail/pandar_packet__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hesai_lidar::msg::PandarPacket>()
{
  return "hesai_lidar::msg::PandarPacket";
}

template<>
inline const char * name<hesai_lidar::msg::PandarPacket>()
{
  return "hesai_lidar/msg/PandarPacket";
}

template<>
struct has_fixed_size<hesai_lidar::msg::PandarPacket>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<hesai_lidar::msg::PandarPacket>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<hesai_lidar::msg::PandarPacket>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // HESAI_LIDAR__MSG__DETAIL__PANDAR_PACKET__TRAITS_HPP_
