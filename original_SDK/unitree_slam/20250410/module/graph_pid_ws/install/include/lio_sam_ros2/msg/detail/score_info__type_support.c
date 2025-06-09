// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from lio_sam_ros2:msg/ScoreInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "lio_sam_ros2/msg/detail/score_info__rosidl_typesupport_introspection_c.h"
#include "lio_sam_ros2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "lio_sam_ros2/msg/detail/score_info__functions.h"
#include "lio_sam_ros2/msg/detail/score_info__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ScoreInfo__rosidl_typesupport_introspection_c__ScoreInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  lio_sam_ros2__msg__ScoreInfo__init(message_memory);
}

void ScoreInfo__rosidl_typesupport_introspection_c__ScoreInfo_fini_function(void * message_memory)
{
  lio_sam_ros2__msg__ScoreInfo__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ScoreInfo__rosidl_typesupport_introspection_c__ScoreInfo_message_member_array[6] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lio_sam_ros2__msg__ScoreInfo, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "score",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lio_sam_ros2__msg__ScoreInfo, score),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "err_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lio_sam_ros2__msg__ScoreInfo, err_position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "err_position_z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lio_sam_ros2__msg__ScoreInfo, err_position_z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "err_angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lio_sam_ros2__msg__ScoreInfo, err_angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "err_yaw",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lio_sam_ros2__msg__ScoreInfo, err_yaw),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ScoreInfo__rosidl_typesupport_introspection_c__ScoreInfo_message_members = {
  "lio_sam_ros2__msg",  // message namespace
  "ScoreInfo",  // message name
  6,  // number of fields
  sizeof(lio_sam_ros2__msg__ScoreInfo),
  ScoreInfo__rosidl_typesupport_introspection_c__ScoreInfo_message_member_array,  // message members
  ScoreInfo__rosidl_typesupport_introspection_c__ScoreInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  ScoreInfo__rosidl_typesupport_introspection_c__ScoreInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ScoreInfo__rosidl_typesupport_introspection_c__ScoreInfo_message_type_support_handle = {
  0,
  &ScoreInfo__rosidl_typesupport_introspection_c__ScoreInfo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_lio_sam_ros2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lio_sam_ros2, msg, ScoreInfo)() {
  ScoreInfo__rosidl_typesupport_introspection_c__ScoreInfo_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!ScoreInfo__rosidl_typesupport_introspection_c__ScoreInfo_message_type_support_handle.typesupport_identifier) {
    ScoreInfo__rosidl_typesupport_introspection_c__ScoreInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ScoreInfo__rosidl_typesupport_introspection_c__ScoreInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
