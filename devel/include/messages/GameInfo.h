// Generated by gencpp from file messages/GameInfo.msg
// DO NOT EDIT!


#ifndef MESSAGES_MESSAGE_GAMEINFO_H
#define MESSAGES_MESSAGE_GAMEINFO_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace messages
{
template <class ContainerAllocator>
struct GameInfo_
{
  typedef GameInfo_<ContainerAllocator> Type;

  GameInfo_()
    : header()
    , remain_time(0)
    , game_process(0)
    , remain_hp(0)
    , max_hp(0)  {
    }
  GameInfo_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , remain_time(0)
    , game_process(0)
    , remain_hp(0)
    , max_hp(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef int16_t _remain_time_type;
  _remain_time_type remain_time;

   typedef int16_t _game_process_type;
  _game_process_type game_process;

   typedef int16_t _remain_hp_type;
  _remain_hp_type remain_hp;

   typedef int16_t _max_hp_type;
  _max_hp_type max_hp;





  typedef boost::shared_ptr< ::messages::GameInfo_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::messages::GameInfo_<ContainerAllocator> const> ConstPtr;

}; // struct GameInfo_

typedef ::messages::GameInfo_<std::allocator<void> > GameInfo;

typedef boost::shared_ptr< ::messages::GameInfo > GameInfoPtr;
typedef boost::shared_ptr< ::messages::GameInfo const> GameInfoConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::messages::GameInfo_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::messages::GameInfo_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace messages

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'nav_msgs': ['/opt/ros/kinetic/share/nav_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'messages': ['/home/dji/roborts_ws/devel/share/messages/msg', '/home/dji/roborts_ws/src/RoboRTS/modules/stream/messages/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::messages::GameInfo_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::messages::GameInfo_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::messages::GameInfo_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::messages::GameInfo_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::messages::GameInfo_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::messages::GameInfo_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::messages::GameInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f22667905a2c8ef96aa7371a952446a4";
  }

  static const char* value(const ::messages::GameInfo_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf22667905a2c8ef9ULL;
  static const uint64_t static_value2 = 0x6aa7371a952446a4ULL;
};

template<class ContainerAllocator>
struct DataType< ::messages::GameInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "messages/GameInfo";
  }

  static const char* value(const ::messages::GameInfo_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::messages::GameInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
int16 remain_time\n\
\n\
#current race stage\n\
#  0 not start\n\
#  1 preparation stage\n\
#  2 self-check stage\n\
#  3 5 seconds count down\n\
#  4 fighting stage\n\
#  5 result computing stage */\n\
int16 game_process\n\
\n\
int16 remain_hp\n\
int16 max_hp\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
";
  }

  static const char* value(const ::messages::GameInfo_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::messages::GameInfo_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.remain_time);
      stream.next(m.game_process);
      stream.next(m.remain_hp);
      stream.next(m.max_hp);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GameInfo_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::messages::GameInfo_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::messages::GameInfo_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "remain_time: ";
    Printer<int16_t>::stream(s, indent + "  ", v.remain_time);
    s << indent << "game_process: ";
    Printer<int16_t>::stream(s, indent + "  ", v.game_process);
    s << indent << "remain_hp: ";
    Printer<int16_t>::stream(s, indent + "  ", v.remain_hp);
    s << indent << "max_hp: ";
    Printer<int16_t>::stream(s, indent + "  ", v.max_hp);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MESSAGES_MESSAGE_GAMEINFO_H
