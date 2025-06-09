// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from graph_msg:msg/Node.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_MSG__MSG__DETAIL__NODE__STRUCT_H_
#define GRAPH_MSG__MSG__DETAIL__NODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'node_name'
// Member 'node_position_x'
// Member 'node_position_y'
// Member 'node_position_z'
// Member 'node_yaw'
// Member 'node_attribute'
// Member 'undefined'
// Member 'node_state_2'
// Member 'node_state_3'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'node_state_list'
#include "std_msgs/msg/detail/float32_multi_array__struct.h"

// Struct defined in msg/Node in the package graph_msg.
typedef struct graph_msg__msg__Node
{
  rosidl_runtime_c__uint16__Sequence node_name;
  rosidl_runtime_c__float__Sequence node_position_x;
  rosidl_runtime_c__float__Sequence node_position_y;
  rosidl_runtime_c__float__Sequence node_position_z;
  rosidl_runtime_c__float__Sequence node_yaw;
  rosidl_runtime_c__uint16__Sequence node_attribute;
  rosidl_runtime_c__uint16__Sequence undefined;
  rosidl_runtime_c__uint16__Sequence node_state_2;
  rosidl_runtime_c__uint16__Sequence node_state_3;
  std_msgs__msg__Float32MultiArray__Sequence node_state_list;
} graph_msg__msg__Node;

// Struct for a sequence of graph_msg__msg__Node.
typedef struct graph_msg__msg__Node__Sequence
{
  graph_msg__msg__Node * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} graph_msg__msg__Node__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GRAPH_MSG__MSG__DETAIL__NODE__STRUCT_H_
