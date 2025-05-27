// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from unitree_api:msg/RequestSlam.idl
// generated code does not contain a copyright notice

#ifndef UNITREE_API__MSG__DETAIL__REQUEST_SLAM__STRUCT_H_
#define UNITREE_API__MSG__DETAIL__REQUEST_SLAM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'data_info'
#include "unitree_api/msg/detail/request__struct.h"

// Struct defined in msg/RequestSlam in the package unitree_api.
typedef struct unitree_api__msg__RequestSlam
{
  unitree_api__msg__Request data_info;
} unitree_api__msg__RequestSlam;

// Struct for a sequence of unitree_api__msg__RequestSlam.
typedef struct unitree_api__msg__RequestSlam__Sequence
{
  unitree_api__msg__RequestSlam * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} unitree_api__msg__RequestSlam__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UNITREE_API__MSG__DETAIL__REQUEST_SLAM__STRUCT_H_
