/* Auto-generated by genmsg_cpp for file /home/atica/catkin_ws/src/CITIUS/CITIUS_Control_Manager/srv/srv_rearcam.srv */
#ifndef CITIUS_CONTROL_MANAGER_SERVICE_SRV_REARCAM_H
#define CITIUS_CONTROL_MANAGER_SERVICE_SRV_REARCAM_H
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

#include "ros/service_traits.h"




namespace CITIUS_Control_Manager
{
template <class ContainerAllocator>
struct srv_rearcamRequest_ {
  typedef srv_rearcamRequest_<ContainerAllocator> Type;

  srv_rearcamRequest_()
  : request(false)
  {
  }

  srv_rearcamRequest_(const ContainerAllocator& _alloc)
  : request(false)
  {
  }

  typedef uint8_t _request_type;
  uint8_t request;


  typedef boost::shared_ptr< ::CITIUS_Control_Manager::srv_rearcamRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::CITIUS_Control_Manager::srv_rearcamRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct srv_rearcamRequest
typedef  ::CITIUS_Control_Manager::srv_rearcamRequest_<std::allocator<void> > srv_rearcamRequest;

typedef boost::shared_ptr< ::CITIUS_Control_Manager::srv_rearcamRequest> srv_rearcamRequestPtr;
typedef boost::shared_ptr< ::CITIUS_Control_Manager::srv_rearcamRequest const> srv_rearcamRequestConstPtr;



template <class ContainerAllocator>
struct srv_rearcamResponse_ {
  typedef srv_rearcamResponse_<ContainerAllocator> Type;

  srv_rearcamResponse_()
  : pan(0)
  , tilt(0)
  {
  }

  srv_rearcamResponse_(const ContainerAllocator& _alloc)
  : pan(0)
  , tilt(0)
  {
  }

  typedef uint8_t _pan_type;
  uint8_t pan;

  typedef uint8_t _tilt_type;
  uint8_t tilt;


  typedef boost::shared_ptr< ::CITIUS_Control_Manager::srv_rearcamResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::CITIUS_Control_Manager::srv_rearcamResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct srv_rearcamResponse
typedef  ::CITIUS_Control_Manager::srv_rearcamResponse_<std::allocator<void> > srv_rearcamResponse;

typedef boost::shared_ptr< ::CITIUS_Control_Manager::srv_rearcamResponse> srv_rearcamResponsePtr;
typedef boost::shared_ptr< ::CITIUS_Control_Manager::srv_rearcamResponse const> srv_rearcamResponseConstPtr;


struct srv_rearcam
{

typedef srv_rearcamRequest Request;
typedef srv_rearcamResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct srv_rearcam
} // namespace CITIUS_Control_Manager

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::CITIUS_Control_Manager::srv_rearcamRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::CITIUS_Control_Manager::srv_rearcamRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::CITIUS_Control_Manager::srv_rearcamRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "6f7e5ad6ab0ddf42c5727a195315a470";
  }

  static const char* value(const  ::CITIUS_Control_Manager::srv_rearcamRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x6f7e5ad6ab0ddf42ULL;
  static const uint64_t static_value2 = 0xc5727a195315a470ULL;
};

template<class ContainerAllocator>
struct DataType< ::CITIUS_Control_Manager::srv_rearcamRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "CITIUS_Control_Manager/srv_rearcamRequest";
  }

  static const char* value(const  ::CITIUS_Control_Manager::srv_rearcamRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::CITIUS_Control_Manager::srv_rearcamRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "bool request\n\
\n\
";
  }

  static const char* value(const  ::CITIUS_Control_Manager::srv_rearcamRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::CITIUS_Control_Manager::srv_rearcamRequest_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::CITIUS_Control_Manager::srv_rearcamResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::CITIUS_Control_Manager::srv_rearcamResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::CITIUS_Control_Manager::srv_rearcamResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "2b0edc5258ed5947ecf7223149cc3cf7";
  }

  static const char* value(const  ::CITIUS_Control_Manager::srv_rearcamResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x2b0edc5258ed5947ULL;
  static const uint64_t static_value2 = 0xecf7223149cc3cf7ULL;
};

template<class ContainerAllocator>
struct DataType< ::CITIUS_Control_Manager::srv_rearcamResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "CITIUS_Control_Manager/srv_rearcamResponse";
  }

  static const char* value(const  ::CITIUS_Control_Manager::srv_rearcamResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::CITIUS_Control_Manager::srv_rearcamResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "uint8 pan\n\
uint8 tilt\n\
\n\
";
  }

  static const char* value(const  ::CITIUS_Control_Manager::srv_rearcamResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::CITIUS_Control_Manager::srv_rearcamResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::CITIUS_Control_Manager::srv_rearcamRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.request);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct srv_rearcamRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::CITIUS_Control_Manager::srv_rearcamResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.pan);
    stream.next(m.tilt);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct srv_rearcamResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<CITIUS_Control_Manager::srv_rearcam> {
  static const char* value() 
  {
    return "231efe7fe75158176932d3c27d259dcb";
  }

  static const char* value(const CITIUS_Control_Manager::srv_rearcam&) { return value(); } 
};

template<>
struct DataType<CITIUS_Control_Manager::srv_rearcam> {
  static const char* value() 
  {
    return "CITIUS_Control_Manager/srv_rearcam";
  }

  static const char* value(const CITIUS_Control_Manager::srv_rearcam&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<CITIUS_Control_Manager::srv_rearcamRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "231efe7fe75158176932d3c27d259dcb";
  }

  static const char* value(const CITIUS_Control_Manager::srv_rearcamRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<CITIUS_Control_Manager::srv_rearcamRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "CITIUS_Control_Manager/srv_rearcam";
  }

  static const char* value(const CITIUS_Control_Manager::srv_rearcamRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<CITIUS_Control_Manager::srv_rearcamResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "231efe7fe75158176932d3c27d259dcb";
  }

  static const char* value(const CITIUS_Control_Manager::srv_rearcamResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<CITIUS_Control_Manager::srv_rearcamResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "CITIUS_Control_Manager/srv_rearcam";
  }

  static const char* value(const CITIUS_Control_Manager::srv_rearcamResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // CITIUS_CONTROL_MANAGER_SERVICE_SRV_REARCAM_H

