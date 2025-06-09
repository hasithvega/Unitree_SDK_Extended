// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from unitree_interfaces:msg/PcToImage.idl
// generated code does not contain a copyright notice

#ifndef UNITREE_INTERFACES__MSG__DETAIL__PC_TO_IMAGE__BUILDER_HPP_
#define UNITREE_INTERFACES__MSG__DETAIL__PC_TO_IMAGE__BUILDER_HPP_

#include "unitree_interfaces/msg/detail/pc_to_image__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace unitree_interfaces
{

namespace msg
{

namespace builder
{

class Init_PcToImage_image
{
public:
  explicit Init_PcToImage_image(::unitree_interfaces::msg::PcToImage & msg)
  : msg_(msg)
  {}
  ::unitree_interfaces::msg::PcToImage image(::unitree_interfaces::msg::PcToImage::_image_type arg)
  {
    msg_.image = std::move(arg);
    return std::move(msg_);
  }

private:
  ::unitree_interfaces::msg::PcToImage msg_;
};

class Init_PcToImage_image_y
{
public:
  explicit Init_PcToImage_image_y(::unitree_interfaces::msg::PcToImage & msg)
  : msg_(msg)
  {}
  Init_PcToImage_image image_y(::unitree_interfaces::msg::PcToImage::_image_y_type arg)
  {
    msg_.image_y = std::move(arg);
    return Init_PcToImage_image(msg_);
  }

private:
  ::unitree_interfaces::msg::PcToImage msg_;
};

class Init_PcToImage_image_x
{
public:
  explicit Init_PcToImage_image_x(::unitree_interfaces::msg::PcToImage & msg)
  : msg_(msg)
  {}
  Init_PcToImage_image_y image_x(::unitree_interfaces::msg::PcToImage::_image_x_type arg)
  {
    msg_.image_x = std::move(arg);
    return Init_PcToImage_image_y(msg_);
  }

private:
  ::unitree_interfaces::msg::PcToImage msg_;
};

class Init_PcToImage_res
{
public:
  explicit Init_PcToImage_res(::unitree_interfaces::msg::PcToImage & msg)
  : msg_(msg)
  {}
  Init_PcToImage_image_x res(::unitree_interfaces::msg::PcToImage::_res_type arg)
  {
    msg_.res = std::move(arg);
    return Init_PcToImage_image_x(msg_);
  }

private:
  ::unitree_interfaces::msg::PcToImage msg_;
};

class Init_PcToImage_y
{
public:
  explicit Init_PcToImage_y(::unitree_interfaces::msg::PcToImage & msg)
  : msg_(msg)
  {}
  Init_PcToImage_res y(::unitree_interfaces::msg::PcToImage::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_PcToImage_res(msg_);
  }

private:
  ::unitree_interfaces::msg::PcToImage msg_;
};

class Init_PcToImage_x
{
public:
  Init_PcToImage_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PcToImage_y x(::unitree_interfaces::msg::PcToImage::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_PcToImage_y(msg_);
  }

private:
  ::unitree_interfaces::msg::PcToImage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::unitree_interfaces::msg::PcToImage>()
{
  return unitree_interfaces::msg::builder::Init_PcToImage_x();
}

}  // namespace unitree_interfaces

#endif  // UNITREE_INTERFACES__MSG__DETAIL__PC_TO_IMAGE__BUILDER_HPP_
