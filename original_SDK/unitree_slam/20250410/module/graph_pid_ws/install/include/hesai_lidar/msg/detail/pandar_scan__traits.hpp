// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from hesai_lidar:msg/PandarScan.idl
// generated code does not contain a copyright notice

#ifndef HESAI_LIDAR__MSG__DETAIL__PANDAR_SCAN__TRAITS_HPP_
#define HESAI_LIDAR__MSG__DETAIL__PANDAR_SCAN__TRAITS_HPP_

#include "hesai_lidar/msg/detail/pandar_scan__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hesai_lidar::msg::PandarScan>()
{
  return "hesai_lidar::msg::PandarScan";
}

template<>
inline const char * name<hesai_lidar::msg::PandarScan>()
{
  return "hesai_lidar/msg/PandarScan";
}

template<>
struct has_fixed_size<hesai_lidar::msg::PandarScan>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<hesai_lidar::msg::PandarScan>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<hesai_lidar::msg::PandarScan>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // HESAI_LIDAR__MSG__DETAIL__PANDAR_SCAN__TRAITS_HPP_
