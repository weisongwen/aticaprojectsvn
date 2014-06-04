"""autogenerated by genpy from CITIUS_Control_Driving/msg_vehicleInformation.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class msg_vehicleInformation(genpy.Message):
  _md5sum = "99cf754747b52aeb199e99a3aa80459e"
  _type = "CITIUS_Control_Driving/msg_vehicleInformation"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """uint16 id_device
int16 value
"""
  __slots__ = ['id_device','value']
  _slot_types = ['uint16','int16']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       id_device,value

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(msg_vehicleInformation, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.id_device is None:
        self.id_device = 0
      if self.value is None:
        self.value = 0
    else:
      self.id_device = 0
      self.value = 0

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
      buff.write(_struct_Hh.pack(_x.id_device, _x.value))
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
      end += 4
      (_x.id_device, _x.value,) = _struct_Hh.unpack(str[start:end])
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
      buff.write(_struct_Hh.pack(_x.id_device, _x.value))
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
      end += 4
      (_x.id_device, _x.value,) = _struct_Hh.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_Hh = struct.Struct("<Hh")
