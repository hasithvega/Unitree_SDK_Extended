// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from custom_interface:msg/NavState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "custom_interface/msg/detail/nav_state__rosidl_typesupport_introspection_c.h"
#include "custom_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "custom_interface/msg/detail/nav_state__functions.h"
#include "custom_interface/msg/detail/nav_state__struct.h"


// Include directives for member types
// Member `id`
// Member `state`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void NavState__rosidl_typesupport_introspection_c__NavState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  custom_interface__msg__NavState__init(message_memory);
}

void NavState__rosidl_typesupport_introspection_c__NavState_fini_function(void * message_memory)
{
  custom_interface__msg__NavState__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember NavState__rosidl_typesupport_introspection_c__NavState_message_member_array[2] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_interface__msg__NavState, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_interface__msg__NavState, state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers NavState__rosidl_typesupport_introspection_c__NavState_message_members = {
  "custom_interface__msg",  // message namespace
  "NavState",  // message name
  2,  // number of fields
  sizeof(custom_interface__msg__NavState),
  NavState__rosidl_typesupport_introspection_c__NavState_message_member_array,  // message members
  NavState__rosidl_typesupport_introspection_c__NavState_init_function,  // function to initialize message memory (memory has to be allocated)
  NavState__rosidl_typesupport_introspection_c__NavState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t NavState__rosidl_typesupport_introspection_c__NavState_message_type_support_handle = {
  0,
  &NavState__rosidl_typesupport_introspection_c__NavState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interface, msg, NavState)() {
  if (!NavState__rosidl_typesupport_introspection_c__NavState_message_type_support_handle.typesupport_identifier) {
    NavState__rosidl_typesupport_introspection_c__NavState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &NavState__rosidl_typesupport_introspection_c__NavState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
