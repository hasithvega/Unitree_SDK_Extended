// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from graph_msg:msg/MutirobotMission.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_MSG__MSG__DETAIL__MUTIROBOT_MISSION__BUILDER_HPP_
#define GRAPH_MSG__MSG__DETAIL__MUTIROBOT_MISSION__BUILDER_HPP_

#include "graph_msg/msg/detail/mutirobot_mission__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace graph_msg
{

namespace msg
{

namespace builder
{

class Init_MutirobotMission_missionstate
{
public:
  explicit Init_MutirobotMission_missionstate(::graph_msg::msg::MutirobotMission & msg)
  : msg_(msg)
  {}
  ::graph_msg::msg::MutirobotMission missionstate(::graph_msg::msg::MutirobotMission::_missionstate_type arg)
  {
    msg_.missionstate = std::move(arg);
    return std::move(msg_);
  }

private:
  ::graph_msg::msg::MutirobotMission msg_;
};

class Init_MutirobotMission_missionid
{
public:
  explicit Init_MutirobotMission_missionid(::graph_msg::msg::MutirobotMission & msg)
  : msg_(msg)
  {}
  Init_MutirobotMission_missionstate missionid(::graph_msg::msg::MutirobotMission::_missionid_type arg)
  {
    msg_.missionid = std::move(arg);
    return Init_MutirobotMission_missionstate(msg_);
  }

private:
  ::graph_msg::msg::MutirobotMission msg_;
};

class Init_MutirobotMission_robotid
{
public:
  Init_MutirobotMission_robotid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MutirobotMission_missionid robotid(::graph_msg::msg::MutirobotMission::_robotid_type arg)
  {
    msg_.robotid = std::move(arg);
    return Init_MutirobotMission_missionid(msg_);
  }

private:
  ::graph_msg::msg::MutirobotMission msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::graph_msg::msg::MutirobotMission>()
{
  return graph_msg::msg::builder::Init_MutirobotMission_robotid();
}

}  // namespace graph_msg

#endif  // GRAPH_MSG__MSG__DETAIL__MUTIROBOT_MISSION__BUILDER_HPP_
