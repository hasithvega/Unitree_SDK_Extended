// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_interface:msg/RechargeInfo.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACE__MSG__DETAIL__RECHARGE_INFO__STRUCT_HPP_
#define CUSTOM_INTERFACE__MSG__DETAIL__RECHARGE_INFO__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'target_pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__custom_interface__msg__RechargeInfo __attribute__((deprecated))
#else
# define DEPRECATED__custom_interface__msg__RechargeInfo __declspec(deprecated)
#endif

namespace custom_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RechargeInfo_
{
  using Type = RechargeInfo_<ContainerAllocator>;

  explicit RechargeInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target_pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->start_flag = "";
    }
  }

  explicit RechargeInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : start_flag(_alloc),
    target_pose(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->start_flag = "";
    }
  }

  // field types and members
  using _start_flag_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _start_flag_type start_flag;
  using _target_pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _target_pose_type target_pose;

  // setters for named parameter idiom
  Type & set__start_flag(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->start_flag = _arg;
    return *this;
  }
  Type & set__target_pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->target_pose = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_interface::msg::RechargeInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_interface::msg::RechargeInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_interface::msg::RechargeInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_interface::msg::RechargeInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_interface::msg::RechargeInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_interface::msg::RechargeInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_interface::msg::RechargeInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_interface::msg::RechargeInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_interface::msg::RechargeInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_interface::msg::RechargeInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_interface__msg__RechargeInfo
    std::shared_ptr<custom_interface::msg::RechargeInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_interface__msg__RechargeInfo
    std::shared_ptr<custom_interface::msg::RechargeInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RechargeInfo_ & other) const
  {
    if (this->start_flag != other.start_flag) {
      return false;
    }
    if (this->target_pose != other.target_pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const RechargeInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RechargeInfo_

// alias to use template instance with default allocator
using RechargeInfo =
  custom_interface::msg::RechargeInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_interface

#endif  // CUSTOM_INTERFACE__MSG__DETAIL__RECHARGE_INFO__STRUCT_HPP_
