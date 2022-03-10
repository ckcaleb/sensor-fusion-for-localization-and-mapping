# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from lidar_localization/ESKFStd.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import std_msgs.msg

class ESKFStd(genpy.Message):
  _md5sum = "ab13091af10d5ae8e76adaf8e34014b3"
  _type = "lidar_localization/ESKFStd"
  _has_header = True  # flag to mark the presence of a Header object
  _full_text = """# time of ESKF estimation:
Header header

# a. position:
float64 delta_pos_x_std
float64 delta_pos_y_std
float64 delta_pos_z_std

# b. velocity:
float64 delta_vel_x_std
float64 delta_vel_y_std
float64 delta_vel_z_std

# c. orientation:
float64 delta_ori_x_std
float64 delta_ori_y_std
float64 delta_ori_z_std

# d. gyro. bias:
float64 gyro_bias_x_std
float64 gyro_bias_y_std
float64 gyro_bias_z_std

# e. accel. bias:
float64 accel_bias_x_std
float64 accel_bias_y_std
float64 accel_bias_z_std
================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
string frame_id
"""
  __slots__ = ['header','delta_pos_x_std','delta_pos_y_std','delta_pos_z_std','delta_vel_x_std','delta_vel_y_std','delta_vel_z_std','delta_ori_x_std','delta_ori_y_std','delta_ori_z_std','gyro_bias_x_std','gyro_bias_y_std','gyro_bias_z_std','accel_bias_x_std','accel_bias_y_std','accel_bias_z_std']
  _slot_types = ['std_msgs/Header','float64','float64','float64','float64','float64','float64','float64','float64','float64','float64','float64','float64','float64','float64','float64']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,delta_pos_x_std,delta_pos_y_std,delta_pos_z_std,delta_vel_x_std,delta_vel_y_std,delta_vel_z_std,delta_ori_x_std,delta_ori_y_std,delta_ori_z_std,gyro_bias_x_std,gyro_bias_y_std,gyro_bias_z_std,accel_bias_x_std,accel_bias_y_std,accel_bias_z_std

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(ESKFStd, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.delta_pos_x_std is None:
        self.delta_pos_x_std = 0.
      if self.delta_pos_y_std is None:
        self.delta_pos_y_std = 0.
      if self.delta_pos_z_std is None:
        self.delta_pos_z_std = 0.
      if self.delta_vel_x_std is None:
        self.delta_vel_x_std = 0.
      if self.delta_vel_y_std is None:
        self.delta_vel_y_std = 0.
      if self.delta_vel_z_std is None:
        self.delta_vel_z_std = 0.
      if self.delta_ori_x_std is None:
        self.delta_ori_x_std = 0.
      if self.delta_ori_y_std is None:
        self.delta_ori_y_std = 0.
      if self.delta_ori_z_std is None:
        self.delta_ori_z_std = 0.
      if self.gyro_bias_x_std is None:
        self.gyro_bias_x_std = 0.
      if self.gyro_bias_y_std is None:
        self.gyro_bias_y_std = 0.
      if self.gyro_bias_z_std is None:
        self.gyro_bias_z_std = 0.
      if self.accel_bias_x_std is None:
        self.accel_bias_x_std = 0.
      if self.accel_bias_y_std is None:
        self.accel_bias_y_std = 0.
      if self.accel_bias_z_std is None:
        self.accel_bias_z_std = 0.
    else:
      self.header = std_msgs.msg.Header()
      self.delta_pos_x_std = 0.
      self.delta_pos_y_std = 0.
      self.delta_pos_z_std = 0.
      self.delta_vel_x_std = 0.
      self.delta_vel_y_std = 0.
      self.delta_vel_z_std = 0.
      self.delta_ori_x_std = 0.
      self.delta_ori_y_std = 0.
      self.delta_ori_z_std = 0.
      self.gyro_bias_x_std = 0.
      self.gyro_bias_y_std = 0.
      self.gyro_bias_z_std = 0.
      self.accel_bias_x_std = 0.
      self.accel_bias_y_std = 0.
      self.accel_bias_z_std = 0.

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_15d().pack(_x.delta_pos_x_std, _x.delta_pos_y_std, _x.delta_pos_z_std, _x.delta_vel_x_std, _x.delta_vel_y_std, _x.delta_vel_z_std, _x.delta_ori_x_std, _x.delta_ori_y_std, _x.delta_ori_z_std, _x.gyro_bias_x_std, _x.gyro_bias_y_std, _x.gyro_bias_z_std, _x.accel_bias_x_std, _x.accel_bias_y_std, _x.accel_bias_z_std))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 120
      (_x.delta_pos_x_std, _x.delta_pos_y_std, _x.delta_pos_z_std, _x.delta_vel_x_std, _x.delta_vel_y_std, _x.delta_vel_z_std, _x.delta_ori_x_std, _x.delta_ori_y_std, _x.delta_ori_z_std, _x.gyro_bias_x_std, _x.gyro_bias_y_std, _x.gyro_bias_z_std, _x.accel_bias_x_std, _x.accel_bias_y_std, _x.accel_bias_z_std,) = _get_struct_15d().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_15d().pack(_x.delta_pos_x_std, _x.delta_pos_y_std, _x.delta_pos_z_std, _x.delta_vel_x_std, _x.delta_vel_y_std, _x.delta_vel_z_std, _x.delta_ori_x_std, _x.delta_ori_y_std, _x.delta_ori_z_std, _x.gyro_bias_x_std, _x.gyro_bias_y_std, _x.gyro_bias_z_std, _x.accel_bias_x_std, _x.accel_bias_y_std, _x.accel_bias_z_std))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 120
      (_x.delta_pos_x_std, _x.delta_pos_y_std, _x.delta_pos_z_std, _x.delta_vel_x_std, _x.delta_vel_y_std, _x.delta_vel_z_std, _x.delta_ori_x_std, _x.delta_ori_y_std, _x.delta_ori_z_std, _x.gyro_bias_x_std, _x.gyro_bias_y_std, _x.gyro_bias_z_std, _x.accel_bias_x_std, _x.accel_bias_y_std, _x.accel_bias_z_std,) = _get_struct_15d().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_15d = None
def _get_struct_15d():
    global _struct_15d
    if _struct_15d is None:
        _struct_15d = struct.Struct("<15d")
    return _struct_15d
_struct_3I = None
def _get_struct_3I():
    global _struct_3I
    if _struct_3I is None:
        _struct_3I = struct.Struct("<3I")
    return _struct_3I
