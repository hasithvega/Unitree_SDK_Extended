// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from graph_msg:msg/Edge.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_MSG__MSG__DETAIL__EDGE__STRUCT_HPP_
#define GRAPH_MSG__MSG__DETAIL__EDGE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'edge_state_list'
#include "std_msgs/msg/detail/float32_multi_array__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__graph_msg__msg__Edge __attribute__((deprecated))
#else
# define DEPRECATED__graph_msg__msg__Edge __declspec(deprecated)
#endif

namespace graph_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Edge_
{
  using Type = Edge_<ContainerAllocator>;

  explicit Edge_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Edge_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _edge_name_type =
    std::vector<uint16_t, typename ContainerAllocator::template rebind<uint16_t>::other>;
  _edge_name_type edge_name;
  using _start_node_name_type =
    std::vector<uint16_t, typename ContainerAllocator::template rebind<uint16_t>::other>;
  _start_node_name_type start_node_name;
  using _end_node_name_type =
    std::vector<uint16_t, typename ContainerAllocator::template rebind<uint16_t>::other>;
  _end_node_name_type end_node_name;
  using _edge_length_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _edge_length_type edge_length;
  using _dog_stats_type =
    std::vector<uint16_t, typename ContainerAllocator::template rebind<uint16_t>::other>;
  _dog_stats_type dog_stats;
  using _dog_back_stats_type =
    std::vector<uint16_t, typename ContainerAllocator::template rebind<uint16_t>::other>;
  _dog_back_stats_type dog_back_stats;
  using _dog_speed_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _dog_speed_type dog_speed;
  using _edge_state_type =
    std::vector<uint16_t, typename ContainerAllocator::template rebind<uint16_t>::other>;
  _edge_state_type edge_state;
  using _edge_state_1_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _edge_state_1_type edge_state_1;
  using _edge_state_2_type =
    std::vector<uint16_t, typename ContainerAllocator::template rebind<uint16_t>::other>;
  _edge_state_2_type edge_state_2;
  using _edge_state_3_type =
    std::vector<uint16_t, typename ContainerAllocator::template rebind<uint16_t>::other>;
  _edge_state_3_type edge_state_3;
  using _edge_state_4_type =
    std::vector<uint16_t, typename ContainerAllocator::template rebind<uint16_t>::other>;
  _edge_state_4_type edge_state_4;
  using _edge_state_list_type =
    std::vector<std_msgs::msg::Float32MultiArray_<ContainerAllocator>, typename ContainerAllocator::template rebind<std_msgs::msg::Float32MultiArray_<ContainerAllocator>>::other>;
  _edge_state_list_type edge_state_list;

  // setters for named parameter idiom
  Type & set__edge_name(
    const std::vector<uint16_t, typename ContainerAllocator::template rebind<uint16_t>::other> & _arg)
  {
    this->edge_name = _arg;
    return *this;
  }
  Type & set__start_node_name(
    const std::vector<uint16_t, typename ContainerAllocator::template rebind<uint16_t>::other> & _arg)
  {
    this->start_node_name = _arg;
    return *this;
  }
  Type & set__end_node_name(
    const std::vector<uint16_t, typename ContainerAllocator::template rebind<uint16_t>::other> & _arg)
  {
    this->end_node_name = _arg;
    return *this;
  }
  Type & set__edge_length(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->edge_length = _arg;
    return *this;
  }
  Type & set__dog_stats(
    const std::vector<uint16_t, typename ContainerAllocator::template rebind<uint16_t>::other> & _arg)
  {
    this->dog_stats = _arg;
    return *this;
  }
  Type & set__dog_back_stats(
    const std::vector<uint16_t, typename ContainerAllocator::template rebind<uint16_t>::other> & _arg)
  {
    this->dog_back_stats = _arg;
    return *this;
  }
  Type & set__dog_speed(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->dog_speed = _arg;
    return *this;
  }
  Type & set__edge_state(
    const std::vector<uint16_t, typename ContainerAllocator::template rebind<uint16_t>::other> & _arg)
  {
    this->edge_state = _arg;
    return *this;
  }
  Type & set__edge_state_1(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->edge_state_1 = _arg;
    return *this;
  }
  Type & set__edge_state_2(
    const std::vector<uint16_t, typename ContainerAllocator::template rebind<uint16_t>::other> & _arg)
  {
    this->edge_state_2 = _arg;
    return *this;
  }
  Type & set__edge_state_3(
    const std::vector<uint16_t, typename ContainerAllocator::template rebind<uint16_t>::other> & _arg)
  {
    this->edge_state_3 = _arg;
    return *this;
  }
  Type & set__edge_state_4(
    const std::vector<uint16_t, typename ContainerAllocator::template rebind<uint16_t>::other> & _arg)
  {
    this->edge_state_4 = _arg;
    return *this;
  }
  Type & set__edge_state_list(
    const std::vector<std_msgs::msg::Float32MultiArray_<ContainerAllocator>, typename ContainerAllocator::template rebind<std_msgs::msg::Float32MultiArray_<ContainerAllocator>>::other> & _arg)
  {
    this->edge_state_list = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    graph_msg::msg::Edge_<ContainerAllocator> *;
  using ConstRawPtr =
    const graph_msg::msg::Edge_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<graph_msg::msg::Edge_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<graph_msg::msg::Edge_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      graph_msg::msg::Edge_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<graph_msg::msg::Edge_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      graph_msg::msg::Edge_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<graph_msg::msg::Edge_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<graph_msg::msg::Edge_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<graph_msg::msg::Edge_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__graph_msg__msg__Edge
    std::shared_ptr<graph_msg::msg::Edge_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__graph_msg__msg__Edge
    std::shared_ptr<graph_msg::msg::Edge_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Edge_ & other) const
  {
    if (this->edge_name != other.edge_name) {
      return false;
    }
    if (this->start_node_name != other.start_node_name) {
      return false;
    }
    if (this->end_node_name != other.end_node_name) {
      return false;
    }
    if (this->edge_length != other.edge_length) {
      return false;
    }
    if (this->dog_stats != other.dog_stats) {
      return false;
    }
    if (this->dog_back_stats != other.dog_back_stats) {
      return false;
    }
    if (this->dog_speed != other.dog_speed) {
      return false;
    }
    if (this->edge_state != other.edge_state) {
      return false;
    }
    if (this->edge_state_1 != other.edge_state_1) {
      return false;
    }
    if (this->edge_state_2 != other.edge_state_2) {
      return false;
    }
    if (this->edge_state_3 != other.edge_state_3) {
      return false;
    }
    if (this->edge_state_4 != other.edge_state_4) {
      return false;
    }
    if (this->edge_state_list != other.edge_state_list) {
      return false;
    }
    return true;
  }
  bool operator!=(const Edge_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Edge_

// alias to use template instance with default allocator
using Edge =
  graph_msg::msg::Edge_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace graph_msg

#endif  // GRAPH_MSG__MSG__DETAIL__EDGE__STRUCT_HPP_
