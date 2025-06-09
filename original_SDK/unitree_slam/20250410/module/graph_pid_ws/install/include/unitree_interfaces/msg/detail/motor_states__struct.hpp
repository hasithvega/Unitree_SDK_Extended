// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from unitree_interfaces:msg/MotorStates.idl
// generated code does not contain a copyright notice

#ifndef UNITREE_INTERFACES__MSG__DETAIL__MOTOR_STATES__STRUCT_HPP_
#define UNITREE_INTERFACES__MSG__DETAIL__MOTOR_STATES__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'motor_state'
#include "unitree_interfaces/msg/detail/motor_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__unitree_interfaces__msg__MotorStates __attribute__((deprecated))
#else
# define DEPRECATED__unitree_interfaces__msg__MotorStates __declspec(deprecated)
#endif

namespace unitree_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorStates_
{
  using Type = MotorStates_<ContainerAllocator>;

  explicit MotorStates_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motor_state.fill(unitree_interfaces::msg::MotorState_<ContainerAllocator>{_init});
    }
  }

  explicit MotorStates_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : motor_state(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motor_state.fill(unitree_interfaces::msg::MotorState_<ContainerAllocator>{_alloc, _init});
    }
  }

  // field types and members
  using _motor_state_type =
    std::array<unitree_interfaces::msg::MotorState_<ContainerAllocator>, 20>;
  _motor_state_type motor_state;

  // setters for named parameter idiom
  Type & set__motor_state(
    const std::array<unitree_interfaces::msg::MotorState_<ContainerAllocator>, 20> & _arg)
  {
    this->motor_state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    unitree_interfaces::msg::MotorStates_<ContainerAllocator> *;
  using ConstRawPtr =
    const unitree_interfaces::msg::MotorStates_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<unitree_interfaces::msg::MotorStates_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<unitree_interfaces::msg::MotorStates_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      unitree_interfaces::msg::MotorStates_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<unitree_interfaces::msg::MotorStates_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      unitree_interfaces::msg::MotorStates_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<unitree_interfaces::msg::MotorStates_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<unitree_interfaces::msg::MotorStates_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<unitree_interfaces::msg::MotorStates_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__unitree_interfaces__msg__MotorStates
    std::shared_ptr<unitree_interfaces::msg::MotorStates_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__unitree_interfaces__msg__MotorStates
    std::shared_ptr<unitree_interfaces::msg::MotorStates_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorStates_ & other) const
  {
    if (this->motor_state != other.motor_state) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorStates_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorStates_

// alias to use template instance with default allocator
using MotorStates =
  unitree_interfaces::msg::MotorStates_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace unitree_interfaces

#endif  // UNITREE_INTERFACES__MSG__DETAIL__MOTOR_STATES__STRUCT_HPP_
