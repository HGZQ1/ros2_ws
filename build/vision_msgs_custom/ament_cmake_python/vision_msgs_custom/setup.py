from setuptools import find_packages
from setuptools import setup

setup(
    name='vision_msgs_custom',
    version='1.0.0',
    packages=find_packages(
        include=('vision_msgs_custom', 'vision_msgs_custom.*')),
)
