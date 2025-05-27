// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from unitree_interfaces:msg/MotorCmds.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "unitree_interfaces/msg/detail/motor_cmds__rosidl_typesupport_introspection_c.h"
#include "unitree_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "unitree_interfaces/msg/detail/motor_cmds__functions.h"
#include "unitree_interfaces/msg/detail/motor_cmds__struct.h"


// Include directives for member types
// Member `motor_cmd`
#include "unitree_interfaces/msg/motor_cmd.h"
// Member `motor_cmd`
#include "unitree_interfaces/msg/detail/motor_cmd__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MotorCmds__rosidl_typesupport_introspection_c__MotorCmds_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  unitree_interfaces__msg__MotorCmds__init(message_memory);
}

void MotorCmds__rosidl_typesupport_introspection_c__MotorCmds_fini_function(void * message_memory)
{
  unitree_interfaces__msg__MotorCmds__fini(message_memory);
}

size_t MotorCmds__rosidl_typesupport_introspection_c__size_function__MotorCmd__motor_cmd(
  const void * untyped_member)
{
  (void)untyped_member;
  return 20;
}

const void * MotorCmds__rosidl_typesupport_introspection_c__get_const_function__MotorCmd__motor_cmd(
  const void * untyped_member, size_t index)
{
  const unitree_interfaces__msg__MotorCmd ** member =
    (const unitree_interfaces__msg__MotorCmd **)(untyped_member);
  return &(*member)[index];
}

void * MotorCmds__rosidl_typesupport_introspection_c__get_function__MotorCmd__motor_cmd(
  void * untyped_member, size_t index)
{
  unitree_interfaces__msg__MotorCmd ** member =
    (unitree_interfaces__msg__MotorCmd **)(untyped_member);
  return &(*member)[index];
}

static rosidl_typesupport_introspection_c__MessageMember MotorCmds__rosidl_typesupport_introspection_c__MotorCmds_message_member_array[1] = {
  {
    "motor_cmd",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    20,  // array size
    false,  // is upper bound
    offsetof(unitree_interfaces__msg__MotorCmds, motor_cmd),  // bytes offset in struct
    NULL,  // default value
    MotorCmds__rosidl_typesupport_introspection_c__size_function__MotorCmd__motor_cmd,  // size() function pointer
    MotorCmds__rosidl_typesupport_introspection_c__get_const_function__MotorCmd__motor_cmd,  // get_const(index) function pointer
    MotorCmds__rosidl_typesupport_introspection_c__get_function__MotorCmd__motor_cmd,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MotorCmds__rosidl_typesupport_introspection_c__MotorCmds_message_members = {
  "unitree_interfaces__msg",  // message namespace
  "MotorCmds",  // message name
  1,  // number of fields
  sizeof(unitree_interfaces__msg__MotorCmds),
  MotorCmds__rosidl_typesupport_introspection_c__MotorCmds_message_member_array,  // message members
  MotorCmds__rosidl_typesupport_introspection_c__MotorCmds_init_function,  // function to initialize message memory (memory has to be allocated)
  MotorCmds__rosidl_typesupport_introspection_c__MotorCmds_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MotorCmds__rosidl_typesupport_introspection_c__MotorCmds_message_type_support_handle = {
  0,
  &MotorCmds__rosidl_typesupport_introspection_c__MotorCmds_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_unitree_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unitree_interfaces, msg, MotorCmds)() {
  MotorCmds__rosidl_typesupport_introspection_c__MotorCmds_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unitree_interfaces, msg, MotorCmd)();
  if (!MotorCmds__rosidl_typesupport_introspection_c__MotorCmds_message_type_support_handle.typesupport_identifier) {
    MotorCmds__rosidl_typesupport_introspection_c__MotorCmds_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MotorCmds__rosidl_typesupport_introspection_c__MotorCmds_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
