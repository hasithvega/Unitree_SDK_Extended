// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from graph_msg:msg/MutirobotMission.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_MSG__MSG__DETAIL__MUTIROBOT_MISSION__STRUCT_HPP_
#define GRAPH_MSG__MSG__DETAIL__MUTIROBOT_MISSION__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'robotid'
// Member 'missionid'
// Member 'missionstate'
#include "std_msgs/msg/detail/int64__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__graph_msg__msg__MutirobotMission __attribute__((deprecated))
#else
# define DEPRECATED__graph_msg__msg__MutirobotMission __declspec(deprecated)
#endif

namespace graph_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MutirobotMission_
{
  using Type = MutirobotMission_<ContainerAllocator>;

  explicit MutirobotMission_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : robotid(_init),
    missionid(_init),
    missionstate(_init)
  {
    (void)_init;
  }

  explicit MutirobotMission_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : robotid(_alloc, _init),
    missionid(_alloc, _init),
    missionstate(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _robotid_type =
    std_msgs::msg::Int64_<ContainerAllocator>;
  _robotid_type robotid;
  using _missionid_type =
    std_msgs::msg::Int64_<ContainerAllocator>;
  _missionid_type missionid;
  using _missionstate_type =
    std_msgs::msg::Int64_<ContainerAllocator>;
  _missionstate_type missionstate;

  // setters for named parameter idiom
  Type & set__robotid(
    const std_msgs::msg::Int64_<ContainerAllocator> & _arg)
  {
    this->robotid = _arg;
    return *this;
  }
  Type & set__missionid(
    const std_msgs::msg::Int64_<ContainerAllocator> & _arg)
  {
    this->missionid = _arg;
    return *this;
  }
  Type & set__missionstate(
    const std_msgs::msg::Int64_<ContainerAllocator> & _arg)
  {
    this->missionstate = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    graph_msg::msg::MutirobotMission_<ContainerAllocator> *;
  using ConstRawPtr =
    const graph_msg::msg::MutirobotMission_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<graph_msg::msg::MutirobotMission_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<graph_msg::msg::MutirobotMission_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      graph_msg::msg::MutirobotMission_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<graph_msg::msg::MutirobotMission_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      graph_msg::msg::MutirobotMission_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<graph_msg::msg::MutirobotMission_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<graph_msg::msg::MutirobotMission_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<graph_msg::msg::MutirobotMission_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__graph_msg__msg__MutirobotMission
    std::shared_ptr<graph_msg::msg::MutirobotMission_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__graph_msg__msg__MutirobotMission
    std::shared_ptr<graph_msg::msg::MutirobotMission_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MutirobotMission_ & other) const
  {
    if (this->robotid != other.robotid) {
      return false;
    }
    if (this->missionid != other.missionid) {
      return false;
    }
    if (this->missionstate != other.missionstate) {
      return false;
    }
    return true;
  }
  bool operator!=(const MutirobotMission_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MutirobotMission_

// alias to use template instance with default allocator
using MutirobotMission =
  graph_msg::msg::MutirobotMission_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace graph_msg

#endif  // GRAPH_MSG__MSG__DETAIL__MUTIROBOT_MISSION__STRUCT_HPP_
