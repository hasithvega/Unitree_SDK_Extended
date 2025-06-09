// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lio_sam_ros2:msg/ScoreInfo.idl
// generated code does not contain a copyright notice

#ifndef LIO_SAM_ROS2__MSG__DETAIL__SCORE_INFO__TRAITS_HPP_
#define LIO_SAM_ROS2__MSG__DETAIL__SCORE_INFO__TRAITS_HPP_

#include "lio_sam_ros2/msg/detail/score_info__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<lio_sam_ros2::msg::ScoreInfo>()
{
  return "lio_sam_ros2::msg::ScoreInfo";
}

template<>
inline const char * name<lio_sam_ros2::msg::ScoreInfo>()
{
  return "lio_sam_ros2/msg/ScoreInfo";
}

template<>
struct has_fixed_size<lio_sam_ros2::msg::ScoreInfo>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<lio_sam_ros2::msg::ScoreInfo>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<lio_sam_ros2::msg::ScoreInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LIO_SAM_ROS2__MSG__DETAIL__SCORE_INFO__TRAITS_HPP_
