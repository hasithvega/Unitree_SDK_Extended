// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from graph_msg:srv/Astarcal.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_MSG__SRV__DETAIL__ASTARCAL__BUILDER_HPP_
#define GRAPH_MSG__SRV__DETAIL__ASTARCAL__BUILDER_HPP_

#include "graph_msg/srv/detail/astarcal__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace graph_msg
{

namespace srv
{

namespace builder
{

class Init_Astarcal_Request_floor_index
{
public:
  explicit Init_Astarcal_Request_floor_index(::graph_msg::srv::Astarcal_Request & msg)
  : msg_(msg)
  {}
  ::graph_msg::srv::Astarcal_Request floor_index(::graph_msg::srv::Astarcal_Request::_floor_index_type arg)
  {
    msg_.floor_index = std::move(arg);
    return std::move(msg_);
  }

private:
  ::graph_msg::srv::Astarcal_Request msg_;
};

class Init_Astarcal_Request_node
{
public:
  Init_Astarcal_Request_node()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Astarcal_Request_floor_index node(::graph_msg::srv::Astarcal_Request::_node_type arg)
  {
    msg_.node = std::move(arg);
    return Init_Astarcal_Request_floor_index(msg_);
  }

private:
  ::graph_msg::srv::Astarcal_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::graph_msg::srv::Astarcal_Request>()
{
  return graph_msg::srv::builder::Init_Astarcal_Request_node();
}

}  // namespace graph_msg


namespace graph_msg
{

namespace srv
{

namespace builder
{

class Init_Astarcal_Response_floor_index_cb
{
public:
  explicit Init_Astarcal_Response_floor_index_cb(::graph_msg::srv::Astarcal_Response & msg)
  : msg_(msg)
  {}
  ::graph_msg::srv::Astarcal_Response floor_index_cb(::graph_msg::srv::Astarcal_Response::_floor_index_cb_type arg)
  {
    msg_.floor_index_cb = std::move(arg);
    return std::move(msg_);
  }

private:
  ::graph_msg::srv::Astarcal_Response msg_;
};

class Init_Astarcal_Response_weight
{
public:
  Init_Astarcal_Response_weight()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Astarcal_Response_floor_index_cb weight(::graph_msg::srv::Astarcal_Response::_weight_type arg)
  {
    msg_.weight = std::move(arg);
    return Init_Astarcal_Response_floor_index_cb(msg_);
  }

private:
  ::graph_msg::srv::Astarcal_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::graph_msg::srv::Astarcal_Response>()
{
  return graph_msg::srv::builder::Init_Astarcal_Response_weight();
}

}  // namespace graph_msg

#endif  // GRAPH_MSG__SRV__DETAIL__ASTARCAL__BUILDER_HPP_
