# generated from rosidl_generator_py/resource/_idl.py.em
# with input from v2_robot_arm_interfaces:srv/SystemStatus.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SystemStatus_Request(type):
    """Metaclass of message 'SystemStatus_Request'."""

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
                'v2_robot_arm_interfaces.srv.SystemStatus_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__system_status__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__system_status__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__system_status__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__system_status__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__system_status__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ESTOP__DEFAULT': 0,
            'JOINTHOLD__DEFAULT': 0,
            'MOVE_HOME__DEFAULT': 0,
        }

    @property
    def ESTOP__DEFAULT(cls):
        """Return default value for message field 'estop'."""
        return 0

    @property
    def JOINTHOLD__DEFAULT(cls):
        """Return default value for message field 'jointhold'."""
        return 0

    @property
    def MOVE_HOME__DEFAULT(cls):
        """Return default value for message field 'move_home'."""
        return 0


class SystemStatus_Request(metaclass=Metaclass_SystemStatus_Request):
    """Message class 'SystemStatus_Request'."""

    __slots__ = [
        '_estop',
        '_jointhold',
        '_move_home',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'estop': 'int8',
        'jointhold': 'int8',
        'move_home': 'int8',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
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
        self.estop = kwargs.get(
            'estop', SystemStatus_Request.ESTOP__DEFAULT)
        self.jointhold = kwargs.get(
            'jointhold', SystemStatus_Request.JOINTHOLD__DEFAULT)
        self.move_home = kwargs.get(
            'move_home', SystemStatus_Request.MOVE_HOME__DEFAULT)

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
        if self.estop != other.estop:
            return False
        if self.jointhold != other.jointhold:
            return False
        if self.move_home != other.move_home:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def estop(self):
        """Message field 'estop'."""
        return self._estop

    @estop.setter
    def estop(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'estop' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'estop' field must be an integer in [-128, 127]"
        self._estop = value

    @builtins.property
    def jointhold(self):
        """Message field 'jointhold'."""
        return self._jointhold

    @jointhold.setter
    def jointhold(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'jointhold' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'jointhold' field must be an integer in [-128, 127]"
        self._jointhold = value

    @builtins.property
    def move_home(self):
        """Message field 'move_home'."""
        return self._move_home

    @move_home.setter
    def move_home(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'move_home' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'move_home' field must be an integer in [-128, 127]"
        self._move_home = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SystemStatus_Response(type):
    """Metaclass of message 'SystemStatus_Response'."""

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
                'v2_robot_arm_interfaces.srv.SystemStatus_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__system_status__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__system_status__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__system_status__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__system_status__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__system_status__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SystemStatus_Response(metaclass=Metaclass_SystemStatus_Response):
    """Message class 'SystemStatus_Response'."""

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


class Metaclass_SystemStatus_Event(type):
    """Metaclass of message 'SystemStatus_Event'."""

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
                'v2_robot_arm_interfaces.srv.SystemStatus_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__system_status__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__system_status__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__system_status__event
            cls._TYPE_SUPPORT = module.type_support_msg__srv__system_status__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__system_status__event

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


class SystemStatus_Event(metaclass=Metaclass_SystemStatus_Event):
    """Message class 'SystemStatus_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<v2_robot_arm_interfaces/SystemStatus_Request, 1>',
        'response': 'sequence<v2_robot_arm_interfaces/SystemStatus_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['v2_robot_arm_interfaces', 'srv'], 'SystemStatus_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['v2_robot_arm_interfaces', 'srv'], 'SystemStatus_Response'), 1),  # noqa: E501
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
            from v2_robot_arm_interfaces.srv import SystemStatus_Request
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
                 all(isinstance(v, SystemStatus_Request) for v in value) and
                 True), \
                "The 'request' field must be a set or sequence with length <= 1 and each value of type 'SystemStatus_Request'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if self._check_fields:
            from v2_robot_arm_interfaces.srv import SystemStatus_Response
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
                 all(isinstance(v, SystemStatus_Response) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence with length <= 1 and each value of type 'SystemStatus_Response'"
        self._response = value


class Metaclass_SystemStatus(type):
    """Metaclass of service 'SystemStatus'."""

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
                'v2_robot_arm_interfaces.srv.SystemStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__system_status

            from v2_robot_arm_interfaces.srv import _system_status
            if _system_status.Metaclass_SystemStatus_Request._TYPE_SUPPORT is None:
                _system_status.Metaclass_SystemStatus_Request.__import_type_support__()
            if _system_status.Metaclass_SystemStatus_Response._TYPE_SUPPORT is None:
                _system_status.Metaclass_SystemStatus_Response.__import_type_support__()
            if _system_status.Metaclass_SystemStatus_Event._TYPE_SUPPORT is None:
                _system_status.Metaclass_SystemStatus_Event.__import_type_support__()


class SystemStatus(metaclass=Metaclass_SystemStatus):
    from v2_robot_arm_interfaces.srv._system_status import SystemStatus_Request as Request
    from v2_robot_arm_interfaces.srv._system_status import SystemStatus_Response as Response
    from v2_robot_arm_interfaces.srv._system_status import SystemStatus_Event as Event

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
