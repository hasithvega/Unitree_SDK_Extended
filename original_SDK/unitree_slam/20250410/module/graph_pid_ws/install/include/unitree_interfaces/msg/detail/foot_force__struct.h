// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from unitree_interfaces:msg/FootForce.idl
// generated code does not contain a copyright notice

#ifndef UNITREE_INTERFACES__MSG__DETAIL__FOOT_FORCE__STRUCT_H_
#define UNITREE_INTERFACES__MSG__DETAIL__FOOT_FORCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/FootForce in the package unitree_interfaces.
typedef struct unitree_interfaces__msg__FootForce
{
  int16_t foot_force[4];
  int16_t foot_force_estimated[4];
} unitree_interfaces__msg__FootForce;

// Struct for a sequence of unitree_interfaces__msg__FootForce.
typedef struct unitree_interfaces__msg__FootForce__Sequence
{
  unitree_interfaces__msg__FootForce * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} unitree_interfaces__msg__FootForce__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UNITREE_INTERFACES__MSG__DETAIL__FOOT_FORCE__STRUCT_H_
