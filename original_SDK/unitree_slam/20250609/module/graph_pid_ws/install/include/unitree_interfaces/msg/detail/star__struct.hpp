// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from unitree_interfaces:msg/Star.idl
// generated code does not contain a copyright notice

#ifndef UNITREE_INTERFACES__MSG__DETAIL__STAR__STRUCT_HPP_
#define UNITREE_INTERFACES__MSG__DETAIL__STAR__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__unitree_interfaces__msg__Star __attribute__((deprecated))
#else
# define DEPRECATED__unitree_interfaces__msg__Star __declspec(deprecated)
#endif

namespace unitree_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Star_
{
  using Type = Star_<ContainerAllocator>;

  explicit Star_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->off = 0;
    }
  }

  explicit Star_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->off = 0;
    }
  }

  // field types and members
  using _off_type =
    uint8_t;
  _off_type off;

  // setters for named parameter idiom
  Type & set__off(
    const uint8_t & _arg)
  {
    this->off = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    unitree_interfaces::msg::Star_<ContainerAllocator> *;
  using ConstRawPtr =
    const unitree_interfaces::msg::Star_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<unitree_interfaces::msg::Star_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<unitree_interfaces::msg::Star_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      unitree_interfaces::msg::Star_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<unitree_interfaces::msg::Star_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      unitree_interfaces::msg::Star_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<unitree_interfaces::msg::Star_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<unitree_interfaces::msg::Star_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<unitree_interfaces::msg::Star_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__unitree_interfaces__msg__Star
    std::shared_ptr<unitree_interfaces::msg::Star_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__unitree_interfaces__msg__Star
    std::shared_ptr<unitree_interfaces::msg::Star_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Star_ & other) const
  {
    if (this->off != other.off) {
      return false;
    }
    return true;
  }
  bool operator!=(const Star_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Star_

// alias to use template instance with default allocator
using Star =
  unitree_interfaces::msg::Star_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace unitree_interfaces

#endif  // UNITREE_INTERFACES__MSG__DETAIL__STAR__STRUCT_HPP_
