// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from graph_msg:msg/MutirobotMission.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "graph_msg/msg/detail/mutirobot_mission__rosidl_typesupport_introspection_c.h"
#include "graph_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "graph_msg/msg/detail/mutirobot_mission__functions.h"
#include "graph_msg/msg/detail/mutirobot_mission__struct.h"


// Include directives for member types
// Member `robotid`
// Member `missionid`
// Member `missionstate`
#include "std_msgs/msg/int64.h"
// Member `robotid`
// Member `missionid`
// Member `missionstate`
#include "std_msgs/msg/detail/int64__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MutirobotMission__rosidl_typesupport_introspection_c__MutirobotMission_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  graph_msg__msg__MutirobotMission__init(message_memory);
}

void MutirobotMission__rosidl_typesupport_introspection_c__MutirobotMission_fini_function(void * message_memory)
{
  graph_msg__msg__MutirobotMission__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MutirobotMission__rosidl_typesupport_introspection_c__MutirobotMission_message_member_array[3] = {
  {
    "robotid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_msg__msg__MutirobotMission, robotid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "missionid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_msg__msg__MutirobotMission, missionid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "missionstate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_msg__msg__MutirobotMission, missionstate),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MutirobotMission__rosidl_typesupport_introspection_c__MutirobotMission_message_members = {
  "graph_msg__msg",  // message namespace
  "MutirobotMission",  // message name
  3,  // number of fields
  sizeof(graph_msg__msg__MutirobotMission),
  MutirobotMission__rosidl_typesupport_introspection_c__MutirobotMission_message_member_array,  // message members
  MutirobotMission__rosidl_typesupport_introspection_c__MutirobotMission_init_function,  // function to initialize message memory (memory has to be allocated)
  MutirobotMission__rosidl_typesupport_introspection_c__MutirobotMission_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MutirobotMission__rosidl_typesupport_introspection_c__MutirobotMission_message_type_support_handle = {
  0,
  &MutirobotMission__rosidl_typesupport_introspection_c__MutirobotMission_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_graph_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, graph_msg, msg, MutirobotMission)() {
  MutirobotMission__rosidl_typesupport_introspection_c__MutirobotMission_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Int64)();
  MutirobotMission__rosidl_typesupport_introspection_c__MutirobotMission_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Int64)();
  MutirobotMission__rosidl_typesupport_introspection_c__MutirobotMission_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Int64)();
  if (!MutirobotMission__rosidl_typesupport_introspection_c__MutirobotMission_message_type_support_handle.typesupport_identifier) {
    MutirobotMission__rosidl_typesupport_introspection_c__MutirobotMission_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MutirobotMission__rosidl_typesupport_introspection_c__MutirobotMission_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
