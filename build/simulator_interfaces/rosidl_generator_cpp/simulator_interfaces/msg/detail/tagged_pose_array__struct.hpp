// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from simulator_interfaces:msg/TaggedPoseArray.idl
// generated code does not contain a copyright notice

#ifndef SIMULATOR_INTERFACES__MSG__DETAIL__TAGGED_POSE_ARRAY__STRUCT_HPP_
#define SIMULATOR_INTERFACES__MSG__DETAIL__TAGGED_POSE_ARRAY__STRUCT_HPP_

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
// Member 'poses'
#include "simulator_interfaces/msg/detail/tagged_pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__simulator_interfaces__msg__TaggedPoseArray __attribute__((deprecated))
#else
# define DEPRECATED__simulator_interfaces__msg__TaggedPoseArray __declspec(deprecated)
#endif

namespace simulator_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TaggedPoseArray_
{
  using Type = TaggedPoseArray_<ContainerAllocator>;

  explicit TaggedPoseArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit TaggedPoseArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _poses_type =
    std::vector<simulator_interfaces::msg::TaggedPose_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<simulator_interfaces::msg::TaggedPose_<ContainerAllocator>>>;
  _poses_type poses;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__poses(
    const std::vector<simulator_interfaces::msg::TaggedPose_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<simulator_interfaces::msg::TaggedPose_<ContainerAllocator>>> & _arg)
  {
    this->poses = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    simulator_interfaces::msg::TaggedPoseArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const simulator_interfaces::msg::TaggedPoseArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<simulator_interfaces::msg::TaggedPoseArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<simulator_interfaces::msg::TaggedPoseArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      simulator_interfaces::msg::TaggedPoseArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<simulator_interfaces::msg::TaggedPoseArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      simulator_interfaces::msg::TaggedPoseArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<simulator_interfaces::msg::TaggedPoseArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<simulator_interfaces::msg::TaggedPoseArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<simulator_interfaces::msg::TaggedPoseArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__simulator_interfaces__msg__TaggedPoseArray
    std::shared_ptr<simulator_interfaces::msg::TaggedPoseArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__simulator_interfaces__msg__TaggedPoseArray
    std::shared_ptr<simulator_interfaces::msg::TaggedPoseArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TaggedPoseArray_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->poses != other.poses) {
      return false;
    }
    return true;
  }
  bool operator!=(const TaggedPoseArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TaggedPoseArray_

// alias to use template instance with default allocator
using TaggedPoseArray =
  simulator_interfaces::msg::TaggedPoseArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace simulator_interfaces

#endif  // SIMULATOR_INTERFACES__MSG__DETAIL__TAGGED_POSE_ARRAY__STRUCT_HPP_
