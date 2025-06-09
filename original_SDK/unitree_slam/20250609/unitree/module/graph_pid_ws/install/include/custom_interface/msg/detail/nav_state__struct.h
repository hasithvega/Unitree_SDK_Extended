// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_interface:msg/NavState.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACE__MSG__DETAIL__NAV_STATE__STRUCT_H_
#define CUSTOM_INTERFACE__MSG__DETAIL__NAV_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'id'
// Member 'state'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/NavState in the package custom_interface.
typedef struct custom_interface__msg__NavState
{
  rosidl_runtime_c__String id;
  rosidl_runtime_c__String state;
} custom_interface__msg__NavState;

// Struct for a sequence of custom_interface__msg__NavState.
typedef struct custom_interface__msg__NavState__Sequence
{
  custom_interface__msg__NavState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interface__msg__NavState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACE__MSG__DETAIL__NAV_STATE__STRUCT_H_
