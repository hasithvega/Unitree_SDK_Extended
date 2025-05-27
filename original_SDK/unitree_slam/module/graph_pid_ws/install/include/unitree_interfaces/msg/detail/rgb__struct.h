// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from unitree_interfaces:msg/Rgb.idl
// generated code does not contain a copyright notice

#ifndef UNITREE_INTERFACES__MSG__DETAIL__RGB__STRUCT_H_
#define UNITREE_INTERFACES__MSG__DETAIL__RGB__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Rgb in the package unitree_interfaces.
typedef struct unitree_interfaces__msg__Rgb
{
  uint8_t r;
  uint8_t g;
  uint8_t b;
} unitree_interfaces__msg__Rgb;

// Struct for a sequence of unitree_interfaces__msg__Rgb.
typedef struct unitree_interfaces__msg__Rgb__Sequence
{
  unitree_interfaces__msg__Rgb * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} unitree_interfaces__msg__Rgb__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UNITREE_INTERFACES__MSG__DETAIL__RGB__STRUCT_H_
