// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from unitree_api:srv/WebCommand.idl
// generated code does not contain a copyright notice

#ifndef UNITREE_API__SRV__DETAIL__WEB_COMMAND__TRAITS_HPP_
#define UNITREE_API__SRV__DETAIL__WEB_COMMAND__TRAITS_HPP_

#include "unitree_api/srv/detail/web_command__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "unitree_api/msg/detail/request_header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<unitree_api::srv::WebCommand_Request>()
{
  return "unitree_api::srv::WebCommand_Request";
}

template<>
inline const char * name<unitree_api::srv::WebCommand_Request>()
{
  return "unitree_api/srv/WebCommand_Request";
}

template<>
struct has_fixed_size<unitree_api::srv::WebCommand_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<unitree_api::srv::WebCommand_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<unitree_api::srv::WebCommand_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'header'
#include "unitree_api/msg/detail/response_header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<unitree_api::srv::WebCommand_Response>()
{
  return "unitree_api::srv::WebCommand_Response";
}

template<>
inline const char * name<unitree_api::srv::WebCommand_Response>()
{
  return "unitree_api/srv/WebCommand_Response";
}

template<>
struct has_fixed_size<unitree_api::srv::WebCommand_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<unitree_api::srv::WebCommand_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<unitree_api::srv::WebCommand_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<unitree_api::srv::WebCommand>()
{
  return "unitree_api::srv::WebCommand";
}

template<>
inline const char * name<unitree_api::srv::WebCommand>()
{
  return "unitree_api/srv/WebCommand";
}

template<>
struct has_fixed_size<unitree_api::srv::WebCommand>
  : std::integral_constant<
    bool,
    has_fixed_size<unitree_api::srv::WebCommand_Request>::value &&
    has_fixed_size<unitree_api::srv::WebCommand_Response>::value
  >
{
};

template<>
struct has_bounded_size<unitree_api::srv::WebCommand>
  : std::integral_constant<
    bool,
    has_bounded_size<unitree_api::srv::WebCommand_Request>::value &&
    has_bounded_size<unitree_api::srv::WebCommand_Response>::value
  >
{
};

template<>
struct is_service<unitree_api::srv::WebCommand>
  : std::true_type
{
};

template<>
struct is_service_request<unitree_api::srv::WebCommand_Request>
  : std::true_type
{
};

template<>
struct is_service_response<unitree_api::srv::WebCommand_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // UNITREE_API__SRV__DETAIL__WEB_COMMAND__TRAITS_HPP_
