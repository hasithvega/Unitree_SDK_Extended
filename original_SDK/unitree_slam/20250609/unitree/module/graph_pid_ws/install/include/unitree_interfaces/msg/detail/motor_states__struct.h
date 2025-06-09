// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from unitree_interfaces:msg/MotorStates.idl
// generated code does not contain a copyright notice

#ifndef UNITREE_INTERFACES__MSG__DETAIL__MOTOR_STATES__STRUCT_H_
#define UNITREE_INTERFACES__MSG__DETAIL__MOTOR_STATES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'motor_state'
#include "unitree_interfaces/msg/detail/motor_state__struct.h"

// Struct defined in msg/MotorStates in the package unitree_interfaces.
typedef struct unitree_interfaces__msg__MotorStates
{
  unitree_interfaces__msg__MotorState motor_state[20];
} unitree_interfaces__msg__MotorStates;

// Struct for a sequence of unitree_interfaces__msg__MotorStates.
typedef struct unitree_interfaces__msg__MotorStates__Sequence
{
  unitree_interfaces__msg__MotorStates * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} unitree_interfaces__msg__MotorStates__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UNITREE_INTERFACES__MSG__DETAIL__MOTOR_STATES__STRUCT_H_
