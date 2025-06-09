// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from unitree_interfaces:msg/QtCommand.idl
// generated code does not contain a copyright notice

#ifndef UNITREE_INTERFACES__MSG__DETAIL__QT_COMMAND__BUILDER_HPP_
#define UNITREE_INTERFACES__MSG__DETAIL__QT_COMMAND__BUILDER_HPP_

#include "unitree_interfaces/msg/detail/qt_command__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace unitree_interfaces
{

namespace msg
{

namespace builder
{

class Init_QtCommand_state_2
{
public:
  explicit Init_QtCommand_state_2(::unitree_interfaces::msg::QtCommand & msg)
  : msg_(msg)
  {}
  ::unitree_interfaces::msg::QtCommand state_2(::unitree_interfaces::msg::QtCommand::_state_2_type arg)
  {
    msg_.state_2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::unitree_interfaces::msg::QtCommand msg_;
};

class Init_QtCommand_state_1
{
public:
  explicit Init_QtCommand_state_1(::unitree_interfaces::msg::QtCommand & msg)
  : msg_(msg)
  {}
  Init_QtCommand_state_2 state_1(::unitree_interfaces::msg::QtCommand::_state_1_type arg)
  {
    msg_.state_1 = std::move(arg);
    return Init_QtCommand_state_2(msg_);
  }

private:
  ::unitree_interfaces::msg::QtCommand msg_;
};

class Init_QtCommand_translation_z
{
public:
  explicit Init_QtCommand_translation_z(::unitree_interfaces::msg::QtCommand & msg)
  : msg_(msg)
  {}
  Init_QtCommand_state_1 translation_z(::unitree_interfaces::msg::QtCommand::_translation_z_type arg)
  {
    msg_.translation_z = std::move(arg);
    return Init_QtCommand_state_1(msg_);
  }

private:
  ::unitree_interfaces::msg::QtCommand msg_;
};

class Init_QtCommand_translation_y
{
public:
  explicit Init_QtCommand_translation_y(::unitree_interfaces::msg::QtCommand & msg)
  : msg_(msg)
  {}
  Init_QtCommand_translation_z translation_y(::unitree_interfaces::msg::QtCommand::_translation_y_type arg)
  {
    msg_.translation_y = std::move(arg);
    return Init_QtCommand_translation_z(msg_);
  }

private:
  ::unitree_interfaces::msg::QtCommand msg_;
};

class Init_QtCommand_translation_x
{
public:
  explicit Init_QtCommand_translation_x(::unitree_interfaces::msg::QtCommand & msg)
  : msg_(msg)
  {}
  Init_QtCommand_translation_y translation_x(::unitree_interfaces::msg::QtCommand::_translation_x_type arg)
  {
    msg_.translation_x = std::move(arg);
    return Init_QtCommand_translation_y(msg_);
  }

private:
  ::unitree_interfaces::msg::QtCommand msg_;
};

class Init_QtCommand_euler_yaw
{
public:
  explicit Init_QtCommand_euler_yaw(::unitree_interfaces::msg::QtCommand & msg)
  : msg_(msg)
  {}
  Init_QtCommand_translation_x euler_yaw(::unitree_interfaces::msg::QtCommand::_euler_yaw_type arg)
  {
    msg_.euler_yaw = std::move(arg);
    return Init_QtCommand_translation_x(msg_);
  }

private:
  ::unitree_interfaces::msg::QtCommand msg_;
};

class Init_QtCommand_euler_pitch
{
public:
  explicit Init_QtCommand_euler_pitch(::unitree_interfaces::msg::QtCommand & msg)
  : msg_(msg)
  {}
  Init_QtCommand_euler_yaw euler_pitch(::unitree_interfaces::msg::QtCommand::_euler_pitch_type arg)
  {
    msg_.euler_pitch = std::move(arg);
    return Init_QtCommand_euler_yaw(msg_);
  }

private:
  ::unitree_interfaces::msg::QtCommand msg_;
};

class Init_QtCommand_euler_roll
{
public:
  explicit Init_QtCommand_euler_roll(::unitree_interfaces::msg::QtCommand & msg)
  : msg_(msg)
  {}
  Init_QtCommand_euler_pitch euler_roll(::unitree_interfaces::msg::QtCommand::_euler_roll_type arg)
  {
    msg_.euler_roll = std::move(arg);
    return Init_QtCommand_euler_pitch(msg_);
  }

private:
  ::unitree_interfaces::msg::QtCommand msg_;
};

class Init_QtCommand_quaternion_w
{
public:
  explicit Init_QtCommand_quaternion_w(::unitree_interfaces::msg::QtCommand & msg)
  : msg_(msg)
  {}
  Init_QtCommand_euler_roll quaternion_w(::unitree_interfaces::msg::QtCommand::_quaternion_w_type arg)
  {
    msg_.quaternion_w = std::move(arg);
    return Init_QtCommand_euler_roll(msg_);
  }

private:
  ::unitree_interfaces::msg::QtCommand msg_;
};

class Init_QtCommand_quaternion_z
{
public:
  explicit Init_QtCommand_quaternion_z(::unitree_interfaces::msg::QtCommand & msg)
  : msg_(msg)
  {}
  Init_QtCommand_quaternion_w quaternion_z(::unitree_interfaces::msg::QtCommand::_quaternion_z_type arg)
  {
    msg_.quaternion_z = std::move(arg);
    return Init_QtCommand_quaternion_w(msg_);
  }

private:
  ::unitree_interfaces::msg::QtCommand msg_;
};

class Init_QtCommand_quaternion_y
{
public:
  explicit Init_QtCommand_quaternion_y(::unitree_interfaces::msg::QtCommand & msg)
  : msg_(msg)
  {}
  Init_QtCommand_quaternion_z quaternion_y(::unitree_interfaces::msg::QtCommand::_quaternion_y_type arg)
  {
    msg_.quaternion_y = std::move(arg);
    return Init_QtCommand_quaternion_z(msg_);
  }

private:
  ::unitree_interfaces::msg::QtCommand msg_;
};

class Init_QtCommand_quaternion_x
{
public:
  explicit Init_QtCommand_quaternion_x(::unitree_interfaces::msg::QtCommand & msg)
  : msg_(msg)
  {}
  Init_QtCommand_quaternion_y quaternion_x(::unitree_interfaces::msg::QtCommand::_quaternion_x_type arg)
  {
    msg_.quaternion_x = std::move(arg);
    return Init_QtCommand_quaternion_y(msg_);
  }

private:
  ::unitree_interfaces::msg::QtCommand msg_;
};

class Init_QtCommand_node_edge_name
{
public:
  explicit Init_QtCommand_node_edge_name(::unitree_interfaces::msg::QtCommand & msg)
  : msg_(msg)
  {}
  Init_QtCommand_quaternion_x node_edge_name(::unitree_interfaces::msg::QtCommand::_node_edge_name_type arg)
  {
    msg_.node_edge_name = std::move(arg);
    return Init_QtCommand_quaternion_x(msg_);
  }

private:
  ::unitree_interfaces::msg::QtCommand msg_;
};

class Init_QtCommand_topomap_index
{
public:
  explicit Init_QtCommand_topomap_index(::unitree_interfaces::msg::QtCommand & msg)
  : msg_(msg)
  {}
  Init_QtCommand_node_edge_name topomap_index(::unitree_interfaces::msg::QtCommand::_topomap_index_type arg)
  {
    msg_.topomap_index = std::move(arg);
    return Init_QtCommand_node_edge_name(msg_);
  }

private:
  ::unitree_interfaces::msg::QtCommand msg_;
};

class Init_QtCommand_pcdmap_index
{
public:
  explicit Init_QtCommand_pcdmap_index(::unitree_interfaces::msg::QtCommand & msg)
  : msg_(msg)
  {}
  Init_QtCommand_topomap_index pcdmap_index(::unitree_interfaces::msg::QtCommand::_pcdmap_index_type arg)
  {
    msg_.pcdmap_index = std::move(arg);
    return Init_QtCommand_topomap_index(msg_);
  }

private:
  ::unitree_interfaces::msg::QtCommand msg_;
};

class Init_QtCommand_floor_index
{
public:
  explicit Init_QtCommand_floor_index(::unitree_interfaces::msg::QtCommand & msg)
  : msg_(msg)
  {}
  Init_QtCommand_pcdmap_index floor_index(::unitree_interfaces::msg::QtCommand::_floor_index_type arg)
  {
    msg_.floor_index = std::move(arg);
    return Init_QtCommand_pcdmap_index(msg_);
  }

private:
  ::unitree_interfaces::msg::QtCommand msg_;
};

class Init_QtCommand_attribute
{
public:
  explicit Init_QtCommand_attribute(::unitree_interfaces::msg::QtCommand & msg)
  : msg_(msg)
  {}
  Init_QtCommand_floor_index attribute(::unitree_interfaces::msg::QtCommand::_attribute_type arg)
  {
    msg_.attribute = std::move(arg);
    return Init_QtCommand_floor_index(msg_);
  }

private:
  ::unitree_interfaces::msg::QtCommand msg_;
};

class Init_QtCommand_seq
{
public:
  explicit Init_QtCommand_seq(::unitree_interfaces::msg::QtCommand & msg)
  : msg_(msg)
  {}
  Init_QtCommand_attribute seq(::unitree_interfaces::msg::QtCommand::_seq_type arg)
  {
    msg_.seq = std::move(arg);
    return Init_QtCommand_attribute(msg_);
  }

private:
  ::unitree_interfaces::msg::QtCommand msg_;
};

class Init_QtCommand_command
{
public:
  Init_QtCommand_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_QtCommand_seq command(::unitree_interfaces::msg::QtCommand::_command_type arg)
  {
    msg_.command = std::move(arg);
    return Init_QtCommand_seq(msg_);
  }

private:
  ::unitree_interfaces::msg::QtCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::unitree_interfaces::msg::QtCommand>()
{
  return unitree_interfaces::msg::builder::Init_QtCommand_command();
}

}  // namespace unitree_interfaces

#endif  // UNITREE_INTERFACES__MSG__DETAIL__QT_COMMAND__BUILDER_HPP_
