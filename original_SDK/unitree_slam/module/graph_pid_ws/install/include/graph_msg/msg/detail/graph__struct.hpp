// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from graph_msg:msg/Graph.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_MSG__MSG__DETAIL__GRAPH__STRUCT_HPP_
#define GRAPH_MSG__MSG__DETAIL__GRAPH__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'node'
#include "graph_msg/msg/detail/node__struct.hpp"
// Member 'edge'
#include "graph_msg/msg/detail/edge__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__graph_msg__msg__Graph __attribute__((deprecated))
#else
# define DEPRECATED__graph_msg__msg__Graph __declspec(deprecated)
#endif

namespace graph_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Graph_
{
  using Type = Graph_<ContainerAllocator>;

  explicit Graph_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    node(_init),
    edge(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->flag = 0;
      this->node_num = 0ull;
      this->edge_num = 0ull;
    }
  }

  explicit Graph_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    node(_alloc, _init),
    edge(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->flag = 0;
      this->node_num = 0ull;
      this->edge_num = 0ull;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _flag_type =
    int8_t;
  _flag_type flag;
  using _node_num_type =
    uint64_t;
  _node_num_type node_num;
  using _edge_num_type =
    uint64_t;
  _edge_num_type edge_num;
  using _node_type =
    graph_msg::msg::Node_<ContainerAllocator>;
  _node_type node;
  using _edge_type =
    graph_msg::msg::Edge_<ContainerAllocator>;
  _edge_type edge;
  using _undefined_type =
    std::vector<int8_t, typename ContainerAllocator::template rebind<int8_t>::other>;
  _undefined_type undefined;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__flag(
    const int8_t & _arg)
  {
    this->flag = _arg;
    return *this;
  }
  Type & set__node_num(
    const uint64_t & _arg)
  {
    this->node_num = _arg;
    return *this;
  }
  Type & set__edge_num(
    const uint64_t & _arg)
  {
    this->edge_num = _arg;
    return *this;
  }
  Type & set__node(
    const graph_msg::msg::Node_<ContainerAllocator> & _arg)
  {
    this->node = _arg;
    return *this;
  }
  Type & set__edge(
    const graph_msg::msg::Edge_<ContainerAllocator> & _arg)
  {
    this->edge = _arg;
    return *this;
  }
  Type & set__undefined(
    const std::vector<int8_t, typename ContainerAllocator::template rebind<int8_t>::other> & _arg)
  {
    this->undefined = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    graph_msg::msg::Graph_<ContainerAllocator> *;
  using ConstRawPtr =
    const graph_msg::msg::Graph_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<graph_msg::msg::Graph_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<graph_msg::msg::Graph_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      graph_msg::msg::Graph_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<graph_msg::msg::Graph_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      graph_msg::msg::Graph_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<graph_msg::msg::Graph_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<graph_msg::msg::Graph_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<graph_msg::msg::Graph_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__graph_msg__msg__Graph
    std::shared_ptr<graph_msg::msg::Graph_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__graph_msg__msg__Graph
    std::shared_ptr<graph_msg::msg::Graph_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Graph_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->flag != other.flag) {
      return false;
    }
    if (this->node_num != other.node_num) {
      return false;
    }
    if (this->edge_num != other.edge_num) {
      return false;
    }
    if (this->node != other.node) {
      return false;
    }
    if (this->edge != other.edge) {
      return false;
    }
    if (this->undefined != other.undefined) {
      return false;
    }
    return true;
  }
  bool operator!=(const Graph_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Graph_

// alias to use template instance with default allocator
using Graph =
  graph_msg::msg::Graph_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace graph_msg

#endif  // GRAPH_MSG__MSG__DETAIL__GRAPH__STRUCT_HPP_
