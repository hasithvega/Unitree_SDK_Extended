// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from graph_msg:msg/Graph.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_MSG__MSG__DETAIL__GRAPH__STRUCT_H_
#define GRAPH_MSG__MSG__DETAIL__GRAPH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'node'
#include "graph_msg/msg/detail/node__struct.h"
// Member 'edge'
#include "graph_msg/msg/detail/edge__struct.h"
// Member 'undefined'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/Graph in the package graph_msg.
typedef struct graph_msg__msg__Graph
{
  std_msgs__msg__Header header;
  int8_t flag;
  uint64_t node_num;
  uint64_t edge_num;
  graph_msg__msg__Node node;
  graph_msg__msg__Edge edge;
  rosidl_runtime_c__int8__Sequence undefined;
} graph_msg__msg__Graph;

// Struct for a sequence of graph_msg__msg__Graph.
typedef struct graph_msg__msg__Graph__Sequence
{
  graph_msg__msg__Graph * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} graph_msg__msg__Graph__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GRAPH_MSG__MSG__DETAIL__GRAPH__STRUCT_H_
