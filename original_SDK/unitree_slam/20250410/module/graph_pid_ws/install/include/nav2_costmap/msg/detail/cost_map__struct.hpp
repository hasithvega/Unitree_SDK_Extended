// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from nav2_costmap:msg/CostMap.idl
// generated code does not contain a copyright notice

#ifndef NAV2_COSTMAP__MSG__DETAIL__COST_MAP__STRUCT_HPP_
#define NAV2_COSTMAP__MSG__DETAIL__COST_MAP__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'origin'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__nav2_costmap__msg__CostMap __attribute__((deprecated))
#else
# define DEPRECATED__nav2_costmap__msg__CostMap __declspec(deprecated)
#endif

namespace nav2_costmap
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CostMap_
{
  using Type = CostMap_<ContainerAllocator>;

  explicit CostMap_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    origin(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->resolution = 0.0f;
      this->size_x = 0ul;
      this->size_y = 0ul;
    }
  }

  explicit CostMap_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    origin(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->resolution = 0.0f;
      this->size_x = 0ul;
      this->size_y = 0ul;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _resolution_type =
    float;
  _resolution_type resolution;
  using _size_x_type =
    uint32_t;
  _size_x_type size_x;
  using _size_y_type =
    uint32_t;
  _size_y_type size_y;
  using _origin_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _origin_type origin;
  using _data_type =
    std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__resolution(
    const float & _arg)
  {
    this->resolution = _arg;
    return *this;
  }
  Type & set__size_x(
    const uint32_t & _arg)
  {
    this->size_x = _arg;
    return *this;
  }
  Type & set__size_y(
    const uint32_t & _arg)
  {
    this->size_y = _arg;
    return *this;
  }
  Type & set__origin(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->origin = _arg;
    return *this;
  }
  Type & set__data(
    const std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nav2_costmap::msg::CostMap_<ContainerAllocator> *;
  using ConstRawPtr =
    const nav2_costmap::msg::CostMap_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nav2_costmap::msg::CostMap_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nav2_costmap::msg::CostMap_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nav2_costmap::msg::CostMap_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nav2_costmap::msg::CostMap_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nav2_costmap::msg::CostMap_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nav2_costmap::msg::CostMap_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nav2_costmap::msg::CostMap_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nav2_costmap::msg::CostMap_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nav2_costmap__msg__CostMap
    std::shared_ptr<nav2_costmap::msg::CostMap_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nav2_costmap__msg__CostMap
    std::shared_ptr<nav2_costmap::msg::CostMap_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CostMap_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->resolution != other.resolution) {
      return false;
    }
    if (this->size_x != other.size_x) {
      return false;
    }
    if (this->size_y != other.size_y) {
      return false;
    }
    if (this->origin != other.origin) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const CostMap_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CostMap_

// alias to use template instance with default allocator
using CostMap =
  nav2_costmap::msg::CostMap_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace nav2_costmap

#endif  // NAV2_COSTMAP__MSG__DETAIL__COST_MAP__STRUCT_HPP_
