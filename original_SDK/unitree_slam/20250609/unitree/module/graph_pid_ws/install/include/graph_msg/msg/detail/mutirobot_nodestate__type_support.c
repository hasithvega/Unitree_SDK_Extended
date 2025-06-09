// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from graph_msg:msg/MutirobotNodestate.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "graph_msg/msg/detail/mutirobot_nodestate__rosidl_typesupport_introspection_c.h"
#include "graph_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "graph_msg/msg/detail/mutirobot_nodestate__functions.h"
#include "graph_msg/msg/detail/mutirobot_nodestate__struct.h"


// Include directives for member types
// Member `robotid`
// Member `nodename`
// Member `nodestate`
#include "std_msgs/msg/int64.h"
// Member `robotid`
// Member `nodename`
// Member `nodestate`
#include "std_msgs/msg/detail/int64__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MutirobotNodestate__rosidl_typesupport_introspection_c__MutirobotNodestate_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  graph_msg__msg__MutirobotNodestate__init(message_memory);
}

void MutirobotNodestate__rosidl_typesupport_introspection_c__MutirobotNodestate_fini_function(void * message_memory)
{
  graph_msg__msg__MutirobotNodestate__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MutirobotNodestate__rosidl_typesupport_introspection_c__MutirobotNodestate_message_member_array[3] = {
  {
    "robotid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_msg__msg__MutirobotNodestate, robotid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "nodename",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_msg__msg__MutirobotNodestate, nodename),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "nodestate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_msg__msg__MutirobotNodestate, nodestate),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MutirobotNodestate__rosidl_typesupport_introspection_c__MutirobotNodestate_message_members = {
  "graph_msg__msg",  // message namespace
  "MutirobotNodestate",  // message name
  3,  // number of fields
  sizeof(graph_msg__msg__MutirobotNodestate),
  MutirobotNodestate__rosidl_typesupport_introspection_c__MutirobotNodestate_message_member_array,  // message members
  MutirobotNodestate__rosidl_typesupport_introspection_c__MutirobotNodestate_init_function,  // function to initialize message memory (memory has to be allocated)
  MutirobotNodestate__rosidl_typesupport_introspection_c__MutirobotNodestate_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MutirobotNodestate__rosidl_typesupport_introspection_c__MutirobotNodestate_message_type_support_handle = {
  0,
  &MutirobotNodestate__rosidl_typesupport_introspection_c__MutirobotNodestate_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_graph_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, graph_msg, msg, MutirobotNodestate)() {
  MutirobotNodestate__rosidl_typesupport_introspection_c__MutirobotNodestate_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Int64)();
  MutirobotNodestate__rosidl_typesupport_introspection_c__MutirobotNodestate_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Int64)();
  MutirobotNodestate__rosidl_typesupport_introspection_c__MutirobotNodestate_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Int64)();
  if (!MutirobotNodestate__rosidl_typesupport_introspection_c__MutirobotNodestate_message_type_support_handle.typesupport_identifier) {
    MutirobotNodestate__rosidl_typesupport_introspection_c__MutirobotNodestate_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MutirobotNodestate__rosidl_typesupport_introspection_c__MutirobotNodestate_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
