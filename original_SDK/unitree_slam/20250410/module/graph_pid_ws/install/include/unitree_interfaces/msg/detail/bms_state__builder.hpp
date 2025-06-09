// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from unitree_interfaces:msg/BmsState.idl
// generated code does not contain a copyright notice

#ifndef UNITREE_INTERFACES__MSG__DETAIL__BMS_STATE__BUILDER_HPP_
#define UNITREE_INTERFACES__MSG__DETAIL__BMS_STATE__BUILDER_HPP_

#include "unitree_interfaces/msg/detail/bms_state__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace unitree_interfaces
{

namespace msg
{

namespace builder
{

class Init_BmsState_cell_voltage
{
public:
  explicit Init_BmsState_cell_voltage(::unitree_interfaces::msg::BmsState & msg)
  : msg_(msg)
  {}
  ::unitree_interfaces::msg::BmsState cell_voltage(::unitree_interfaces::msg::BmsState::_cell_voltage_type arg)
  {
    msg_.cell_voltage = std::move(arg);
    return std::move(msg_);
  }

private:
  ::unitree_interfaces::msg::BmsState msg_;
};

class Init_BmsState_mcu_ntc
{
public:
  explicit Init_BmsState_mcu_ntc(::unitree_interfaces::msg::BmsState & msg)
  : msg_(msg)
  {}
  Init_BmsState_cell_voltage mcu_ntc(::unitree_interfaces::msg::BmsState::_mcu_ntc_type arg)
  {
    msg_.mcu_ntc = std::move(arg);
    return Init_BmsState_cell_voltage(msg_);
  }

private:
  ::unitree_interfaces::msg::BmsState msg_;
};

class Init_BmsState_bq_ntc
{
public:
  explicit Init_BmsState_bq_ntc(::unitree_interfaces::msg::BmsState & msg)
  : msg_(msg)
  {}
  Init_BmsState_mcu_ntc bq_ntc(::unitree_interfaces::msg::BmsState::_bq_ntc_type arg)
  {
    msg_.bq_ntc = std::move(arg);
    return Init_BmsState_mcu_ntc(msg_);
  }

private:
  ::unitree_interfaces::msg::BmsState msg_;
};

class Init_BmsState_cycle
{
public:
  explicit Init_BmsState_cycle(::unitree_interfaces::msg::BmsState & msg)
  : msg_(msg)
  {}
  Init_BmsState_bq_ntc cycle(::unitree_interfaces::msg::BmsState::_cycle_type arg)
  {
    msg_.cycle = std::move(arg);
    return Init_BmsState_bq_ntc(msg_);
  }

private:
  ::unitree_interfaces::msg::BmsState msg_;
};

class Init_BmsState_current
{
public:
  explicit Init_BmsState_current(::unitree_interfaces::msg::BmsState & msg)
  : msg_(msg)
  {}
  Init_BmsState_cycle current(::unitree_interfaces::msg::BmsState::_current_type arg)
  {
    msg_.current = std::move(arg);
    return Init_BmsState_cycle(msg_);
  }

private:
  ::unitree_interfaces::msg::BmsState msg_;
};

class Init_BmsState_soc
{
public:
  Init_BmsState_soc()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BmsState_current soc(::unitree_interfaces::msg::BmsState::_soc_type arg)
  {
    msg_.soc = std::move(arg);
    return Init_BmsState_current(msg_);
  }

private:
  ::unitree_interfaces::msg::BmsState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::unitree_interfaces::msg::BmsState>()
{
  return unitree_interfaces::msg::builder::Init_BmsState_soc();
}

}  // namespace unitree_interfaces

#endif  // UNITREE_INTERFACES__MSG__DETAIL__BMS_STATE__BUILDER_HPP_
