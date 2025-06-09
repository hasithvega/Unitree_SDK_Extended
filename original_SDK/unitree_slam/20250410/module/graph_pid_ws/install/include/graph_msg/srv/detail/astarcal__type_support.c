// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from graph_msg:srv/Astarcal.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "graph_msg/srv/detail/astarcal__rosidl_typesupport_introspection_c.h"
#include "graph_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "graph_msg/srv/detail/astarcal__functions.h"
#include "graph_msg/srv/detail/astarcal__struct.h"


// Include directives for member types
// Member `node`
#include "graph_msg/msg/node.h"
// Member `node`
#include "graph_msg/msg/detail/node__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Astarcal_Request__rosidl_typesupport_introspection_c__Astarcal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  graph_msg__srv__Astarcal_Request__init(message_memory);
}

void Astarcal_Request__rosidl_typesupport_introspection_c__Astarcal_Request_fini_function(void * message_memory)
{
  graph_msg__srv__Astarcal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Astarcal_Request__rosidl_typesupport_introspection_c__Astarcal_Request_message_member_array[2] = {
  {
    "node",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_msg__srv__Astarcal_Request, node),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "floor_index",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_msg__srv__Astarcal_Request, floor_index),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Astarcal_Request__rosidl_typesupport_introspection_c__Astarcal_Request_message_members = {
  "graph_msg__srv",  // message namespace
  "Astarcal_Request",  // message name
  2,  // number of fields
  sizeof(graph_msg__srv__Astarcal_Request),
  Astarcal_Request__rosidl_typesupport_introspection_c__Astarcal_Request_message_member_array,  // message members
  Astarcal_Request__rosidl_typesupport_introspection_c__Astarcal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Astarcal_Request__rosidl_typesupport_introspection_c__Astarcal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Astarcal_Request__rosidl_typesupport_introspection_c__Astarcal_Request_message_type_support_handle = {
  0,
  &Astarcal_Request__rosidl_typesupport_introspection_c__Astarcal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_graph_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, graph_msg, srv, Astarcal_Request)() {
  Astarcal_Request__rosidl_typesupport_introspection_c__Astarcal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, graph_msg, msg, Node)();
  if (!Astarcal_Request__rosidl_typesupport_introspection_c__Astarcal_Request_message_type_support_handle.typesupport_identifier) {
    Astarcal_Request__rosidl_typesupport_introspection_c__Astarcal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Astarcal_Request__rosidl_typesupport_introspection_c__Astarcal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "graph_msg/srv/detail/astarcal__rosidl_typesupport_introspection_c.h"
// already included above
// #include "graph_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "graph_msg/srv/detail/astarcal__functions.h"
// already included above
// #include "graph_msg/srv/detail/astarcal__struct.h"


// Include directives for member types
// Member `weight`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Astarcal_Response__rosidl_typesupport_introspection_c__Astarcal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  graph_msg__srv__Astarcal_Response__init(message_memory);
}

void Astarcal_Response__rosidl_typesupport_introspection_c__Astarcal_Response_fini_function(void * message_memory)
{
  graph_msg__srv__Astarcal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Astarcal_Response__rosidl_typesupport_introspection_c__Astarcal_Response_message_member_array[2] = {
  {
    "weight",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_msg__srv__Astarcal_Response, weight),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "floor_index_cb",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_msg__srv__Astarcal_Response, floor_index_cb),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Astarcal_Response__rosidl_typesupport_introspection_c__Astarcal_Response_message_members = {
  "graph_msg__srv",  // message namespace
  "Astarcal_Response",  // message name
  2,  // number of fields
  sizeof(graph_msg__srv__Astarcal_Response),
  Astarcal_Response__rosidl_typesupport_introspection_c__Astarcal_Response_message_member_array,  // message members
  Astarcal_Response__rosidl_typesupport_introspection_c__Astarcal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Astarcal_Response__rosidl_typesupport_introspection_c__Astarcal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Astarcal_Response__rosidl_typesupport_introspection_c__Astarcal_Response_message_type_support_handle = {
  0,
  &Astarcal_Response__rosidl_typesupport_introspection_c__Astarcal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_graph_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, graph_msg, srv, Astarcal_Response)() {
  if (!Astarcal_Response__rosidl_typesupport_introspection_c__Astarcal_Response_message_type_support_handle.typesupport_identifier) {
    Astarcal_Response__rosidl_typesupport_introspection_c__Astarcal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Astarcal_Response__rosidl_typesupport_introspection_c__Astarcal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "graph_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "graph_msg/srv/detail/astarcal__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers graph_msg__srv__detail__astarcal__rosidl_typesupport_introspection_c__Astarcal_service_members = {
  "graph_msg__srv",  // service namespace
  "Astarcal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // graph_msg__srv__detail__astarcal__rosidl_typesupport_introspection_c__Astarcal_Request_message_type_support_handle,
  NULL  // response message
  // graph_msg__srv__detail__astarcal__rosidl_typesupport_introspection_c__Astarcal_Response_message_type_support_handle
};

static rosidl_service_type_support_t graph_msg__srv__detail__astarcal__rosidl_typesupport_introspection_c__Astarcal_service_type_support_handle = {
  0,
  &graph_msg__srv__detail__astarcal__rosidl_typesupport_introspection_c__Astarcal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, graph_msg, srv, Astarcal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, graph_msg, srv, Astarcal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_graph_msg
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, graph_msg, srv, Astarcal)() {
  if (!graph_msg__srv__detail__astarcal__rosidl_typesupport_introspection_c__Astarcal_service_type_support_handle.typesupport_identifier) {
    graph_msg__srv__detail__astarcal__rosidl_typesupport_introspection_c__Astarcal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)graph_msg__srv__detail__astarcal__rosidl_typesupport_introspection_c__Astarcal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, graph_msg, srv, Astarcal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, graph_msg, srv, Astarcal_Response)()->data;
  }

  return &graph_msg__srv__detail__astarcal__rosidl_typesupport_introspection_c__Astarcal_service_type_support_handle;
}
