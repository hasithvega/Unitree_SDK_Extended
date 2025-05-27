// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from hesai_lidar:msg/PandarPacket.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "hesai_lidar/msg/detail/pandar_packet__rosidl_typesupport_introspection_c.h"
#include "hesai_lidar/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "hesai_lidar/msg/detail/pandar_packet__functions.h"
#include "hesai_lidar/msg/detail/pandar_packet__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void PandarPacket__rosidl_typesupport_introspection_c__PandarPacket_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hesai_lidar__msg__PandarPacket__init(message_memory);
}

void PandarPacket__rosidl_typesupport_introspection_c__PandarPacket_fini_function(void * message_memory)
{
  hesai_lidar__msg__PandarPacket__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember PandarPacket__rosidl_typesupport_introspection_c__PandarPacket_message_member_array[3] = {
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hesai_lidar__msg__PandarPacket, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hesai_lidar__msg__PandarPacket, data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "size",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hesai_lidar__msg__PandarPacket, size),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PandarPacket__rosidl_typesupport_introspection_c__PandarPacket_message_members = {
  "hesai_lidar__msg",  // message namespace
  "PandarPacket",  // message name
  3,  // number of fields
  sizeof(hesai_lidar__msg__PandarPacket),
  PandarPacket__rosidl_typesupport_introspection_c__PandarPacket_message_member_array,  // message members
  PandarPacket__rosidl_typesupport_introspection_c__PandarPacket_init_function,  // function to initialize message memory (memory has to be allocated)
  PandarPacket__rosidl_typesupport_introspection_c__PandarPacket_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PandarPacket__rosidl_typesupport_introspection_c__PandarPacket_message_type_support_handle = {
  0,
  &PandarPacket__rosidl_typesupport_introspection_c__PandarPacket_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hesai_lidar
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hesai_lidar, msg, PandarPacket)() {
  PandarPacket__rosidl_typesupport_introspection_c__PandarPacket_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!PandarPacket__rosidl_typesupport_introspection_c__PandarPacket_message_type_support_handle.typesupport_identifier) {
    PandarPacket__rosidl_typesupport_introspection_c__PandarPacket_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PandarPacket__rosidl_typesupport_introspection_c__PandarPacket_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
