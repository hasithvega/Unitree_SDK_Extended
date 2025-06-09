// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_interface:msg/NavigationToPose.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACE__MSG__DETAIL__NAVIGATION_TO_POSE__STRUCT_HPP_
#define CUSTOM_INTERFACE__MSG__DETAIL__NAVIGATION_TO_POSE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__custom_interface__msg__NavigationToPose __attribute__((deprecated))
#else
# define DEPRECATED__custom_interface__msg__NavigationToPose __declspec(deprecated)
#endif

namespace custom_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NavigationToPose_
{
  using Type = NavigationToPose_<ContainerAllocator>;

  explicit NavigationToPose_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
      this->pose_x = 0.0;
      this->pose_y = 0.0;
      this->pose_z = 0.0;
      this->quat_x = 0.0;
      this->quat_y = 0.0;
      this->quat_z = 0.0;
      this->quat_w = 0.0;
    }
  }

  explicit NavigationToPose_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
      this->pose_x = 0.0;
      this->pose_y = 0.0;
      this->pose_z = 0.0;
      this->quat_x = 0.0;
      this->quat_y = 0.0;
      this->quat_z = 0.0;
      this->quat_w = 0.0;
    }
  }

  // field types and members
  using _id_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _id_type id;
  using _pose_x_type =
    double;
  _pose_x_type pose_x;
  using _pose_y_type =
    double;
  _pose_y_type pose_y;
  using _pose_z_type =
    double;
  _pose_z_type pose_z;
  using _quat_x_type =
    double;
  _quat_x_type quat_x;
  using _quat_y_type =
    double;
  _quat_y_type quat_y;
  using _quat_z_type =
    double;
  _quat_z_type quat_z;
  using _quat_w_type =
    double;
  _quat_w_type quat_w;

  // setters for named parameter idiom
  Type & set__id(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__pose_x(
    const double & _arg)
  {
    this->pose_x = _arg;
    return *this;
  }
  Type & set__pose_y(
    const double & _arg)
  {
    this->pose_y = _arg;
    return *this;
  }
  Type & set__pose_z(
    const double & _arg)
  {
    this->pose_z = _arg;
    return *this;
  }
  Type & set__quat_x(
    const double & _arg)
  {
    this->quat_x = _arg;
    return *this;
  }
  Type & set__quat_y(
    const double & _arg)
  {
    this->quat_y = _arg;
    return *this;
  }
  Type & set__quat_z(
    const double & _arg)
  {
    this->quat_z = _arg;
    return *this;
  }
  Type & set__quat_w(
    const double & _arg)
  {
    this->quat_w = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_interface::msg::NavigationToPose_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_interface::msg::NavigationToPose_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_interface::msg::NavigationToPose_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_interface::msg::NavigationToPose_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_interface::msg::NavigationToPose_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_interface::msg::NavigationToPose_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_interface::msg::NavigationToPose_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_interface::msg::NavigationToPose_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_interface::msg::NavigationToPose_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_interface::msg::NavigationToPose_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_interface__msg__NavigationToPose
    std::shared_ptr<custom_interface::msg::NavigationToPose_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_interface__msg__NavigationToPose
    std::shared_ptr<custom_interface::msg::NavigationToPose_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavigationToPose_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->pose_x != other.pose_x) {
      return false;
    }
    if (this->pose_y != other.pose_y) {
      return false;
    }
    if (this->pose_z != other.pose_z) {
      return false;
    }
    if (this->quat_x != other.quat_x) {
      return false;
    }
    if (this->quat_y != other.quat_y) {
      return false;
    }
    if (this->quat_z != other.quat_z) {
      return false;
    }
    if (this->quat_w != other.quat_w) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavigationToPose_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavigationToPose_

// alias to use template instance with default allocator
using NavigationToPose =
  custom_interface::msg::NavigationToPose_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_interface

#endif  // CUSTOM_INTERFACE__MSG__DETAIL__NAVIGATION_TO_POSE__STRUCT_HPP_
