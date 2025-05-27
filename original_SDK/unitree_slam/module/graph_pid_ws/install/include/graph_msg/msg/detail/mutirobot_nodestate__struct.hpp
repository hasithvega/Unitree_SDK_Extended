// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from graph_msg:msg/MutirobotNodestate.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_MSG__MSG__DETAIL__MUTIROBOT_NODESTATE__STRUCT_HPP_
#define GRAPH_MSG__MSG__DETAIL__MUTIROBOT_NODESTATE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'robotid'
// Member 'nodename'
// Member 'nodestate'
#include "std_msgs/msg/detail/int64__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__graph_msg__msg__MutirobotNodestate __attribute__((deprecated))
#else
# define DEPRECATED__graph_msg__msg__MutirobotNodestate __declspec(deprecated)
#endif

namespace graph_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MutirobotNodestate_
{
  using Type = MutirobotNodestate_<ContainerAllocator>;

  explicit MutirobotNodestate_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : robotid(_init),
    nodename(_init),
    nodestate(_init)
  {
    (void)_init;
  }

  explicit MutirobotNodestate_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : robotid(_alloc, _init),
    nodename(_alloc, _init),
    nodestate(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _robotid_type =
    std_msgs::msg::Int64_<ContainerAllocator>;
  _robotid_type robotid;
  using _nodename_type =
    std_msgs::msg::Int64_<ContainerAllocator>;
  _nodename_type nodename;
  using _nodestate_type =
    std_msgs::msg::Int64_<ContainerAllocator>;
  _nodestate_type nodestate;

  // setters for named parameter idiom
  Type & set__robotid(
    const std_msgs::msg::Int64_<ContainerAllocator> & _arg)
  {
    this->robotid = _arg;
    return *this;
  }
  Type & set__nodename(
    const std_msgs::msg::Int64_<ContainerAllocator> & _arg)
  {
    this->nodename = _arg;
    return *this;
  }
  Type & set__nodestate(
    const std_msgs::msg::Int64_<ContainerAllocator> & _arg)
  {
    this->nodestate = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    graph_msg::msg::MutirobotNodestate_<ContainerAllocator> *;
  using ConstRawPtr =
    const graph_msg::msg::MutirobotNodestate_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<graph_msg::msg::MutirobotNodestate_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<graph_msg::msg::MutirobotNodestate_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      graph_msg::msg::MutirobotNodestate_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<graph_msg::msg::MutirobotNodestate_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      graph_msg::msg::MutirobotNodestate_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<graph_msg::msg::MutirobotNodestate_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<graph_msg::msg::MutirobotNodestate_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<graph_msg::msg::MutirobotNodestate_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__graph_msg__msg__MutirobotNodestate
    std::shared_ptr<graph_msg::msg::MutirobotNodestate_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__graph_msg__msg__MutirobotNodestate
    std::shared_ptr<graph_msg::msg::MutirobotNodestate_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MutirobotNodestate_ & other) const
  {
    if (this->robotid != other.robotid) {
      return false;
    }
    if (this->nodename != other.nodename) {
      return false;
    }
    if (this->nodestate != other.nodestate) {
      return false;
    }
    return true;
  }
  bool operator!=(const MutirobotNodestate_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MutirobotNodestate_

// alias to use template instance with default allocator
using MutirobotNodestate =
  graph_msg::msg::MutirobotNodestate_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace graph_msg

#endif  // GRAPH_MSG__MSG__DETAIL__MUTIROBOT_NODESTATE__STRUCT_HPP_
