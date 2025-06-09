// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from graph_msg:msg/Edge.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_MSG__MSG__DETAIL__EDGE__STRUCT_H_
#define GRAPH_MSG__MSG__DETAIL__EDGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'edge_name'
// Member 'start_node_name'
// Member 'end_node_name'
// Member 'edge_length'
// Member 'dog_stats'
// Member 'dog_back_stats'
// Member 'dog_speed'
// Member 'edge_state'
// Member 'edge_state_1'
// Member 'edge_state_2'
// Member 'edge_state_3'
// Member 'edge_state_4'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'edge_state_list'
#include "std_msgs/msg/detail/float32_multi_array__struct.h"

// Struct defined in msg/Edge in the package graph_msg.
typedef struct graph_msg__msg__Edge
{
  rosidl_runtime_c__uint16__Sequence edge_name;
  rosidl_runtime_c__uint16__Sequence start_node_name;
  rosidl_runtime_c__uint16__Sequence end_node_name;
  rosidl_runtime_c__float__Sequence edge_length;
  rosidl_runtime_c__uint16__Sequence dog_stats;
  rosidl_runtime_c__uint16__Sequence dog_back_stats;
  rosidl_runtime_c__float__Sequence dog_speed;
  rosidl_runtime_c__uint16__Sequence edge_state;
  rosidl_runtime_c__float__Sequence edge_state_1;
  rosidl_runtime_c__uint16__Sequence edge_state_2;
  rosidl_runtime_c__uint16__Sequence edge_state_3;
  rosidl_runtime_c__uint16__Sequence edge_state_4;
  std_msgs__msg__Float32MultiArray__Sequence edge_state_list;
} graph_msg__msg__Edge;

// Struct for a sequence of graph_msg__msg__Edge.
typedef struct graph_msg__msg__Edge__Sequence
{
  graph_msg__msg__Edge * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} graph_msg__msg__Edge__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GRAPH_MSG__MSG__DETAIL__EDGE__STRUCT_H_
