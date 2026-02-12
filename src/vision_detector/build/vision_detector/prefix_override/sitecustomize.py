import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/hgzq/ros2_ws/src/vision_detector/install/vision_detector'
