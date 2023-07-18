// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from simulator_interfaces:msg/TaggedPoseArray.idl
// generated code does not contain a copyright notice

#ifndef SIMULATOR_INTERFACES__MSG__DETAIL__TAGGED_POSE_ARRAY__BUILDER_HPP_
#define SIMULATOR_INTERFACES__MSG__DETAIL__TAGGED_POSE_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "simulator_interfaces/msg/detail/tagged_pose_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace simulator_interfaces
{

namespace msg
{

namespace builder
{

class Init_TaggedPoseArray_poses
{
public:
  explicit Init_TaggedPoseArray_poses(::simulator_interfaces::msg::TaggedPoseArray & msg)
  : msg_(msg)
  {}
  ::simulator_interfaces::msg::TaggedPoseArray poses(::simulator_interfaces::msg::TaggedPoseArray::_poses_type arg)
  {
    msg_.poses = std::move(arg);
    return std::move(msg_);
  }

private:
  ::simulator_interfaces::msg::TaggedPoseArray msg_;
};

class Init_TaggedPoseArray_header
{
public:
  Init_TaggedPoseArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TaggedPoseArray_poses header(::simulator_interfaces::msg::TaggedPoseArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TaggedPoseArray_poses(msg_);
  }

private:
  ::simulator_interfaces::msg::TaggedPoseArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::simulator_interfaces::msg::TaggedPoseArray>()
{
  return simulator_interfaces::msg::builder::Init_TaggedPoseArray_header();
}

}  // namespace simulator_interfaces

#endif  // SIMULATOR_INTERFACES__MSG__DETAIL__TAGGED_POSE_ARRAY__BUILDER_HPP_
