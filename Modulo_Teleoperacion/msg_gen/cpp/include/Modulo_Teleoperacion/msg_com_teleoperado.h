/* Auto-generated by genmsg_cpp for file /home/atica/catkin_ws/src/Modulo_Teleoperacion/msg/msg_com_teleoperado.msg */
#ifndef MODULO_TELEOPERACION_MESSAGE_MSG_COM_TELEOPERADO_H
#define MODULO_TELEOPERACION_MESSAGE_MSG_COM_TELEOPERADO_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"


namespace Modulo_Teleoperacion
{
template <class ContainerAllocator>
struct msg_com_teleoperado_ {
  typedef msg_com_teleoperado_<ContainerAllocator> Type;

  msg_com_teleoperado_()
  : id_elemento(0)
  , valor(0)
  , depurado(false)
  {
  }

  msg_com_teleoperado_(const ContainerAllocator& _alloc)
  : id_elemento(0)
  , valor(0)
  , depurado(false)
  {
  }

  typedef uint8_t _id_elemento_type;
  uint8_t id_elemento;

  typedef int32_t _valor_type;
  int32_t valor;

  typedef uint8_t _depurado_type;
  uint8_t depurado;


  typedef boost::shared_ptr< ::Modulo_Teleoperacion::msg_com_teleoperado_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::Modulo_Teleoperacion::msg_com_teleoperado_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct msg_com_teleoperado
typedef  ::Modulo_Teleoperacion::msg_com_teleoperado_<std::allocator<void> > msg_com_teleoperado;

typedef boost::shared_ptr< ::Modulo_Teleoperacion::msg_com_teleoperado> msg_com_teleoperadoPtr;
typedef boost::shared_ptr< ::Modulo_Teleoperacion::msg_com_teleoperado const> msg_com_teleoperadoConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::Modulo_Teleoperacion::msg_com_teleoperado_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::Modulo_Teleoperacion::msg_com_teleoperado_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace Modulo_Teleoperacion

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::Modulo_Teleoperacion::msg_com_teleoperado_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::Modulo_Teleoperacion::msg_com_teleoperado_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::Modulo_Teleoperacion::msg_com_teleoperado_<ContainerAllocator> > {
  static const char* value() 
  {
    return "c54d49e66d8c41bb0d15084869606880";
  }

  static const char* value(const  ::Modulo_Teleoperacion::msg_com_teleoperado_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xc54d49e66d8c41bbULL;
  static const uint64_t static_value2 = 0x0d15084869606880ULL;
};

template<class ContainerAllocator>
struct DataType< ::Modulo_Teleoperacion::msg_com_teleoperado_<ContainerAllocator> > {
  static const char* value() 
  {
    return "Modulo_Teleoperacion/msg_com_teleoperado";
  }

  static const char* value(const  ::Modulo_Teleoperacion::msg_com_teleoperado_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::Modulo_Teleoperacion::msg_com_teleoperado_<ContainerAllocator> > {
  static const char* value() 
  {
    return "uint8 id_elemento\n\
int32 valor\n\
bool depurado\n\
";
  }

  static const char* value(const  ::Modulo_Teleoperacion::msg_com_teleoperado_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::Modulo_Teleoperacion::msg_com_teleoperado_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::Modulo_Teleoperacion::msg_com_teleoperado_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.id_elemento);
    stream.next(m.valor);
    stream.next(m.depurado);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct msg_com_teleoperado_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::Modulo_Teleoperacion::msg_com_teleoperado_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::Modulo_Teleoperacion::msg_com_teleoperado_<ContainerAllocator> & v) 
  {
    s << indent << "id_elemento: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.id_elemento);
    s << indent << "valor: ";
    Printer<int32_t>::stream(s, indent + "  ", v.valor);
    s << indent << "depurado: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.depurado);
  }
};


} // namespace message_operations
} // namespace ros

#endif // MODULO_TELEOPERACION_MESSAGE_MSG_COM_TELEOPERADO_H

