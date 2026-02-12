// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from vision_msgs_custom:msg/Detection2DExtended.idl
// generated code does not contain a copyright notice

#ifndef VISION_MSGS_CUSTOM__MSG__DETAIL__DETECTION2_D_EXTENDED__STRUCT_H_
#define VISION_MSGS_CUSTOM__MSG__DETAIL__DETECTION2_D_EXTENDED__STRUCT_H_

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
// Member 'bbox'
#include "vision_msgs/msg/detail/bounding_box2_d__struct.h"
// Member 'results'
#include "vision_msgs/msg/detail/object_hypothesis_with_pose__struct.h"
// Member 'class_name'
#include "rosidl_runtime_c/string.h"
// Member 'position_3d'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/Detection2DExtended in the package vision_msgs_custom.
/**
  * 扩展的2D检测消息，包含深度信息
 */
typedef struct vision_msgs_custom__msg__Detection2DExtended
{
  std_msgs__msg__Header header;
  /// 2D边界框
  vision_msgs__msg__BoundingBox2D bbox;
  /// 检测结果
  vision_msgs__msg__ObjectHypothesisWithPose__Sequence results;
  /// 深度信息（米）
  float distance;
  /// 置信度
  float confidence;
  /// 类别ID和名称
  int32_t class_id;
  rosidl_runtime_c__String class_name;
  /// 3D位置（相机坐标系）
  geometry_msgs__msg__Point position_3d;
} vision_msgs_custom__msg__Detection2DExtended;

// Struct for a sequence of vision_msgs_custom__msg__Detection2DExtended.
typedef struct vision_msgs_custom__msg__Detection2DExtended__Sequence
{
  vision_msgs_custom__msg__Detection2DExtended * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vision_msgs_custom__msg__Detection2DExtended__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VISION_MSGS_CUSTOM__MSG__DETAIL__DETECTION2_D_EXTENDED__STRUCT_H_
