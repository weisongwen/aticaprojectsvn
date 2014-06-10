/* Auto-generated by genmsg_cpp for file /home/atica/catkin_ws/src/CITIUS/CITIUS_Control_Communication/srv/srv_vehicleStatus.srv */
#ifndef CITIUS_CONTROL_COMMUNICATION_SERVICE_SRV_VEHICLESTATUS_H
#define CITIUS_CONTROL_COMMUNICATION_SERVICE_SRV_VEHICLESTATUS_H
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




namespace CITIUS_Control_Communication
{
template <class ContainerAllocator>
struct srv_vehicleStatusRequest_ {
  typedef srv_vehicleStatusRequest_<ContainerAllocator> Type;

  srv_vehicleStatusRequest_()
  : status(0)
  {
  }

  srv_vehicleStatusRequest_(const ContainerAllocator& _alloc)
  : status(0)
  {
  }

  typedef uint8_t _status_type;
  uint8_t status;


  typedef boost::shared_ptr< ::CITIUS_Control_Communication::srv_vehicleStatusRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::CITIUS_Control_Communication::srv_vehicleStatusRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct srv_vehicleStatusRequest
typedef  ::CITIUS_Control_Communication::srv_vehicleStatusRequest_<std::allocator<void> > srv_vehicleStatusRequest;

typedef boost::shared_ptr< ::CITIUS_Control_Communication::srv_vehicleStatusRequest> srv_vehicleStatusRequestPtr;
typedef boost::shared_ptr< ::CITIUS_Control_Communication::srv_vehicleStatusRequest const> srv_vehicleStatusRequestConstPtr;



template <class ContainerAllocator>
struct srv_vehicleStatusResponse_ {
  typedef srv_vehicleStatusResponse_<ContainerAllocator> Type;

  srv_vehicleStatusResponse_()
  : confirmation(false)
  {
  }

  srv_vehicleStatusResponse_(const ContainerAllocator& _alloc)
  : confirmation(false)
  {
  }

  typedef uint8_t _confirmation_type;
  uint8_t confirmation;


  typedef boost::shared_ptr< ::CITIUS_Control_Communication::srv_vehicleStatusResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::CITIUS_Control_Communication::srv_vehicleStatusResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct srv_vehicleStatusResponse
typedef  ::CITIUS_Control_Communication::srv_vehicleStatusResponse_<std::allocator<void> > srv_vehicleStatusResponse;

typedef boost::shared_ptr< ::CITIUS_Control_Communication::srv_vehicleStatusResponse> srv_vehicleStatusResponsePtr;
typedef boost::shared_ptr< ::CITIUS_Control_Communication::srv_vehicleStatusResponse const> srv_vehicleStatusResponseConstPtr;


struct srv_vehicleStatus
{

typedef srv_vehicleStatusRequest Request;
typedef srv_vehicleStatusResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct srv_vehicleStatus
} // namespace CITIUS_Control_Communication

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::CITIUS_Control_Communication::srv_vehicleStatusRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::CITIUS_Control_Communication::srv_vehicleStatusRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::CITIUS_Control_Communication::srv_vehicleStatusRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "284aa12dd9e9e760802ac9f38036ea5e";
  }

  static const char* value(const  ::CITIUS_Control_Communication::srv_vehicleStatusRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x284aa12dd9e9e760ULL;
  static const uint64_t static_value2 = 0x802ac9f38036ea5eULL;
};

template<class ContainerAllocator>
struct DataType< ::CITIUS_Control_Communication::srv_vehicleStatusRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "CITIUS_Control_Communication/srv_vehicleStatusRequest";
  }

  static const char* value(const  ::CITIUS_Control_Communication::srv_vehicleStatusRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::CITIUS_Control_Communication::srv_vehicleStatusRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "uint8 status\n\
\n\
";
  }

  static const char* value(const  ::CITIUS_Control_Communication::srv_vehicleStatusRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::CITIUS_Control_Communication::srv_vehicleStatusRequest_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::CITIUS_Control_Communication::srv_vehicleStatusResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::CITIUS_Control_Communication::srv_vehicleStatusResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::CITIUS_Control_Communication::srv_vehicleStatusResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "f27299616d4eae5b55699f532a896283";
  }

  static const char* value(const  ::CITIUS_Control_Communication::srv_vehicleStatusResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xf27299616d4eae5bULL;
  static const uint64_t static_value2 = 0x55699f532a896283ULL;
};

template<class ContainerAllocator>
struct DataType< ::CITIUS_Control_Communication::srv_vehicleStatusResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "CITIUS_Control_Communication/srv_vehicleStatusResponse";
  }

  static const char* value(const  ::CITIUS_Control_Communication::srv_vehicleStatusResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::CITIUS_Control_Communication::srv_vehicleStatusResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "bool confirmation\n\
\n\
";
  }

  static const char* value(const  ::CITIUS_Control_Communication::srv_vehicleStatusResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::CITIUS_Control_Communication::srv_vehicleStatusResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::CITIUS_Control_Communication::srv_vehicleStatusRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.status);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct srv_vehicleStatusRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::CITIUS_Control_Communication::srv_vehicleStatusResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.confirmation);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct srv_vehicleStatusResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<CITIUS_Control_Communication::srv_vehicleStatus> {
  static const char* value() 
  {
    return "2bec2362253a5964940299039dd0e122";
  }

  static const char* value(const CITIUS_Control_Communication::srv_vehicleStatus&) { return value(); } 
};

template<>
struct DataType<CITIUS_Control_Communication::srv_vehicleStatus> {
  static const char* value() 
  {
    return "CITIUS_Control_Communication/srv_vehicleStatus";
  }

  static const char* value(const CITIUS_Control_Communication::srv_vehicleStatus&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<CITIUS_Control_Communication::srv_vehicleStatusRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "2bec2362253a5964940299039dd0e122";
  }

  static const char* value(const CITIUS_Control_Communication::srv_vehicleStatusRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<CITIUS_Control_Communication::srv_vehicleStatusRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "CITIUS_Control_Communication/srv_vehicleStatus";
  }

  static const char* value(const CITIUS_Control_Communication::srv_vehicleStatusRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<CITIUS_Control_Communication::srv_vehicleStatusResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "2bec2362253a5964940299039dd0e122";
  }

  static const char* value(const CITIUS_Control_Communication::srv_vehicleStatusResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<CITIUS_Control_Communication::srv_vehicleStatusResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "CITIUS_Control_Communication/srv_vehicleStatus";
  }

  static const char* value(const CITIUS_Control_Communication::srv_vehicleStatusResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // CITIUS_CONTROL_COMMUNICATION_SERVICE_SRV_VEHICLESTATUS_H

