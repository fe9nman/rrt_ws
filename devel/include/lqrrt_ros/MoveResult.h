// Generated by gencpp from file lqrrt_ros/MoveResult.msg
// DO NOT EDIT!


#ifndef LQRRT_ROS_MESSAGE_MOVERESULT_H
#define LQRRT_ROS_MESSAGE_MOVERESULT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace lqrrt_ros
{
template <class ContainerAllocator>
struct MoveResult_
{
  typedef MoveResult_<ContainerAllocator> Type;

  MoveResult_()
    : failure_reason()  {
    }
  MoveResult_(const ContainerAllocator& _alloc)
    : failure_reason(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _failure_reason_type;
  _failure_reason_type failure_reason;





  typedef boost::shared_ptr< ::lqrrt_ros::MoveResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::lqrrt_ros::MoveResult_<ContainerAllocator> const> ConstPtr;

}; // struct MoveResult_

typedef ::lqrrt_ros::MoveResult_<std::allocator<void> > MoveResult;

typedef boost::shared_ptr< ::lqrrt_ros::MoveResult > MoveResultPtr;
typedef boost::shared_ptr< ::lqrrt_ros::MoveResult const> MoveResultConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::lqrrt_ros::MoveResult_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::lqrrt_ros::MoveResult_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace lqrrt_ros

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'nav_msgs': ['/opt/ros/kinetic/share/nav_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'lqrrt_ros': ['/home/jerryrain/rrt_ws/devel/share/lqrrt_ros/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::lqrrt_ros::MoveResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::lqrrt_ros::MoveResult_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::lqrrt_ros::MoveResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::lqrrt_ros::MoveResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::lqrrt_ros::MoveResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::lqrrt_ros::MoveResult_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::lqrrt_ros::MoveResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2de13b23a1f75564b266f8fcabfafba6";
  }

  static const char* value(const ::lqrrt_ros::MoveResult_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2de13b23a1f75564ULL;
  static const uint64_t static_value2 = 0xb266f8fcabfafba6ULL;
};

template<class ContainerAllocator>
struct DataType< ::lqrrt_ros::MoveResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "lqrrt_ros/MoveResult";
  }

  static const char* value(const ::lqrrt_ros::MoveResult_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::lqrrt_ros::MoveResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
# Result\n\
\n\
string failure_reason\n\
\n\
";
  }

  static const char* value(const ::lqrrt_ros::MoveResult_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::lqrrt_ros::MoveResult_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.failure_reason);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MoveResult_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::lqrrt_ros::MoveResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::lqrrt_ros::MoveResult_<ContainerAllocator>& v)
  {
    s << indent << "failure_reason: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.failure_reason);
  }
};

} // namespace message_operations
} // namespace ros

#endif // LQRRT_ROS_MESSAGE_MOVERESULT_H
