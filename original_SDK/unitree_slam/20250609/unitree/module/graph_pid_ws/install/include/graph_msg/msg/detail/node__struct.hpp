// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from graph_msg:msg/Node.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_MSG__MSG__DETAIL__NODE__STRUCT_HPP_
#define GRAPH_MSG__MSG__DETAIL__NODE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'node_state_list'
#include "std_msgs/msg/detail/float32_multi_array__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__graph_msg__msg__Node __attribute__((deprecated))
#else
# define DEPRECATED__graph_msg__msg__Node __declspec(deprecated)
#endif

namespace graph_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Node_
{
  using Type = Node_<ContainerAllocator>;

  explicit Node_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Node_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _node_name_type =
    std::vector<uint16_t, typename ContainerAllocator::template rebind<uint16_t>::other>;
  _node_name_type node_name;
  using _node_position_x_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _node_position_x_type node_position_x;
  using _node_position_y_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _node_position_y_type node_position_y;
  using _node_position_z_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _node_position_z_type node_position_z;
  using _node_yaw_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _node_yaw_type node_yaw;
  using _node_attribute_type =
    std::vector<uint16_t, typename ContainerAllocator::template rebind<uint16_t>::other>;
  _node_attribute_type node_attribute;
  using _undefined_type =
    std::vector<uint16_t, typename ContainerAllocator::template rebind<uint16_t>::other>;
  _undefined_type undefined;
  using _node_state_2_type =
    std::vector<uint16_t, typename ContainerAllocator::template rebind<uint16_t>::other>;
  _node_state_2_type node_state_2;
  using _node_state_3_type =
    std::vector<uint16_t, typename ContainerAllocator::template rebind<uint16_t>::other>;
  _node_state_3_type node_state_3;
  using _node_state_list_type =
    std::vector<std_msgs::msg::Float32MultiArray_<ContainerAllocator>, typename ContainerAllocator::template rebind<std_msgs::msg::Float32MultiArray_<ContainerAllocator>>::other>;
  _node_state_list_type node_state_list;

  // setters for named parameter idiom
  Type & set__node_name(
    const std::vector<uint16_t, typename ContainerAllocator::template rebind<uint16_t>::other> & _arg)
  {
    this->node_name = _arg;
    return *this;
  }
  Type & set__node_position_x(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->node_position_x = _arg;
    return *this;
  }
  Type & set__node_position_y(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->node_position_y = _arg;
    return *this;
  }
  Type & set__node_position_z(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->node_position_z = _arg;
    return *this;
  }
  Type & set__node_yaw(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->node_yaw = _arg;
    return *this;
  }
  Type & set__node_attribute(
    const std::vector<uint16_t, typename ContainerAllocator::template rebind<uint16_t>::other> & _arg)
  {
    this->node_attribute = _arg;
    return *this;
  }
  Type & set__undefined(
    const std::vector<uint16_t, typename ContainerAllocator::template rebind<uint16_t>::other> & _arg)
  {
    this->undefined = _arg;
    return *this;
  }
  Type & set__node_state_2(
    const std::vector<uint16_t, typename ContainerAllocator::template rebind<uint16_t>::other> & _arg)
  {
    this->node_state_2 = _arg;
    return *this;
  }
  Type & set__node_state_3(
    const std::vector<uint16_t, typename ContainerAllocator::template rebind<uint16_t>::other> & _arg)
  {
    this->node_state_3 = _arg;
    return *this;
  }
  Type & set__node_state_list(
    const std::vector<std_msgs::msg::Float32MultiArray_<ContainerAllocator>, typename ContainerAllocator::template rebind<std_msgs::msg::Float32MultiArray_<ContainerAllocator>>::other> & _arg)
  {
    this->node_state_list = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    graph_msg::msg::Node_<ContainerAllocator> *;
  using ConstRawPtr =
    const graph_msg::msg::Node_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<graph_msg::msg::Node_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<graph_msg::msg::Node_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      graph_msg::msg::Node_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<graph_msg::msg::Node_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      graph_msg::msg::Node_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<graph_msg::msg::Node_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<graph_msg::msg::Node_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<graph_msg::msg::Node_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__graph_msg__msg__Node
    std::shared_ptr<graph_msg::msg::Node_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__graph_msg__msg__Node
    std::shared_ptr<graph_msg::msg::Node_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Node_ & other) const
  {
    if (this->node_name != other.node_name) {
      return false;
    }
    if (this->node_position_x != other.node_position_x) {
      return false;
    }
    if (this->node_position_y != other.node_position_y) {
      return false;
    }
    if (this->node_position_z != other.node_position_z) {
      return false;
    }
    if (this->node_yaw != other.node_yaw) {
      return false;
    }
    if (this->node_attribute != other.node_attribute) {
      return false;
    }
    if (this->undefined != other.undefined) {
      return false;
    }
    if (this->node_state_2 != other.node_state_2) {
      return false;
    }
    if (this->node_state_3 != other.node_state_3) {
      return false;
    }
    if (this->node_state_list != other.node_state_list) {
      return false;
    }
    return true;
  }
  bool operator!=(const Node_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Node_

// alias to use template instance with default allocator
using Node =
  graph_msg::msg::Node_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace graph_msg

#endif  // GRAPH_MSG__MSG__DETAIL__NODE__STRUCT_HPP_
