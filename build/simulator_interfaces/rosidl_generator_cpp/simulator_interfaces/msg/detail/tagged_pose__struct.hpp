// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from simulator_interfaces:msg/TaggedPose.idl
// generated code does not contain a copyright notice

#ifndef SIMULATOR_INTERFACES__MSG__DETAIL__TAGGED_POSE__STRUCT_HPP_
#define SIMULATOR_INTERFACES__MSG__DETAIL__TAGGED_POSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__simulator_interfaces__msg__TaggedPose __attribute__((deprecated))
#else
# define DEPRECATED__simulator_interfaces__msg__TaggedPose __declspec(deprecated)
#endif

namespace simulator_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TaggedPose_
{
  using Type = TaggedPose_<ContainerAllocator>;

  explicit TaggedPose_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->label = "";
    }
  }

  explicit TaggedPose_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    label(_alloc),
    pose(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->label = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _label_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _label_type label;
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__label(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->label = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    simulator_interfaces::msg::TaggedPose_<ContainerAllocator> *;
  using ConstRawPtr =
    const simulator_interfaces::msg::TaggedPose_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<simulator_interfaces::msg::TaggedPose_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<simulator_interfaces::msg::TaggedPose_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      simulator_interfaces::msg::TaggedPose_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<simulator_interfaces::msg::TaggedPose_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      simulator_interfaces::msg::TaggedPose_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<simulator_interfaces::msg::TaggedPose_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<simulator_interfaces::msg::TaggedPose_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<simulator_interfaces::msg::TaggedPose_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__simulator_interfaces__msg__TaggedPose
    std::shared_ptr<simulator_interfaces::msg::TaggedPose_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__simulator_interfaces__msg__TaggedPose
    std::shared_ptr<simulator_interfaces::msg::TaggedPose_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TaggedPose_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->label != other.label) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const TaggedPose_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TaggedPose_

// alias to use template instance with default allocator
using TaggedPose =
  simulator_interfaces::msg::TaggedPose_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace simulator_interfaces

#endif  // SIMULATOR_INTERFACES__MSG__DETAIL__TAGGED_POSE__STRUCT_HPP_
