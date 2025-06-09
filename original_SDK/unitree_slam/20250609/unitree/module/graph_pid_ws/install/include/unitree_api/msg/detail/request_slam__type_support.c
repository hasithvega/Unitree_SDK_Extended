// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from unitree_api:msg/RequestSlam.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "unitree_api/msg/detail/request_slam__rosidl_typesupport_introspection_c.h"
#include "unitree_api/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "unitree_api/msg/detail/request_slam__functions.h"
#include "unitree_api/msg/detail/request_slam__struct.h"


// Include directives for member types
// Member `data_info`
#include "unitree_api/msg/request.h"
// Member `data_info`
#include "unitree_api/msg/detail/request__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void RequestSlam__rosidl_typesupport_introspection_c__RequestSlam_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  unitree_api__msg__RequestSlam__init(message_memory);
}

void RequestSlam__rosidl_typesupport_introspection_c__RequestSlam_fini_function(void * message_memory)
{
  unitree_api__msg__RequestSlam__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember RequestSlam__rosidl_typesupport_introspection_c__RequestSlam_message_member_array[1] = {
  {
    "data_info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unitree_api__msg__RequestSlam, data_info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RequestSlam__rosidl_typesupport_introspection_c__RequestSlam_message_members = {
  "unitree_api__msg",  // message namespace
  "RequestSlam",  // message name
  1,  // number of fields
  sizeof(unitree_api__msg__RequestSlam),
  RequestSlam__rosidl_typesupport_introspection_c__RequestSlam_message_member_array,  // message members
  RequestSlam__rosidl_typesupport_introspection_c__RequestSlam_init_function,  // function to initialize message memory (memory has to be allocated)
  RequestSlam__rosidl_typesupport_introspection_c__RequestSlam_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RequestSlam__rosidl_typesupport_introspection_c__RequestSlam_message_type_support_handle = {
  0,
  &RequestSlam__rosidl_typesupport_introspection_c__RequestSlam_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_unitree_api
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unitree_api, msg, RequestSlam)() {
  RequestSlam__rosidl_typesupport_introspection_c__RequestSlam_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unitree_api, msg, Request)();
  if (!RequestSlam__rosidl_typesupport_introspection_c__RequestSlam_message_type_support_handle.typesupport_identifier) {
    RequestSlam__rosidl_typesupport_introspection_c__RequestSlam_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RequestSlam__rosidl_typesupport_introspection_c__RequestSlam_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
