// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from simulator_interfaces:msg/PosRot.idl
// generated code does not contain a copyright notice

#ifndef SIMULATOR_INTERFACES__MSG__DETAIL__POS_ROT__STRUCT_HPP_
#define SIMULATOR_INTERFACES__MSG__DETAIL__POS_ROT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__simulator_interfaces__msg__PosRot __attribute__((deprecated))
#else
# define DEPRECATED__simulator_interfaces__msg__PosRot __declspec(deprecated)
#endif

namespace simulator_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PosRot_
{
  using Type = PosRot_<ContainerAllocator>;

  explicit PosRot_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pos_x = 0.0f;
      this->pos_y = 0.0f;
      this->pos_z = 0.0f;
      this->rot_x = 0.0f;
      this->rot_y = 0.0f;
      this->rot_z = 0.0f;
      this->rot_w = 0.0f;
    }
  }

  explicit PosRot_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pos_x = 0.0f;
      this->pos_y = 0.0f;
      this->pos_z = 0.0f;
      this->rot_x = 0.0f;
      this->rot_y = 0.0f;
      this->rot_z = 0.0f;
      this->rot_w = 0.0f;
    }
  }

  // field types and members
  using _pos_x_type =
    float;
  _pos_x_type pos_x;
  using _pos_y_type =
    float;
  _pos_y_type pos_y;
  using _pos_z_type =
    float;
  _pos_z_type pos_z;
  using _rot_x_type =
    float;
  _rot_x_type rot_x;
  using _rot_y_type =
    float;
  _rot_y_type rot_y;
  using _rot_z_type =
    float;
  _rot_z_type rot_z;
  using _rot_w_type =
    float;
  _rot_w_type rot_w;

  // setters for named parameter idiom
  Type & set__pos_x(
    const float & _arg)
  {
    this->pos_x = _arg;
    return *this;
  }
  Type & set__pos_y(
    const float & _arg)
  {
    this->pos_y = _arg;
    return *this;
  }
  Type & set__pos_z(
    const float & _arg)
  {
    this->pos_z = _arg;
    return *this;
  }
  Type & set__rot_x(
    const float & _arg)
  {
    this->rot_x = _arg;
    return *this;
  }
  Type & set__rot_y(
    const float & _arg)
  {
    this->rot_y = _arg;
    return *this;
  }
  Type & set__rot_z(
    const float & _arg)
  {
    this->rot_z = _arg;
    return *this;
  }
  Type & set__rot_w(
    const float & _arg)
  {
    this->rot_w = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    simulator_interfaces::msg::PosRot_<ContainerAllocator> *;
  using ConstRawPtr =
    const simulator_interfaces::msg::PosRot_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<simulator_interfaces::msg::PosRot_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<simulator_interfaces::msg::PosRot_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      simulator_interfaces::msg::PosRot_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<simulator_interfaces::msg::PosRot_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      simulator_interfaces::msg::PosRot_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<simulator_interfaces::msg::PosRot_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<simulator_interfaces::msg::PosRot_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<simulator_interfaces::msg::PosRot_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__simulator_interfaces__msg__PosRot
    std::shared_ptr<simulator_interfaces::msg::PosRot_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__simulator_interfaces__msg__PosRot
    std::shared_ptr<simulator_interfaces::msg::PosRot_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PosRot_ & other) const
  {
    if (this->pos_x != other.pos_x) {
      return false;
    }
    if (this->pos_y != other.pos_y) {
      return false;
    }
    if (this->pos_z != other.pos_z) {
      return false;
    }
    if (this->rot_x != other.rot_x) {
      return false;
    }
    if (this->rot_y != other.rot_y) {
      return false;
    }
    if (this->rot_z != other.rot_z) {
      return false;
    }
    if (this->rot_w != other.rot_w) {
      return false;
    }
    return true;
  }
  bool operator!=(const PosRot_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PosRot_

// alias to use template instance with default allocator
using PosRot =
  simulator_interfaces::msg::PosRot_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace simulator_interfaces

#endif  // SIMULATOR_INTERFACES__MSG__DETAIL__POS_ROT__STRUCT_HPP_
