// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from unitree_interfaces:msg/FootForce.idl
// generated code does not contain a copyright notice

#ifndef UNITREE_INTERFACES__MSG__DETAIL__FOOT_FORCE__STRUCT_HPP_
#define UNITREE_INTERFACES__MSG__DETAIL__FOOT_FORCE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__unitree_interfaces__msg__FootForce __attribute__((deprecated))
#else
# define DEPRECATED__unitree_interfaces__msg__FootForce __declspec(deprecated)
#endif

namespace unitree_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FootForce_
{
  using Type = FootForce_<ContainerAllocator>;

  explicit FootForce_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<int16_t, 4>::iterator, int16_t>(this->foot_force.begin(), this->foot_force.end(), 0);
      std::fill<typename std::array<int16_t, 4>::iterator, int16_t>(this->foot_force_estimated.begin(), this->foot_force_estimated.end(), 0);
    }
  }

  explicit FootForce_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : foot_force(_alloc),
    foot_force_estimated(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<int16_t, 4>::iterator, int16_t>(this->foot_force.begin(), this->foot_force.end(), 0);
      std::fill<typename std::array<int16_t, 4>::iterator, int16_t>(this->foot_force_estimated.begin(), this->foot_force_estimated.end(), 0);
    }
  }

  // field types and members
  using _foot_force_type =
    std::array<int16_t, 4>;
  _foot_force_type foot_force;
  using _foot_force_estimated_type =
    std::array<int16_t, 4>;
  _foot_force_estimated_type foot_force_estimated;

  // setters for named parameter idiom
  Type & set__foot_force(
    const std::array<int16_t, 4> & _arg)
  {
    this->foot_force = _arg;
    return *this;
  }
  Type & set__foot_force_estimated(
    const std::array<int16_t, 4> & _arg)
  {
    this->foot_force_estimated = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    unitree_interfaces::msg::FootForce_<ContainerAllocator> *;
  using ConstRawPtr =
    const unitree_interfaces::msg::FootForce_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<unitree_interfaces::msg::FootForce_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<unitree_interfaces::msg::FootForce_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      unitree_interfaces::msg::FootForce_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<unitree_interfaces::msg::FootForce_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      unitree_interfaces::msg::FootForce_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<unitree_interfaces::msg::FootForce_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<unitree_interfaces::msg::FootForce_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<unitree_interfaces::msg::FootForce_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__unitree_interfaces__msg__FootForce
    std::shared_ptr<unitree_interfaces::msg::FootForce_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__unitree_interfaces__msg__FootForce
    std::shared_ptr<unitree_interfaces::msg::FootForce_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FootForce_ & other) const
  {
    if (this->foot_force != other.foot_force) {
      return false;
    }
    if (this->foot_force_estimated != other.foot_force_estimated) {
      return false;
    }
    return true;
  }
  bool operator!=(const FootForce_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FootForce_

// alias to use template instance with default allocator
using FootForce =
  unitree_interfaces::msg::FootForce_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace unitree_interfaces

#endif  // UNITREE_INTERFACES__MSG__DETAIL__FOOT_FORCE__STRUCT_HPP_
