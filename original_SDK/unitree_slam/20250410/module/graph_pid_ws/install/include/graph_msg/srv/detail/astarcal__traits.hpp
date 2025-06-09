// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from graph_msg:srv/Astarcal.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_MSG__SRV__DETAIL__ASTARCAL__TRAITS_HPP_
#define GRAPH_MSG__SRV__DETAIL__ASTARCAL__TRAITS_HPP_

#include "graph_msg/srv/detail/astarcal__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'node'
#include "graph_msg/msg/detail/node__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<graph_msg::srv::Astarcal_Request>()
{
  return "graph_msg::srv::Astarcal_Request";
}

template<>
inline const char * name<graph_msg::srv::Astarcal_Request>()
{
  return "graph_msg/srv/Astarcal_Request";
}

template<>
struct has_fixed_size<graph_msg::srv::Astarcal_Request>
  : std::integral_constant<bool, has_fixed_size<graph_msg::msg::Node>::value> {};

template<>
struct has_bounded_size<graph_msg::srv::Astarcal_Request>
  : std::integral_constant<bool, has_bounded_size<graph_msg::msg::Node>::value> {};

template<>
struct is_message<graph_msg::srv::Astarcal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<graph_msg::srv::Astarcal_Response>()
{
  return "graph_msg::srv::Astarcal_Response";
}

template<>
inline const char * name<graph_msg::srv::Astarcal_Response>()
{
  return "graph_msg/srv/Astarcal_Response";
}

template<>
struct has_fixed_size<graph_msg::srv::Astarcal_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<graph_msg::srv::Astarcal_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<graph_msg::srv::Astarcal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<graph_msg::srv::Astarcal>()
{
  return "graph_msg::srv::Astarcal";
}

template<>
inline const char * name<graph_msg::srv::Astarcal>()
{
  return "graph_msg/srv/Astarcal";
}

template<>
struct has_fixed_size<graph_msg::srv::Astarcal>
  : std::integral_constant<
    bool,
    has_fixed_size<graph_msg::srv::Astarcal_Request>::value &&
    has_fixed_size<graph_msg::srv::Astarcal_Response>::value
  >
{
};

template<>
struct has_bounded_size<graph_msg::srv::Astarcal>
  : std::integral_constant<
    bool,
    has_bounded_size<graph_msg::srv::Astarcal_Request>::value &&
    has_bounded_size<graph_msg::srv::Astarcal_Response>::value
  >
{
};

template<>
struct is_service<graph_msg::srv::Astarcal>
  : std::true_type
{
};

template<>
struct is_service_request<graph_msg::srv::Astarcal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<graph_msg::srv::Astarcal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // GRAPH_MSG__SRV__DETAIL__ASTARCAL__TRAITS_HPP_
