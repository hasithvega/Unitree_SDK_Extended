// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from unitree_interfaces:msg/QtCommand.idl
// generated code does not contain a copyright notice

#ifndef UNITREE_INTERFACES__MSG__DETAIL__QT_COMMAND__STRUCT_H_
#define UNITREE_INTERFACES__MSG__DETAIL__QT_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'seq'
#include "std_msgs/msg/detail/string__struct.h"
// Member 'floor_index'
// Member 'pcdmap_index'
// Member 'topomap_index'
// Member 'node_edge_name'
// Member 'state_1'
// Member 'state_2'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/QtCommand in the package unitree_interfaces.
typedef struct unitree_interfaces__msg__QtCommand
{
  uint8_t command;
  std_msgs__msg__String seq;
  uint8_t attribute;
  rosidl_runtime_c__uint16__Sequence floor_index;
  rosidl_runtime_c__uint16__Sequence pcdmap_index;
  rosidl_runtime_c__uint16__Sequence topomap_index;
  rosidl_runtime_c__uint16__Sequence node_edge_name;
  float quaternion_x;
  float quaternion_y;
  float quaternion_z;
  float quaternion_w;
  float euler_roll;
  float euler_pitch;
  float euler_yaw;
  float translation_x;
  float translation_y;
  float translation_z;
  rosidl_runtime_c__uint16__Sequence state_1;
  rosidl_runtime_c__float__Sequence state_2;
} unitree_interfaces__msg__QtCommand;

// Struct for a sequence of unitree_interfaces__msg__QtCommand.
typedef struct unitree_interfaces__msg__QtCommand__Sequence
{
  unitree_interfaces__msg__QtCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} unitree_interfaces__msg__QtCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UNITREE_INTERFACES__MSG__DETAIL__QT_COMMAND__STRUCT_H_
