from setuptools import find_packages, setup

package_name = 'movement_controllers'

setup(
    name=package_name,
    version='0.0.1',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
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
            'Peripheral_Interface_Node = movement_controllers.Peripheral_Interface_Node:main'
        ],
    },
)
