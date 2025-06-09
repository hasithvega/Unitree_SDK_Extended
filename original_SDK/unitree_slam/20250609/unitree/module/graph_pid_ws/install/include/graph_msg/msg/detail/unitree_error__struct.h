// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from graph_msg:msg/UnitreeError.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_MSG__MSG__DETAIL__UNITREE_ERROR__STRUCT_H_
#define GRAPH_MSG__MSG__DETAIL__UNITREE_ERROR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'error_log'
#include "std_msgs/msg/detail/string__struct.h"
// Member 'error_flag'
#include "std_msgs/msg/detail/int8__struct.h"

// Struct defined in msg/UnitreeError in the package graph_msg.
typedef struct graph_msg__msg__UnitreeError
{
  std_msgs__msg__String error_log;
  std_msgs__msg__Int8 error_flag;
} graph_msg__msg__UnitreeError;

// Struct for a sequence of graph_msg__msg__UnitreeError.
typedef struct graph_msg__msg__UnitreeError__Sequence
{
  graph_msg__msg__UnitreeError * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} graph_msg__msg__UnitreeError__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GRAPH_MSG__MSG__DETAIL__UNITREE_ERROR__STRUCT_H_
