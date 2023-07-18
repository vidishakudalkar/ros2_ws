// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from simulator_interfaces:msg/PosRot.idl
// generated code does not contain a copyright notice

#ifndef SIMULATOR_INTERFACES__MSG__DETAIL__POS_ROT__BUILDER_HPP_
#define SIMULATOR_INTERFACES__MSG__DETAIL__POS_ROT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "simulator_interfaces/msg/detail/pos_rot__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace simulator_interfaces
{

namespace msg
{

namespace builder
{

class Init_PosRot_rot_w
{
public:
  explicit Init_PosRot_rot_w(::simulator_interfaces::msg::PosRot & msg)
  : msg_(msg)
  {}
  ::simulator_interfaces::msg::PosRot rot_w(::simulator_interfaces::msg::PosRot::_rot_w_type arg)
  {
    msg_.rot_w = std::move(arg);
    return std::move(msg_);
  }

private:
  ::simulator_interfaces::msg::PosRot msg_;
};

class Init_PosRot_rot_z
{
public:
  explicit Init_PosRot_rot_z(::simulator_interfaces::msg::PosRot & msg)
  : msg_(msg)
  {}
  Init_PosRot_rot_w rot_z(::simulator_interfaces::msg::PosRot::_rot_z_type arg)
  {
    msg_.rot_z = std::move(arg);
    return Init_PosRot_rot_w(msg_);
  }

private:
  ::simulator_interfaces::msg::PosRot msg_;
};

class Init_PosRot_rot_y
{
public:
  explicit Init_PosRot_rot_y(::simulator_interfaces::msg::PosRot & msg)
  : msg_(msg)
  {}
  Init_PosRot_rot_z rot_y(::simulator_interfaces::msg::PosRot::_rot_y_type arg)
  {
    msg_.rot_y = std::move(arg);
    return Init_PosRot_rot_z(msg_);
  }

private:
  ::simulator_interfaces::msg::PosRot msg_;
};

class Init_PosRot_rot_x
{
public:
  explicit Init_PosRot_rot_x(::simulator_interfaces::msg::PosRot & msg)
  : msg_(msg)
  {}
  Init_PosRot_rot_y rot_x(::simulator_interfaces::msg::PosRot::_rot_x_type arg)
  {
    msg_.rot_x = std::move(arg);
    return Init_PosRot_rot_y(msg_);
  }

private:
  ::simulator_interfaces::msg::PosRot msg_;
};

class Init_PosRot_pos_z
{
public:
  explicit Init_PosRot_pos_z(::simulator_interfaces::msg::PosRot & msg)
  : msg_(msg)
  {}
  Init_PosRot_rot_x pos_z(::simulator_interfaces::msg::PosRot::_pos_z_type arg)
  {
    msg_.pos_z = std::move(arg);
    return Init_PosRot_rot_x(msg_);
  }

private:
  ::simulator_interfaces::msg::PosRot msg_;
};

class Init_PosRot_pos_y
{
public:
  explicit Init_PosRot_pos_y(::simulator_interfaces::msg::PosRot & msg)
  : msg_(msg)
  {}
  Init_PosRot_pos_z pos_y(::simulator_interfaces::msg::PosRot::_pos_y_type arg)
  {
    msg_.pos_y = std::move(arg);
    return Init_PosRot_pos_z(msg_);
  }

private:
  ::simulator_interfaces::msg::PosRot msg_;
};

class Init_PosRot_pos_x
{
public:
  Init_PosRot_pos_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PosRot_pos_y pos_x(::simulator_interfaces::msg::PosRot::_pos_x_type arg)
  {
    msg_.pos_x = std::move(arg);
    return Init_PosRot_pos_y(msg_);
  }

private:
  ::simulator_interfaces::msg::PosRot msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::simulator_interfaces::msg::PosRot>()
{
  return simulator_interfaces::msg::builder::Init_PosRot_pos_x();
}

}  // namespace simulator_interfaces

#endif  // SIMULATOR_INTERFACES__MSG__DETAIL__POS_ROT__BUILDER_HPP_
