// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from vision_msgs_custom:msg/Detection2DExtended.idl
// generated code does not contain a copyright notice

#ifndef VISION_MSGS_CUSTOM__MSG__DETAIL__DETECTION2_D_EXTENDED__BUILDER_HPP_
#define VISION_MSGS_CUSTOM__MSG__DETAIL__DETECTION2_D_EXTENDED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "vision_msgs_custom/msg/detail/detection2_d_extended__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace vision_msgs_custom
{

namespace msg
{

namespace builder
{

class Init_Detection2DExtended_position_3d
{
public:
  explicit Init_Detection2DExtended_position_3d(::vision_msgs_custom::msg::Detection2DExtended & msg)
  : msg_(msg)
  {}
  ::vision_msgs_custom::msg::Detection2DExtended position_3d(::vision_msgs_custom::msg::Detection2DExtended::_position_3d_type arg)
  {
    msg_.position_3d = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vision_msgs_custom::msg::Detection2DExtended msg_;
};

class Init_Detection2DExtended_class_name
{
public:
  explicit Init_Detection2DExtended_class_name(::vision_msgs_custom::msg::Detection2DExtended & msg)
  : msg_(msg)
  {}
  Init_Detection2DExtended_position_3d class_name(::vision_msgs_custom::msg::Detection2DExtended::_class_name_type arg)
  {
    msg_.class_name = std::move(arg);
    return Init_Detection2DExtended_position_3d(msg_);
  }

private:
  ::vision_msgs_custom::msg::Detection2DExtended msg_;
};

class Init_Detection2DExtended_class_id
{
public:
  explicit Init_Detection2DExtended_class_id(::vision_msgs_custom::msg::Detection2DExtended & msg)
  : msg_(msg)
  {}
  Init_Detection2DExtended_class_name class_id(::vision_msgs_custom::msg::Detection2DExtended::_class_id_type arg)
  {
    msg_.class_id = std::move(arg);
    return Init_Detection2DExtended_class_name(msg_);
  }

private:
  ::vision_msgs_custom::msg::Detection2DExtended msg_;
};

class Init_Detection2DExtended_confidence
{
public:
  explicit Init_Detection2DExtended_confidence(::vision_msgs_custom::msg::Detection2DExtended & msg)
  : msg_(msg)
  {}
  Init_Detection2DExtended_class_id confidence(::vision_msgs_custom::msg::Detection2DExtended::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return Init_Detection2DExtended_class_id(msg_);
  }

private:
  ::vision_msgs_custom::msg::Detection2DExtended msg_;
};

class Init_Detection2DExtended_distance
{
public:
  explicit Init_Detection2DExtended_distance(::vision_msgs_custom::msg::Detection2DExtended & msg)
  : msg_(msg)
  {}
  Init_Detection2DExtended_confidence distance(::vision_msgs_custom::msg::Detection2DExtended::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return Init_Detection2DExtended_confidence(msg_);
  }

private:
  ::vision_msgs_custom::msg::Detection2DExtended msg_;
};

class Init_Detection2DExtended_results
{
public:
  explicit Init_Detection2DExtended_results(::vision_msgs_custom::msg::Detection2DExtended & msg)
  : msg_(msg)
  {}
  Init_Detection2DExtended_distance results(::vision_msgs_custom::msg::Detection2DExtended::_results_type arg)
  {
    msg_.results = std::move(arg);
    return Init_Detection2DExtended_distance(msg_);
  }

private:
  ::vision_msgs_custom::msg::Detection2DExtended msg_;
};

class Init_Detection2DExtended_bbox
{
public:
  explicit Init_Detection2DExtended_bbox(::vision_msgs_custom::msg::Detection2DExtended & msg)
  : msg_(msg)
  {}
  Init_Detection2DExtended_results bbox(::vision_msgs_custom::msg::Detection2DExtended::_bbox_type arg)
  {
    msg_.bbox = std::move(arg);
    return Init_Detection2DExtended_results(msg_);
  }

private:
  ::vision_msgs_custom::msg::Detection2DExtended msg_;
};

class Init_Detection2DExtended_header
{
public:
  Init_Detection2DExtended_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Detection2DExtended_bbox header(::vision_msgs_custom::msg::Detection2DExtended::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Detection2DExtended_bbox(msg_);
  }

private:
  ::vision_msgs_custom::msg::Detection2DExtended msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::vision_msgs_custom::msg::Detection2DExtended>()
{
  return vision_msgs_custom::msg::builder::Init_Detection2DExtended_header();
}

}  // namespace vision_msgs_custom

#endif  // VISION_MSGS_CUSTOM__MSG__DETAIL__DETECTION2_D_EXTENDED__BUILDER_HPP_
