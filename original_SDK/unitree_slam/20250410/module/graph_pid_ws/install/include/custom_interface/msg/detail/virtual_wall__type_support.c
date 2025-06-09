// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from custom_interface:msg/VirtualWall.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "custom_interface/msg/detail/virtual_wall__rosidl_typesupport_introspection_c.h"
#include "custom_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "custom_interface/msg/detail/virtual_wall__functions.h"
#include "custom_interface/msg/detail/virtual_wall__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void VirtualWall__rosidl_typesupport_introspection_c__VirtualWall_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  custom_interface__msg__VirtualWall__init(message_memory);
}

void VirtualWall__rosidl_typesupport_introspection_c__VirtualWall_fini_function(void * message_memory)
{
  custom_interface__msg__VirtualWall__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember VirtualWall__rosidl_typesupport_introspection_c__VirtualWall_message_member_array[6] = {
  {
    "wall_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_interface__msg__VirtualWall, wall_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "frame_start_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_interface__msg__VirtualWall, frame_start_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "frame_start_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_interface__msg__VirtualWall, frame_start_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "frame_end_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_interface__msg__VirtualWall, frame_end_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "frame_end_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_interface__msg__VirtualWall, frame_end_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "threshold",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_interface__msg__VirtualWall, threshold),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers VirtualWall__rosidl_typesupport_introspection_c__VirtualWall_message_members = {
  "custom_interface__msg",  // message namespace
  "VirtualWall",  // message name
  6,  // number of fields
  sizeof(custom_interface__msg__VirtualWall),
  VirtualWall__rosidl_typesupport_introspection_c__VirtualWall_message_member_array,  // message members
  VirtualWall__rosidl_typesupport_introspection_c__VirtualWall_init_function,  // function to initialize message memory (memory has to be allocated)
  VirtualWall__rosidl_typesupport_introspection_c__VirtualWall_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t VirtualWall__rosidl_typesupport_introspection_c__VirtualWall_message_type_support_handle = {
  0,
  &VirtualWall__rosidl_typesupport_introspection_c__VirtualWall_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interface, msg, VirtualWall)() {
  if (!VirtualWall__rosidl_typesupport_introspection_c__VirtualWall_message_type_support_handle.typesupport_identifier) {
    VirtualWall__rosidl_typesupport_introspection_c__VirtualWall_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &VirtualWall__rosidl_typesupport_introspection_c__VirtualWall_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
