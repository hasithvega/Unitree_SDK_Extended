// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from graph_msg:msg/MutirobotNodestate.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_MSG__MSG__DETAIL__MUTIROBOT_NODESTATE__STRUCT_H_
#define GRAPH_MSG__MSG__DETAIL__MUTIROBOT_NODESTATE__STRUCT_H_

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
// Member 'nodename'
// Member 'nodestate'
#include "std_msgs/msg/detail/int64__struct.h"

// Struct defined in msg/MutirobotNodestate in the package graph_msg.
typedef struct graph_msg__msg__MutirobotNodestate
{
  std_msgs__msg__Int64 robotid;
  std_msgs__msg__Int64 nodename;
  std_msgs__msg__Int64 nodestate;
} graph_msg__msg__MutirobotNodestate;

// Struct for a sequence of graph_msg__msg__MutirobotNodestate.
typedef struct graph_msg__msg__MutirobotNodestate__Sequence
{
  graph_msg__msg__MutirobotNodestate * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} graph_msg__msg__MutirobotNodestate__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GRAPH_MSG__MSG__DETAIL__MUTIROBOT_NODESTATE__STRUCT_H_
