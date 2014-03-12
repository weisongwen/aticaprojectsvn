/* Auto-generated by genmsg_cpp for file /home/atica/catkin_ws/src/Common_files/msg/msg_waypoint.msg */
#ifndef COMMON_FILES_MESSAGE_MSG_WAYPOINT_H
#define COMMON_FILES_MESSAGE_MSG_WAYPOINT_H
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
struct msg_waypoint_ {
  typedef msg_waypoint_<ContainerAllocator> Type;

  msg_waypoint_()
  : wp_latitude(0.0)
  , wp_longitude(0.0)
  {
  }

  msg_waypoint_(const ContainerAllocator& _alloc)
  : wp_latitude(0.0)
  , wp_longitude(0.0)
  {
  }

  typedef double _wp_latitude_type;
  double wp_latitude;

  typedef double _wp_longitude_type;
  double wp_longitude;


  typedef boost::shared_ptr< ::Common_files::msg_waypoint_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::Common_files::msg_waypoint_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct msg_waypoint
typedef  ::Common_files::msg_waypoint_<std::allocator<void> > msg_waypoint;

typedef boost::shared_ptr< ::Common_files::msg_waypoint> msg_waypointPtr;
typedef boost::shared_ptr< ::Common_files::msg_waypoint const> msg_waypointConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::Common_files::msg_waypoint_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::Common_files::msg_waypoint_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace Common_files

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::Common_files::msg_waypoint_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::Common_files::msg_waypoint_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::Common_files::msg_waypoint_<ContainerAllocator> > {
  static const char* value() 
  {
    return "dc73a2bad69375b319a1fde550ba2cbc";
  }

  static const char* value(const  ::Common_files::msg_waypoint_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xdc73a2bad69375b3ULL;
  static const uint64_t static_value2 = 0x19a1fde550ba2cbcULL;
};

template<class ContainerAllocator>
struct DataType< ::Common_files::msg_waypoint_<ContainerAllocator> > {
  static const char* value() 
  {
    return "Common_files/msg_waypoint";
  }

  static const char* value(const  ::Common_files::msg_waypoint_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::Common_files::msg_waypoint_<ContainerAllocator> > {
  static const char* value() 
  {
    return "float64 wp_latitude\n\
float64 wp_longitude\n\
\n\
";
  }

  static const char* value(const  ::Common_files::msg_waypoint_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::Common_files::msg_waypoint_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::Common_files::msg_waypoint_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.wp_latitude);
    stream.next(m.wp_longitude);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct msg_waypoint_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::Common_files::msg_waypoint_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::Common_files::msg_waypoint_<ContainerAllocator> & v) 
  {
    s << indent << "wp_latitude: ";
    Printer<double>::stream(s, indent + "  ", v.wp_latitude);
    s << indent << "wp_longitude: ";
    Printer<double>::stream(s, indent + "  ", v.wp_longitude);
  }
};


} // namespace message_operations
} // namespace ros

#endif // COMMON_FILES_MESSAGE_MSG_WAYPOINT_H

