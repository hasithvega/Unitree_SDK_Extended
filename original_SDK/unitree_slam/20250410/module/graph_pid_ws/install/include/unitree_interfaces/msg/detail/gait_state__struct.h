// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from unitree_interfaces:msg/GaitState.idl
// generated code does not contain a copyright notice

#ifndef UNITREE_INTERFACES__MSG__DETAIL__GAIT_STATE__STRUCT_H_
#define UNITREE_INTERFACES__MSG__DETAIL__GAIT_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/GaitState in the package unitree_interfaces.
typedef struct unitree_interfaces__msg__GaitState
{
  uint8_t mode;
  uint8_t gait_type;
  float foot_raise_height;
  float body_height;
  float position[3];
  float velocity[3];
  float yaw_speed;
} unitree_interfaces__msg__GaitState;

// Struct for a sequence of unitree_interfaces__msg__GaitState.
typedef struct unitree_interfaces__msg__GaitState__Sequence
{
  unitree_interfaces__msg__GaitState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} unitree_interfaces__msg__GaitState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UNITREE_INTERFACES__MSG__DETAIL__GAIT_STATE__STRUCT_H_
