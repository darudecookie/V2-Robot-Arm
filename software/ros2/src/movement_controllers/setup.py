import os
from glob import glob

from setuptools import find_packages, setup

package_name = 'movement_controllers'

setup(
    name=package_name,
    version='0.0.1',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages', ['resource/' + package_name]),
        
        (os.path.join('share', package_name), ['package.xml']),
        # Include all launch files.
        (os.path.join('share', package_name, 'launch'), glob(os.path.join('launch', '*launch.[pxy][yma]*'))),  
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='darudecookie',
    maintainer_email='darudecookie@gmail.com',
    description='controllers that control robots motion',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'Peripheral_Interface_Node = movement_controllers.Peripheral_Interface_Node:main',
            'Trajectory_Controller_Node = movement_controllers.Trajectory_Controller_Node:main',
            'Kinematic_Solver_Node = movement_controllers.Kinematic_Solver_Node:main'

        ],
    },
)
