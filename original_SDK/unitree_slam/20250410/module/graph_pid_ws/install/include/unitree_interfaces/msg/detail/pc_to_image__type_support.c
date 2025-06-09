// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from unitree_interfaces:msg/PcToImage.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "unitree_interfaces/msg/detail/pc_to_image__rosidl_typesupport_introspection_c.h"
#include "unitree_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "unitree_interfaces/msg/detail/pc_to_image__functions.h"
#include "unitree_interfaces/msg/detail/pc_to_image__struct.h"


// Include directives for member types
// Member `image_x`
// Member `image_y`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `image`
#include "sensor_msgs/msg/image.h"
// Member `image`
#include "sensor_msgs/msg/detail/image__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void PcToImage__rosidl_typesupport_introspection_c__PcToImage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  unitree_interfaces__msg__PcToImage__init(message_memory);
}

void PcToImage__rosidl_typesupport_introspection_c__PcToImage_fini_function(void * message_memory)
{
  unitree_interfaces__msg__PcToImage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember PcToImage__rosidl_typesupport_introspection_c__PcToImage_message_member_array[6] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unitree_interfaces__msg__PcToImage, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unitree_interfaces__msg__PcToImage, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "res",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unitree_interfaces__msg__PcToImage, res),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "image_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unitree_interfaces__msg__PcToImage, image_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "image_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unitree_interfaces__msg__PcToImage, image_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "image",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unitree_interfaces__msg__PcToImage, image),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PcToImage__rosidl_typesupport_introspection_c__PcToImage_message_members = {
  "unitree_interfaces__msg",  // message namespace
  "PcToImage",  // message name
  6,  // number of fields
  sizeof(unitree_interfaces__msg__PcToImage),
  PcToImage__rosidl_typesupport_introspection_c__PcToImage_message_member_array,  // message members
  PcToImage__rosidl_typesupport_introspection_c__PcToImage_init_function,  // function to initialize message memory (memory has to be allocated)
  PcToImage__rosidl_typesupport_introspection_c__PcToImage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PcToImage__rosidl_typesupport_introspection_c__PcToImage_message_type_support_handle = {
  0,
  &PcToImage__rosidl_typesupport_introspection_c__PcToImage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_unitree_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unitree_interfaces, msg, PcToImage)() {
  PcToImage__rosidl_typesupport_introspection_c__PcToImage_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, Image)();
  if (!PcToImage__rosidl_typesupport_introspection_c__PcToImage_message_type_support_handle.typesupport_identifier) {
    PcToImage__rosidl_typesupport_introspection_c__PcToImage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PcToImage__rosidl_typesupport_introspection_c__PcToImage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
