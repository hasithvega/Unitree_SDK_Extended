// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from unitree_api:srv/WebCommand.idl
// generated code does not contain a copyright notice

#ifndef UNITREE_API__SRV__DETAIL__WEB_COMMAND__BUILDER_HPP_
#define UNITREE_API__SRV__DETAIL__WEB_COMMAND__BUILDER_HPP_

#include "unitree_api/srv/detail/web_command__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace unitree_api
{

namespace srv
{

namespace builder
{

class Init_WebCommand_Request_binary
{
public:
  explicit Init_WebCommand_Request_binary(::unitree_api::srv::WebCommand_Request & msg)
  : msg_(msg)
  {}
  ::unitree_api::srv::WebCommand_Request binary(::unitree_api::srv::WebCommand_Request::_binary_type arg)
  {
    msg_.binary = std::move(arg);
    return std::move(msg_);
  }

private:
  ::unitree_api::srv::WebCommand_Request msg_;
};

class Init_WebCommand_Request_parameter
{
public:
  explicit Init_WebCommand_Request_parameter(::unitree_api::srv::WebCommand_Request & msg)
  : msg_(msg)
  {}
  Init_WebCommand_Request_binary parameter(::unitree_api::srv::WebCommand_Request::_parameter_type arg)
  {
    msg_.parameter = std::move(arg);
    return Init_WebCommand_Request_binary(msg_);
  }

private:
  ::unitree_api::srv::WebCommand_Request msg_;
};

class Init_WebCommand_Request_header
{
public:
  Init_WebCommand_Request_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WebCommand_Request_parameter header(::unitree_api::srv::WebCommand_Request::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_WebCommand_Request_parameter(msg_);
  }

private:
  ::unitree_api::srv::WebCommand_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::unitree_api::srv::WebCommand_Request>()
{
  return unitree_api::srv::builder::Init_WebCommand_Request_header();
}

}  // namespace unitree_api


namespace unitree_api
{

namespace srv
{

namespace builder
{

class Init_WebCommand_Response_binary
{
public:
  explicit Init_WebCommand_Response_binary(::unitree_api::srv::WebCommand_Response & msg)
  : msg_(msg)
  {}
  ::unitree_api::srv::WebCommand_Response binary(::unitree_api::srv::WebCommand_Response::_binary_type arg)
  {
    msg_.binary = std::move(arg);
    return std::move(msg_);
  }

private:
  ::unitree_api::srv::WebCommand_Response msg_;
};

class Init_WebCommand_Response_data
{
public:
  explicit Init_WebCommand_Response_data(::unitree_api::srv::WebCommand_Response & msg)
  : msg_(msg)
  {}
  Init_WebCommand_Response_binary data(::unitree_api::srv::WebCommand_Response::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_WebCommand_Response_binary(msg_);
  }

private:
  ::unitree_api::srv::WebCommand_Response msg_;
};

class Init_WebCommand_Response_header
{
public:
  Init_WebCommand_Response_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WebCommand_Response_data header(::unitree_api::srv::WebCommand_Response::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_WebCommand_Response_data(msg_);
  }

private:
  ::unitree_api::srv::WebCommand_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::unitree_api::srv::WebCommand_Response>()
{
  return unitree_api::srv::builder::Init_WebCommand_Response_header();
}

}  // namespace unitree_api

#endif  // UNITREE_API__SRV__DETAIL__WEB_COMMAND__BUILDER_HPP_
