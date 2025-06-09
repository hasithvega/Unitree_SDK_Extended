// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nav2_costmap:msg/CostMap.idl
// generated code does not contain a copyright notice

#ifndef NAV2_COSTMAP__MSG__DETAIL__COST_MAP__BUILDER_HPP_
#define NAV2_COSTMAP__MSG__DETAIL__COST_MAP__BUILDER_HPP_

#include "nav2_costmap/msg/detail/cost_map__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace nav2_costmap
{

namespace msg
{

namespace builder
{

class Init_CostMap_data
{
public:
  explicit Init_CostMap_data(::nav2_costmap::msg::CostMap & msg)
  : msg_(msg)
  {}
  ::nav2_costmap::msg::CostMap data(::nav2_costmap::msg::CostMap::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_costmap::msg::CostMap msg_;
};

class Init_CostMap_origin
{
public:
  explicit Init_CostMap_origin(::nav2_costmap::msg::CostMap & msg)
  : msg_(msg)
  {}
  Init_CostMap_data origin(::nav2_costmap::msg::CostMap::_origin_type arg)
  {
    msg_.origin = std::move(arg);
    return Init_CostMap_data(msg_);
  }

private:
  ::nav2_costmap::msg::CostMap msg_;
};

class Init_CostMap_size_y
{
public:
  explicit Init_CostMap_size_y(::nav2_costmap::msg::CostMap & msg)
  : msg_(msg)
  {}
  Init_CostMap_origin size_y(::nav2_costmap::msg::CostMap::_size_y_type arg)
  {
    msg_.size_y = std::move(arg);
    return Init_CostMap_origin(msg_);
  }

private:
  ::nav2_costmap::msg::CostMap msg_;
};

class Init_CostMap_size_x
{
public:
  explicit Init_CostMap_size_x(::nav2_costmap::msg::CostMap & msg)
  : msg_(msg)
  {}
  Init_CostMap_size_y size_x(::nav2_costmap::msg::CostMap::_size_x_type arg)
  {
    msg_.size_x = std::move(arg);
    return Init_CostMap_size_y(msg_);
  }

private:
  ::nav2_costmap::msg::CostMap msg_;
};

class Init_CostMap_resolution
{
public:
  explicit Init_CostMap_resolution(::nav2_costmap::msg::CostMap & msg)
  : msg_(msg)
  {}
  Init_CostMap_size_x resolution(::nav2_costmap::msg::CostMap::_resolution_type arg)
  {
    msg_.resolution = std::move(arg);
    return Init_CostMap_size_x(msg_);
  }

private:
  ::nav2_costmap::msg::CostMap msg_;
};

class Init_CostMap_header
{
public:
  Init_CostMap_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CostMap_resolution header(::nav2_costmap::msg::CostMap::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CostMap_resolution(msg_);
  }

private:
  ::nav2_costmap::msg::CostMap msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_costmap::msg::CostMap>()
{
  return nav2_costmap::msg::builder::Init_CostMap_header();
}

}  // namespace nav2_costmap

#endif  // NAV2_COSTMAP__MSG__DETAIL__COST_MAP__BUILDER_HPP_
