# Install script for directory: /home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/v2_robot_arm_interfaces

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/install/v2_robot_arm_interfaces")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/rosidl_interfaces" TYPE FILE FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/ament_cmake_index/share/ament_index/resource_index/rosidl_interfaces/v2_robot_arm_interfaces")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/action" TYPE FILE FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/rosidl_generator_type_description/v2_robot_arm_interfaces/action/ParametricTrajectoryInfo.json")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/msg" TYPE FILE FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/rosidl_generator_type_description/v2_robot_arm_interfaces/msg/ControlStatus.json")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/msg" TYPE FILE FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/rosidl_generator_type_description/v2_robot_arm_interfaces/msg/CurrentEEInfo.json")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/msg" TYPE FILE FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/rosidl_generator_type_description/v2_robot_arm_interfaces/msg/CurrentJointInfo.json")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/msg" TYPE FILE FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/rosidl_generator_type_description/v2_robot_arm_interfaces/msg/CurrentCartesian.json")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/msg" TYPE FILE FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/rosidl_generator_type_description/v2_robot_arm_interfaces/msg/PeripheralSpeed.json")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/msg" TYPE FILE FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/rosidl_generator_type_description/v2_robot_arm_interfaces/msg/SystemDiagnosticInfo.json")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/msg" TYPE FILE FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/rosidl_generator_type_description/v2_robot_arm_interfaces/msg/TargetCartesian.json")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/msg" TYPE FILE FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/rosidl_generator_type_description/v2_robot_arm_interfaces/msg/TargetEEInfo.json")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/msg" TYPE FILE FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/rosidl_generator_type_description/v2_robot_arm_interfaces/msg/TargetJointInfo.json")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/srv" TYPE FILE FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/rosidl_generator_type_description/v2_robot_arm_interfaces/srv/MicrocontrollerParameterDump.json")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/srv" TYPE FILE FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/rosidl_generator_type_description/v2_robot_arm_interfaces/srv/SystemStatus.json")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/srv" TYPE FILE FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/rosidl_generator_type_description/v2_robot_arm_interfaces/srv/TargetEEState.json")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/v2_robot_arm_interfaces/v2_robot_arm_interfaces" TYPE DIRECTORY FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/rosidl_generator_c/v2_robot_arm_interfaces/" REGEX "/[^/]*\\.h$")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/environment" TYPE FILE FILES "/opt/ros/rolling/lib/python3.12/site-packages/ament_package/template/environment_hook/library_path.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/environment" TYPE FILE FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/ament_cmake_environment_hooks/library_path.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libv2_robot_arm_interfaces__rosidl_generator_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libv2_robot_arm_interfaces__rosidl_generator_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libv2_robot_arm_interfaces__rosidl_generator_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/libv2_robot_arm_interfaces__rosidl_generator_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libv2_robot_arm_interfaces__rosidl_generator_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libv2_robot_arm_interfaces__rosidl_generator_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libv2_robot_arm_interfaces__rosidl_generator_c.so"
         OLD_RPATH "/opt/ros/rolling/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libv2_robot_arm_interfaces__rosidl_generator_c.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/v2_robot_arm_interfaces/v2_robot_arm_interfaces" TYPE DIRECTORY FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/rosidl_typesupport_fastrtps_c/v2_robot_arm_interfaces/" REGEX "/[^/]*\\.cpp$" EXCLUDE)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libv2_robot_arm_interfaces__rosidl_typesupport_fastrtps_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libv2_robot_arm_interfaces__rosidl_typesupport_fastrtps_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libv2_robot_arm_interfaces__rosidl_typesupport_fastrtps_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/libv2_robot_arm_interfaces__rosidl_typesupport_fastrtps_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libv2_robot_arm_interfaces__rosidl_typesupport_fastrtps_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libv2_robot_arm_interfaces__rosidl_typesupport_fastrtps_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libv2_robot_arm_interfaces__rosidl_typesupport_fastrtps_c.so"
         OLD_RPATH "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces:/opt/ros/rolling/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libv2_robot_arm_interfaces__rosidl_typesupport_fastrtps_c.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/v2_robot_arm_interfaces/v2_robot_arm_interfaces" TYPE DIRECTORY FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/rosidl_generator_cpp/v2_robot_arm_interfaces/" REGEX "/[^/]*\\.hpp$")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/v2_robot_arm_interfaces/v2_robot_arm_interfaces" TYPE DIRECTORY FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/rosidl_typesupport_fastrtps_cpp/v2_robot_arm_interfaces/" REGEX "/[^/]*\\.cpp$" EXCLUDE)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libv2_robot_arm_interfaces__rosidl_typesupport_fastrtps_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libv2_robot_arm_interfaces__rosidl_typesupport_fastrtps_cpp.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libv2_robot_arm_interfaces__rosidl_typesupport_fastrtps_cpp.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/libv2_robot_arm_interfaces__rosidl_typesupport_fastrtps_cpp.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libv2_robot_arm_interfaces__rosidl_typesupport_fastrtps_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libv2_robot_arm_interfaces__rosidl_typesupport_fastrtps_cpp.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libv2_robot_arm_interfaces__rosidl_typesupport_fastrtps_cpp.so"
         OLD_RPATH "/opt/ros/rolling/lib:/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libv2_robot_arm_interfaces__rosidl_typesupport_fastrtps_cpp.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/v2_robot_arm_interfaces/v2_robot_arm_interfaces" TYPE DIRECTORY FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/rosidl_typesupport_introspection_c/v2_robot_arm_interfaces/" REGEX "/[^/]*\\.h$")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libv2_robot_arm_interfaces__rosidl_typesupport_introspection_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libv2_robot_arm_interfaces__rosidl_typesupport_introspection_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libv2_robot_arm_interfaces__rosidl_typesupport_introspection_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/libv2_robot_arm_interfaces__rosidl_typesupport_introspection_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libv2_robot_arm_interfaces__rosidl_typesupport_introspection_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libv2_robot_arm_interfaces__rosidl_typesupport_introspection_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libv2_robot_arm_interfaces__rosidl_typesupport_introspection_c.so"
         OLD_RPATH "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces:/opt/ros/rolling/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libv2_robot_arm_interfaces__rosidl_typesupport_introspection_c.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libv2_robot_arm_interfaces__rosidl_typesupport_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libv2_robot_arm_interfaces__rosidl_typesupport_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libv2_robot_arm_interfaces__rosidl_typesupport_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/libv2_robot_arm_interfaces__rosidl_typesupport_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libv2_robot_arm_interfaces__rosidl_typesupport_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libv2_robot_arm_interfaces__rosidl_typesupport_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libv2_robot_arm_interfaces__rosidl_typesupport_c.so"
         OLD_RPATH "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces:/opt/ros/rolling/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libv2_robot_arm_interfaces__rosidl_typesupport_c.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/v2_robot_arm_interfaces/v2_robot_arm_interfaces" TYPE DIRECTORY FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/rosidl_typesupport_introspection_cpp/v2_robot_arm_interfaces/" REGEX "/[^/]*\\.hpp$")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libv2_robot_arm_interfaces__rosidl_typesupport_introspection_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libv2_robot_arm_interfaces__rosidl_typesupport_introspection_cpp.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libv2_robot_arm_interfaces__rosidl_typesupport_introspection_cpp.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/libv2_robot_arm_interfaces__rosidl_typesupport_introspection_cpp.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libv2_robot_arm_interfaces__rosidl_typesupport_introspection_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libv2_robot_arm_interfaces__rosidl_typesupport_introspection_cpp.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libv2_robot_arm_interfaces__rosidl_typesupport_introspection_cpp.so"
         OLD_RPATH "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces:/opt/ros/rolling/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libv2_robot_arm_interfaces__rosidl_typesupport_introspection_cpp.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libv2_robot_arm_interfaces__rosidl_typesupport_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libv2_robot_arm_interfaces__rosidl_typesupport_cpp.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libv2_robot_arm_interfaces__rosidl_typesupport_cpp.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/libv2_robot_arm_interfaces__rosidl_typesupport_cpp.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libv2_robot_arm_interfaces__rosidl_typesupport_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libv2_robot_arm_interfaces__rosidl_typesupport_cpp.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libv2_robot_arm_interfaces__rosidl_typesupport_cpp.so"
         OLD_RPATH "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces:/opt/ros/rolling/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libv2_robot_arm_interfaces__rosidl_typesupport_cpp.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/environment" TYPE FILE FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/ament_cmake_environment_hooks/pythonpath.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/environment" TYPE FILE FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/ament_cmake_environment_hooks/pythonpath.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/v2_robot_arm_interfaces-0.0.1-py3.12.egg-info" TYPE DIRECTORY FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/ament_cmake_python/v2_robot_arm_interfaces/v2_robot_arm_interfaces.egg-info/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/v2_robot_arm_interfaces" TYPE DIRECTORY FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/rosidl_generator_py/v2_robot_arm_interfaces/" REGEX "/[^/]*\\.pyc$" EXCLUDE REGEX "/\\_\\_pycache\\_\\_$" EXCLUDE)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(
        COMMAND
        "/usr/bin/python3" "-m" "compileall"
        "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/install/v2_robot_arm_interfaces/lib/python3.12/site-packages/v2_robot_arm_interfaces"
      )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/v2_robot_arm_interfaces/v2_robot_arm_interfaces_s__rosidl_typesupport_fastrtps_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/v2_robot_arm_interfaces/v2_robot_arm_interfaces_s__rosidl_typesupport_fastrtps_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/v2_robot_arm_interfaces/v2_robot_arm_interfaces_s__rosidl_typesupport_fastrtps_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/v2_robot_arm_interfaces" TYPE MODULE FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/rosidl_generator_py/v2_robot_arm_interfaces/v2_robot_arm_interfaces_s__rosidl_typesupport_fastrtps_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/v2_robot_arm_interfaces/v2_robot_arm_interfaces_s__rosidl_typesupport_fastrtps_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/v2_robot_arm_interfaces/v2_robot_arm_interfaces_s__rosidl_typesupport_fastrtps_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/v2_robot_arm_interfaces/v2_robot_arm_interfaces_s__rosidl_typesupport_fastrtps_c.so"
         OLD_RPATH "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces:/opt/ros/rolling/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/v2_robot_arm_interfaces/v2_robot_arm_interfaces_s__rosidl_typesupport_fastrtps_c.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  include("/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/CMakeFiles/v2_robot_arm_interfaces_s__rosidl_typesupport_fastrtps_c.dir/install-cxx-module-bmi-noconfig.cmake" OPTIONAL)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/v2_robot_arm_interfaces/v2_robot_arm_interfaces_s__rosidl_typesupport_introspection_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/v2_robot_arm_interfaces/v2_robot_arm_interfaces_s__rosidl_typesupport_introspection_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/v2_robot_arm_interfaces/v2_robot_arm_interfaces_s__rosidl_typesupport_introspection_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/v2_robot_arm_interfaces" TYPE MODULE FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/rosidl_generator_py/v2_robot_arm_interfaces/v2_robot_arm_interfaces_s__rosidl_typesupport_introspection_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/v2_robot_arm_interfaces/v2_robot_arm_interfaces_s__rosidl_typesupport_introspection_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/v2_robot_arm_interfaces/v2_robot_arm_interfaces_s__rosidl_typesupport_introspection_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/v2_robot_arm_interfaces/v2_robot_arm_interfaces_s__rosidl_typesupport_introspection_c.so"
         OLD_RPATH "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces:/opt/ros/rolling/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/v2_robot_arm_interfaces/v2_robot_arm_interfaces_s__rosidl_typesupport_introspection_c.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  include("/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/CMakeFiles/v2_robot_arm_interfaces_s__rosidl_typesupport_introspection_c.dir/install-cxx-module-bmi-noconfig.cmake" OPTIONAL)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/v2_robot_arm_interfaces/v2_robot_arm_interfaces_s__rosidl_typesupport_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/v2_robot_arm_interfaces/v2_robot_arm_interfaces_s__rosidl_typesupport_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/v2_robot_arm_interfaces/v2_robot_arm_interfaces_s__rosidl_typesupport_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/v2_robot_arm_interfaces" TYPE MODULE FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/rosidl_generator_py/v2_robot_arm_interfaces/v2_robot_arm_interfaces_s__rosidl_typesupport_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/v2_robot_arm_interfaces/v2_robot_arm_interfaces_s__rosidl_typesupport_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/v2_robot_arm_interfaces/v2_robot_arm_interfaces_s__rosidl_typesupport_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/v2_robot_arm_interfaces/v2_robot_arm_interfaces_s__rosidl_typesupport_c.so"
         OLD_RPATH "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces:/opt/ros/rolling/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/v2_robot_arm_interfaces/v2_robot_arm_interfaces_s__rosidl_typesupport_c.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  include("/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/CMakeFiles/v2_robot_arm_interfaces_s__rosidl_typesupport_c.dir/install-cxx-module-bmi-noconfig.cmake" OPTIONAL)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libv2_robot_arm_interfaces__rosidl_generator_py.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libv2_robot_arm_interfaces__rosidl_generator_py.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libv2_robot_arm_interfaces__rosidl_generator_py.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/libv2_robot_arm_interfaces__rosidl_generator_py.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libv2_robot_arm_interfaces__rosidl_generator_py.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libv2_robot_arm_interfaces__rosidl_generator_py.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libv2_robot_arm_interfaces__rosidl_generator_py.so"
         OLD_RPATH "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces:/opt/ros/rolling/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libv2_robot_arm_interfaces__rosidl_generator_py.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/action" TYPE FILE FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/rosidl_adapter/v2_robot_arm_interfaces/action/ParametricTrajectoryInfo.idl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/msg" TYPE FILE FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/rosidl_adapter/v2_robot_arm_interfaces/msg/ControlStatus.idl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/msg" TYPE FILE FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/rosidl_adapter/v2_robot_arm_interfaces/msg/CurrentEEInfo.idl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/msg" TYPE FILE FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/rosidl_adapter/v2_robot_arm_interfaces/msg/CurrentJointInfo.idl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/msg" TYPE FILE FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/rosidl_adapter/v2_robot_arm_interfaces/msg/CurrentCartesian.idl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/msg" TYPE FILE FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/rosidl_adapter/v2_robot_arm_interfaces/msg/PeripheralSpeed.idl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/msg" TYPE FILE FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/rosidl_adapter/v2_robot_arm_interfaces/msg/SystemDiagnosticInfo.idl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/msg" TYPE FILE FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/rosidl_adapter/v2_robot_arm_interfaces/msg/TargetCartesian.idl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/msg" TYPE FILE FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/rosidl_adapter/v2_robot_arm_interfaces/msg/TargetEEInfo.idl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/msg" TYPE FILE FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/rosidl_adapter/v2_robot_arm_interfaces/msg/TargetJointInfo.idl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/srv" TYPE FILE FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/rosidl_adapter/v2_robot_arm_interfaces/srv/MicrocontrollerParameterDump.idl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/srv" TYPE FILE FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/rosidl_adapter/v2_robot_arm_interfaces/srv/SystemStatus.idl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/srv" TYPE FILE FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/rosidl_adapter/v2_robot_arm_interfaces/srv/TargetEEState.idl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/action" TYPE FILE FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/v2_robot_arm_interfaces/action/ParametricTrajectoryInfo.action")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/msg" TYPE FILE FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/v2_robot_arm_interfaces/msg/ControlStatus.msg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/msg" TYPE FILE FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/v2_robot_arm_interfaces/msg/CurrentEEInfo.msg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/msg" TYPE FILE FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/v2_robot_arm_interfaces/msg/CurrentJointInfo.msg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/msg" TYPE FILE FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/v2_robot_arm_interfaces/msg/CurrentCartesian.msg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/msg" TYPE FILE FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/v2_robot_arm_interfaces/msg/PeripheralSpeed.msg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/msg" TYPE FILE FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/v2_robot_arm_interfaces/msg/SystemDiagnosticInfo.msg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/msg" TYPE FILE FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/v2_robot_arm_interfaces/msg/TargetCartesian.msg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/msg" TYPE FILE FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/v2_robot_arm_interfaces/msg/TargetEEInfo.msg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/msg" TYPE FILE FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/v2_robot_arm_interfaces/msg/TargetJointInfo.msg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/srv" TYPE FILE FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/v2_robot_arm_interfaces/srv/MicrocontrollerParameterDump.srv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/srv" TYPE FILE FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/v2_robot_arm_interfaces/srv/SystemStatus.srv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/srv" TYPE FILE FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/v2_robot_arm_interfaces/srv/TargetEEState.srv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/package_run_dependencies" TYPE FILE FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/v2_robot_arm_interfaces")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/parent_prefix_path" TYPE FILE FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/v2_robot_arm_interfaces")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/environment" TYPE FILE FILES "/opt/ros/rolling/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/environment" TYPE FILE FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/ament_cmake_environment_hooks/ament_prefix_path.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/environment" TYPE FILE FILES "/opt/ros/rolling/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/environment" TYPE FILE FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/ament_cmake_environment_hooks/path.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces" TYPE FILE FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/ament_cmake_environment_hooks/local_setup.bash")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces" TYPE FILE FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/ament_cmake_environment_hooks/local_setup.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces" TYPE FILE FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/ament_cmake_environment_hooks/local_setup.zsh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces" TYPE FILE FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/ament_cmake_environment_hooks/local_setup.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces" TYPE FILE FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/ament_cmake_environment_hooks/package.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/packages" TYPE FILE FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/ament_cmake_index/share/ament_index/resource_index/packages/v2_robot_arm_interfaces")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/cmake/export_v2_robot_arm_interfaces__rosidl_generator_cExport.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/cmake/export_v2_robot_arm_interfaces__rosidl_generator_cExport.cmake"
         "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/CMakeFiles/Export/b73d7229d65ba1c60c00a6f253c01b24/export_v2_robot_arm_interfaces__rosidl_generator_cExport.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/cmake/export_v2_robot_arm_interfaces__rosidl_generator_cExport-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/cmake/export_v2_robot_arm_interfaces__rosidl_generator_cExport.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/cmake" TYPE FILE FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/CMakeFiles/Export/b73d7229d65ba1c60c00a6f253c01b24/export_v2_robot_arm_interfaces__rosidl_generator_cExport.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/cmake" TYPE FILE FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/CMakeFiles/Export/b73d7229d65ba1c60c00a6f253c01b24/export_v2_robot_arm_interfaces__rosidl_generator_cExport-noconfig.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/cmake/export_v2_robot_arm_interfaces__rosidl_typesupport_fastrtps_cExport.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/cmake/export_v2_robot_arm_interfaces__rosidl_typesupport_fastrtps_cExport.cmake"
         "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/CMakeFiles/Export/b73d7229d65ba1c60c00a6f253c01b24/export_v2_robot_arm_interfaces__rosidl_typesupport_fastrtps_cExport.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/cmake/export_v2_robot_arm_interfaces__rosidl_typesupport_fastrtps_cExport-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/cmake/export_v2_robot_arm_interfaces__rosidl_typesupport_fastrtps_cExport.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/cmake" TYPE FILE FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/CMakeFiles/Export/b73d7229d65ba1c60c00a6f253c01b24/export_v2_robot_arm_interfaces__rosidl_typesupport_fastrtps_cExport.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/cmake" TYPE FILE FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/CMakeFiles/Export/b73d7229d65ba1c60c00a6f253c01b24/export_v2_robot_arm_interfaces__rosidl_typesupport_fastrtps_cExport-noconfig.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/cmake/export_v2_robot_arm_interfaces__rosidl_generator_cppExport.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/cmake/export_v2_robot_arm_interfaces__rosidl_generator_cppExport.cmake"
         "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/CMakeFiles/Export/b73d7229d65ba1c60c00a6f253c01b24/export_v2_robot_arm_interfaces__rosidl_generator_cppExport.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/cmake/export_v2_robot_arm_interfaces__rosidl_generator_cppExport-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/cmake/export_v2_robot_arm_interfaces__rosidl_generator_cppExport.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/cmake" TYPE FILE FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/CMakeFiles/Export/b73d7229d65ba1c60c00a6f253c01b24/export_v2_robot_arm_interfaces__rosidl_generator_cppExport.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/cmake/export_v2_robot_arm_interfaces__rosidl_typesupport_fastrtps_cppExport.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/cmake/export_v2_robot_arm_interfaces__rosidl_typesupport_fastrtps_cppExport.cmake"
         "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/CMakeFiles/Export/b73d7229d65ba1c60c00a6f253c01b24/export_v2_robot_arm_interfaces__rosidl_typesupport_fastrtps_cppExport.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/cmake/export_v2_robot_arm_interfaces__rosidl_typesupport_fastrtps_cppExport-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/cmake/export_v2_robot_arm_interfaces__rosidl_typesupport_fastrtps_cppExport.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/cmake" TYPE FILE FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/CMakeFiles/Export/b73d7229d65ba1c60c00a6f253c01b24/export_v2_robot_arm_interfaces__rosidl_typesupport_fastrtps_cppExport.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/cmake" TYPE FILE FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/CMakeFiles/Export/b73d7229d65ba1c60c00a6f253c01b24/export_v2_robot_arm_interfaces__rosidl_typesupport_fastrtps_cppExport-noconfig.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/cmake/v2_robot_arm_interfaces__rosidl_typesupport_introspection_cExport.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/cmake/v2_robot_arm_interfaces__rosidl_typesupport_introspection_cExport.cmake"
         "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/CMakeFiles/Export/b73d7229d65ba1c60c00a6f253c01b24/v2_robot_arm_interfaces__rosidl_typesupport_introspection_cExport.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/cmake/v2_robot_arm_interfaces__rosidl_typesupport_introspection_cExport-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/cmake/v2_robot_arm_interfaces__rosidl_typesupport_introspection_cExport.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/cmake" TYPE FILE FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/CMakeFiles/Export/b73d7229d65ba1c60c00a6f253c01b24/v2_robot_arm_interfaces__rosidl_typesupport_introspection_cExport.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/cmake" TYPE FILE FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/CMakeFiles/Export/b73d7229d65ba1c60c00a6f253c01b24/v2_robot_arm_interfaces__rosidl_typesupport_introspection_cExport-noconfig.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/cmake/v2_robot_arm_interfaces__rosidl_typesupport_cExport.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/cmake/v2_robot_arm_interfaces__rosidl_typesupport_cExport.cmake"
         "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/CMakeFiles/Export/b73d7229d65ba1c60c00a6f253c01b24/v2_robot_arm_interfaces__rosidl_typesupport_cExport.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/cmake/v2_robot_arm_interfaces__rosidl_typesupport_cExport-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/cmake/v2_robot_arm_interfaces__rosidl_typesupport_cExport.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/cmake" TYPE FILE FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/CMakeFiles/Export/b73d7229d65ba1c60c00a6f253c01b24/v2_robot_arm_interfaces__rosidl_typesupport_cExport.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/cmake" TYPE FILE FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/CMakeFiles/Export/b73d7229d65ba1c60c00a6f253c01b24/v2_robot_arm_interfaces__rosidl_typesupport_cExport-noconfig.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/cmake/v2_robot_arm_interfaces__rosidl_typesupport_introspection_cppExport.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/cmake/v2_robot_arm_interfaces__rosidl_typesupport_introspection_cppExport.cmake"
         "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/CMakeFiles/Export/b73d7229d65ba1c60c00a6f253c01b24/v2_robot_arm_interfaces__rosidl_typesupport_introspection_cppExport.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/cmake/v2_robot_arm_interfaces__rosidl_typesupport_introspection_cppExport-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/cmake/v2_robot_arm_interfaces__rosidl_typesupport_introspection_cppExport.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/cmake" TYPE FILE FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/CMakeFiles/Export/b73d7229d65ba1c60c00a6f253c01b24/v2_robot_arm_interfaces__rosidl_typesupport_introspection_cppExport.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/cmake" TYPE FILE FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/CMakeFiles/Export/b73d7229d65ba1c60c00a6f253c01b24/v2_robot_arm_interfaces__rosidl_typesupport_introspection_cppExport-noconfig.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/cmake/v2_robot_arm_interfaces__rosidl_typesupport_cppExport.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/cmake/v2_robot_arm_interfaces__rosidl_typesupport_cppExport.cmake"
         "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/CMakeFiles/Export/b73d7229d65ba1c60c00a6f253c01b24/v2_robot_arm_interfaces__rosidl_typesupport_cppExport.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/cmake/v2_robot_arm_interfaces__rosidl_typesupport_cppExport-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/cmake/v2_robot_arm_interfaces__rosidl_typesupport_cppExport.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/cmake" TYPE FILE FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/CMakeFiles/Export/b73d7229d65ba1c60c00a6f253c01b24/v2_robot_arm_interfaces__rosidl_typesupport_cppExport.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/cmake" TYPE FILE FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/CMakeFiles/Export/b73d7229d65ba1c60c00a6f253c01b24/v2_robot_arm_interfaces__rosidl_typesupport_cppExport-noconfig.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/cmake/export_v2_robot_arm_interfaces__rosidl_generator_pyExport.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/cmake/export_v2_robot_arm_interfaces__rosidl_generator_pyExport.cmake"
         "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/CMakeFiles/Export/b73d7229d65ba1c60c00a6f253c01b24/export_v2_robot_arm_interfaces__rosidl_generator_pyExport.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/cmake/export_v2_robot_arm_interfaces__rosidl_generator_pyExport-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/cmake/export_v2_robot_arm_interfaces__rosidl_generator_pyExport.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/cmake" TYPE FILE FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/CMakeFiles/Export/b73d7229d65ba1c60c00a6f253c01b24/export_v2_robot_arm_interfaces__rosidl_generator_pyExport.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/cmake" TYPE FILE FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/CMakeFiles/Export/b73d7229d65ba1c60c00a6f253c01b24/export_v2_robot_arm_interfaces__rosidl_generator_pyExport-noconfig.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/cmake" TYPE FILE FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/rosidl_cmake/rosidl_cmake-extras.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/cmake" TYPE FILE FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/ament_cmake_export_dependencies/ament_cmake_export_dependencies-extras.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/cmake" TYPE FILE FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/ament_cmake_export_include_directories/ament_cmake_export_include_directories-extras.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/cmake" TYPE FILE FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/ament_cmake_export_libraries/ament_cmake_export_libraries-extras.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/cmake" TYPE FILE FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/ament_cmake_export_targets/ament_cmake_export_targets-extras.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/cmake" TYPE FILE FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/rosidl_cmake/rosidl_cmake_export_typesupport_targets-extras.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/cmake" TYPE FILE FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/rosidl_cmake/rosidl_cmake_export_typesupport_libraries-extras.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces/cmake" TYPE FILE FILES
    "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/ament_cmake_core/v2_robot_arm_interfacesConfig.cmake"
    "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/ament_cmake_core/v2_robot_arm_interfacesConfig-version.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/v2_robot_arm_interfaces" TYPE FILE FILES "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/v2_robot_arm_interfaces/package.xml")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/v2_robot_arm_interfaces__py/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/darudecookie/Documents/V2-Robot-Arm/software/ros2/src/build/v2_robot_arm_interfaces/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
