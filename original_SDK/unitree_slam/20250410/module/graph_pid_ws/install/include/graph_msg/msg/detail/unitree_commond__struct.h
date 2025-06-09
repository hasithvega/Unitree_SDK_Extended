// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from graph_msg:msg/UnitreeCommond.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_MSG__MSG__DETAIL__UNITREE_COMMOND__STRUCT_H_
#define GRAPH_MSG__MSG__DETAIL__UNITREE_COMMOND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'cmd'
// Member 'seq'
#include "std_msgs/msg/detail/string__struct.h"
// Member 'faild_flag'
#include "std_msgs/msg/detail/int8__struct.h"

// Struct defined in msg/UnitreeCommond in the package graph_msg.
typedef struct graph_msg__msg__UnitreeCommond
{
  std_msgs__msg__String cmd;
  std_msgs__msg__String seq;
  std_msgs__msg__Int8 faild_flag;
} graph_msg__msg__UnitreeCommond;

// Struct for a sequence of graph_msg__msg__UnitreeCommond.
typedef struct graph_msg__msg__UnitreeCommond__Sequence
{
  graph_msg__msg__UnitreeCommond * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} graph_msg__msg__UnitreeCommond__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GRAPH_MSG__MSG__DETAIL__UNITREE_COMMOND__STRUCT_H_
