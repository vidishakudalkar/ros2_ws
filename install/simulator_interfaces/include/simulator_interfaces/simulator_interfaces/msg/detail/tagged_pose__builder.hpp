// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from simulator_interfaces:msg/TaggedPose.idl
// generated code does not contain a copyright notice

#ifndef SIMULATOR_INTERFACES__MSG__DETAIL__TAGGED_POSE__BUILDER_HPP_
#define SIMULATOR_INTERFACES__MSG__DETAIL__TAGGED_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "simulator_interfaces/msg/detail/tagged_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace simulator_interfaces
{

namespace msg
{

namespace builder
{

class Init_TaggedPose_pose
{
public:
  explicit Init_TaggedPose_pose(::simulator_interfaces::msg::TaggedPose & msg)
  : msg_(msg)
  {}
  ::simulator_interfaces::msg::TaggedPose pose(::simulator_interfaces::msg::TaggedPose::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::simulator_interfaces::msg::TaggedPose msg_;
};

class Init_TaggedPose_label
{
public:
  explicit Init_TaggedPose_label(::simulator_interfaces::msg::TaggedPose & msg)
  : msg_(msg)
  {}
  Init_TaggedPose_pose label(::simulator_interfaces::msg::TaggedPose::_label_type arg)
  {
    msg_.label = std::move(arg);
    return Init_TaggedPose_pose(msg_);
  }

private:
  ::simulator_interfaces::msg::TaggedPose msg_;
};

class Init_TaggedPose_header
{
public:
  Init_TaggedPose_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TaggedPose_label header(::simulator_interfaces::msg::TaggedPose::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TaggedPose_label(msg_);
  }

private:
  ::simulator_interfaces::msg::TaggedPose msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::simulator_interfaces::msg::TaggedPose>()
{
  return simulator_interfaces::msg::builder::Init_TaggedPose_header();
}

}  // namespace simulator_interfaces

#endif  // SIMULATOR_INTERFACES__MSG__DETAIL__TAGGED_POSE__BUILDER_HPP_
