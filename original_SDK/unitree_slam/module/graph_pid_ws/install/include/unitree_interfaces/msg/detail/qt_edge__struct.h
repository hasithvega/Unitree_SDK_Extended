// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from unitree_interfaces:msg/QtEdge.idl
// generated code does not contain a copyright notice

#ifndef UNITREE_INTERFACES__MSG__DETAIL__QT_EDGE__STRUCT_H_
#define UNITREE_INTERFACES__MSG__DETAIL__QT_EDGE__STRUCT_H_

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
// Member 'edge'
#include "graph_msg/msg/detail/edge__struct.h"

// Struct defined in msg/QtEdge in the package unitree_interfaces.
typedef struct unitree_interfaces__msg__QtEdge
{
  std_msgs__msg__String seq;
  graph_msg__msg__Edge edge;
} unitree_interfaces__msg__QtEdge;

// Struct for a sequence of unitree_interfaces__msg__QtEdge.
typedef struct unitree_interfaces__msg__QtEdge__Sequence
{
  unitree_interfaces__msg__QtEdge * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} unitree_interfaces__msg__QtEdge__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UNITREE_INTERFACES__MSG__DETAIL__QT_EDGE__STRUCT_H_
