// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_interface:msg/VirtualWall.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACE__MSG__DETAIL__VIRTUAL_WALL__STRUCT_H_
#define CUSTOM_INTERFACE__MSG__DETAIL__VIRTUAL_WALL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/VirtualWall in the package custom_interface.
typedef struct custom_interface__msg__VirtualWall
{
  int64_t wall_type;
  double frame_start_x;
  double frame_start_y;
  double frame_end_x;
  double frame_end_y;
  int64_t threshold;
} custom_interface__msg__VirtualWall;

// Struct for a sequence of custom_interface__msg__VirtualWall.
typedef struct custom_interface__msg__VirtualWall__Sequence
{
  custom_interface__msg__VirtualWall * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interface__msg__VirtualWall__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACE__MSG__DETAIL__VIRTUAL_WALL__STRUCT_H_
