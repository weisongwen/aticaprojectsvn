"""autogenerated by genpy from Common_files/msg_mode.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class msg_mode(genpy.Message):
  _md5sum = "12533cc6dd5391d707d2b80afe5b51a7"
  _type = "Common_files/msg_mode"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """bool type_msg
uint8 mode
uint8 status
"""
  __slots__ = ['type_msg','mode','status']
  _slot_types = ['bool','uint8','uint8']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       type_msg,mode,status

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(msg_mode, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.type_msg is None:
        self.type_msg = False
      if self.mode is None:
        self.mode = 0
      if self.status is None:
        self.status = 0
    else:
      self.type_msg = False
      self.mode = 0
      self.status = 0

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
      buff.write(_struct_3B.pack(_x.type_msg, _x.mode, _x.status))
    except struct.error as se: self._check_types(se)
    except TypeError as te: self._check_types(te)

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      _x = self
      start = end
      end += 3
      (_x.type_msg, _x.mode, _x.status,) = _struct_3B.unpack(str[start:end])
      self.type_msg = bool(self.type_msg)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_struct_3B.pack(_x.type_msg, _x.mode, _x.status))
    except struct.error as se: self._check_types(se)
    except TypeError as te: self._check_types(te)

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      _x = self
      start = end
      end += 3
      (_x.type_msg, _x.mode, _x.status,) = _struct_3B.unpack(str[start:end])
      self.type_msg = bool(self.type_msg)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_3B = struct.Struct("<3B")
