// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from unitree_api:srv/WebCommand.idl
// generated code does not contain a copyright notice

#ifndef UNITREE_API__SRV__DETAIL__WEB_COMMAND__STRUCT_H_
#define UNITREE_API__SRV__DETAIL__WEB_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "unitree_api/msg/detail/request_header__struct.h"
// Member 'parameter'
#include "rosidl_runtime_c/string.h"
// Member 'binary'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in srv/WebCommand in the package unitree_api.
typedef struct unitree_api__srv__WebCommand_Request
{
  unitree_api__msg__RequestHeader header;
  rosidl_runtime_c__String parameter;
  rosidl_runtime_c__uint8__Sequence binary;
} unitree_api__srv__WebCommand_Request;

// Struct for a sequence of unitree_api__srv__WebCommand_Request.
typedef struct unitree_api__srv__WebCommand_Request__Sequence
{
  unitree_api__srv__WebCommand_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} unitree_api__srv__WebCommand_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "unitree_api/msg/detail/response_header__struct.h"
// Member 'data'
// already included above
// #include "rosidl_runtime_c/string.h"
// Member 'binary'
// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in srv/WebCommand in the package unitree_api.
typedef struct unitree_api__srv__WebCommand_Response
{
  unitree_api__msg__ResponseHeader header;
  rosidl_runtime_c__String data;
  rosidl_runtime_c__uint8__Sequence binary;
} unitree_api__srv__WebCommand_Response;

// Struct for a sequence of unitree_api__srv__WebCommand_Response.
typedef struct unitree_api__srv__WebCommand_Response__Sequence
{
  unitree_api__srv__WebCommand_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} unitree_api__srv__WebCommand_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UNITREE_API__SRV__DETAIL__WEB_COMMAND__STRUCT_H_
