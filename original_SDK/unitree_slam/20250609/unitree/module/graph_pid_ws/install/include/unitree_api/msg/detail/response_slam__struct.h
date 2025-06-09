// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from unitree_api:msg/ResponseSlam.idl
// generated code does not contain a copyright notice

#ifndef UNITREE_API__MSG__DETAIL__RESPONSE_SLAM__STRUCT_H_
#define UNITREE_API__MSG__DETAIL__RESPONSE_SLAM__STRUCT_H_

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
#include "unitree_api/msg/detail/response__struct.h"

// Struct defined in msg/ResponseSlam in the package unitree_api.
typedef struct unitree_api__msg__ResponseSlam
{
  unitree_api__msg__Response data_info;
} unitree_api__msg__ResponseSlam;

// Struct for a sequence of unitree_api__msg__ResponseSlam.
typedef struct unitree_api__msg__ResponseSlam__Sequence
{
  unitree_api__msg__ResponseSlam * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} unitree_api__msg__ResponseSlam__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UNITREE_API__MSG__DETAIL__RESPONSE_SLAM__STRUCT_H_
