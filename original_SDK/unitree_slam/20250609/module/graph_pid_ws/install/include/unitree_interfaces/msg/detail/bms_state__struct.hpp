// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from unitree_interfaces:msg/BmsState.idl
// generated code does not contain a copyright notice

#ifndef UNITREE_INTERFACES__MSG__DETAIL__BMS_STATE__STRUCT_HPP_
#define UNITREE_INTERFACES__MSG__DETAIL__BMS_STATE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__unitree_interfaces__msg__BmsState __attribute__((deprecated))
#else
# define DEPRECATED__unitree_interfaces__msg__BmsState __declspec(deprecated)
#endif

namespace unitree_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BmsState_
{
  using Type = BmsState_<ContainerAllocator>;

  explicit BmsState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->soc = 0;
      this->current = 0l;
      this->cycle = 0;
      std::fill<typename std::array<int8_t, 8>::iterator, int8_t>(this->bq_ntc.begin(), this->bq_ntc.end(), 0);
      std::fill<typename std::array<int8_t, 8>::iterator, int8_t>(this->mcu_ntc.begin(), this->mcu_ntc.end(), 0);
      std::fill<typename std::array<uint16_t, 30>::iterator, uint16_t>(this->cell_voltage.begin(), this->cell_voltage.end(), 0);
    }
  }

  explicit BmsState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : bq_ntc(_alloc),
    mcu_ntc(_alloc),
    cell_voltage(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->soc = 0;
      this->current = 0l;
      this->cycle = 0;
      std::fill<typename std::array<int8_t, 8>::iterator, int8_t>(this->bq_ntc.begin(), this->bq_ntc.end(), 0);
      std::fill<typename std::array<int8_t, 8>::iterator, int8_t>(this->mcu_ntc.begin(), this->mcu_ntc.end(), 0);
      std::fill<typename std::array<uint16_t, 30>::iterator, uint16_t>(this->cell_voltage.begin(), this->cell_voltage.end(), 0);
    }
  }

  // field types and members
  using _soc_type =
    uint8_t;
  _soc_type soc;
  using _current_type =
    int32_t;
  _current_type current;
  using _cycle_type =
    uint16_t;
  _cycle_type cycle;
  using _bq_ntc_type =
    std::array<int8_t, 8>;
  _bq_ntc_type bq_ntc;
  using _mcu_ntc_type =
    std::array<int8_t, 8>;
  _mcu_ntc_type mcu_ntc;
  using _cell_voltage_type =
    std::array<uint16_t, 30>;
  _cell_voltage_type cell_voltage;

  // setters for named parameter idiom
  Type & set__soc(
    const uint8_t & _arg)
  {
    this->soc = _arg;
    return *this;
  }
  Type & set__current(
    const int32_t & _arg)
  {
    this->current = _arg;
    return *this;
  }
  Type & set__cycle(
    const uint16_t & _arg)
  {
    this->cycle = _arg;
    return *this;
  }
  Type & set__bq_ntc(
    const std::array<int8_t, 8> & _arg)
  {
    this->bq_ntc = _arg;
    return *this;
  }
  Type & set__mcu_ntc(
    const std::array<int8_t, 8> & _arg)
  {
    this->mcu_ntc = _arg;
    return *this;
  }
  Type & set__cell_voltage(
    const std::array<uint16_t, 30> & _arg)
  {
    this->cell_voltage = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    unitree_interfaces::msg::BmsState_<ContainerAllocator> *;
  using ConstRawPtr =
    const unitree_interfaces::msg::BmsState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<unitree_interfaces::msg::BmsState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<unitree_interfaces::msg::BmsState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      unitree_interfaces::msg::BmsState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<unitree_interfaces::msg::BmsState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      unitree_interfaces::msg::BmsState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<unitree_interfaces::msg::BmsState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<unitree_interfaces::msg::BmsState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<unitree_interfaces::msg::BmsState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__unitree_interfaces__msg__BmsState
    std::shared_ptr<unitree_interfaces::msg::BmsState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__unitree_interfaces__msg__BmsState
    std::shared_ptr<unitree_interfaces::msg::BmsState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BmsState_ & other) const
  {
    if (this->soc != other.soc) {
      return false;
    }
    if (this->current != other.current) {
      return false;
    }
    if (this->cycle != other.cycle) {
      return false;
    }
    if (this->bq_ntc != other.bq_ntc) {
      return false;
    }
    if (this->mcu_ntc != other.mcu_ntc) {
      return false;
    }
    if (this->cell_voltage != other.cell_voltage) {
      return false;
    }
    return true;
  }
  bool operator!=(const BmsState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BmsState_

// alias to use template instance with default allocator
using BmsState =
  unitree_interfaces::msg::BmsState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace unitree_interfaces

#endif  // UNITREE_INTERFACES__MSG__DETAIL__BMS_STATE__STRUCT_HPP_
