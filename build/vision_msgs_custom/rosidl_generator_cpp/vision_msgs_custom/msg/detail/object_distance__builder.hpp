// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from vision_msgs_custom:msg/ObjectDistance.idl
// generated code does not contain a copyright notice

#ifndef VISION_MSGS_CUSTOM__MSG__DETAIL__OBJECT_DISTANCE__BUILDER_HPP_
#define VISION_MSGS_CUSTOM__MSG__DETAIL__OBJECT_DISTANCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "vision_msgs_custom/msg/detail/object_distance__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace vision_msgs_custom
{

namespace msg
{

namespace builder
{

class Init_ObjectDistance_confidence
{
public:
  explicit Init_ObjectDistance_confidence(::vision_msgs_custom::msg::ObjectDistance & msg)
  : msg_(msg)
  {}
  ::vision_msgs_custom::msg::ObjectDistance confidence(::vision_msgs_custom::msg::ObjectDistance::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vision_msgs_custom::msg::ObjectDistance msg_;
};

class Init_ObjectDistance_elevation
{
public:
  explicit Init_ObjectDistance_elevation(::vision_msgs_custom::msg::ObjectDistance & msg)
  : msg_(msg)
  {}
  Init_ObjectDistance_confidence elevation(::vision_msgs_custom::msg::ObjectDistance::_elevation_type arg)
  {
    msg_.elevation = std::move(arg);
    return Init_ObjectDistance_confidence(msg_);
  }

private:
  ::vision_msgs_custom::msg::ObjectDistance msg_;
};

class Init_ObjectDistance_azimuth
{
public:
  explicit Init_ObjectDistance_azimuth(::vision_msgs_custom::msg::ObjectDistance & msg)
  : msg_(msg)
  {}
  Init_ObjectDistance_elevation azimuth(::vision_msgs_custom::msg::ObjectDistance::_azimuth_type arg)
  {
    msg_.azimuth = std::move(arg);
    return Init_ObjectDistance_elevation(msg_);
  }

private:
  ::vision_msgs_custom::msg::ObjectDistance msg_;
};

class Init_ObjectDistance_distance
{
public:
  explicit Init_ObjectDistance_distance(::vision_msgs_custom::msg::ObjectDistance & msg)
  : msg_(msg)
  {}
  Init_ObjectDistance_azimuth distance(::vision_msgs_custom::msg::ObjectDistance::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return Init_ObjectDistance_azimuth(msg_);
  }

private:
  ::vision_msgs_custom::msg::ObjectDistance msg_;
};

class Init_ObjectDistance_class_name
{
public:
  explicit Init_ObjectDistance_class_name(::vision_msgs_custom::msg::ObjectDistance & msg)
  : msg_(msg)
  {}
  Init_ObjectDistance_distance class_name(::vision_msgs_custom::msg::ObjectDistance::_class_name_type arg)
  {
    msg_.class_name = std::move(arg);
    return Init_ObjectDistance_distance(msg_);
  }

private:
  ::vision_msgs_custom::msg::ObjectDistance msg_;
};

class Init_ObjectDistance_tracking_id
{
public:
  explicit Init_ObjectDistance_tracking_id(::vision_msgs_custom::msg::ObjectDistance & msg)
  : msg_(msg)
  {}
  Init_ObjectDistance_class_name tracking_id(::vision_msgs_custom::msg::ObjectDistance::_tracking_id_type arg)
  {
    msg_.tracking_id = std::move(arg);
    return Init_ObjectDistance_class_name(msg_);
  }

private:
  ::vision_msgs_custom::msg::ObjectDistance msg_;
};

class Init_ObjectDistance_header
{
public:
  Init_ObjectDistance_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObjectDistance_tracking_id header(::vision_msgs_custom::msg::ObjectDistance::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ObjectDistance_tracking_id(msg_);
  }

private:
  ::vision_msgs_custom::msg::ObjectDistance msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::vision_msgs_custom::msg::ObjectDistance>()
{
  return vision_msgs_custom::msg::builder::Init_ObjectDistance_header();
}

}  // namespace vision_msgs_custom

#endif  // VISION_MSGS_CUSTOM__MSG__DETAIL__OBJECT_DISTANCE__BUILDER_HPP_
