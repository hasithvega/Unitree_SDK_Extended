// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_interface:msg/VirtualWall.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACE__MSG__DETAIL__VIRTUAL_WALL__STRUCT_HPP_
#define CUSTOM_INTERFACE__MSG__DETAIL__VIRTUAL_WALL__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__custom_interface__msg__VirtualWall __attribute__((deprecated))
#else
# define DEPRECATED__custom_interface__msg__VirtualWall __declspec(deprecated)
#endif

namespace custom_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VirtualWall_
{
  using Type = VirtualWall_<ContainerAllocator>;

  explicit VirtualWall_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->wall_type = 0ll;
      this->frame_start_x = 0.0;
      this->frame_start_y = 0.0;
      this->frame_end_x = 0.0;
      this->frame_end_y = 0.0;
      this->threshold = 0ll;
    }
  }

  explicit VirtualWall_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->wall_type = 0ll;
      this->frame_start_x = 0.0;
      this->frame_start_y = 0.0;
      this->frame_end_x = 0.0;
      this->frame_end_y = 0.0;
      this->threshold = 0ll;
    }
  }

  // field types and members
  using _wall_type_type =
    int64_t;
  _wall_type_type wall_type;
  using _frame_start_x_type =
    double;
  _frame_start_x_type frame_start_x;
  using _frame_start_y_type =
    double;
  _frame_start_y_type frame_start_y;
  using _frame_end_x_type =
    double;
  _frame_end_x_type frame_end_x;
  using _frame_end_y_type =
    double;
  _frame_end_y_type frame_end_y;
  using _threshold_type =
    int64_t;
  _threshold_type threshold;

  // setters for named parameter idiom
  Type & set__wall_type(
    const int64_t & _arg)
  {
    this->wall_type = _arg;
    return *this;
  }
  Type & set__frame_start_x(
    const double & _arg)
  {
    this->frame_start_x = _arg;
    return *this;
  }
  Type & set__frame_start_y(
    const double & _arg)
  {
    this->frame_start_y = _arg;
    return *this;
  }
  Type & set__frame_end_x(
    const double & _arg)
  {
    this->frame_end_x = _arg;
    return *this;
  }
  Type & set__frame_end_y(
    const double & _arg)
  {
    this->frame_end_y = _arg;
    return *this;
  }
  Type & set__threshold(
    const int64_t & _arg)
  {
    this->threshold = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_interface::msg::VirtualWall_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_interface::msg::VirtualWall_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_interface::msg::VirtualWall_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_interface::msg::VirtualWall_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_interface::msg::VirtualWall_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_interface::msg::VirtualWall_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_interface::msg::VirtualWall_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_interface::msg::VirtualWall_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_interface::msg::VirtualWall_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_interface::msg::VirtualWall_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_interface__msg__VirtualWall
    std::shared_ptr<custom_interface::msg::VirtualWall_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_interface__msg__VirtualWall
    std::shared_ptr<custom_interface::msg::VirtualWall_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VirtualWall_ & other) const
  {
    if (this->wall_type != other.wall_type) {
      return false;
    }
    if (this->frame_start_x != other.frame_start_x) {
      return false;
    }
    if (this->frame_start_y != other.frame_start_y) {
      return false;
    }
    if (this->frame_end_x != other.frame_end_x) {
      return false;
    }
    if (this->frame_end_y != other.frame_end_y) {
      return false;
    }
    if (this->threshold != other.threshold) {
      return false;
    }
    return true;
  }
  bool operator!=(const VirtualWall_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VirtualWall_

// alias to use template instance with default allocator
using VirtualWall =
  custom_interface::msg::VirtualWall_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_interface

#endif  // CUSTOM_INTERFACE__MSG__DETAIL__VIRTUAL_WALL__STRUCT_HPP_
