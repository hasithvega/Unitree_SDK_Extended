// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from graph_msg:msg/UnitreeCommond.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "graph_msg/msg/detail/unitree_commond__rosidl_typesupport_introspection_c.h"
#include "graph_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "graph_msg/msg/detail/unitree_commond__functions.h"
#include "graph_msg/msg/detail/unitree_commond__struct.h"


// Include directives for member types
// Member `cmd`
// Member `seq`
#include "std_msgs/msg/string.h"
// Member `cmd`
// Member `seq`
#include "std_msgs/msg/detail/string__rosidl_typesupport_introspection_c.h"
// Member `faild_flag`
#include "std_msgs/msg/int8.h"
// Member `faild_flag`
#include "std_msgs/msg/detail/int8__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void UnitreeCommond__rosidl_typesupport_introspection_c__UnitreeCommond_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  graph_msg__msg__UnitreeCommond__init(message_memory);
}

void UnitreeCommond__rosidl_typesupport_introspection_c__UnitreeCommond_fini_function(void * message_memory)
{
  graph_msg__msg__UnitreeCommond__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember UnitreeCommond__rosidl_typesupport_introspection_c__UnitreeCommond_message_member_array[3] = {
  {
    "cmd",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_msg__msg__UnitreeCommond, cmd),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "seq",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_msg__msg__UnitreeCommond, seq),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "faild_flag",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_msg__msg__UnitreeCommond, faild_flag),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers UnitreeCommond__rosidl_typesupport_introspection_c__UnitreeCommond_message_members = {
  "graph_msg__msg",  // message namespace
  "UnitreeCommond",  // message name
  3,  // number of fields
  sizeof(graph_msg__msg__UnitreeCommond),
  UnitreeCommond__rosidl_typesupport_introspection_c__UnitreeCommond_message_member_array,  // message members
  UnitreeCommond__rosidl_typesupport_introspection_c__UnitreeCommond_init_function,  // function to initialize message memory (memory has to be allocated)
  UnitreeCommond__rosidl_typesupport_introspection_c__UnitreeCommond_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t UnitreeCommond__rosidl_typesupport_introspection_c__UnitreeCommond_message_type_support_handle = {
  0,
  &UnitreeCommond__rosidl_typesupport_introspection_c__UnitreeCommond_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_graph_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, graph_msg, msg, UnitreeCommond)() {
  UnitreeCommond__rosidl_typesupport_introspection_c__UnitreeCommond_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, String)();
  UnitreeCommond__rosidl_typesupport_introspection_c__UnitreeCommond_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, String)();
  UnitreeCommond__rosidl_typesupport_introspection_c__UnitreeCommond_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Int8)();
  if (!UnitreeCommond__rosidl_typesupport_introspection_c__UnitreeCommond_message_type_support_handle.typesupport_identifier) {
    UnitreeCommond__rosidl_typesupport_introspection_c__UnitreeCommond_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &UnitreeCommond__rosidl_typesupport_introspection_c__UnitreeCommond_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
