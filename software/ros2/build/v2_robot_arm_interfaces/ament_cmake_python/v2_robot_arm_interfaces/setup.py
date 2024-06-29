from setuptools import find_packages
from setuptools import setup

setup(
    name='v2_robot_arm_interfaces',
    version='0.0.1',
    packages=find_packages(
        include=('v2_robot_arm_interfaces', 'v2_robot_arm_interfaces.*')),
)
