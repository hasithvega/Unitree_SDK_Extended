// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from graph_msg:msg/Node.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "graph_msg/msg/detail/node__rosidl_typesupport_introspection_c.h"
#include "graph_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "graph_msg/msg/detail/node__functions.h"
#include "graph_msg/msg/detail/node__struct.h"


// Include directives for member types
// Member `node_name`
// Member `node_position_x`
// Member `node_position_y`
// Member `node_position_z`
// Member `node_yaw`
// Member `node_attribute`
// Member `undefined`
// Member `node_state_2`
// Member `node_state_3`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `node_state_list`
#include "std_msgs/msg/float32_multi_array.h"
// Member `node_state_list`
#include "std_msgs/msg/detail/float32_multi_array__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Node__rosidl_typesupport_introspection_c__Node_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  graph_msg__msg__Node__init(message_memory);
}

void Node__rosidl_typesupport_introspection_c__Node_fini_function(void * message_memory)
{
  graph_msg__msg__Node__fini(message_memory);
}

size_t Node__rosidl_typesupport_introspection_c__size_function__Float32MultiArray__node_state_list(
  const void * untyped_member)
{
  const std_msgs__msg__Float32MultiArray__Sequence * member =
    (const std_msgs__msg__Float32MultiArray__Sequence *)(untyped_member);
  return member->size;
}

const void * Node__rosidl_typesupport_introspection_c__get_const_function__Float32MultiArray__node_state_list(
  const void * untyped_member, size_t index)
{
  const std_msgs__msg__Float32MultiArray__Sequence * member =
    (const std_msgs__msg__Float32MultiArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void * Node__rosidl_typesupport_introspection_c__get_function__Float32MultiArray__node_state_list(
  void * untyped_member, size_t index)
{
  std_msgs__msg__Float32MultiArray__Sequence * member =
    (std_msgs__msg__Float32MultiArray__Sequence *)(untyped_member);
  return &member->data[index];
}

bool Node__rosidl_typesupport_introspection_c__resize_function__Float32MultiArray__node_state_list(
  void * untyped_member, size_t size)
{
  std_msgs__msg__Float32MultiArray__Sequence * member =
    (std_msgs__msg__Float32MultiArray__Sequence *)(untyped_member);
  std_msgs__msg__Float32MultiArray__Sequence__fini(member);
  return std_msgs__msg__Float32MultiArray__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember Node__rosidl_typesupport_introspection_c__Node_message_member_array[10] = {
  {
    "node_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_msg__msg__Node, node_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "node_position_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_msg__msg__Node, node_position_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "node_position_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_msg__msg__Node, node_position_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "node_position_z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_msg__msg__Node, node_position_z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "node_yaw",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_msg__msg__Node, node_yaw),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "node_attribute",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_msg__msg__Node, node_attribute),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "undefined",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_msg__msg__Node, undefined),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "node_state_2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_msg__msg__Node, node_state_2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "node_state_3",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_msg__msg__Node, node_state_3),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "node_state_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_msg__msg__Node, node_state_list),  // bytes offset in struct
    NULL,  // default value
    Node__rosidl_typesupport_introspection_c__size_function__Float32MultiArray__node_state_list,  // size() function pointer
    Node__rosidl_typesupport_introspection_c__get_const_function__Float32MultiArray__node_state_list,  // get_const(index) function pointer
    Node__rosidl_typesupport_introspection_c__get_function__Float32MultiArray__node_state_list,  // get(index) function pointer
    Node__rosidl_typesupport_introspection_c__resize_function__Float32MultiArray__node_state_list  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Node__rosidl_typesupport_introspection_c__Node_message_members = {
  "graph_msg__msg",  // message namespace
  "Node",  // message name
  10,  // number of fields
  sizeof(graph_msg__msg__Node),
  Node__rosidl_typesupport_introspection_c__Node_message_member_array,  // message members
  Node__rosidl_typesupport_introspection_c__Node_init_function,  // function to initialize message memory (memory has to be allocated)
  Node__rosidl_typesupport_introspection_c__Node_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Node__rosidl_typesupport_introspection_c__Node_message_type_support_handle = {
  0,
  &Node__rosidl_typesupport_introspection_c__Node_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_graph_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, graph_msg, msg, Node)() {
  Node__rosidl_typesupport_introspection_c__Node_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Float32MultiArray)();
  if (!Node__rosidl_typesupport_introspection_c__Node_message_type_support_handle.typesupport_identifier) {
    Node__rosidl_typesupport_introspection_c__Node_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Node__rosidl_typesupport_introspection_c__Node_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
