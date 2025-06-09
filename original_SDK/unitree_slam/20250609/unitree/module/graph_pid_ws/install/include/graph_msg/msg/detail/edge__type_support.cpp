// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from graph_msg:msg/Edge.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "graph_msg/msg/detail/edge__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace graph_msg
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Edge_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) graph_msg::msg::Edge(_init);
}

void Edge_fini_function(void * message_memory)
{
  auto typed_message = static_cast<graph_msg::msg::Edge *>(message_memory);
  typed_message->~Edge();
}

size_t size_function__Edge__edge_name(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint16_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Edge__edge_name(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint16_t> *>(untyped_member);
  return &member[index];
}

void * get_function__Edge__edge_name(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint16_t> *>(untyped_member);
  return &member[index];
}

void resize_function__Edge__edge_name(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint16_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Edge__start_node_name(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint16_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Edge__start_node_name(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint16_t> *>(untyped_member);
  return &member[index];
}

void * get_function__Edge__start_node_name(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint16_t> *>(untyped_member);
  return &member[index];
}

void resize_function__Edge__start_node_name(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint16_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Edge__end_node_name(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint16_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Edge__end_node_name(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint16_t> *>(untyped_member);
  return &member[index];
}

void * get_function__Edge__end_node_name(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint16_t> *>(untyped_member);
  return &member[index];
}

void resize_function__Edge__end_node_name(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint16_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Edge__edge_length(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Edge__edge_length(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__Edge__edge_length(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__Edge__edge_length(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Edge__dog_stats(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint16_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Edge__dog_stats(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint16_t> *>(untyped_member);
  return &member[index];
}

void * get_function__Edge__dog_stats(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint16_t> *>(untyped_member);
  return &member[index];
}

void resize_function__Edge__dog_stats(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint16_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Edge__dog_back_stats(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint16_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Edge__dog_back_stats(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint16_t> *>(untyped_member);
  return &member[index];
}

void * get_function__Edge__dog_back_stats(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint16_t> *>(untyped_member);
  return &member[index];
}

void resize_function__Edge__dog_back_stats(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint16_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Edge__dog_speed(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Edge__dog_speed(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__Edge__dog_speed(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__Edge__dog_speed(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Edge__edge_state(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint16_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Edge__edge_state(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint16_t> *>(untyped_member);
  return &member[index];
}

void * get_function__Edge__edge_state(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint16_t> *>(untyped_member);
  return &member[index];
}

void resize_function__Edge__edge_state(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint16_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Edge__edge_state_1(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Edge__edge_state_1(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__Edge__edge_state_1(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__Edge__edge_state_1(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Edge__edge_state_2(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint16_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Edge__edge_state_2(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint16_t> *>(untyped_member);
  return &member[index];
}

void * get_function__Edge__edge_state_2(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint16_t> *>(untyped_member);
  return &member[index];
}

void resize_function__Edge__edge_state_2(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint16_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Edge__edge_state_3(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint16_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Edge__edge_state_3(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint16_t> *>(untyped_member);
  return &member[index];
}

void * get_function__Edge__edge_state_3(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint16_t> *>(untyped_member);
  return &member[index];
}

void resize_function__Edge__edge_state_3(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint16_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Edge__edge_state_4(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint16_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Edge__edge_state_4(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint16_t> *>(untyped_member);
  return &member[index];
}

void * get_function__Edge__edge_state_4(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint16_t> *>(untyped_member);
  return &member[index];
}

void resize_function__Edge__edge_state_4(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint16_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Edge__edge_state_list(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std_msgs::msg::Float32MultiArray> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Edge__edge_state_list(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std_msgs::msg::Float32MultiArray> *>(untyped_member);
  return &member[index];
}

void * get_function__Edge__edge_state_list(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std_msgs::msg::Float32MultiArray> *>(untyped_member);
  return &member[index];
}

void resize_function__Edge__edge_state_list(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std_msgs::msg::Float32MultiArray> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Edge_message_member_array[13] = {
  {
    "edge_name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_msg::msg::Edge, edge_name),  // bytes offset in struct
    nullptr,  // default value
    size_function__Edge__edge_name,  // size() function pointer
    get_const_function__Edge__edge_name,  // get_const(index) function pointer
    get_function__Edge__edge_name,  // get(index) function pointer
    resize_function__Edge__edge_name  // resize(index) function pointer
  },
  {
    "start_node_name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_msg::msg::Edge, start_node_name),  // bytes offset in struct
    nullptr,  // default value
    size_function__Edge__start_node_name,  // size() function pointer
    get_const_function__Edge__start_node_name,  // get_const(index) function pointer
    get_function__Edge__start_node_name,  // get(index) function pointer
    resize_function__Edge__start_node_name  // resize(index) function pointer
  },
  {
    "end_node_name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_msg::msg::Edge, end_node_name),  // bytes offset in struct
    nullptr,  // default value
    size_function__Edge__end_node_name,  // size() function pointer
    get_const_function__Edge__end_node_name,  // get_const(index) function pointer
    get_function__Edge__end_node_name,  // get(index) function pointer
    resize_function__Edge__end_node_name  // resize(index) function pointer
  },
  {
    "edge_length",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_msg::msg::Edge, edge_length),  // bytes offset in struct
    nullptr,  // default value
    size_function__Edge__edge_length,  // size() function pointer
    get_const_function__Edge__edge_length,  // get_const(index) function pointer
    get_function__Edge__edge_length,  // get(index) function pointer
    resize_function__Edge__edge_length  // resize(index) function pointer
  },
  {
    "dog_stats",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_msg::msg::Edge, dog_stats),  // bytes offset in struct
    nullptr,  // default value
    size_function__Edge__dog_stats,  // size() function pointer
    get_const_function__Edge__dog_stats,  // get_const(index) function pointer
    get_function__Edge__dog_stats,  // get(index) function pointer
    resize_function__Edge__dog_stats  // resize(index) function pointer
  },
  {
    "dog_back_stats",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_msg::msg::Edge, dog_back_stats),  // bytes offset in struct
    nullptr,  // default value
    size_function__Edge__dog_back_stats,  // size() function pointer
    get_const_function__Edge__dog_back_stats,  // get_const(index) function pointer
    get_function__Edge__dog_back_stats,  // get(index) function pointer
    resize_function__Edge__dog_back_stats  // resize(index) function pointer
  },
  {
    "dog_speed",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_msg::msg::Edge, dog_speed),  // bytes offset in struct
    nullptr,  // default value
    size_function__Edge__dog_speed,  // size() function pointer
    get_const_function__Edge__dog_speed,  // get_const(index) function pointer
    get_function__Edge__dog_speed,  // get(index) function pointer
    resize_function__Edge__dog_speed  // resize(index) function pointer
  },
  {
    "edge_state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_msg::msg::Edge, edge_state),  // bytes offset in struct
    nullptr,  // default value
    size_function__Edge__edge_state,  // size() function pointer
    get_const_function__Edge__edge_state,  // get_const(index) function pointer
    get_function__Edge__edge_state,  // get(index) function pointer
    resize_function__Edge__edge_state  // resize(index) function pointer
  },
  {
    "edge_state_1",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_msg::msg::Edge, edge_state_1),  // bytes offset in struct
    nullptr,  // default value
    size_function__Edge__edge_state_1,  // size() function pointer
    get_const_function__Edge__edge_state_1,  // get_const(index) function pointer
    get_function__Edge__edge_state_1,  // get(index) function pointer
    resize_function__Edge__edge_state_1  // resize(index) function pointer
  },
  {
    "edge_state_2",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_msg::msg::Edge, edge_state_2),  // bytes offset in struct
    nullptr,  // default value
    size_function__Edge__edge_state_2,  // size() function pointer
    get_const_function__Edge__edge_state_2,  // get_const(index) function pointer
    get_function__Edge__edge_state_2,  // get(index) function pointer
    resize_function__Edge__edge_state_2  // resize(index) function pointer
  },
  {
    "edge_state_3",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_msg::msg::Edge, edge_state_3),  // bytes offset in struct
    nullptr,  // default value
    size_function__Edge__edge_state_3,  // size() function pointer
    get_const_function__Edge__edge_state_3,  // get_const(index) function pointer
    get_function__Edge__edge_state_3,  // get(index) function pointer
    resize_function__Edge__edge_state_3  // resize(index) function pointer
  },
  {
    "edge_state_4",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_msg::msg::Edge, edge_state_4),  // bytes offset in struct
    nullptr,  // default value
    size_function__Edge__edge_state_4,  // size() function pointer
    get_const_function__Edge__edge_state_4,  // get_const(index) function pointer
    get_function__Edge__edge_state_4,  // get(index) function pointer
    resize_function__Edge__edge_state_4  // resize(index) function pointer
  },
  {
    "edge_state_list",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Float32MultiArray>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_msg::msg::Edge, edge_state_list),  // bytes offset in struct
    nullptr,  // default value
    size_function__Edge__edge_state_list,  // size() function pointer
    get_const_function__Edge__edge_state_list,  // get_const(index) function pointer
    get_function__Edge__edge_state_list,  // get(index) function pointer
    resize_function__Edge__edge_state_list  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Edge_message_members = {
  "graph_msg::msg",  // message namespace
  "Edge",  // message name
  13,  // number of fields
  sizeof(graph_msg::msg::Edge),
  Edge_message_member_array,  // message members
  Edge_init_function,  // function to initialize message memory (memory has to be allocated)
  Edge_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Edge_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Edge_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace graph_msg


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<graph_msg::msg::Edge>()
{
  return &::graph_msg::msg::rosidl_typesupport_introspection_cpp::Edge_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, graph_msg, msg, Edge)() {
  return &::graph_msg::msg::rosidl_typesupport_introspection_cpp::Edge_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
