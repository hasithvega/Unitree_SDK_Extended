// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from graph_msg:msg/UnitreeCommond.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_MSG__MSG__DETAIL__UNITREE_COMMOND__STRUCT_HPP_
#define GRAPH_MSG__MSG__DETAIL__UNITREE_COMMOND__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'cmd'
// Member 'seq'
#include "std_msgs/msg/detail/string__struct.hpp"
// Member 'faild_flag'
#include "std_msgs/msg/detail/int8__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__graph_msg__msg__UnitreeCommond __attribute__((deprecated))
#else
# define DEPRECATED__graph_msg__msg__UnitreeCommond __declspec(deprecated)
#endif

namespace graph_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UnitreeCommond_
{
  using Type = UnitreeCommond_<ContainerAllocator>;

  explicit UnitreeCommond_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : cmd(_init),
    seq(_init),
    faild_flag(_init)
  {
    (void)_init;
  }

  explicit UnitreeCommond_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : cmd(_alloc, _init),
    seq(_alloc, _init),
    faild_flag(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _cmd_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _cmd_type cmd;
  using _seq_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _seq_type seq;
  using _faild_flag_type =
    std_msgs::msg::Int8_<ContainerAllocator>;
  _faild_flag_type faild_flag;

  // setters for named parameter idiom
  Type & set__cmd(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->cmd = _arg;
    return *this;
  }
  Type & set__seq(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->seq = _arg;
    return *this;
  }
  Type & set__faild_flag(
    const std_msgs::msg::Int8_<ContainerAllocator> & _arg)
  {
    this->faild_flag = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    graph_msg::msg::UnitreeCommond_<ContainerAllocator> *;
  using ConstRawPtr =
    const graph_msg::msg::UnitreeCommond_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<graph_msg::msg::UnitreeCommond_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<graph_msg::msg::UnitreeCommond_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      graph_msg::msg::UnitreeCommond_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<graph_msg::msg::UnitreeCommond_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      graph_msg::msg::UnitreeCommond_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<graph_msg::msg::UnitreeCommond_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<graph_msg::msg::UnitreeCommond_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<graph_msg::msg::UnitreeCommond_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__graph_msg__msg__UnitreeCommond
    std::shared_ptr<graph_msg::msg::UnitreeCommond_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__graph_msg__msg__UnitreeCommond
    std::shared_ptr<graph_msg::msg::UnitreeCommond_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UnitreeCommond_ & other) const
  {
    if (this->cmd != other.cmd) {
      return false;
    }
    if (this->seq != other.seq) {
      return false;
    }
    if (this->faild_flag != other.faild_flag) {
      return false;
    }
    return true;
  }
  bool operator!=(const UnitreeCommond_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UnitreeCommond_

// alias to use template instance with default allocator
using UnitreeCommond =
  graph_msg::msg::UnitreeCommond_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace graph_msg

#endif  // GRAPH_MSG__MSG__DETAIL__UNITREE_COMMOND__STRUCT_HPP_
