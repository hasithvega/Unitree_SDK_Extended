// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lio_sam_ros2:msg/ScoreInfo.idl
// generated code does not contain a copyright notice

#ifndef LIO_SAM_ROS2__MSG__DETAIL__SCORE_INFO__STRUCT_H_
#define LIO_SAM_ROS2__MSG__DETAIL__SCORE_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

// Struct defined in msg/ScoreInfo in the package lio_sam_ros2.
typedef struct lio_sam_ros2__msg__ScoreInfo
{
  std_msgs__msg__Header header;
  double score;
  double err_position;
  double err_position_z;
  double err_angle;
  double err_yaw;
} lio_sam_ros2__msg__ScoreInfo;

// Struct for a sequence of lio_sam_ros2__msg__ScoreInfo.
typedef struct lio_sam_ros2__msg__ScoreInfo__Sequence
{
  lio_sam_ros2__msg__ScoreInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lio_sam_ros2__msg__ScoreInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LIO_SAM_ROS2__MSG__DETAIL__SCORE_INFO__STRUCT_H_
