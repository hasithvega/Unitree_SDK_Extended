// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from custom_interface:msg/RechargeInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "custom_interface/msg/detail/recharge_info__rosidl_typesupport_introspection_c.h"
#include "custom_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "custom_interface/msg/detail/recharge_info__functions.h"
#include "custom_interface/msg/detail/recharge_info__struct.h"


// Include directives for member types
// Member `start_flag`
#include "rosidl_runtime_c/string_functions.h"
// Member `target_pose`
#include "geometry_msgs/msg/pose.h"
// Member `target_pose`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void RechargeInfo__rosidl_typesupport_introspection_c__RechargeInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  custom_interface__msg__RechargeInfo__init(message_memory);
}

void RechargeInfo__rosidl_typesupport_introspection_c__RechargeInfo_fini_function(void * message_memory)
{
  custom_interface__msg__RechargeInfo__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember RechargeInfo__rosidl_typesupport_introspection_c__RechargeInfo_message_member_array[2] = {
  {
    "start_flag",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_interface__msg__RechargeInfo, start_flag),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_interface__msg__RechargeInfo, target_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RechargeInfo__rosidl_typesupport_introspection_c__RechargeInfo_message_members = {
  "custom_interface__msg",  // message namespace
  "RechargeInfo",  // message name
  2,  // number of fields
  sizeof(custom_interface__msg__RechargeInfo),
  RechargeInfo__rosidl_typesupport_introspection_c__RechargeInfo_message_member_array,  // message members
  RechargeInfo__rosidl_typesupport_introspection_c__RechargeInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  RechargeInfo__rosidl_typesupport_introspection_c__RechargeInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RechargeInfo__rosidl_typesupport_introspection_c__RechargeInfo_message_type_support_handle = {
  0,
  &RechargeInfo__rosidl_typesupport_introspection_c__RechargeInfo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interface, msg, RechargeInfo)() {
  RechargeInfo__rosidl_typesupport_introspection_c__RechargeInfo_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!RechargeInfo__rosidl_typesupport_introspection_c__RechargeInfo_message_type_support_handle.typesupport_identifier) {
    RechargeInfo__rosidl_typesupport_introspection_c__RechargeInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RechargeInfo__rosidl_typesupport_introspection_c__RechargeInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
