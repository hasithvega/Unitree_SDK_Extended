// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from unitree_interfaces:msg/QtEdge.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "unitree_interfaces/msg/detail/qt_edge__rosidl_typesupport_introspection_c.h"
#include "unitree_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "unitree_interfaces/msg/detail/qt_edge__functions.h"
#include "unitree_interfaces/msg/detail/qt_edge__struct.h"


// Include directives for member types
// Member `seq`
#include "std_msgs/msg/string.h"
// Member `seq`
#include "std_msgs/msg/detail/string__rosidl_typesupport_introspection_c.h"
// Member `edge`
#include "graph_msg/msg/edge.h"
// Member `edge`
#include "graph_msg/msg/detail/edge__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void QtEdge__rosidl_typesupport_introspection_c__QtEdge_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  unitree_interfaces__msg__QtEdge__init(message_memory);
}

void QtEdge__rosidl_typesupport_introspection_c__QtEdge_fini_function(void * message_memory)
{
  unitree_interfaces__msg__QtEdge__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember QtEdge__rosidl_typesupport_introspection_c__QtEdge_message_member_array[2] = {
  {
    "seq",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unitree_interfaces__msg__QtEdge, seq),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "edge",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unitree_interfaces__msg__QtEdge, edge),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers QtEdge__rosidl_typesupport_introspection_c__QtEdge_message_members = {
  "unitree_interfaces__msg",  // message namespace
  "QtEdge",  // message name
  2,  // number of fields
  sizeof(unitree_interfaces__msg__QtEdge),
  QtEdge__rosidl_typesupport_introspection_c__QtEdge_message_member_array,  // message members
  QtEdge__rosidl_typesupport_introspection_c__QtEdge_init_function,  // function to initialize message memory (memory has to be allocated)
  QtEdge__rosidl_typesupport_introspection_c__QtEdge_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t QtEdge__rosidl_typesupport_introspection_c__QtEdge_message_type_support_handle = {
  0,
  &QtEdge__rosidl_typesupport_introspection_c__QtEdge_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_unitree_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unitree_interfaces, msg, QtEdge)() {
  QtEdge__rosidl_typesupport_introspection_c__QtEdge_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, String)();
  QtEdge__rosidl_typesupport_introspection_c__QtEdge_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, graph_msg, msg, Edge)();
  if (!QtEdge__rosidl_typesupport_introspection_c__QtEdge_message_type_support_handle.typesupport_identifier) {
    QtEdge__rosidl_typesupport_introspection_c__QtEdge_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &QtEdge__rosidl_typesupport_introspection_c__QtEdge_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
