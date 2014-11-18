/* Auto-generated by genmsg_cpp for file /home/atica/catkin_ws/src/CITIUS/CITIUS_Control_Electric/msg/msg_electricCommand.msg */
#ifndef CITIUS_CONTROL_ELECTRIC_MESSAGE_MSG_ELECTRICCOMMAND_H
#define CITIUS_CONTROL_ELECTRIC_MESSAGE_MSG_ELECTRICCOMMAND_H
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


namespace CITIUS_Control_Electric
{
template <class ContainerAllocator>
struct msg_electricCommand_ {
  typedef msg_electricCommand_<ContainerAllocator> Type;

  msg_electricCommand_()
  : id_device(0)
  , value(0)
  {
  }

  msg_electricCommand_(const ContainerAllocator& _alloc)
  : id_device(0)
  , value(0)
  {
  }

  typedef uint16_t _id_device_type;
  uint16_t id_device;

  typedef int16_t _value_type;
  int16_t value;


  typedef boost::shared_ptr< ::CITIUS_Control_Electric::msg_electricCommand_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::CITIUS_Control_Electric::msg_electricCommand_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct msg_electricCommand
typedef  ::CITIUS_Control_Electric::msg_electricCommand_<std::allocator<void> > msg_electricCommand;

typedef boost::shared_ptr< ::CITIUS_Control_Electric::msg_electricCommand> msg_electricCommandPtr;
typedef boost::shared_ptr< ::CITIUS_Control_Electric::msg_electricCommand const> msg_electricCommandConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::CITIUS_Control_Electric::msg_electricCommand_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::CITIUS_Control_Electric::msg_electricCommand_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace CITIUS_Control_Electric

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::CITIUS_Control_Electric::msg_electricCommand_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::CITIUS_Control_Electric::msg_electricCommand_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::CITIUS_Control_Electric::msg_electricCommand_<ContainerAllocator> > {
  static const char* value() 
  {
    return "99cf754747b52aeb199e99a3aa80459e";
  }

  static const char* value(const  ::CITIUS_Control_Electric::msg_electricCommand_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x99cf754747b52aebULL;
  static const uint64_t static_value2 = 0x199e99a3aa80459eULL;
};

template<class ContainerAllocator>
struct DataType< ::CITIUS_Control_Electric::msg_electricCommand_<ContainerAllocator> > {
  static const char* value() 
  {
    return "CITIUS_Control_Electric/msg_electricCommand";
  }

  static const char* value(const  ::CITIUS_Control_Electric::msg_electricCommand_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::CITIUS_Control_Electric::msg_electricCommand_<ContainerAllocator> > {
  static const char* value() 
  {
    return "uint16 id_device\n\
int16 value\n\
";
  }

  static const char* value(const  ::CITIUS_Control_Electric::msg_electricCommand_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::CITIUS_Control_Electric::msg_electricCommand_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::CITIUS_Control_Electric::msg_electricCommand_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.id_device);
    stream.next(m.value);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct msg_electricCommand_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::CITIUS_Control_Electric::msg_electricCommand_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::CITIUS_Control_Electric::msg_electricCommand_<ContainerAllocator> & v) 
  {
    s << indent << "id_device: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.id_device);
    s << indent << "value: ";
    Printer<int16_t>::stream(s, indent + "  ", v.value);
  }
};


} // namespace message_operations
} // namespace ros

#endif // CITIUS_CONTROL_ELECTRIC_MESSAGE_MSG_ELECTRICCOMMAND_H

