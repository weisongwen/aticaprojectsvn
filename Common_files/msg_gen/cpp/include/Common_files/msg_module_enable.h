/* Auto-generated by genmsg_cpp for file /home/atica/catkin_ws/src/Common_files/msg/msg_module_enable.msg */
#ifndef COMMON_FILES_MESSAGE_MSG_MODULE_ENABLE_H
#define COMMON_FILES_MESSAGE_MSG_MODULE_ENABLE_H
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


namespace Common_files
{
template <class ContainerAllocator>
struct msg_module_enable_ {
  typedef msg_module_enable_<ContainerAllocator> Type;

  msg_module_enable_()
  : id_module(0)
  , submode(0)
  , status(0)
  {
  }

  msg_module_enable_(const ContainerAllocator& _alloc)
  : id_module(0)
  , submode(0)
  , status(0)
  {
  }

  typedef uint8_t _id_module_type;
  uint8_t id_module;

  typedef uint8_t _submode_type;
  uint8_t submode;

  typedef uint8_t _status_type;
  uint8_t status;


  typedef boost::shared_ptr< ::Common_files::msg_module_enable_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::Common_files::msg_module_enable_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct msg_module_enable
typedef  ::Common_files::msg_module_enable_<std::allocator<void> > msg_module_enable;

typedef boost::shared_ptr< ::Common_files::msg_module_enable> msg_module_enablePtr;
typedef boost::shared_ptr< ::Common_files::msg_module_enable const> msg_module_enableConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::Common_files::msg_module_enable_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::Common_files::msg_module_enable_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace Common_files

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::Common_files::msg_module_enable_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::Common_files::msg_module_enable_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::Common_files::msg_module_enable_<ContainerAllocator> > {
  static const char* value() 
  {
    return "b6c32f1e50d47219fc894a3e6073e52c";
  }

  static const char* value(const  ::Common_files::msg_module_enable_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xb6c32f1e50d47219ULL;
  static const uint64_t static_value2 = 0xfc894a3e6073e52cULL;
};

template<class ContainerAllocator>
struct DataType< ::Common_files::msg_module_enable_<ContainerAllocator> > {
  static const char* value() 
  {
    return "Common_files/msg_module_enable";
  }

  static const char* value(const  ::Common_files::msg_module_enable_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::Common_files::msg_module_enable_<ContainerAllocator> > {
  static const char* value() 
  {
    return "uint8 id_module\n\
uint8 submode\n\
uint8 status\n\
";
  }

  static const char* value(const  ::Common_files::msg_module_enable_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::Common_files::msg_module_enable_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::Common_files::msg_module_enable_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.id_module);
    stream.next(m.submode);
    stream.next(m.status);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct msg_module_enable_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::Common_files::msg_module_enable_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::Common_files::msg_module_enable_<ContainerAllocator> & v) 
  {
    s << indent << "id_module: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.id_module);
    s << indent << "submode: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.submode);
    s << indent << "status: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.status);
  }
};


} // namespace message_operations
} // namespace ros

#endif // COMMON_FILES_MESSAGE_MSG_MODULE_ENABLE_H

