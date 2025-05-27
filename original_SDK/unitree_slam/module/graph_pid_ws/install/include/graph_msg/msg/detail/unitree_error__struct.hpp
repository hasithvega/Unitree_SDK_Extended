// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from graph_msg:msg/UnitreeError.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_MSG__MSG__DETAIL__UNITREE_ERROR__STRUCT_HPP_
#define GRAPH_MSG__MSG__DETAIL__UNITREE_ERROR__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'error_log'
#include "std_msgs/msg/detail/string__struct.hpp"
// Member 'error_flag'
#include "std_msgs/msg/detail/int8__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__graph_msg__msg__UnitreeError __attribute__((deprecated))
#else
# define DEPRECATED__graph_msg__msg__UnitreeError __declspec(deprecated)
#endif

namespace graph_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UnitreeError_
{
  using Type = UnitreeError_<ContainerAllocator>;

  explicit UnitreeError_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : error_log(_init),
    error_flag(_init)
  {
    (void)_init;
  }

  explicit UnitreeError_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : error_log(_alloc, _init),
    error_flag(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _error_log_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _error_log_type error_log;
  using _error_flag_type =
    std_msgs::msg::Int8_<ContainerAllocator>;
  _error_flag_type error_flag;

  // setters for named parameter idiom
  Type & set__error_log(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->error_log = _arg;
    return *this;
  }
  Type & set__error_flag(
    const std_msgs::msg::Int8_<ContainerAllocator> & _arg)
  {
    this->error_flag = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    graph_msg::msg::UnitreeError_<ContainerAllocator> *;
  using ConstRawPtr =
    const graph_msg::msg::UnitreeError_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<graph_msg::msg::UnitreeError_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<graph_msg::msg::UnitreeError_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      graph_msg::msg::UnitreeError_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<graph_msg::msg::UnitreeError_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      graph_msg::msg::UnitreeError_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<graph_msg::msg::UnitreeError_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<graph_msg::msg::UnitreeError_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<graph_msg::msg::UnitreeError_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__graph_msg__msg__UnitreeError
    std::shared_ptr<graph_msg::msg::UnitreeError_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__graph_msg__msg__UnitreeError
    std::shared_ptr<graph_msg::msg::UnitreeError_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UnitreeError_ & other) const
  {
    if (this->error_log != other.error_log) {
      return false;
    }
    if (this->error_flag != other.error_flag) {
      return false;
    }
    return true;
  }
  bool operator!=(const UnitreeError_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UnitreeError_

// alias to use template instance with default allocator
using UnitreeError =
  graph_msg::msg::UnitreeError_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace graph_msg

#endif  // GRAPH_MSG__MSG__DETAIL__UNITREE_ERROR__STRUCT_HPP_
