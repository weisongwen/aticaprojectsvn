"""autogenerated by genpy from Modulo_Gest_Sistema/msg_habilitacion_modulo.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class msg_habilitacion_modulo(genpy.Message):
  _md5sum = "f3922bf2f9e23d1b3b255e4deb4c7240"
  _type = "Modulo_Gest_Sistema/msg_habilitacion_modulo"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """uint8 id_modulo
uint8 submodo
bool activo
"""
  __slots__ = ['id_modulo','submodo','activo']
  _slot_types = ['uint8','uint8','bool']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       id_modulo,submodo,activo

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(msg_habilitacion_modulo, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.id_modulo is None:
        self.id_modulo = 0
      if self.submodo is None:
        self.submodo = 0
      if self.activo is None:
        self.activo = False
    else:
      self.id_modulo = 0
      self.submodo = 0
      self.activo = False

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
      buff.write(_struct_3B.pack(_x.id_modulo, _x.submodo, _x.activo))
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
      (_x.id_modulo, _x.submodo, _x.activo,) = _struct_3B.unpack(str[start:end])
      self.activo = bool(self.activo)
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
      buff.write(_struct_3B.pack(_x.id_modulo, _x.submodo, _x.activo))
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
      (_x.id_modulo, _x.submodo, _x.activo,) = _struct_3B.unpack(str[start:end])
      self.activo = bool(self.activo)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_3B = struct.Struct("<3B")
