// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from unitree_api:msg/ResponseSlam.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "unitree_api/msg/detail/response_slam__rosidl_typesupport_introspection_c.h"
#include "unitree_api/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "unitree_api/msg/detail/response_slam__functions.h"
#include "unitree_api/msg/detail/response_slam__struct.h"


// Include directives for member types
// Member `data_info`
#include "unitree_api/msg/response.h"
// Member `data_info`
#include "unitree_api/msg/detail/response__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ResponseSlam__rosidl_typesupport_introspection_c__ResponseSlam_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  unitree_api__msg__ResponseSlam__init(message_memory);
}

void ResponseSlam__rosidl_typesupport_introspection_c__ResponseSlam_fini_function(void * message_memory)
{
  unitree_api__msg__ResponseSlam__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ResponseSlam__rosidl_typesupport_introspection_c__ResponseSlam_message_member_array[1] = {
  {
    "data_info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unitree_api__msg__ResponseSlam, data_info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ResponseSlam__rosidl_typesupport_introspection_c__ResponseSlam_message_members = {
  "unitree_api__msg",  // message namespace
  "ResponseSlam",  // message name
  1,  // number of fields
  sizeof(unitree_api__msg__ResponseSlam),
  ResponseSlam__rosidl_typesupport_introspection_c__ResponseSlam_message_member_array,  // message members
  ResponseSlam__rosidl_typesupport_introspection_c__ResponseSlam_init_function,  // function to initialize message memory (memory has to be allocated)
  ResponseSlam__rosidl_typesupport_introspection_c__ResponseSlam_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ResponseSlam__rosidl_typesupport_introspection_c__ResponseSlam_message_type_support_handle = {
  0,
  &ResponseSlam__rosidl_typesupport_introspection_c__ResponseSlam_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_unitree_api
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unitree_api, msg, ResponseSlam)() {
  ResponseSlam__rosidl_typesupport_introspection_c__ResponseSlam_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unitree_api, msg, Response)();
  if (!ResponseSlam__rosidl_typesupport_introspection_c__ResponseSlam_message_type_support_handle.typesupport_identifier) {
    ResponseSlam__rosidl_typesupport_introspection_c__ResponseSlam_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ResponseSlam__rosidl_typesupport_introspection_c__ResponseSlam_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
