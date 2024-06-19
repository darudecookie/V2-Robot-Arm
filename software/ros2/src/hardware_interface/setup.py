import os
from glob import glob

from setuptools import find_packages, setup

package_name = 'hardware_interface'

setup(
    name=package_name,
    version='0.0.1',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        
        (os.path.join('share', package_name), ['package.xml']),
        # Include all launch files.
        (os.path.join('share', package_name, 'launch'), glob(os.path.join('launch', '*launch.[pxy][yma]*'))),  
        ],
    install_requires=['setuptools', "V2_Robot_Arm_interfaces"],
    zip_safe=True,
    maintainer='darudecookie',
    maintainer_email='darudecookie@gmail.com',
    description='package directly communicates with and controls hardware through the mcu',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        "console_scripts":[
            "End_Effector_Controller_Node = hardware_interface.End_Effector_Controller_Node:main",
            "Microcontroller_Interface_Node = hardware_interface.Microcontroller_Interface_Node:main"

        ]
    },
)

