// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from unitree_interfaces:msg/FootForce.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "unitree_interfaces/msg/detail/foot_force__struct.hpp"
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

void FootForce_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) unitree_interfaces::msg::FootForce(_init);
}

void FootForce_fini_function(void * message_memory)
{
  auto typed_message = static_cast<unitree_interfaces::msg::FootForce *>(message_memory);
  typed_message->~FootForce();
}

size_t size_function__FootForce__foot_force(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__FootForce__foot_force(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int16_t, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__FootForce__foot_force(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int16_t, 4> *>(untyped_member);
  return &member[index];
}

size_t size_function__FootForce__foot_force_estimated(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__FootForce__foot_force_estimated(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int16_t, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__FootForce__foot_force_estimated(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int16_t, 4> *>(untyped_member);
  return &member[index];
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember FootForce_message_member_array[2] = {
  {
    "foot_force",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(unitree_interfaces::msg::FootForce, foot_force),  // bytes offset in struct
    nullptr,  // default value
    size_function__FootForce__foot_force,  // size() function pointer
    get_const_function__FootForce__foot_force,  // get_const(index) function pointer
    get_function__FootForce__foot_force,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "foot_force_estimated",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(unitree_interfaces::msg::FootForce, foot_force_estimated),  // bytes offset in struct
    nullptr,  // default value
    size_function__FootForce__foot_force_estimated,  // size() function pointer
    get_const_function__FootForce__foot_force_estimated,  // get_const(index) function pointer
    get_function__FootForce__foot_force_estimated,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers FootForce_message_members = {
  "unitree_interfaces::msg",  // message namespace
  "FootForce",  // message name
  2,  // number of fields
  sizeof(unitree_interfaces::msg::FootForce),
  FootForce_message_member_array,  // message members
  FootForce_init_function,  // function to initialize message memory (memory has to be allocated)
  FootForce_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t FootForce_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FootForce_message_members,
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
get_message_type_support_handle<unitree_interfaces::msg::FootForce>()
{
  return &::unitree_interfaces::msg::rosidl_typesupport_introspection_cpp::FootForce_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, unitree_interfaces, msg, FootForce)() {
  return &::unitree_interfaces::msg::rosidl_typesupport_introspection_cpp::FootForce_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
