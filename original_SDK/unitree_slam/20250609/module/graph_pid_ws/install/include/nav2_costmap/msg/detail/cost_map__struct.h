// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nav2_costmap:msg/CostMap.idl
// generated code does not contain a copyright notice

#ifndef NAV2_COSTMAP__MSG__DETAIL__COST_MAP__STRUCT_H_
#define NAV2_COSTMAP__MSG__DETAIL__COST_MAP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'origin'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/CostMap in the package nav2_costmap.
typedef struct nav2_costmap__msg__CostMap
{
  std_msgs__msg__Header header;
  float resolution;
  uint32_t size_x;
  uint32_t size_y;
  geometry_msgs__msg__Pose origin;
  rosidl_runtime_c__uint8__Sequence data;
} nav2_costmap__msg__CostMap;

// Struct for a sequence of nav2_costmap__msg__CostMap.
typedef struct nav2_costmap__msg__CostMap__Sequence
{
  nav2_costmap__msg__CostMap * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_costmap__msg__CostMap__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAV2_COSTMAP__MSG__DETAIL__COST_MAP__STRUCT_H_
