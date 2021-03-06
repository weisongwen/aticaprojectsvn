/* Auto-generated by genmsg_cpp for file /home/atica/catkin_ws/src/CITIUS/CITIUS_Control_Manager/srv/srv_nodeStatus.srv */
#ifndef CITIUS_CONTROL_MANAGER_SERVICE_SRV_NODESTATUS_H
#define CITIUS_CONTROL_MANAGER_SERVICE_SRV_NODESTATUS_H
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
struct srv_nodeStatusRequest_ {
  typedef srv_nodeStatusRequest_<ContainerAllocator> Type;

  srv_nodeStatusRequest_()
  : status(0)
  {
  }

  srv_nodeStatusRequest_(const ContainerAllocator& _alloc)
  : status(0)
  {
  }

  typedef uint16_t _status_type;
  uint16_t status;


  typedef boost::shared_ptr< ::CITIUS_Control_Manager::srv_nodeStatusRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::CITIUS_Control_Manager::srv_nodeStatusRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct srv_nodeStatusRequest
typedef  ::CITIUS_Control_Manager::srv_nodeStatusRequest_<std::allocator<void> > srv_nodeStatusRequest;

typedef boost::shared_ptr< ::CITIUS_Control_Manager::srv_nodeStatusRequest> srv_nodeStatusRequestPtr;
typedef boost::shared_ptr< ::CITIUS_Control_Manager::srv_nodeStatusRequest const> srv_nodeStatusRequestConstPtr;



template <class ContainerAllocator>
struct srv_nodeStatusResponse_ {
  typedef srv_nodeStatusResponse_<ContainerAllocator> Type;

  srv_nodeStatusResponse_()
  : confirmation(false)
  {
  }

  srv_nodeStatusResponse_(const ContainerAllocator& _alloc)
  : confirmation(false)
  {
  }

  typedef uint8_t _confirmation_type;
  uint8_t confirmation;


  typedef boost::shared_ptr< ::CITIUS_Control_Manager::srv_nodeStatusResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::CITIUS_Control_Manager::srv_nodeStatusResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct srv_nodeStatusResponse
typedef  ::CITIUS_Control_Manager::srv_nodeStatusResponse_<std::allocator<void> > srv_nodeStatusResponse;

typedef boost::shared_ptr< ::CITIUS_Control_Manager::srv_nodeStatusResponse> srv_nodeStatusResponsePtr;
typedef boost::shared_ptr< ::CITIUS_Control_Manager::srv_nodeStatusResponse const> srv_nodeStatusResponseConstPtr;


struct srv_nodeStatus
{

typedef srv_nodeStatusRequest Request;
typedef srv_nodeStatusResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct srv_nodeStatus
} // namespace CITIUS_Control_Manager

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::CITIUS_Control_Manager::srv_nodeStatusRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::CITIUS_Control_Manager::srv_nodeStatusRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::CITIUS_Control_Manager::srv_nodeStatusRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "d76553ad009ac7f06776d0c802460f3f";
  }

  static const char* value(const  ::CITIUS_Control_Manager::srv_nodeStatusRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xd76553ad009ac7f0ULL;
  static const uint64_t static_value2 = 0x6776d0c802460f3fULL;
};

template<class ContainerAllocator>
struct DataType< ::CITIUS_Control_Manager::srv_nodeStatusRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "CITIUS_Control_Manager/srv_nodeStatusRequest";
  }

  static const char* value(const  ::CITIUS_Control_Manager::srv_nodeStatusRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::CITIUS_Control_Manager::srv_nodeStatusRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "uint16 status\n\
\n\
";
  }

  static const char* value(const  ::CITIUS_Control_Manager::srv_nodeStatusRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::CITIUS_Control_Manager::srv_nodeStatusRequest_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::CITIUS_Control_Manager::srv_nodeStatusResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::CITIUS_Control_Manager::srv_nodeStatusResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::CITIUS_Control_Manager::srv_nodeStatusResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "f27299616d4eae5b55699f532a896283";
  }

  static const char* value(const  ::CITIUS_Control_Manager::srv_nodeStatusResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xf27299616d4eae5bULL;
  static const uint64_t static_value2 = 0x55699f532a896283ULL;
};

template<class ContainerAllocator>
struct DataType< ::CITIUS_Control_Manager::srv_nodeStatusResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "CITIUS_Control_Manager/srv_nodeStatusResponse";
  }

  static const char* value(const  ::CITIUS_Control_Manager::srv_nodeStatusResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::CITIUS_Control_Manager::srv_nodeStatusResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "bool confirmation\n\
\n\
";
  }

  static const char* value(const  ::CITIUS_Control_Manager::srv_nodeStatusResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::CITIUS_Control_Manager::srv_nodeStatusResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::CITIUS_Control_Manager::srv_nodeStatusRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.status);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct srv_nodeStatusRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::CITIUS_Control_Manager::srv_nodeStatusResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.confirmation);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct srv_nodeStatusResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<CITIUS_Control_Manager::srv_nodeStatus> {
  static const char* value() 
  {
    return "a8f417cfe7a1c68eb9250d0c4d4a4bb5";
  }

  static const char* value(const CITIUS_Control_Manager::srv_nodeStatus&) { return value(); } 
};

template<>
struct DataType<CITIUS_Control_Manager::srv_nodeStatus> {
  static const char* value() 
  {
    return "CITIUS_Control_Manager/srv_nodeStatus";
  }

  static const char* value(const CITIUS_Control_Manager::srv_nodeStatus&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<CITIUS_Control_Manager::srv_nodeStatusRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "a8f417cfe7a1c68eb9250d0c4d4a4bb5";
  }

  static const char* value(const CITIUS_Control_Manager::srv_nodeStatusRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<CITIUS_Control_Manager::srv_nodeStatusRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "CITIUS_Control_Manager/srv_nodeStatus";
  }

  static const char* value(const CITIUS_Control_Manager::srv_nodeStatusRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<CITIUS_Control_Manager::srv_nodeStatusResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "a8f417cfe7a1c68eb9250d0c4d4a4bb5";
  }

  static const char* value(const CITIUS_Control_Manager::srv_nodeStatusResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<CITIUS_Control_Manager::srv_nodeStatusResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "CITIUS_Control_Manager/srv_nodeStatus";
  }

  static const char* value(const CITIUS_Control_Manager::srv_nodeStatusResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // CITIUS_CONTROL_MANAGER_SERVICE_SRV_NODESTATUS_H

