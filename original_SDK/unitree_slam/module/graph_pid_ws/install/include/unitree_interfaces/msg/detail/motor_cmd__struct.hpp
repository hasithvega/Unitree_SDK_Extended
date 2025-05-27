// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from unitree_interfaces:msg/MotorCmd.idl
// generated code does not contain a copyright notice

#ifndef UNITREE_INTERFACES__MSG__DETAIL__MOTOR_CMD__STRUCT_HPP_
#define UNITREE_INTERFACES__MSG__DETAIL__MOTOR_CMD__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__unitree_interfaces__msg__MotorCmd __attribute__((deprecated))
#else
# define DEPRECATED__unitree_interfaces__msg__MotorCmd __declspec(deprecated)
#endif

namespace unitree_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorCmd_
{
  using Type = MotorCmd_<ContainerAllocator>;

  explicit MotorCmd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0;
      this->q = 0.0f;
      this->dq = 0.0f;
      this->torque = 0.0f;
      this->k_p = 0.0f;
      this->k_d = 0.0f;
    }
  }

  explicit MotorCmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0;
      this->q = 0.0f;
      this->dq = 0.0f;
      this->torque = 0.0f;
      this->k_p = 0.0f;
      this->k_d = 0.0f;
    }
  }

  // field types and members
  using _mode_type =
    uint8_t;
  _mode_type mode;
  using _q_type =
    float;
  _q_type q;
  using _dq_type =
    float;
  _dq_type dq;
  using _torque_type =
    float;
  _torque_type torque;
  using _k_p_type =
    float;
  _k_p_type k_p;
  using _k_d_type =
    float;
  _k_d_type k_d;

  // setters for named parameter idiom
  Type & set__mode(
    const uint8_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }
  Type & set__q(
    const float & _arg)
  {
    this->q = _arg;
    return *this;
  }
  Type & set__dq(
    const float & _arg)
  {
    this->dq = _arg;
    return *this;
  }
  Type & set__torque(
    const float & _arg)
  {
    this->torque = _arg;
    return *this;
  }
  Type & set__k_p(
    const float & _arg)
  {
    this->k_p = _arg;
    return *this;
  }
  Type & set__k_d(
    const float & _arg)
  {
    this->k_d = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    unitree_interfaces::msg::MotorCmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const unitree_interfaces::msg::MotorCmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<unitree_interfaces::msg::MotorCmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<unitree_interfaces::msg::MotorCmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      unitree_interfaces::msg::MotorCmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<unitree_interfaces::msg::MotorCmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      unitree_interfaces::msg::MotorCmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<unitree_interfaces::msg::MotorCmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<unitree_interfaces::msg::MotorCmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<unitree_interfaces::msg::MotorCmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__unitree_interfaces__msg__MotorCmd
    std::shared_ptr<unitree_interfaces::msg::MotorCmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__unitree_interfaces__msg__MotorCmd
    std::shared_ptr<unitree_interfaces::msg::MotorCmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorCmd_ & other) const
  {
    if (this->mode != other.mode) {
      return false;
    }
    if (this->q != other.q) {
      return false;
    }
    if (this->dq != other.dq) {
      return false;
    }
    if (this->torque != other.torque) {
      return false;
    }
    if (this->k_p != other.k_p) {
      return false;
    }
    if (this->k_d != other.k_d) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorCmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorCmd_

// alias to use template instance with default allocator
using MotorCmd =
  unitree_interfaces::msg::MotorCmd_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace unitree_interfaces

#endif  // UNITREE_INTERFACES__MSG__DETAIL__MOTOR_CMD__STRUCT_HPP_
