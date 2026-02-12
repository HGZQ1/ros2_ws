// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from vision_msgs_custom:msg/ObjectDistance.idl
// generated code does not contain a copyright notice

#ifndef VISION_MSGS_CUSTOM__MSG__DETAIL__OBJECT_DISTANCE__STRUCT_H_
#define VISION_MSGS_CUSTOM__MSG__DETAIL__OBJECT_DISTANCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'class_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/ObjectDistance in the package vision_msgs_custom.
/**
  * 目标距离信息
 */
typedef struct vision_msgs_custom__msg__ObjectDistance
{
  std_msgs__msg__Header header;
  /// 目标ID
  int32_t tracking_id;
  /// 类别
  rosidl_runtime_c__String class_name;
  /// 距离（米）
  float distance;
  /// 方位角（弧度，相对于相机中心）
  float azimuth;
  /// 俯仰角（弧度）
  float elevation;
  /// 置信度
  float confidence;
} vision_msgs_custom__msg__ObjectDistance;

// Struct for a sequence of vision_msgs_custom__msg__ObjectDistance.
typedef struct vision_msgs_custom__msg__ObjectDistance__Sequence
{
  vision_msgs_custom__msg__ObjectDistance * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vision_msgs_custom__msg__ObjectDistance__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VISION_MSGS_CUSTOM__MSG__DETAIL__OBJECT_DISTANCE__STRUCT_H_
