// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from lio_sam_ros2:msg/ScoreInfo.idl
// generated code does not contain a copyright notice

#ifndef LIO_SAM_ROS2__MSG__DETAIL__SCORE_INFO__STRUCT_HPP_
#define LIO_SAM_ROS2__MSG__DETAIL__SCORE_INFO__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__lio_sam_ros2__msg__ScoreInfo __attribute__((deprecated))
#else
# define DEPRECATED__lio_sam_ros2__msg__ScoreInfo __declspec(deprecated)
#endif

namespace lio_sam_ros2
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ScoreInfo_
{
  using Type = ScoreInfo_<ContainerAllocator>;

  explicit ScoreInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->score = 0.0;
      this->err_position = 0.0;
      this->err_position_z = 0.0;
      this->err_angle = 0.0;
      this->err_yaw = 0.0;
    }
  }

  explicit ScoreInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->score = 0.0;
      this->err_position = 0.0;
      this->err_position_z = 0.0;
      this->err_angle = 0.0;
      this->err_yaw = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _score_type =
    double;
  _score_type score;
  using _err_position_type =
    double;
  _err_position_type err_position;
  using _err_position_z_type =
    double;
  _err_position_z_type err_position_z;
  using _err_angle_type =
    double;
  _err_angle_type err_angle;
  using _err_yaw_type =
    double;
  _err_yaw_type err_yaw;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__score(
    const double & _arg)
  {
    this->score = _arg;
    return *this;
  }
  Type & set__err_position(
    const double & _arg)
  {
    this->err_position = _arg;
    return *this;
  }
  Type & set__err_position_z(
    const double & _arg)
  {
    this->err_position_z = _arg;
    return *this;
  }
  Type & set__err_angle(
    const double & _arg)
  {
    this->err_angle = _arg;
    return *this;
  }
  Type & set__err_yaw(
    const double & _arg)
  {
    this->err_yaw = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    lio_sam_ros2::msg::ScoreInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const lio_sam_ros2::msg::ScoreInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lio_sam_ros2::msg::ScoreInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lio_sam_ros2::msg::ScoreInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lio_sam_ros2::msg::ScoreInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lio_sam_ros2::msg::ScoreInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lio_sam_ros2::msg::ScoreInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lio_sam_ros2::msg::ScoreInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lio_sam_ros2::msg::ScoreInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lio_sam_ros2::msg::ScoreInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lio_sam_ros2__msg__ScoreInfo
    std::shared_ptr<lio_sam_ros2::msg::ScoreInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lio_sam_ros2__msg__ScoreInfo
    std::shared_ptr<lio_sam_ros2::msg::ScoreInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ScoreInfo_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->score != other.score) {
      return false;
    }
    if (this->err_position != other.err_position) {
      return false;
    }
    if (this->err_position_z != other.err_position_z) {
      return false;
    }
    if (this->err_angle != other.err_angle) {
      return false;
    }
    if (this->err_yaw != other.err_yaw) {
      return false;
    }
    return true;
  }
  bool operator!=(const ScoreInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ScoreInfo_

// alias to use template instance with default allocator
using ScoreInfo =
  lio_sam_ros2::msg::ScoreInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace lio_sam_ros2

#endif  // LIO_SAM_ROS2__MSG__DETAIL__SCORE_INFO__STRUCT_HPP_
