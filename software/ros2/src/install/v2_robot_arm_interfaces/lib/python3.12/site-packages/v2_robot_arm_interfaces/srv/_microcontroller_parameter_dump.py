# generated from rosidl_generator_py/resource/_idl.py.em
# with input from v2_robot_arm_interfaces:srv/MicrocontrollerParameterDump.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'joint_position_limit_update_params'
# Member 'joint_velocity_limit_update_params'
# Member 'joint_torque_limit_update_params'
# Member 'joint_acceleration_limit_update_params'
# Member 'joint_jerk_limit_update_params'
# Member 'x_workspace_bounds'
# Member 'y_workspace_bounds'
# Member 'z_workspace_bounds'
# Member 'pid_update_params'
# Member 'joint_home_positions'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MicrocontrollerParameterDump_Request(type):
    """Metaclass of message 'MicrocontrollerParameterDump_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('v2_robot_arm_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'v2_robot_arm_interfaces.srv.MicrocontrollerParameterDump_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__microcontroller_parameter_dump__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__microcontroller_parameter_dump__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__microcontroller_parameter_dump__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__microcontroller_parameter_dump__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__microcontroller_parameter_dump__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'JOINT_POSITION_LIMIT_UPDATE_TARGET__DEFAULT': -10,
            'JOINT_POSITION_LIMIT_UPDATE_PARAMS__DEFAULT': numpy.array((0.0, 0.0, ), dtype=numpy.float32),
            'JOINT_VELOCITY_LIMIT_UPDATE_TARGET__DEFAULT': -10,
            'JOINT_VELOCITY_LIMIT_UPDATE_PARAMS__DEFAULT': numpy.array((0.0, 0.0, ), dtype=numpy.float32),
            'JOINT_TORQUE_LIMIT_UPDATE_TARGET__DEFAULT': -10,
            'JOINT_TORQUE_LIMIT_UPDATE_PARAMS__DEFAULT': numpy.array((0.0, 0.0, ), dtype=numpy.float32),
            'JOINT_ACCELERATION_LIMIT_UPDATE_TARGET__DEFAULT': -10,
            'JOINT_ACCELERATION_LIMIT_UPDATE_PARAMS__DEFAULT': numpy.array((0.0, 0.0, ), dtype=numpy.float32),
            'JOINT_JERK_LIMIT_UPDATE_TARGET__DEFAULT': -10,
            'JOINT_JERK_LIMIT_UPDATE_PARAMS__DEFAULT': numpy.array((0.0, 0.0, ), dtype=numpy.float32),
            'X_WORKSPACE_BOUNDS__DEFAULT': numpy.array((-1.0, -1.0, ), dtype=numpy.float32),
            'Y_WORKSPACE_BOUNDS__DEFAULT': numpy.array((-1.0, -1.0, ), dtype=numpy.float32),
            'Z_WORKSPACE_BOUNDS__DEFAULT': numpy.array((-1.0, -1.0, ), dtype=numpy.float32),
            'PID_UPDATE_TARGET__DEFAULT': -10,
            'PID_UPDATE_PARAMS__DEFAULT': numpy.array((-1.0, -1.0, -1.0, ), dtype=numpy.float32),
            'JOINT_HOME_POSITIONS__DEFAULT': numpy.array((-100.0, -100.0, -100.0, -100.0, -100.0, -100.0, -100.0, ), dtype=numpy.float32),
        }

    @property
    def JOINT_POSITION_LIMIT_UPDATE_TARGET__DEFAULT(cls):
        """Return default value for message field 'joint_position_limit_update_target'."""
        return -10

    @property
    def JOINT_POSITION_LIMIT_UPDATE_PARAMS__DEFAULT(cls):
        """Return default value for message field 'joint_position_limit_update_params'."""
        return numpy.array((0.0, 0.0, ), dtype=numpy.float32)

    @property
    def JOINT_VELOCITY_LIMIT_UPDATE_TARGET__DEFAULT(cls):
        """Return default value for message field 'joint_velocity_limit_update_target'."""
        return -10

    @property
    def JOINT_VELOCITY_LIMIT_UPDATE_PARAMS__DEFAULT(cls):
        """Return default value for message field 'joint_velocity_limit_update_params'."""
        return numpy.array((0.0, 0.0, ), dtype=numpy.float32)

    @property
    def JOINT_TORQUE_LIMIT_UPDATE_TARGET__DEFAULT(cls):
        """Return default value for message field 'joint_torque_limit_update_target'."""
        return -10

    @property
    def JOINT_TORQUE_LIMIT_UPDATE_PARAMS__DEFAULT(cls):
        """Return default value for message field 'joint_torque_limit_update_params'."""
        return numpy.array((0.0, 0.0, ), dtype=numpy.float32)

    @property
    def JOINT_ACCELERATION_LIMIT_UPDATE_TARGET__DEFAULT(cls):
        """Return default value for message field 'joint_acceleration_limit_update_target'."""
        return -10

    @property
    def JOINT_ACCELERATION_LIMIT_UPDATE_PARAMS__DEFAULT(cls):
        """Return default value for message field 'joint_acceleration_limit_update_params'."""
        return numpy.array((0.0, 0.0, ), dtype=numpy.float32)

    @property
    def JOINT_JERK_LIMIT_UPDATE_TARGET__DEFAULT(cls):
        """Return default value for message field 'joint_jerk_limit_update_target'."""
        return -10

    @property
    def JOINT_JERK_LIMIT_UPDATE_PARAMS__DEFAULT(cls):
        """Return default value for message field 'joint_jerk_limit_update_params'."""
        return numpy.array((0.0, 0.0, ), dtype=numpy.float32)

    @property
    def X_WORKSPACE_BOUNDS__DEFAULT(cls):
        """Return default value for message field 'x_workspace_bounds'."""
        return numpy.array((-1.0, -1.0, ), dtype=numpy.float32)

    @property
    def Y_WORKSPACE_BOUNDS__DEFAULT(cls):
        """Return default value for message field 'y_workspace_bounds'."""
        return numpy.array((-1.0, -1.0, ), dtype=numpy.float32)

    @property
    def Z_WORKSPACE_BOUNDS__DEFAULT(cls):
        """Return default value for message field 'z_workspace_bounds'."""
        return numpy.array((-1.0, -1.0, ), dtype=numpy.float32)

    @property
    def PID_UPDATE_TARGET__DEFAULT(cls):
        """Return default value for message field 'pid_update_target'."""
        return -10

    @property
    def PID_UPDATE_PARAMS__DEFAULT(cls):
        """Return default value for message field 'pid_update_params'."""
        return numpy.array((-1.0, -1.0, -1.0, ), dtype=numpy.float32)

    @property
    def JOINT_HOME_POSITIONS__DEFAULT(cls):
        """Return default value for message field 'joint_home_positions'."""
        return numpy.array((-100.0, -100.0, -100.0, -100.0, -100.0, -100.0, -100.0, ), dtype=numpy.float32)


class MicrocontrollerParameterDump_Request(metaclass=Metaclass_MicrocontrollerParameterDump_Request):
    """Message class 'MicrocontrollerParameterDump_Request'."""

    __slots__ = [
        '_joint_position_limit_update_target',
        '_joint_position_limit_update_params',
        '_joint_velocity_limit_update_target',
        '_joint_velocity_limit_update_params',
        '_joint_torque_limit_update_target',
        '_joint_torque_limit_update_params',
        '_joint_acceleration_limit_update_target',
        '_joint_acceleration_limit_update_params',
        '_joint_jerk_limit_update_target',
        '_joint_jerk_limit_update_params',
        '_x_workspace_bounds',
        '_y_workspace_bounds',
        '_z_workspace_bounds',
        '_pid_update_target',
        '_pid_update_params',
        '_joint_home_positions',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'joint_position_limit_update_target': 'int16',
        'joint_position_limit_update_params': 'float[2]',
        'joint_velocity_limit_update_target': 'int16',
        'joint_velocity_limit_update_params': 'float[2]',
        'joint_torque_limit_update_target': 'int16',
        'joint_torque_limit_update_params': 'float[2]',
        'joint_acceleration_limit_update_target': 'int16',
        'joint_acceleration_limit_update_params': 'float[2]',
        'joint_jerk_limit_update_target': 'int16',
        'joint_jerk_limit_update_params': 'float[2]',
        'x_workspace_bounds': 'float[2]',
        'y_workspace_bounds': 'float[2]',
        'z_workspace_bounds': 'float[2]',
        'pid_update_target': 'int16',
        'pid_update_params': 'float[3]',
        'joint_home_positions': 'float[7]',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 2),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 2),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 2),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 2),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 2),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 2),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 2),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 2),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 7),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.joint_position_limit_update_target = kwargs.get(
            'joint_position_limit_update_target', MicrocontrollerParameterDump_Request.JOINT_POSITION_LIMIT_UPDATE_TARGET__DEFAULT)
        self.joint_position_limit_update_params = kwargs.get(
            'joint_position_limit_update_params', MicrocontrollerParameterDump_Request.JOINT_POSITION_LIMIT_UPDATE_PARAMS__DEFAULT)
        self.joint_velocity_limit_update_target = kwargs.get(
            'joint_velocity_limit_update_target', MicrocontrollerParameterDump_Request.JOINT_VELOCITY_LIMIT_UPDATE_TARGET__DEFAULT)
        self.joint_velocity_limit_update_params = kwargs.get(
            'joint_velocity_limit_update_params', MicrocontrollerParameterDump_Request.JOINT_VELOCITY_LIMIT_UPDATE_PARAMS__DEFAULT)
        self.joint_torque_limit_update_target = kwargs.get(
            'joint_torque_limit_update_target', MicrocontrollerParameterDump_Request.JOINT_TORQUE_LIMIT_UPDATE_TARGET__DEFAULT)
        self.joint_torque_limit_update_params = kwargs.get(
            'joint_torque_limit_update_params', MicrocontrollerParameterDump_Request.JOINT_TORQUE_LIMIT_UPDATE_PARAMS__DEFAULT)
        self.joint_acceleration_limit_update_target = kwargs.get(
            'joint_acceleration_limit_update_target', MicrocontrollerParameterDump_Request.JOINT_ACCELERATION_LIMIT_UPDATE_TARGET__DEFAULT)
        self.joint_acceleration_limit_update_params = kwargs.get(
            'joint_acceleration_limit_update_params', MicrocontrollerParameterDump_Request.JOINT_ACCELERATION_LIMIT_UPDATE_PARAMS__DEFAULT)
        self.joint_jerk_limit_update_target = kwargs.get(
            'joint_jerk_limit_update_target', MicrocontrollerParameterDump_Request.JOINT_JERK_LIMIT_UPDATE_TARGET__DEFAULT)
        self.joint_jerk_limit_update_params = kwargs.get(
            'joint_jerk_limit_update_params', MicrocontrollerParameterDump_Request.JOINT_JERK_LIMIT_UPDATE_PARAMS__DEFAULT)
        self.x_workspace_bounds = kwargs.get(
            'x_workspace_bounds', MicrocontrollerParameterDump_Request.X_WORKSPACE_BOUNDS__DEFAULT)
        self.y_workspace_bounds = kwargs.get(
            'y_workspace_bounds', MicrocontrollerParameterDump_Request.Y_WORKSPACE_BOUNDS__DEFAULT)
        self.z_workspace_bounds = kwargs.get(
            'z_workspace_bounds', MicrocontrollerParameterDump_Request.Z_WORKSPACE_BOUNDS__DEFAULT)
        self.pid_update_target = kwargs.get(
            'pid_update_target', MicrocontrollerParameterDump_Request.PID_UPDATE_TARGET__DEFAULT)
        self.pid_update_params = kwargs.get(
            'pid_update_params', MicrocontrollerParameterDump_Request.PID_UPDATE_PARAMS__DEFAULT)
        self.joint_home_positions = kwargs.get(
            'joint_home_positions', MicrocontrollerParameterDump_Request.JOINT_HOME_POSITIONS__DEFAULT)

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.joint_position_limit_update_target != other.joint_position_limit_update_target:
            return False
        if all(self.joint_position_limit_update_params != other.joint_position_limit_update_params):
            return False
        if self.joint_velocity_limit_update_target != other.joint_velocity_limit_update_target:
            return False
        if all(self.joint_velocity_limit_update_params != other.joint_velocity_limit_update_params):
            return False
        if self.joint_torque_limit_update_target != other.joint_torque_limit_update_target:
            return False
        if all(self.joint_torque_limit_update_params != other.joint_torque_limit_update_params):
            return False
        if self.joint_acceleration_limit_update_target != other.joint_acceleration_limit_update_target:
            return False
        if all(self.joint_acceleration_limit_update_params != other.joint_acceleration_limit_update_params):
            return False
        if self.joint_jerk_limit_update_target != other.joint_jerk_limit_update_target:
            return False
        if all(self.joint_jerk_limit_update_params != other.joint_jerk_limit_update_params):
            return False
        if all(self.x_workspace_bounds != other.x_workspace_bounds):
            return False
        if all(self.y_workspace_bounds != other.y_workspace_bounds):
            return False
        if all(self.z_workspace_bounds != other.z_workspace_bounds):
            return False
        if self.pid_update_target != other.pid_update_target:
            return False
        if all(self.pid_update_params != other.pid_update_params):
            return False
        if all(self.joint_home_positions != other.joint_home_positions):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def joint_position_limit_update_target(self):
        """Message field 'joint_position_limit_update_target'."""
        return self._joint_position_limit_update_target

    @joint_position_limit_update_target.setter
    def joint_position_limit_update_target(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'joint_position_limit_update_target' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'joint_position_limit_update_target' field must be an integer in [-32768, 32767]"
        self._joint_position_limit_update_target = value

    @builtins.property
    def joint_position_limit_update_params(self):
        """Message field 'joint_position_limit_update_params'."""
        return self._joint_position_limit_update_params

    @joint_position_limit_update_params.setter
    def joint_position_limit_update_params(self, value):
        if self._check_fields:
            if isinstance(value, numpy.ndarray):
                assert value.dtype == numpy.float32, \
                    "The 'joint_position_limit_update_params' numpy.ndarray() must have the dtype of 'numpy.float32'"
                assert value.size == 2, \
                    "The 'joint_position_limit_update_params' numpy.ndarray() must have a size of 2"
                self._joint_position_limit_update_params = value
                return
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 2 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'joint_position_limit_update_params' field must be a set or sequence with length 2 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._joint_position_limit_update_params = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def joint_velocity_limit_update_target(self):
        """Message field 'joint_velocity_limit_update_target'."""
        return self._joint_velocity_limit_update_target

    @joint_velocity_limit_update_target.setter
    def joint_velocity_limit_update_target(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'joint_velocity_limit_update_target' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'joint_velocity_limit_update_target' field must be an integer in [-32768, 32767]"
        self._joint_velocity_limit_update_target = value

    @builtins.property
    def joint_velocity_limit_update_params(self):
        """Message field 'joint_velocity_limit_update_params'."""
        return self._joint_velocity_limit_update_params

    @joint_velocity_limit_update_params.setter
    def joint_velocity_limit_update_params(self, value):
        if self._check_fields:
            if isinstance(value, numpy.ndarray):
                assert value.dtype == numpy.float32, \
                    "The 'joint_velocity_limit_update_params' numpy.ndarray() must have the dtype of 'numpy.float32'"
                assert value.size == 2, \
                    "The 'joint_velocity_limit_update_params' numpy.ndarray() must have a size of 2"
                self._joint_velocity_limit_update_params = value
                return
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 2 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'joint_velocity_limit_update_params' field must be a set or sequence with length 2 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._joint_velocity_limit_update_params = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def joint_torque_limit_update_target(self):
        """Message field 'joint_torque_limit_update_target'."""
        return self._joint_torque_limit_update_target

    @joint_torque_limit_update_target.setter
    def joint_torque_limit_update_target(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'joint_torque_limit_update_target' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'joint_torque_limit_update_target' field must be an integer in [-32768, 32767]"
        self._joint_torque_limit_update_target = value

    @builtins.property
    def joint_torque_limit_update_params(self):
        """Message field 'joint_torque_limit_update_params'."""
        return self._joint_torque_limit_update_params

    @joint_torque_limit_update_params.setter
    def joint_torque_limit_update_params(self, value):
        if self._check_fields:
            if isinstance(value, numpy.ndarray):
                assert value.dtype == numpy.float32, \
                    "The 'joint_torque_limit_update_params' numpy.ndarray() must have the dtype of 'numpy.float32'"
                assert value.size == 2, \
                    "The 'joint_torque_limit_update_params' numpy.ndarray() must have a size of 2"
                self._joint_torque_limit_update_params = value
                return
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 2 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'joint_torque_limit_update_params' field must be a set or sequence with length 2 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._joint_torque_limit_update_params = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def joint_acceleration_limit_update_target(self):
        """Message field 'joint_acceleration_limit_update_target'."""
        return self._joint_acceleration_limit_update_target

    @joint_acceleration_limit_update_target.setter
    def joint_acceleration_limit_update_target(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'joint_acceleration_limit_update_target' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'joint_acceleration_limit_update_target' field must be an integer in [-32768, 32767]"
        self._joint_acceleration_limit_update_target = value

    @builtins.property
    def joint_acceleration_limit_update_params(self):
        """Message field 'joint_acceleration_limit_update_params'."""
        return self._joint_acceleration_limit_update_params

    @joint_acceleration_limit_update_params.setter
    def joint_acceleration_limit_update_params(self, value):
        if self._check_fields:
            if isinstance(value, numpy.ndarray):
                assert value.dtype == numpy.float32, \
                    "The 'joint_acceleration_limit_update_params' numpy.ndarray() must have the dtype of 'numpy.float32'"
                assert value.size == 2, \
                    "The 'joint_acceleration_limit_update_params' numpy.ndarray() must have a size of 2"
                self._joint_acceleration_limit_update_params = value
                return
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 2 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'joint_acceleration_limit_update_params' field must be a set or sequence with length 2 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._joint_acceleration_limit_update_params = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def joint_jerk_limit_update_target(self):
        """Message field 'joint_jerk_limit_update_target'."""
        return self._joint_jerk_limit_update_target

    @joint_jerk_limit_update_target.setter
    def joint_jerk_limit_update_target(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'joint_jerk_limit_update_target' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'joint_jerk_limit_update_target' field must be an integer in [-32768, 32767]"
        self._joint_jerk_limit_update_target = value

    @builtins.property
    def joint_jerk_limit_update_params(self):
        """Message field 'joint_jerk_limit_update_params'."""
        return self._joint_jerk_limit_update_params

    @joint_jerk_limit_update_params.setter
    def joint_jerk_limit_update_params(self, value):
        if self._check_fields:
            if isinstance(value, numpy.ndarray):
                assert value.dtype == numpy.float32, \
                    "The 'joint_jerk_limit_update_params' numpy.ndarray() must have the dtype of 'numpy.float32'"
                assert value.size == 2, \
                    "The 'joint_jerk_limit_update_params' numpy.ndarray() must have a size of 2"
                self._joint_jerk_limit_update_params = value
                return
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 2 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'joint_jerk_limit_update_params' field must be a set or sequence with length 2 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._joint_jerk_limit_update_params = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def x_workspace_bounds(self):
        """Message field 'x_workspace_bounds'."""
        return self._x_workspace_bounds

    @x_workspace_bounds.setter
    def x_workspace_bounds(self, value):
        if self._check_fields:
            if isinstance(value, numpy.ndarray):
                assert value.dtype == numpy.float32, \
                    "The 'x_workspace_bounds' numpy.ndarray() must have the dtype of 'numpy.float32'"
                assert value.size == 2, \
                    "The 'x_workspace_bounds' numpy.ndarray() must have a size of 2"
                self._x_workspace_bounds = value
                return
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 2 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'x_workspace_bounds' field must be a set or sequence with length 2 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._x_workspace_bounds = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def y_workspace_bounds(self):
        """Message field 'y_workspace_bounds'."""
        return self._y_workspace_bounds

    @y_workspace_bounds.setter
    def y_workspace_bounds(self, value):
        if self._check_fields:
            if isinstance(value, numpy.ndarray):
                assert value.dtype == numpy.float32, \
                    "The 'y_workspace_bounds' numpy.ndarray() must have the dtype of 'numpy.float32'"
                assert value.size == 2, \
                    "The 'y_workspace_bounds' numpy.ndarray() must have a size of 2"
                self._y_workspace_bounds = value
                return
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 2 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'y_workspace_bounds' field must be a set or sequence with length 2 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._y_workspace_bounds = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def z_workspace_bounds(self):
        """Message field 'z_workspace_bounds'."""
        return self._z_workspace_bounds

    @z_workspace_bounds.setter
    def z_workspace_bounds(self, value):
        if self._check_fields:
            if isinstance(value, numpy.ndarray):
                assert value.dtype == numpy.float32, \
                    "The 'z_workspace_bounds' numpy.ndarray() must have the dtype of 'numpy.float32'"
                assert value.size == 2, \
                    "The 'z_workspace_bounds' numpy.ndarray() must have a size of 2"
                self._z_workspace_bounds = value
                return
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 2 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'z_workspace_bounds' field must be a set or sequence with length 2 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._z_workspace_bounds = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def pid_update_target(self):
        """Message field 'pid_update_target'."""
        return self._pid_update_target

    @pid_update_target.setter
    def pid_update_target(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'pid_update_target' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'pid_update_target' field must be an integer in [-32768, 32767]"
        self._pid_update_target = value

    @builtins.property
    def pid_update_params(self):
        """Message field 'pid_update_params'."""
        return self._pid_update_params

    @pid_update_params.setter
    def pid_update_params(self, value):
        if self._check_fields:
            if isinstance(value, numpy.ndarray):
                assert value.dtype == numpy.float32, \
                    "The 'pid_update_params' numpy.ndarray() must have the dtype of 'numpy.float32'"
                assert value.size == 3, \
                    "The 'pid_update_params' numpy.ndarray() must have a size of 3"
                self._pid_update_params = value
                return
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 3 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'pid_update_params' field must be a set or sequence with length 3 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._pid_update_params = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def joint_home_positions(self):
        """Message field 'joint_home_positions'."""
        return self._joint_home_positions

    @joint_home_positions.setter
    def joint_home_positions(self, value):
        if self._check_fields:
            if isinstance(value, numpy.ndarray):
                assert value.dtype == numpy.float32, \
                    "The 'joint_home_positions' numpy.ndarray() must have the dtype of 'numpy.float32'"
                assert value.size == 7, \
                    "The 'joint_home_positions' numpy.ndarray() must have a size of 7"
                self._joint_home_positions = value
                return
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 7 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'joint_home_positions' field must be a set or sequence with length 7 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._joint_home_positions = numpy.array(value, dtype=numpy.float32)


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_MicrocontrollerParameterDump_Response(type):
    """Metaclass of message 'MicrocontrollerParameterDump_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('v2_robot_arm_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'v2_robot_arm_interfaces.srv.MicrocontrollerParameterDump_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__microcontroller_parameter_dump__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__microcontroller_parameter_dump__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__microcontroller_parameter_dump__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__microcontroller_parameter_dump__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__microcontroller_parameter_dump__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MicrocontrollerParameterDump_Response(metaclass=Metaclass_MicrocontrollerParameterDump_Response):
    """Message class 'MicrocontrollerParameterDump_Response'."""

    __slots__ = [
        '_returnsuccess',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'returnsuccess': 'int8',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.returnsuccess = kwargs.get('returnsuccess', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.returnsuccess != other.returnsuccess:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def returnsuccess(self):
        """Message field 'returnsuccess'."""
        return self._returnsuccess

    @returnsuccess.setter
    def returnsuccess(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'returnsuccess' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'returnsuccess' field must be an integer in [-128, 127]"
        self._returnsuccess = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_MicrocontrollerParameterDump_Event(type):
    """Metaclass of message 'MicrocontrollerParameterDump_Event'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('v2_robot_arm_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'v2_robot_arm_interfaces.srv.MicrocontrollerParameterDump_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__microcontroller_parameter_dump__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__microcontroller_parameter_dump__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__microcontroller_parameter_dump__event
            cls._TYPE_SUPPORT = module.type_support_msg__srv__microcontroller_parameter_dump__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__microcontroller_parameter_dump__event

            from service_msgs.msg import ServiceEventInfo
            if ServiceEventInfo.__class__._TYPE_SUPPORT is None:
                ServiceEventInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MicrocontrollerParameterDump_Event(metaclass=Metaclass_MicrocontrollerParameterDump_Event):
    """Message class 'MicrocontrollerParameterDump_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<v2_robot_arm_interfaces/MicrocontrollerParameterDump_Request, 1>',
        'response': 'sequence<v2_robot_arm_interfaces/MicrocontrollerParameterDump_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['v2_robot_arm_interfaces', 'srv'], 'MicrocontrollerParameterDump_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['v2_robot_arm_interfaces', 'srv'], 'MicrocontrollerParameterDump_Response'), 1),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from service_msgs.msg import ServiceEventInfo
        self.info = kwargs.get('info', ServiceEventInfo())
        self.request = kwargs.get('request', [])
        self.response = kwargs.get('response', [])

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.info != other.info:
            return False
        if self.request != other.request:
            return False
        if self.response != other.response:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def info(self):
        """Message field 'info'."""
        return self._info

    @info.setter
    def info(self, value):
        if self._check_fields:
            from service_msgs.msg import ServiceEventInfo
            assert \
                isinstance(value, ServiceEventInfo), \
                "The 'info' field must be a sub message of type 'ServiceEventInfo'"
        self._info = value

    @builtins.property
    def request(self):
        """Message field 'request'."""
        return self._request

    @request.setter
    def request(self, value):
        if self._check_fields:
            from v2_robot_arm_interfaces.srv import MicrocontrollerParameterDump_Request
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) <= 1 and
                 all(isinstance(v, MicrocontrollerParameterDump_Request) for v in value) and
                 True), \
                "The 'request' field must be a set or sequence with length <= 1 and each value of type 'MicrocontrollerParameterDump_Request'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if self._check_fields:
            from v2_robot_arm_interfaces.srv import MicrocontrollerParameterDump_Response
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) <= 1 and
                 all(isinstance(v, MicrocontrollerParameterDump_Response) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence with length <= 1 and each value of type 'MicrocontrollerParameterDump_Response'"
        self._response = value


class Metaclass_MicrocontrollerParameterDump(type):
    """Metaclass of service 'MicrocontrollerParameterDump'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('v2_robot_arm_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'v2_robot_arm_interfaces.srv.MicrocontrollerParameterDump')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__microcontroller_parameter_dump

            from v2_robot_arm_interfaces.srv import _microcontroller_parameter_dump
            if _microcontroller_parameter_dump.Metaclass_MicrocontrollerParameterDump_Request._TYPE_SUPPORT is None:
                _microcontroller_parameter_dump.Metaclass_MicrocontrollerParameterDump_Request.__import_type_support__()
            if _microcontroller_parameter_dump.Metaclass_MicrocontrollerParameterDump_Response._TYPE_SUPPORT is None:
                _microcontroller_parameter_dump.Metaclass_MicrocontrollerParameterDump_Response.__import_type_support__()
            if _microcontroller_parameter_dump.Metaclass_MicrocontrollerParameterDump_Event._TYPE_SUPPORT is None:
                _microcontroller_parameter_dump.Metaclass_MicrocontrollerParameterDump_Event.__import_type_support__()


class MicrocontrollerParameterDump(metaclass=Metaclass_MicrocontrollerParameterDump):
    from v2_robot_arm_interfaces.srv._microcontroller_parameter_dump import MicrocontrollerParameterDump_Request as Request
    from v2_robot_arm_interfaces.srv._microcontroller_parameter_dump import MicrocontrollerParameterDump_Response as Response
    from v2_robot_arm_interfaces.srv._microcontroller_parameter_dump import MicrocontrollerParameterDump_Event as Event

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
