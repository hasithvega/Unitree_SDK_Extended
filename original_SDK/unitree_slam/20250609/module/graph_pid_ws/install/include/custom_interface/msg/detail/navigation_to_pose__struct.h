// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_interface:msg/NavigationToPose.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACE__MSG__DETAIL__NAVIGATION_TO_POSE__STRUCT_H_
#define CUSTOM_INTERFACE__MSG__DETAIL__NAVIGATION_TO_POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'id'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/NavigationToPose in the package custom_interface.
typedef struct custom_interface__msg__NavigationToPose
{
  rosidl_runtime_c__String id;
  double pose_x;
  double pose_y;
  double pose_z;
  double quat_x;
  double quat_y;
  double quat_z;
  double quat_w;
} custom_interface__msg__NavigationToPose;

// Struct for a sequence of custom_interface__msg__NavigationToPose.
typedef struct custom_interface__msg__NavigationToPose__Sequence
{
  custom_interface__msg__NavigationToPose * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interface__msg__NavigationToPose__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACE__MSG__DETAIL__NAVIGATION_TO_POSE__STRUCT_H_
