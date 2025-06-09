// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from graph_msg:srv/Astarcal.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_MSG__SRV__DETAIL__ASTARCAL__STRUCT_HPP_
#define GRAPH_MSG__SRV__DETAIL__ASTARCAL__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'node'
#include "graph_msg/msg/detail/node__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__graph_msg__srv__Astarcal_Request __attribute__((deprecated))
#else
# define DEPRECATED__graph_msg__srv__Astarcal_Request __declspec(deprecated)
#endif

namespace graph_msg
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Astarcal_Request_
{
  using Type = Astarcal_Request_<ContainerAllocator>;

  explicit Astarcal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : node(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->floor_index = 0;
    }
  }

  explicit Astarcal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : node(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->floor_index = 0;
    }
  }

  // field types and members
  using _node_type =
    graph_msg::msg::Node_<ContainerAllocator>;
  _node_type node;
  using _floor_index_type =
    int8_t;
  _floor_index_type floor_index;

  // setters for named parameter idiom
  Type & set__node(
    const graph_msg::msg::Node_<ContainerAllocator> & _arg)
  {
    this->node = _arg;
    return *this;
  }
  Type & set__floor_index(
    const int8_t & _arg)
  {
    this->floor_index = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    graph_msg::srv::Astarcal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const graph_msg::srv::Astarcal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<graph_msg::srv::Astarcal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<graph_msg::srv::Astarcal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      graph_msg::srv::Astarcal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<graph_msg::srv::Astarcal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      graph_msg::srv::Astarcal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<graph_msg::srv::Astarcal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<graph_msg::srv::Astarcal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<graph_msg::srv::Astarcal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__graph_msg__srv__Astarcal_Request
    std::shared_ptr<graph_msg::srv::Astarcal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__graph_msg__srv__Astarcal_Request
    std::shared_ptr<graph_msg::srv::Astarcal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Astarcal_Request_ & other) const
  {
    if (this->node != other.node) {
      return false;
    }
    if (this->floor_index != other.floor_index) {
      return false;
    }
    return true;
  }
  bool operator!=(const Astarcal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Astarcal_Request_

// alias to use template instance with default allocator
using Astarcal_Request =
  graph_msg::srv::Astarcal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace graph_msg


#ifndef _WIN32
# define DEPRECATED__graph_msg__srv__Astarcal_Response __attribute__((deprecated))
#else
# define DEPRECATED__graph_msg__srv__Astarcal_Response __declspec(deprecated)
#endif

namespace graph_msg
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Astarcal_Response_
{
  using Type = Astarcal_Response_<ContainerAllocator>;

  explicit Astarcal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->floor_index_cb = 0;
    }
  }

  explicit Astarcal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->floor_index_cb = 0;
    }
  }

  // field types and members
  using _weight_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _weight_type weight;
  using _floor_index_cb_type =
    int8_t;
  _floor_index_cb_type floor_index_cb;

  // setters for named parameter idiom
  Type & set__weight(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->weight = _arg;
    return *this;
  }
  Type & set__floor_index_cb(
    const int8_t & _arg)
  {
    this->floor_index_cb = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    graph_msg::srv::Astarcal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const graph_msg::srv::Astarcal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<graph_msg::srv::Astarcal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<graph_msg::srv::Astarcal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      graph_msg::srv::Astarcal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<graph_msg::srv::Astarcal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      graph_msg::srv::Astarcal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<graph_msg::srv::Astarcal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<graph_msg::srv::Astarcal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<graph_msg::srv::Astarcal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__graph_msg__srv__Astarcal_Response
    std::shared_ptr<graph_msg::srv::Astarcal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__graph_msg__srv__Astarcal_Response
    std::shared_ptr<graph_msg::srv::Astarcal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Astarcal_Response_ & other) const
  {
    if (this->weight != other.weight) {
      return false;
    }
    if (this->floor_index_cb != other.floor_index_cb) {
      return false;
    }
    return true;
  }
  bool operator!=(const Astarcal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Astarcal_Response_

// alias to use template instance with default allocator
using Astarcal_Response =
  graph_msg::srv::Astarcal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace graph_msg

namespace graph_msg
{

namespace srv
{

struct Astarcal
{
  using Request = graph_msg::srv::Astarcal_Request;
  using Response = graph_msg::srv::Astarcal_Response;
};

}  // namespace srv

}  // namespace graph_msg

#endif  // GRAPH_MSG__SRV__DETAIL__ASTARCAL__STRUCT_HPP_
