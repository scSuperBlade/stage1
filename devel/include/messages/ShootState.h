// Generated by gencpp from file messages/ShootState.msg
// DO NOT EDIT!


#ifndef MESSAGES_MESSAGE_SHOOTSTATE_H
#define MESSAGES_MESSAGE_SHOOTSTATE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace messages
{
template <class ContainerAllocator>
struct ShootState_
{
  typedef ShootState_<ContainerAllocator> Type;

  ShootState_()
    : single_shoot(0)
    , continue_shoot(0)
    , run_friction_whell(0)
    , friction_whell_speed(0)  {
    }
  ShootState_(const ContainerAllocator& _alloc)
    : single_shoot(0)
    , continue_shoot(0)
    , run_friction_whell(0)
    , friction_whell_speed(0)  {
  (void)_alloc;
    }



   typedef int32_t _single_shoot_type;
  _single_shoot_type single_shoot;

   typedef int32_t _continue_shoot_type;
  _continue_shoot_type continue_shoot;

   typedef int32_t _run_friction_whell_type;
  _run_friction_whell_type run_friction_whell;

   typedef int32_t _friction_whell_speed_type;
  _friction_whell_speed_type friction_whell_speed;





  typedef boost::shared_ptr< ::messages::ShootState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::messages::ShootState_<ContainerAllocator> const> ConstPtr;

}; // struct ShootState_

typedef ::messages::ShootState_<std::allocator<void> > ShootState;

typedef boost::shared_ptr< ::messages::ShootState > ShootStatePtr;
typedef boost::shared_ptr< ::messages::ShootState const> ShootStateConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::messages::ShootState_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::messages::ShootState_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace messages

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'nav_msgs': ['/opt/ros/kinetic/share/nav_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'messages': ['/home/dji/roborts_ws/devel/share/messages/msg', '/home/dji/roborts_ws/src/RoboRTS/modules/stream/messages/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::messages::ShootState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::messages::ShootState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::messages::ShootState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::messages::ShootState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::messages::ShootState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::messages::ShootState_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::messages::ShootState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "36f858c917904d9229bf553ee5e21890";
  }

  static const char* value(const ::messages::ShootState_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x36f858c917904d92ULL;
  static const uint64_t static_value2 = 0x29bf553ee5e21890ULL;
};

template<class ContainerAllocator>
struct DataType< ::messages::ShootState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "messages/ShootState";
  }

  static const char* value(const ::messages::ShootState_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::messages::ShootState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 single_shoot\n\
int32 continue_shoot\n\
int32 run_friction_whell\n\
int32 friction_whell_speed\n\
";
  }

  static const char* value(const ::messages::ShootState_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::messages::ShootState_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.single_shoot);
      stream.next(m.continue_shoot);
      stream.next(m.run_friction_whell);
      stream.next(m.friction_whell_speed);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ShootState_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::messages::ShootState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::messages::ShootState_<ContainerAllocator>& v)
  {
    s << indent << "single_shoot: ";
    Printer<int32_t>::stream(s, indent + "  ", v.single_shoot);
    s << indent << "continue_shoot: ";
    Printer<int32_t>::stream(s, indent + "  ", v.continue_shoot);
    s << indent << "run_friction_whell: ";
    Printer<int32_t>::stream(s, indent + "  ", v.run_friction_whell);
    s << indent << "friction_whell_speed: ";
    Printer<int32_t>::stream(s, indent + "  ", v.friction_whell_speed);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MESSAGES_MESSAGE_SHOOTSTATE_H
