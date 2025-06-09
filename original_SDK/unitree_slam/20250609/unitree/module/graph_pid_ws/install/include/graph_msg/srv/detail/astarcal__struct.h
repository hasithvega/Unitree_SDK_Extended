// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from graph_msg:srv/Astarcal.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_MSG__SRV__DETAIL__ASTARCAL__STRUCT_H_
#define GRAPH_MSG__SRV__DETAIL__ASTARCAL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'node'
#include "graph_msg/msg/detail/node__struct.h"

// Struct defined in srv/Astarcal in the package graph_msg.
typedef struct graph_msg__srv__Astarcal_Request
{
  graph_msg__msg__Node node;
  int8_t floor_index;
} graph_msg__srv__Astarcal_Request;

// Struct for a sequence of graph_msg__srv__Astarcal_Request.
typedef struct graph_msg__srv__Astarcal_Request__Sequence
{
  graph_msg__srv__Astarcal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} graph_msg__srv__Astarcal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'weight'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in srv/Astarcal in the package graph_msg.
typedef struct graph_msg__srv__Astarcal_Response
{
  rosidl_runtime_c__float__Sequence weight;
  int8_t floor_index_cb;
} graph_msg__srv__Astarcal_Response;

// Struct for a sequence of graph_msg__srv__Astarcal_Response.
typedef struct graph_msg__srv__Astarcal_Response__Sequence
{
  graph_msg__srv__Astarcal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} graph_msg__srv__Astarcal_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GRAPH_MSG__SRV__DETAIL__ASTARCAL__STRUCT_H_
