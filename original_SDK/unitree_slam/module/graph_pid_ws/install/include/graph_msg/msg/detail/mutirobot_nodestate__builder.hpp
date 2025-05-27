// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from graph_msg:msg/MutirobotNodestate.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_MSG__MSG__DETAIL__MUTIROBOT_NODESTATE__BUILDER_HPP_
#define GRAPH_MSG__MSG__DETAIL__MUTIROBOT_NODESTATE__BUILDER_HPP_

#include "graph_msg/msg/detail/mutirobot_nodestate__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace graph_msg
{

namespace msg
{

namespace builder
{

class Init_MutirobotNodestate_nodestate
{
public:
  explicit Init_MutirobotNodestate_nodestate(::graph_msg::msg::MutirobotNodestate & msg)
  : msg_(msg)
  {}
  ::graph_msg::msg::MutirobotNodestate nodestate(::graph_msg::msg::MutirobotNodestate::_nodestate_type arg)
  {
    msg_.nodestate = std::move(arg);
    return std::move(msg_);
  }

private:
  ::graph_msg::msg::MutirobotNodestate msg_;
};

class Init_MutirobotNodestate_nodename
{
public:
  explicit Init_MutirobotNodestate_nodename(::graph_msg::msg::MutirobotNodestate & msg)
  : msg_(msg)
  {}
  Init_MutirobotNodestate_nodestate nodename(::graph_msg::msg::MutirobotNodestate::_nodename_type arg)
  {
    msg_.nodename = std::move(arg);
    return Init_MutirobotNodestate_nodestate(msg_);
  }

private:
  ::graph_msg::msg::MutirobotNodestate msg_;
};

class Init_MutirobotNodestate_robotid
{
public:
  Init_MutirobotNodestate_robotid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MutirobotNodestate_nodename robotid(::graph_msg::msg::MutirobotNodestate::_robotid_type arg)
  {
    msg_.robotid = std::move(arg);
    return Init_MutirobotNodestate_nodename(msg_);
  }

private:
  ::graph_msg::msg::MutirobotNodestate msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::graph_msg::msg::MutirobotNodestate>()
{
  return graph_msg::msg::builder::Init_MutirobotNodestate_robotid();
}

}  // namespace graph_msg

#endif  // GRAPH_MSG__MSG__DETAIL__MUTIROBOT_NODESTATE__BUILDER_HPP_
