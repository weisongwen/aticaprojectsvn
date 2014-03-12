/* Auto-generated by genmsg_cpp for file /home/atica/catkin_ws/src/Common_files/msg/msg_ctrl_camera.msg */
#ifndef COMMON_FILES_MESSAGE_MSG_CTRL_CAMERA_H
#define COMMON_FILES_MESSAGE_MSG_CTRL_CAMERA_H
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
struct msg_ctrl_camera_ {
  typedef msg_ctrl_camera_<ContainerAllocator> Type;

  msg_ctrl_camera_()
  : id_control(0)
  , value(0)
  {
  }

  msg_ctrl_camera_(const ContainerAllocator& _alloc)
  : id_control(0)
  , value(0)
  {
  }

  typedef uint8_t _id_control_type;
  uint8_t id_control;

  typedef uint8_t _value_type;
  uint8_t value;


  typedef boost::shared_ptr< ::Common_files::msg_ctrl_camera_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::Common_files::msg_ctrl_camera_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct msg_ctrl_camera
typedef  ::Common_files::msg_ctrl_camera_<std::allocator<void> > msg_ctrl_camera;

typedef boost::shared_ptr< ::Common_files::msg_ctrl_camera> msg_ctrl_cameraPtr;
typedef boost::shared_ptr< ::Common_files::msg_ctrl_camera const> msg_ctrl_cameraConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::Common_files::msg_ctrl_camera_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::Common_files::msg_ctrl_camera_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace Common_files

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::Common_files::msg_ctrl_camera_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::Common_files::msg_ctrl_camera_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::Common_files::msg_ctrl_camera_<ContainerAllocator> > {
  static const char* value() 
  {
    return "c8c2f9b76345acfe8099761c31308cd4";
  }

  static const char* value(const  ::Common_files::msg_ctrl_camera_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xc8c2f9b76345acfeULL;
  static const uint64_t static_value2 = 0x8099761c31308cd4ULL;
};

template<class ContainerAllocator>
struct DataType< ::Common_files::msg_ctrl_camera_<ContainerAllocator> > {
  static const char* value() 
  {
    return "Common_files/msg_ctrl_camera";
  }

  static const char* value(const  ::Common_files::msg_ctrl_camera_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::Common_files::msg_ctrl_camera_<ContainerAllocator> > {
  static const char* value() 
  {
    return "uint8 id_control\n\
uint8 value\n\
";
  }

  static const char* value(const  ::Common_files::msg_ctrl_camera_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::Common_files::msg_ctrl_camera_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::Common_files::msg_ctrl_camera_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.id_control);
    stream.next(m.value);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct msg_ctrl_camera_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::Common_files::msg_ctrl_camera_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::Common_files::msg_ctrl_camera_<ContainerAllocator> & v) 
  {
    s << indent << "id_control: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.id_control);
    s << indent << "value: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.value);
  }
};


} // namespace message_operations
} // namespace ros

#endif // COMMON_FILES_MESSAGE_MSG_CTRL_CAMERA_H

