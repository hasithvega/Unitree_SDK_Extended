// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lio_sam_ros2:msg/ScoreInfo.idl
// generated code does not contain a copyright notice

#ifndef LIO_SAM_ROS2__MSG__DETAIL__SCORE_INFO__BUILDER_HPP_
#define LIO_SAM_ROS2__MSG__DETAIL__SCORE_INFO__BUILDER_HPP_

#include "lio_sam_ros2/msg/detail/score_info__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace lio_sam_ros2
{

namespace msg
{

namespace builder
{

class Init_ScoreInfo_err_yaw
{
public:
  explicit Init_ScoreInfo_err_yaw(::lio_sam_ros2::msg::ScoreInfo & msg)
  : msg_(msg)
  {}
  ::lio_sam_ros2::msg::ScoreInfo err_yaw(::lio_sam_ros2::msg::ScoreInfo::_err_yaw_type arg)
  {
    msg_.err_yaw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lio_sam_ros2::msg::ScoreInfo msg_;
};

class Init_ScoreInfo_err_angle
{
public:
  explicit Init_ScoreInfo_err_angle(::lio_sam_ros2::msg::ScoreInfo & msg)
  : msg_(msg)
  {}
  Init_ScoreInfo_err_yaw err_angle(::lio_sam_ros2::msg::ScoreInfo::_err_angle_type arg)
  {
    msg_.err_angle = std::move(arg);
    return Init_ScoreInfo_err_yaw(msg_);
  }

private:
  ::lio_sam_ros2::msg::ScoreInfo msg_;
};

class Init_ScoreInfo_err_position_z
{
public:
  explicit Init_ScoreInfo_err_position_z(::lio_sam_ros2::msg::ScoreInfo & msg)
  : msg_(msg)
  {}
  Init_ScoreInfo_err_angle err_position_z(::lio_sam_ros2::msg::ScoreInfo::_err_position_z_type arg)
  {
    msg_.err_position_z = std::move(arg);
    return Init_ScoreInfo_err_angle(msg_);
  }

private:
  ::lio_sam_ros2::msg::ScoreInfo msg_;
};

class Init_ScoreInfo_err_position
{
public:
  explicit Init_ScoreInfo_err_position(::lio_sam_ros2::msg::ScoreInfo & msg)
  : msg_(msg)
  {}
  Init_ScoreInfo_err_position_z err_position(::lio_sam_ros2::msg::ScoreInfo::_err_position_type arg)
  {
    msg_.err_position = std::move(arg);
    return Init_ScoreInfo_err_position_z(msg_);
  }

private:
  ::lio_sam_ros2::msg::ScoreInfo msg_;
};

class Init_ScoreInfo_score
{
public:
  explicit Init_ScoreInfo_score(::lio_sam_ros2::msg::ScoreInfo & msg)
  : msg_(msg)
  {}
  Init_ScoreInfo_err_position score(::lio_sam_ros2::msg::ScoreInfo::_score_type arg)
  {
    msg_.score = std::move(arg);
    return Init_ScoreInfo_err_position(msg_);
  }

private:
  ::lio_sam_ros2::msg::ScoreInfo msg_;
};

class Init_ScoreInfo_header
{
public:
  Init_ScoreInfo_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ScoreInfo_score header(::lio_sam_ros2::msg::ScoreInfo::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ScoreInfo_score(msg_);
  }

private:
  ::lio_sam_ros2::msg::ScoreInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lio_sam_ros2::msg::ScoreInfo>()
{
  return lio_sam_ros2::msg::builder::Init_ScoreInfo_header();
}

}  // namespace lio_sam_ros2

#endif  // LIO_SAM_ROS2__MSG__DETAIL__SCORE_INFO__BUILDER_HPP_
