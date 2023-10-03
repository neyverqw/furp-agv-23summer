// Generated by gencpp from file mir_msgs/Error.msg
// DO NOT EDIT!


#ifndef MIR_MSGS_MESSAGE_ERROR_H
#define MIR_MSGS_MESSAGE_ERROR_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace mir_msgs
{
template <class ContainerAllocator>
struct Error_
{
  typedef Error_<ContainerAllocator> Type;

  Error_()
    : timestamp()
    , code(0)
    , description()
    , module()
    , nolog(false)  {
    }
  Error_(const ContainerAllocator& _alloc)
    : timestamp()
    , code(0)
    , description(_alloc)
    , module(_alloc)
    , nolog(false)  {
  (void)_alloc;
    }



   typedef ros::Time _timestamp_type;
  _timestamp_type timestamp;

   typedef int32_t _code_type;
  _code_type code;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _description_type;
  _description_type description;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _module_type;
  _module_type module;

   typedef uint8_t _nolog_type;
  _nolog_type nolog;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(HARDWARE_ERROR)
  #undef HARDWARE_ERROR
#endif
#if defined(_WIN32) && defined(CPU_LOAD_ERROR)
  #undef CPU_LOAD_ERROR
#endif
#if defined(_WIN32) && defined(MEMORY_ERROR)
  #undef MEMORY_ERROR
#endif
#if defined(_WIN32) && defined(ETHERNET_ERROR)
  #undef ETHERNET_ERROR
#endif
#if defined(_WIN32) && defined(HDD_ERROR)
  #undef HDD_ERROR
#endif
#if defined(_WIN32) && defined(BATTERY_ERROR)
  #undef BATTERY_ERROR
#endif
#if defined(_WIN32) && defined(IMU_ERROR)
  #undef IMU_ERROR
#endif
#if defined(_WIN32) && defined(MOTOR_ERROR)
  #undef MOTOR_ERROR
#endif
#if defined(_WIN32) && defined(LASER_ERROR)
  #undef LASER_ERROR
#endif
#if defined(_WIN32) && defined(CAMERA_ERROR)
  #undef CAMERA_ERROR
#endif
#if defined(_WIN32) && defined(SAFETY_SYSTEM_ERROR)
  #undef SAFETY_SYSTEM_ERROR
#endif
#if defined(_WIN32) && defined(POWERBOARD_ERROR)
  #undef POWERBOARD_ERROR
#endif
#if defined(_WIN32) && defined(POWERSUPPLY_ERROR)
  #undef POWERSUPPLY_ERROR
#endif
#if defined(_WIN32) && defined(CANBUS_ERROR)
  #undef CANBUS_ERROR
#endif
#if defined(_WIN32) && defined(HOOK_ERROR)
  #undef HOOK_ERROR
#endif
#if defined(_WIN32) && defined(HOOK_CAMERA_ERROR)
  #undef HOOK_CAMERA_ERROR
#endif
#if defined(_WIN32) && defined(HOOK_ACTUATOR_ERROR)
  #undef HOOK_ACTUATOR_ERROR
#endif
#if defined(_WIN32) && defined(HOOK_BRAKE_ERROR)
  #undef HOOK_BRAKE_ERROR
#endif
#if defined(_WIN32) && defined(HOOK_ENCODER_ERROR)
  #undef HOOK_ENCODER_ERROR
#endif
#if defined(_WIN32) && defined(MISSING_ERROR)
  #undef MISSING_ERROR
#endif
#if defined(_WIN32) && defined(SOFTWARE_ERROR)
  #undef SOFTWARE_ERROR
#endif
#if defined(_WIN32) && defined(MISSION_ERROR)
  #undef MISSION_ERROR
#endif
#if defined(_WIN32) && defined(LOCALIZATION_ERROR)
  #undef LOCALIZATION_ERROR
#endif
#if defined(_WIN32) && defined(MAPPING_ERROR)
  #undef MAPPING_ERROR
#endif
#if defined(_WIN32) && defined(ODOM_FUSION_ERROR)
  #undef ODOM_FUSION_ERROR
#endif
#if defined(_WIN32) && defined(EVACUATION_ERROR)
  #undef EVACUATION_ERROR
#endif

  enum {
    HARDWARE_ERROR = 0,
    CPU_LOAD_ERROR = 100,
    MEMORY_ERROR = 200,
    ETHERNET_ERROR = 300,
    HDD_ERROR = 400,
    BATTERY_ERROR = 500,
    IMU_ERROR = 600,
    MOTOR_ERROR = 700,
    LASER_ERROR = 800,
    CAMERA_ERROR = 900,
    SAFETY_SYSTEM_ERROR = 1000,
    POWERBOARD_ERROR = 2000,
    POWERSUPPLY_ERROR = 2100,
    CANBUS_ERROR = 2200,
    HOOK_ERROR = 5000,
    HOOK_CAMERA_ERROR = 5100,
    HOOK_ACTUATOR_ERROR = 5200,
    HOOK_BRAKE_ERROR = 5300,
    HOOK_ENCODER_ERROR = 5400,
    MISSING_ERROR = 9000,
    SOFTWARE_ERROR = 10000,
    MISSION_ERROR = 10100,
    LOCALIZATION_ERROR = 10200,
    MAPPING_ERROR = 10300,
    ODOM_FUSION_ERROR = 10400,
    EVACUATION_ERROR = 12000,
  };


  typedef boost::shared_ptr< ::mir_msgs::Error_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mir_msgs::Error_<ContainerAllocator> const> ConstPtr;

}; // struct Error_

typedef ::mir_msgs::Error_<std::allocator<void> > Error;

typedef boost::shared_ptr< ::mir_msgs::Error > ErrorPtr;
typedef boost::shared_ptr< ::mir_msgs::Error const> ErrorConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mir_msgs::Error_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mir_msgs::Error_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::mir_msgs::Error_<ContainerAllocator1> & lhs, const ::mir_msgs::Error_<ContainerAllocator2> & rhs)
{
  return lhs.timestamp == rhs.timestamp &&
    lhs.code == rhs.code &&
    lhs.description == rhs.description &&
    lhs.module == rhs.module &&
    lhs.nolog == rhs.nolog;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::mir_msgs::Error_<ContainerAllocator1> & lhs, const ::mir_msgs::Error_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace mir_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::mir_msgs::Error_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mir_msgs::Error_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mir_msgs::Error_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mir_msgs::Error_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mir_msgs::Error_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mir_msgs::Error_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mir_msgs::Error_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f8497742a4ea6b569fa00d679d96ce4f";
  }

  static const char* value(const ::mir_msgs::Error_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf8497742a4ea6b56ULL;
  static const uint64_t static_value2 = 0x9fa00d679d96ce4fULL;
};

template<class ContainerAllocator>
struct DataType< ::mir_msgs::Error_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mir_msgs/Error";
  }

  static const char* value(const ::mir_msgs::Error_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mir_msgs::Error_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Definition of offsets indicating what type an error is\n"
"int32 HARDWARE_ERROR = 0\n"
"int32 CPU_LOAD_ERROR = 100\n"
"int32 MEMORY_ERROR = 200\n"
"int32 ETHERNET_ERROR = 300\n"
"int32 HDD_ERROR = 400\n"
"int32 BATTERY_ERROR = 500\n"
"int32 IMU_ERROR = 600\n"
"int32 MOTOR_ERROR = 700\n"
"int32 LASER_ERROR = 800\n"
"int32 CAMERA_ERROR = 900\n"
"int32 SAFETY_SYSTEM_ERROR = 1000\n"
"int32 POWERBOARD_ERROR = 2000\n"
"int32 POWERSUPPLY_ERROR = 2100\n"
"int32 CANBUS_ERROR = 2200\n"
"int32 HOOK_ERROR = 5000\n"
"int32 HOOK_CAMERA_ERROR = 5100\n"
"int32 HOOK_ACTUATOR_ERROR = 5200\n"
"int32 HOOK_BRAKE_ERROR = 5300\n"
"int32 HOOK_ENCODER_ERROR = 5400\n"
"int32 MISSING_ERROR = 9000\n"
"int32 SOFTWARE_ERROR = 10000\n"
"int32 MISSION_ERROR = 10100\n"
"int32 LOCALIZATION_ERROR = 10200\n"
"int32 MAPPING_ERROR = 10300\n"
"int32 ODOM_FUSION_ERROR = 10400\n"
"int32 EVACUATION_ERROR = 12000\n"
"\n"
"\n"
"time timestamp		# Timestamp for when the error occurred\n"
"int32 code 			# Error code\n"
"string description 	# Error description\n"
"string module		# Module in which the error occurred\n"
"bool nolog          # Do not trigger an error log if set to true\n"
;
  }

  static const char* value(const ::mir_msgs::Error_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mir_msgs::Error_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.timestamp);
      stream.next(m.code);
      stream.next(m.description);
      stream.next(m.module);
      stream.next(m.nolog);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Error_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mir_msgs::Error_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mir_msgs::Error_<ContainerAllocator>& v)
  {
    s << indent << "timestamp: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.timestamp);
    s << indent << "code: ";
    Printer<int32_t>::stream(s, indent + "  ", v.code);
    s << indent << "description: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.description);
    s << indent << "module: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.module);
    s << indent << "nolog: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.nolog);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MIR_MSGS_MESSAGE_ERROR_H
