// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from unitree_interfaces:msg/BmsState.idl
// generated code does not contain a copyright notice

#ifndef UNITREE_INTERFACES__MSG__DETAIL__BMS_STATE__STRUCT_H_
#define UNITREE_INTERFACES__MSG__DETAIL__BMS_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/BmsState in the package unitree_interfaces.
typedef struct unitree_interfaces__msg__BmsState
{
  uint8_t soc;
  int32_t current;
  uint16_t cycle;
  int8_t bq_ntc[8];
  int8_t mcu_ntc[8];
  uint16_t cell_voltage[30];
} unitree_interfaces__msg__BmsState;

// Struct for a sequence of unitree_interfaces__msg__BmsState.
typedef struct unitree_interfaces__msg__BmsState__Sequence
{
  unitree_interfaces__msg__BmsState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} unitree_interfaces__msg__BmsState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UNITREE_INTERFACES__MSG__DETAIL__BMS_STATE__STRUCT_H_
