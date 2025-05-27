// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from unitree_interfaces:msg/QtCommand.idl
// generated code does not contain a copyright notice

#ifndef UNITREE_INTERFACES__MSG__DETAIL__QT_COMMAND__STRUCT_HPP_
#define UNITREE_INTERFACES__MSG__DETAIL__QT_COMMAND__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'seq'
#include "std_msgs/msg/detail/string__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__unitree_interfaces__msg__QtCommand __attribute__((deprecated))
#else
# define DEPRECATED__unitree_interfaces__msg__QtCommand __declspec(deprecated)
#endif

namespace unitree_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct QtCommand_
{
  using Type = QtCommand_<ContainerAllocator>;

  explicit QtCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : seq(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = 0;
      this->attribute = 0;
      this->quaternion_x = 0.0f;
      this->quaternion_y = 0.0f;
      this->quaternion_z = 0.0f;
      this->quaternion_w = 0.0f;
      this->euler_roll = 0.0f;
      this->euler_pitch = 0.0f;
      this->euler_yaw = 0.0f;
      this->translation_x = 0.0f;
      this->translation_y = 0.0f;
      this->translation_z = 0.0f;
    }
  }

  explicit QtCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : seq(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = 0;
      this->attribute = 0;
      this->quaternion_x = 0.0f;
      this->quaternion_y = 0.0f;
      this->quaternion_z = 0.0f;
      this->quaternion_w = 0.0f;
      this->euler_roll = 0.0f;
      this->euler_pitch = 0.0f;
      this->euler_yaw = 0.0f;
      this->translation_x = 0.0f;
      this->translation_y = 0.0f;
      this->translation_z = 0.0f;
    }
  }

  // field types and members
  using _command_type =
    uint8_t;
  _command_type command;
  using _seq_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _seq_type seq;
  using _attribute_type =
    uint8_t;
  _attribute_type attribute;
  using _floor_index_type =
    std::vector<uint16_t, typename ContainerAllocator::template rebind<uint16_t>::other>;
  _floor_index_type floor_index;
  using _pcdmap_index_type =
    std::vector<uint16_t, typename ContainerAllocator::template rebind<uint16_t>::other>;
  _pcdmap_index_type pcdmap_index;
  using _topomap_index_type =
    std::vector<uint16_t, typename ContainerAllocator::template rebind<uint16_t>::other>;
  _topomap_index_type topomap_index;
  using _node_edge_name_type =
    std::vector<uint16_t, typename ContainerAllocator::template rebind<uint16_t>::other>;
  _node_edge_name_type node_edge_name;
  using _quaternion_x_type =
    float;
  _quaternion_x_type quaternion_x;
  using _quaternion_y_type =
    float;
  _quaternion_y_type quaternion_y;
  using _quaternion_z_type =
    float;
  _quaternion_z_type quaternion_z;
  using _quaternion_w_type =
    float;
  _quaternion_w_type quaternion_w;
  using _euler_roll_type =
    float;
  _euler_roll_type euler_roll;
  using _euler_pitch_type =
    float;
  _euler_pitch_type euler_pitch;
  using _euler_yaw_type =
    float;
  _euler_yaw_type euler_yaw;
  using _translation_x_type =
    float;
  _translation_x_type translation_x;
  using _translation_y_type =
    float;
  _translation_y_type translation_y;
  using _translation_z_type =
    float;
  _translation_z_type translation_z;
  using _state_1_type =
    std::vector<uint16_t, typename ContainerAllocator::template rebind<uint16_t>::other>;
  _state_1_type state_1;
  using _state_2_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _state_2_type state_2;

  // setters for named parameter idiom
  Type & set__command(
    const uint8_t & _arg)
  {
    this->command = _arg;
    return *this;
  }
  Type & set__seq(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->seq = _arg;
    return *this;
  }
  Type & set__attribute(
    const uint8_t & _arg)
  {
    this->attribute = _arg;
    return *this;
  }
  Type & set__floor_index(
    const std::vector<uint16_t, typename ContainerAllocator::template rebind<uint16_t>::other> & _arg)
  {
    this->floor_index = _arg;
    return *this;
  }
  Type & set__pcdmap_index(
    const std::vector<uint16_t, typename ContainerAllocator::template rebind<uint16_t>::other> & _arg)
  {
    this->pcdmap_index = _arg;
    return *this;
  }
  Type & set__topomap_index(
    const std::vector<uint16_t, typename ContainerAllocator::template rebind<uint16_t>::other> & _arg)
  {
    this->topomap_index = _arg;
    return *this;
  }
  Type & set__node_edge_name(
    const std::vector<uint16_t, typename ContainerAllocator::template rebind<uint16_t>::other> & _arg)
  {
    this->node_edge_name = _arg;
    return *this;
  }
  Type & set__quaternion_x(
    const float & _arg)
  {
    this->quaternion_x = _arg;
    return *this;
  }
  Type & set__quaternion_y(
    const float & _arg)
  {
    this->quaternion_y = _arg;
    return *this;
  }
  Type & set__quaternion_z(
    const float & _arg)
  {
    this->quaternion_z = _arg;
    return *this;
  }
  Type & set__quaternion_w(
    const float & _arg)
  {
    this->quaternion_w = _arg;
    return *this;
  }
  Type & set__euler_roll(
    const float & _arg)
  {
    this->euler_roll = _arg;
    return *this;
  }
  Type & set__euler_pitch(
    const float & _arg)
  {
    this->euler_pitch = _arg;
    return *this;
  }
  Type & set__euler_yaw(
    const float & _arg)
  {
    this->euler_yaw = _arg;
    return *this;
  }
  Type & set__translation_x(
    const float & _arg)
  {
    this->translation_x = _arg;
    return *this;
  }
  Type & set__translation_y(
    const float & _arg)
  {
    this->translation_y = _arg;
    return *this;
  }
  Type & set__translation_z(
    const float & _arg)
  {
    this->translation_z = _arg;
    return *this;
  }
  Type & set__state_1(
    const std::vector<uint16_t, typename ContainerAllocator::template rebind<uint16_t>::other> & _arg)
  {
    this->state_1 = _arg;
    return *this;
  }
  Type & set__state_2(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->state_2 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    unitree_interfaces::msg::QtCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const unitree_interfaces::msg::QtCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<unitree_interfaces::msg::QtCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<unitree_interfaces::msg::QtCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      unitree_interfaces::msg::QtCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<unitree_interfaces::msg::QtCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      unitree_interfaces::msg::QtCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<unitree_interfaces::msg::QtCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<unitree_interfaces::msg::QtCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<unitree_interfaces::msg::QtCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__unitree_interfaces__msg__QtCommand
    std::shared_ptr<unitree_interfaces::msg::QtCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__unitree_interfaces__msg__QtCommand
    std::shared_ptr<unitree_interfaces::msg::QtCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const QtCommand_ & other) const
  {
    if (this->command != other.command) {
      return false;
    }
    if (this->seq != other.seq) {
      return false;
    }
    if (this->attribute != other.attribute) {
      return false;
    }
    if (this->floor_index != other.floor_index) {
      return false;
    }
    if (this->pcdmap_index != other.pcdmap_index) {
      return false;
    }
    if (this->topomap_index != other.topomap_index) {
      return false;
    }
    if (this->node_edge_name != other.node_edge_name) {
      return false;
    }
    if (this->quaternion_x != other.quaternion_x) {
      return false;
    }
    if (this->quaternion_y != other.quaternion_y) {
      return false;
    }
    if (this->quaternion_z != other.quaternion_z) {
      return false;
    }
    if (this->quaternion_w != other.quaternion_w) {
      return false;
    }
    if (this->euler_roll != other.euler_roll) {
      return false;
    }
    if (this->euler_pitch != other.euler_pitch) {
      return false;
    }
    if (this->euler_yaw != other.euler_yaw) {
      return false;
    }
    if (this->translation_x != other.translation_x) {
      return false;
    }
    if (this->translation_y != other.translation_y) {
      return false;
    }
    if (this->translation_z != other.translation_z) {
      return false;
    }
    if (this->state_1 != other.state_1) {
      return false;
    }
    if (this->state_2 != other.state_2) {
      return false;
    }
    return true;
  }
  bool operator!=(const QtCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct QtCommand_

// alias to use template instance with default allocator
using QtCommand =
  unitree_interfaces::msg::QtCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace unitree_interfaces

#endif  // UNITREE_INTERFACES__MSG__DETAIL__QT_COMMAND__STRUCT_HPP_
