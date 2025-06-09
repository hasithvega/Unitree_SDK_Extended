// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from unitree_interfaces:msg/QtNode.idl
// generated code does not contain a copyright notice

#ifndef UNITREE_INTERFACES__MSG__DETAIL__QT_NODE__STRUCT_H_
#define UNITREE_INTERFACES__MSG__DETAIL__QT_NODE__STRUCT_H_

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
// Member 'node'
#include "graph_msg/msg/detail/node__struct.h"

// Struct defined in msg/QtNode in the package unitree_interfaces.
typedef struct unitree_interfaces__msg__QtNode
{
  std_msgs__msg__String seq;
  graph_msg__msg__Node node;
} unitree_interfaces__msg__QtNode;

// Struct for a sequence of unitree_interfaces__msg__QtNode.
typedef struct unitree_interfaces__msg__QtNode__Sequence
{
  unitree_interfaces__msg__QtNode * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} unitree_interfaces__msg__QtNode__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UNITREE_INTERFACES__MSG__DETAIL__QT_NODE__STRUCT_H_
