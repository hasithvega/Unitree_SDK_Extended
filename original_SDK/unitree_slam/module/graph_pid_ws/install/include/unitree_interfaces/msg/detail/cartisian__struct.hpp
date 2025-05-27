// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from unitree_interfaces:msg/Cartisian.idl
// generated code does not contain a copyright notice

#ifndef UNITREE_INTERFACES__MSG__DETAIL__CARTISIAN__STRUCT_HPP_
#define UNITREE_INTERFACES__MSG__DETAIL__CARTISIAN__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__unitree_interfaces__msg__Cartisian __attribute__((deprecated))
#else
# define DEPRECATED__unitree_interfaces__msg__Cartisian __declspec(deprecated)
#endif

namespace unitree_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Cartisian_
{
  using Type = Cartisian_<ContainerAllocator>;

  explicit Cartisian_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0f;
      this->y = 0.0f;
      this->z = 0.0f;
    }
  }

  explicit Cartisian_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0f;
      this->y = 0.0f;
      this->z = 0.0f;
    }
  }

  // field types and members
  using _x_type =
    float;
  _x_type x;
  using _y_type =
    float;
  _y_type y;
  using _z_type =
    float;
  _z_type z;

  // setters for named parameter idiom
  Type & set__x(
    const float & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const float & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__z(
    const float & _arg)
  {
    this->z = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    unitree_interfaces::msg::Cartisian_<ContainerAllocator> *;
  using ConstRawPtr =
    const unitree_interfaces::msg::Cartisian_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<unitree_interfaces::msg::Cartisian_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<unitree_interfaces::msg::Cartisian_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      unitree_interfaces::msg::Cartisian_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<unitree_interfaces::msg::Cartisian_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      unitree_interfaces::msg::Cartisian_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<unitree_interfaces::msg::Cartisian_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<unitree_interfaces::msg::Cartisian_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<unitree_interfaces::msg::Cartisian_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__unitree_interfaces__msg__Cartisian
    std::shared_ptr<unitree_interfaces::msg::Cartisian_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__unitree_interfaces__msg__Cartisian
    std::shared_ptr<unitree_interfaces::msg::Cartisian_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Cartisian_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    return true;
  }
  bool operator!=(const Cartisian_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Cartisian_

// alias to use template instance with default allocator
using Cartisian =
  unitree_interfaces::msg::Cartisian_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace unitree_interfaces

#endif  // UNITREE_INTERFACES__MSG__DETAIL__CARTISIAN__STRUCT_HPP_
