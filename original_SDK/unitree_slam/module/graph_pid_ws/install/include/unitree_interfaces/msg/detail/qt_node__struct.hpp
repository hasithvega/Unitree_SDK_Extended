// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from unitree_interfaces:msg/QtNode.idl
// generated code does not contain a copyright notice

#ifndef UNITREE_INTERFACES__MSG__DETAIL__QT_NODE__STRUCT_HPP_
#define UNITREE_INTERFACES__MSG__DETAIL__QT_NODE__STRUCT_HPP_

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
// Member 'node'
#include "graph_msg/msg/detail/node__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__unitree_interfaces__msg__QtNode __attribute__((deprecated))
#else
# define DEPRECATED__unitree_interfaces__msg__QtNode __declspec(deprecated)
#endif

namespace unitree_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct QtNode_
{
  using Type = QtNode_<ContainerAllocator>;

  explicit QtNode_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : seq(_init),
    node(_init)
  {
    (void)_init;
  }

  explicit QtNode_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : seq(_alloc, _init),
    node(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _seq_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _seq_type seq;
  using _node_type =
    graph_msg::msg::Node_<ContainerAllocator>;
  _node_type node;

  // setters for named parameter idiom
  Type & set__seq(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->seq = _arg;
    return *this;
  }
  Type & set__node(
    const graph_msg::msg::Node_<ContainerAllocator> & _arg)
  {
    this->node = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    unitree_interfaces::msg::QtNode_<ContainerAllocator> *;
  using ConstRawPtr =
    const unitree_interfaces::msg::QtNode_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<unitree_interfaces::msg::QtNode_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<unitree_interfaces::msg::QtNode_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      unitree_interfaces::msg::QtNode_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<unitree_interfaces::msg::QtNode_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      unitree_interfaces::msg::QtNode_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<unitree_interfaces::msg::QtNode_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<unitree_interfaces::msg::QtNode_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<unitree_interfaces::msg::QtNode_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__unitree_interfaces__msg__QtNode
    std::shared_ptr<unitree_interfaces::msg::QtNode_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__unitree_interfaces__msg__QtNode
    std::shared_ptr<unitree_interfaces::msg::QtNode_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const QtNode_ & other) const
  {
    if (this->seq != other.seq) {
      return false;
    }
    if (this->node != other.node) {
      return false;
    }
    return true;
  }
  bool operator!=(const QtNode_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct QtNode_

// alias to use template instance with default allocator
using QtNode =
  unitree_interfaces::msg::QtNode_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace unitree_interfaces

#endif  // UNITREE_INTERFACES__MSG__DETAIL__QT_NODE__STRUCT_HPP_
