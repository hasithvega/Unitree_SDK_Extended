// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from unitree_interfaces:msg/MotorState.idl
// generated code does not contain a copyright notice

#ifndef UNITREE_INTERFACES__MSG__DETAIL__MOTOR_STATE__STRUCT_H_
#define UNITREE_INTERFACES__MSG__DETAIL__MOTOR_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/MotorState in the package unitree_interfaces.
typedef struct unitree_interfaces__msg__MotorState
{
  uint8_t mode;
  int8_t temperature;
  float q;
  float dq;
  float ddq;
  float torque_estimated;
  float q_raw;
  float dq_raw;
  float ddq_raw;
} unitree_interfaces__msg__MotorState;

// Struct for a sequence of unitree_interfaces__msg__MotorState.
typedef struct unitree_interfaces__msg__MotorState__Sequence
{
  unitree_interfaces__msg__MotorState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} unitree_interfaces__msg__MotorState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UNITREE_INTERFACES__MSG__DETAIL__MOTOR_STATE__STRUCT_H_
