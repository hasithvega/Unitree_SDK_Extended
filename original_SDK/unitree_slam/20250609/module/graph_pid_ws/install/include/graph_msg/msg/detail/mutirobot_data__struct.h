// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from graph_msg:msg/MutirobotData.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_MSG__MSG__DETAIL__MUTIROBOT_DATA__STRUCT_H_
#define GRAPH_MSG__MSG__DETAIL__MUTIROBOT_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'robotid'
#include "std_msgs/msg/detail/int64__struct.h"
// Member 'data'
#include "std_msgs/msg/detail/string__struct.h"

// Struct defined in msg/MutirobotData in the package graph_msg.
typedef struct graph_msg__msg__MutirobotData
{
  std_msgs__msg__Int64 robotid;
  std_msgs__msg__String data;
} graph_msg__msg__MutirobotData;

// Struct for a sequence of graph_msg__msg__MutirobotData.
typedef struct graph_msg__msg__MutirobotData__Sequence
{
  graph_msg__msg__MutirobotData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} graph_msg__msg__MutirobotData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GRAPH_MSG__MSG__DETAIL__MUTIROBOT_DATA__STRUCT_H_
