// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from unitree_interfaces:msg/BmsState.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "unitree_interfaces/msg/detail/bms_state__struct.hpp"
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

void BmsState_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) unitree_interfaces::msg::BmsState(_init);
}

void BmsState_fini_function(void * message_memory)
{
  auto typed_message = static_cast<unitree_interfaces::msg::BmsState *>(message_memory);
  typed_message->~BmsState();
}

size_t size_function__BmsState__bq_ntc(const void * untyped_member)
{
  (void)untyped_member;
  return 8;
}

const void * get_const_function__BmsState__bq_ntc(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int8_t, 8> *>(untyped_member);
  return &member[index];
}

void * get_function__BmsState__bq_ntc(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int8_t, 8> *>(untyped_member);
  return &member[index];
}

size_t size_function__BmsState__mcu_ntc(const void * untyped_member)
{
  (void)untyped_member;
  return 8;
}

const void * get_const_function__BmsState__mcu_ntc(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int8_t, 8> *>(untyped_member);
  return &member[index];
}

void * get_function__BmsState__mcu_ntc(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int8_t, 8> *>(untyped_member);
  return &member[index];
}

size_t size_function__BmsState__cell_voltage(const void * untyped_member)
{
  (void)untyped_member;
  return 30;
}

const void * get_const_function__BmsState__cell_voltage(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint16_t, 30> *>(untyped_member);
  return &member[index];
}

void * get_function__BmsState__cell_voltage(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint16_t, 30> *>(untyped_member);
  return &member[index];
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember BmsState_message_member_array[6] = {
  {
    "soc",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unitree_interfaces::msg::BmsState, soc),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "current",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unitree_interfaces::msg::BmsState, current),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "cycle",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unitree_interfaces::msg::BmsState, cycle),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "bq_ntc",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    8,  // array size
    false,  // is upper bound
    offsetof(unitree_interfaces::msg::BmsState, bq_ntc),  // bytes offset in struct
    nullptr,  // default value
    size_function__BmsState__bq_ntc,  // size() function pointer
    get_const_function__BmsState__bq_ntc,  // get_const(index) function pointer
    get_function__BmsState__bq_ntc,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "mcu_ntc",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    8,  // array size
    false,  // is upper bound
    offsetof(unitree_interfaces::msg::BmsState, mcu_ntc),  // bytes offset in struct
    nullptr,  // default value
    size_function__BmsState__mcu_ntc,  // size() function pointer
    get_const_function__BmsState__mcu_ntc,  // get_const(index) function pointer
    get_function__BmsState__mcu_ntc,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "cell_voltage",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    30,  // array size
    false,  // is upper bound
    offsetof(unitree_interfaces::msg::BmsState, cell_voltage),  // bytes offset in struct
    nullptr,  // default value
    size_function__BmsState__cell_voltage,  // size() function pointer
    get_const_function__BmsState__cell_voltage,  // get_const(index) function pointer
    get_function__BmsState__cell_voltage,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers BmsState_message_members = {
  "unitree_interfaces::msg",  // message namespace
  "BmsState",  // message name
  6,  // number of fields
  sizeof(unitree_interfaces::msg::BmsState),
  BmsState_message_member_array,  // message members
  BmsState_init_function,  // function to initialize message memory (memory has to be allocated)
  BmsState_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t BmsState_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &BmsState_message_members,
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
get_message_type_support_handle<unitree_interfaces::msg::BmsState>()
{
  return &::unitree_interfaces::msg::rosidl_typesupport_introspection_cpp::BmsState_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, unitree_interfaces, msg, BmsState)() {
  return &::unitree_interfaces::msg::rosidl_typesupport_introspection_cpp::BmsState_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
