// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from unitree_interfaces:msg/PcToImage.idl
// generated code does not contain a copyright notice

#ifndef UNITREE_INTERFACES__MSG__DETAIL__PC_TO_IMAGE__STRUCT_H_
#define UNITREE_INTERFACES__MSG__DETAIL__PC_TO_IMAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'image_x'
// Member 'image_y'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'image'
#include "sensor_msgs/msg/detail/image__struct.h"

// Struct defined in msg/PcToImage in the package unitree_interfaces.
typedef struct unitree_interfaces__msg__PcToImage
{
  float x;
  float y;
  float res;
  rosidl_runtime_c__uint16__Sequence image_x;
  rosidl_runtime_c__uint16__Sequence image_y;
  sensor_msgs__msg__Image image;
} unitree_interfaces__msg__PcToImage;

// Struct for a sequence of unitree_interfaces__msg__PcToImage.
typedef struct unitree_interfaces__msg__PcToImage__Sequence
{
  unitree_interfaces__msg__PcToImage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} unitree_interfaces__msg__PcToImage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UNITREE_INTERFACES__MSG__DETAIL__PC_TO_IMAGE__STRUCT_H_
