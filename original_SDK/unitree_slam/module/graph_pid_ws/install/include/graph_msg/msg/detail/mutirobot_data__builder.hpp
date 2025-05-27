// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from graph_msg:msg/MutirobotData.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_MSG__MSG__DETAIL__MUTIROBOT_DATA__BUILDER_HPP_
#define GRAPH_MSG__MSG__DETAIL__MUTIROBOT_DATA__BUILDER_HPP_

#include "graph_msg/msg/detail/mutirobot_data__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace graph_msg
{

namespace msg
{

namespace builder
{

class Init_MutirobotData_data
{
public:
  explicit Init_MutirobotData_data(::graph_msg::msg::MutirobotData & msg)
  : msg_(msg)
  {}
  ::graph_msg::msg::MutirobotData data(::graph_msg::msg::MutirobotData::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::graph_msg::msg::MutirobotData msg_;
};

class Init_MutirobotData_robotid
{
public:
  Init_MutirobotData_robotid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MutirobotData_data robotid(::graph_msg::msg::MutirobotData::_robotid_type arg)
  {
    msg_.robotid = std::move(arg);
    return Init_MutirobotData_data(msg_);
  }

private:
  ::graph_msg::msg::MutirobotData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::graph_msg::msg::MutirobotData>()
{
  return graph_msg::msg::builder::Init_MutirobotData_robotid();
}

}  // namespace graph_msg

#endif  // GRAPH_MSG__MSG__DETAIL__MUTIROBOT_DATA__BUILDER_HPP_
