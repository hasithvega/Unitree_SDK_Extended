// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from graph_msg:srv/Astarcal.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "graph_msg/srv/detail/astarcal__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace graph_msg
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void Astarcal_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) graph_msg::srv::Astarcal_Request(_init);
}

void Astarcal_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<graph_msg::srv::Astarcal_Request *>(message_memory);
  typed_message->~Astarcal_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Astarcal_Request_message_member_array[2] = {
  {
    "node",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<graph_msg::msg::Node>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_msg::srv::Astarcal_Request, node),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "floor_index",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_msg::srv::Astarcal_Request, floor_index),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Astarcal_Request_message_members = {
  "graph_msg::srv",  // message namespace
  "Astarcal_Request",  // message name
  2,  // number of fields
  sizeof(graph_msg::srv::Astarcal_Request),
  Astarcal_Request_message_member_array,  // message members
  Astarcal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Astarcal_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Astarcal_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Astarcal_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace graph_msg


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<graph_msg::srv::Astarcal_Request>()
{
  return &::graph_msg::srv::rosidl_typesupport_introspection_cpp::Astarcal_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, graph_msg, srv, Astarcal_Request)() {
  return &::graph_msg::srv::rosidl_typesupport_introspection_cpp::Astarcal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "graph_msg/srv/detail/astarcal__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace graph_msg
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void Astarcal_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) graph_msg::srv::Astarcal_Response(_init);
}

void Astarcal_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<graph_msg::srv::Astarcal_Response *>(message_memory);
  typed_message->~Astarcal_Response();
}

size_t size_function__Astarcal_Response__weight(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Astarcal_Response__weight(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__Astarcal_Response__weight(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__Astarcal_Response__weight(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Astarcal_Response_message_member_array[2] = {
  {
    "weight",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_msg::srv::Astarcal_Response, weight),  // bytes offset in struct
    nullptr,  // default value
    size_function__Astarcal_Response__weight,  // size() function pointer
    get_const_function__Astarcal_Response__weight,  // get_const(index) function pointer
    get_function__Astarcal_Response__weight,  // get(index) function pointer
    resize_function__Astarcal_Response__weight  // resize(index) function pointer
  },
  {
    "floor_index_cb",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_msg::srv::Astarcal_Response, floor_index_cb),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Astarcal_Response_message_members = {
  "graph_msg::srv",  // message namespace
  "Astarcal_Response",  // message name
  2,  // number of fields
  sizeof(graph_msg::srv::Astarcal_Response),
  Astarcal_Response_message_member_array,  // message members
  Astarcal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Astarcal_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Astarcal_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Astarcal_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace graph_msg


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<graph_msg::srv::Astarcal_Response>()
{
  return &::graph_msg::srv::rosidl_typesupport_introspection_cpp::Astarcal_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, graph_msg, srv, Astarcal_Response)() {
  return &::graph_msg::srv::rosidl_typesupport_introspection_cpp::Astarcal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "graph_msg/srv/detail/astarcal__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace graph_msg
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers Astarcal_service_members = {
  "graph_msg::srv",  // service namespace
  "Astarcal",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<graph_msg::srv::Astarcal>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t Astarcal_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Astarcal_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace graph_msg


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<graph_msg::srv::Astarcal>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::graph_msg::srv::rosidl_typesupport_introspection_cpp::Astarcal_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::graph_msg::srv::Astarcal_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::graph_msg::srv::Astarcal_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, graph_msg, srv, Astarcal)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<graph_msg::srv::Astarcal>();
}

#ifdef __cplusplus
}
#endif
