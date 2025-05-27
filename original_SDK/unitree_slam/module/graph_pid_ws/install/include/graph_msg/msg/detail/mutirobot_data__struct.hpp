// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from graph_msg:msg/MutirobotData.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_MSG__MSG__DETAIL__MUTIROBOT_DATA__STRUCT_HPP_
#define GRAPH_MSG__MSG__DETAIL__MUTIROBOT_DATA__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'robotid'
#include "std_msgs/msg/detail/int64__struct.hpp"
// Member 'data'
#include "std_msgs/msg/detail/string__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__graph_msg__msg__MutirobotData __attribute__((deprecated))
#else
# define DEPRECATED__graph_msg__msg__MutirobotData __declspec(deprecated)
#endif

namespace graph_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MutirobotData_
{
  using Type = MutirobotData_<ContainerAllocator>;

  explicit MutirobotData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : robotid(_init),
    data(_init)
  {
    (void)_init;
  }

  explicit MutirobotData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : robotid(_alloc, _init),
    data(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _robotid_type =
    std_msgs::msg::Int64_<ContainerAllocator>;
  _robotid_type robotid;
  using _data_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__robotid(
    const std_msgs::msg::Int64_<ContainerAllocator> & _arg)
  {
    this->robotid = _arg;
    return *this;
  }
  Type & set__data(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    graph_msg::msg::MutirobotData_<ContainerAllocator> *;
  using ConstRawPtr =
    const graph_msg::msg::MutirobotData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<graph_msg::msg::MutirobotData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<graph_msg::msg::MutirobotData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      graph_msg::msg::MutirobotData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<graph_msg::msg::MutirobotData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      graph_msg::msg::MutirobotData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<graph_msg::msg::MutirobotData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<graph_msg::msg::MutirobotData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<graph_msg::msg::MutirobotData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__graph_msg__msg__MutirobotData
    std::shared_ptr<graph_msg::msg::MutirobotData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__graph_msg__msg__MutirobotData
    std::shared_ptr<graph_msg::msg::MutirobotData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MutirobotData_ & other) const
  {
    if (this->robotid != other.robotid) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const MutirobotData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MutirobotData_

// alias to use template instance with default allocator
using MutirobotData =
  graph_msg::msg::MutirobotData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace graph_msg

#endif  // GRAPH_MSG__MSG__DETAIL__MUTIROBOT_DATA__STRUCT_HPP_
