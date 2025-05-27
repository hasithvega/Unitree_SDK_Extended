// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_interface:msg/RechargeInfo.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACE__MSG__DETAIL__RECHARGE_INFO__STRUCT_H_
#define CUSTOM_INTERFACE__MSG__DETAIL__RECHARGE_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'start_flag'
#include "rosidl_runtime_c/string.h"
// Member 'target_pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

// Struct defined in msg/RechargeInfo in the package custom_interface.
typedef struct custom_interface__msg__RechargeInfo
{
  rosidl_runtime_c__String start_flag;
  geometry_msgs__msg__Pose target_pose;
} custom_interface__msg__RechargeInfo;

// Struct for a sequence of custom_interface__msg__RechargeInfo.
typedef struct custom_interface__msg__RechargeInfo__Sequence
{
  custom_interface__msg__RechargeInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interface__msg__RechargeInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACE__MSG__DETAIL__RECHARGE_INFO__STRUCT_H_
