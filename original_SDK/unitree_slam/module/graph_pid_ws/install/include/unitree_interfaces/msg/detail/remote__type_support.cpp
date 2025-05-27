// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from unitree_interfaces:msg/Remote.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "unitree_interfaces/msg/detail/remote__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace unitree_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Remote_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) unitree_interfaces::msg::Remote(_init);
}

void Remote_fini_function(void * message_memory)
{
  auto typed_message = static_cast<unitree_interfaces::msg::Remote *>(message_memory);
  typed_message->~Remote();
}

size_t size_function__Remote__remote_data(const void * untyped_member)
{
  (void)untyped_member;
  return 40;
}

const void * get_const_function__Remote__remote_data(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint8_t, 40> *>(untyped_member);
  return &member[index];
}

void * get_function__Remote__remote_data(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint8_t, 40> *>(untyped_member);
  return &member[index];
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Remote_message_member_array[1] = {
  {
    "remote_data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    40,  // array size
    false,  // is upper bound
    offsetof(unitree_interfaces::msg::Remote, remote_data),  // bytes offset in struct
    nullptr,  // default value
    size_function__Remote__remote_data,  // size() function pointer
    get_const_function__Remote__remote_data,  // get_const(index) function pointer
    get_function__Remote__remote_data,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Remote_message_members = {
  "unitree_interfaces::msg",  // message namespace
  "Remote",  // message name
  1,  // number of fields
  sizeof(unitree_interfaces::msg::Remote),
  Remote_message_member_array,  // message members
  Remote_init_function,  // function to initialize message memory (memory has to be allocated)
  Remote_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Remote_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Remote_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace unitree_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<unitree_interfaces::msg::Remote>()
{
  return &::unitree_interfaces::msg::rosidl_typesupport_introspection_cpp::Remote_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, unitree_interfaces, msg, Remote)() {
  return &::unitree_interfaces::msg::rosidl_typesupport_introspection_cpp::Remote_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
