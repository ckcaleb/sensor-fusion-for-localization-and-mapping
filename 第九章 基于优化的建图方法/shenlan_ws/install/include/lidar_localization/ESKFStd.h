// Generated by gencpp from file lidar_localization/ESKFStd.msg
// DO NOT EDIT!


#ifndef LIDAR_LOCALIZATION_MESSAGE_ESKFSTD_H
#define LIDAR_LOCALIZATION_MESSAGE_ESKFSTD_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace lidar_localization
{
template <class ContainerAllocator>
struct ESKFStd_
{
  typedef ESKFStd_<ContainerAllocator> Type;

  ESKFStd_()
    : header()
    , delta_pos_x_std(0.0)
    , delta_pos_y_std(0.0)
    , delta_pos_z_std(0.0)
    , delta_vel_x_std(0.0)
    , delta_vel_y_std(0.0)
    , delta_vel_z_std(0.0)
    , delta_ori_x_std(0.0)
    , delta_ori_y_std(0.0)
    , delta_ori_z_std(0.0)
    , gyro_bias_x_std(0.0)
    , gyro_bias_y_std(0.0)
    , gyro_bias_z_std(0.0)
    , accel_bias_x_std(0.0)
    , accel_bias_y_std(0.0)
    , accel_bias_z_std(0.0)  {
    }
  ESKFStd_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , delta_pos_x_std(0.0)
    , delta_pos_y_std(0.0)
    , delta_pos_z_std(0.0)
    , delta_vel_x_std(0.0)
    , delta_vel_y_std(0.0)
    , delta_vel_z_std(0.0)
    , delta_ori_x_std(0.0)
    , delta_ori_y_std(0.0)
    , delta_ori_z_std(0.0)
    , gyro_bias_x_std(0.0)
    , gyro_bias_y_std(0.0)
    , gyro_bias_z_std(0.0)
    , accel_bias_x_std(0.0)
    , accel_bias_y_std(0.0)
    , accel_bias_z_std(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef double _delta_pos_x_std_type;
  _delta_pos_x_std_type delta_pos_x_std;

   typedef double _delta_pos_y_std_type;
  _delta_pos_y_std_type delta_pos_y_std;

   typedef double _delta_pos_z_std_type;
  _delta_pos_z_std_type delta_pos_z_std;

   typedef double _delta_vel_x_std_type;
  _delta_vel_x_std_type delta_vel_x_std;

   typedef double _delta_vel_y_std_type;
  _delta_vel_y_std_type delta_vel_y_std;

   typedef double _delta_vel_z_std_type;
  _delta_vel_z_std_type delta_vel_z_std;

   typedef double _delta_ori_x_std_type;
  _delta_ori_x_std_type delta_ori_x_std;

   typedef double _delta_ori_y_std_type;
  _delta_ori_y_std_type delta_ori_y_std;

   typedef double _delta_ori_z_std_type;
  _delta_ori_z_std_type delta_ori_z_std;

   typedef double _gyro_bias_x_std_type;
  _gyro_bias_x_std_type gyro_bias_x_std;

   typedef double _gyro_bias_y_std_type;
  _gyro_bias_y_std_type gyro_bias_y_std;

   typedef double _gyro_bias_z_std_type;
  _gyro_bias_z_std_type gyro_bias_z_std;

   typedef double _accel_bias_x_std_type;
  _accel_bias_x_std_type accel_bias_x_std;

   typedef double _accel_bias_y_std_type;
  _accel_bias_y_std_type accel_bias_y_std;

   typedef double _accel_bias_z_std_type;
  _accel_bias_z_std_type accel_bias_z_std;





  typedef boost::shared_ptr< ::lidar_localization::ESKFStd_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::lidar_localization::ESKFStd_<ContainerAllocator> const> ConstPtr;

}; // struct ESKFStd_

typedef ::lidar_localization::ESKFStd_<std::allocator<void> > ESKFStd;

typedef boost::shared_ptr< ::lidar_localization::ESKFStd > ESKFStdPtr;
typedef boost::shared_ptr< ::lidar_localization::ESKFStd const> ESKFStdConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::lidar_localization::ESKFStd_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::lidar_localization::ESKFStd_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::lidar_localization::ESKFStd_<ContainerAllocator1> & lhs, const ::lidar_localization::ESKFStd_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.delta_pos_x_std == rhs.delta_pos_x_std &&
    lhs.delta_pos_y_std == rhs.delta_pos_y_std &&
    lhs.delta_pos_z_std == rhs.delta_pos_z_std &&
    lhs.delta_vel_x_std == rhs.delta_vel_x_std &&
    lhs.delta_vel_y_std == rhs.delta_vel_y_std &&
    lhs.delta_vel_z_std == rhs.delta_vel_z_std &&
    lhs.delta_ori_x_std == rhs.delta_ori_x_std &&
    lhs.delta_ori_y_std == rhs.delta_ori_y_std &&
    lhs.delta_ori_z_std == rhs.delta_ori_z_std &&
    lhs.gyro_bias_x_std == rhs.gyro_bias_x_std &&
    lhs.gyro_bias_y_std == rhs.gyro_bias_y_std &&
    lhs.gyro_bias_z_std == rhs.gyro_bias_z_std &&
    lhs.accel_bias_x_std == rhs.accel_bias_x_std &&
    lhs.accel_bias_y_std == rhs.accel_bias_y_std &&
    lhs.accel_bias_z_std == rhs.accel_bias_z_std;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::lidar_localization::ESKFStd_<ContainerAllocator1> & lhs, const ::lidar_localization::ESKFStd_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace lidar_localization

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::lidar_localization::ESKFStd_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::lidar_localization::ESKFStd_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::lidar_localization::ESKFStd_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::lidar_localization::ESKFStd_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::lidar_localization::ESKFStd_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::lidar_localization::ESKFStd_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::lidar_localization::ESKFStd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ab13091af10d5ae8e76adaf8e34014b3";
  }

  static const char* value(const ::lidar_localization::ESKFStd_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xab13091af10d5ae8ULL;
  static const uint64_t static_value2 = 0xe76adaf8e34014b3ULL;
};

template<class ContainerAllocator>
struct DataType< ::lidar_localization::ESKFStd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "lidar_localization/ESKFStd";
  }

  static const char* value(const ::lidar_localization::ESKFStd_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::lidar_localization::ESKFStd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# time of ESKF estimation:\n"
"Header header\n"
"\n"
"# a. position:\n"
"float64 delta_pos_x_std\n"
"float64 delta_pos_y_std\n"
"float64 delta_pos_z_std\n"
"\n"
"# b. velocity:\n"
"float64 delta_vel_x_std\n"
"float64 delta_vel_y_std\n"
"float64 delta_vel_z_std\n"
"\n"
"# c. orientation:\n"
"float64 delta_ori_x_std\n"
"float64 delta_ori_y_std\n"
"float64 delta_ori_z_std\n"
"\n"
"# d. gyro. bias:\n"
"float64 gyro_bias_x_std\n"
"float64 gyro_bias_y_std\n"
"float64 gyro_bias_z_std\n"
"\n"
"# e. accel. bias:\n"
"float64 accel_bias_x_std\n"
"float64 accel_bias_y_std\n"
"float64 accel_bias_z_std\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
;
  }

  static const char* value(const ::lidar_localization::ESKFStd_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::lidar_localization::ESKFStd_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.delta_pos_x_std);
      stream.next(m.delta_pos_y_std);
      stream.next(m.delta_pos_z_std);
      stream.next(m.delta_vel_x_std);
      stream.next(m.delta_vel_y_std);
      stream.next(m.delta_vel_z_std);
      stream.next(m.delta_ori_x_std);
      stream.next(m.delta_ori_y_std);
      stream.next(m.delta_ori_z_std);
      stream.next(m.gyro_bias_x_std);
      stream.next(m.gyro_bias_y_std);
      stream.next(m.gyro_bias_z_std);
      stream.next(m.accel_bias_x_std);
      stream.next(m.accel_bias_y_std);
      stream.next(m.accel_bias_z_std);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ESKFStd_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::lidar_localization::ESKFStd_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::lidar_localization::ESKFStd_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "delta_pos_x_std: ";
    Printer<double>::stream(s, indent + "  ", v.delta_pos_x_std);
    s << indent << "delta_pos_y_std: ";
    Printer<double>::stream(s, indent + "  ", v.delta_pos_y_std);
    s << indent << "delta_pos_z_std: ";
    Printer<double>::stream(s, indent + "  ", v.delta_pos_z_std);
    s << indent << "delta_vel_x_std: ";
    Printer<double>::stream(s, indent + "  ", v.delta_vel_x_std);
    s << indent << "delta_vel_y_std: ";
    Printer<double>::stream(s, indent + "  ", v.delta_vel_y_std);
    s << indent << "delta_vel_z_std: ";
    Printer<double>::stream(s, indent + "  ", v.delta_vel_z_std);
    s << indent << "delta_ori_x_std: ";
    Printer<double>::stream(s, indent + "  ", v.delta_ori_x_std);
    s << indent << "delta_ori_y_std: ";
    Printer<double>::stream(s, indent + "  ", v.delta_ori_y_std);
    s << indent << "delta_ori_z_std: ";
    Printer<double>::stream(s, indent + "  ", v.delta_ori_z_std);
    s << indent << "gyro_bias_x_std: ";
    Printer<double>::stream(s, indent + "  ", v.gyro_bias_x_std);
    s << indent << "gyro_bias_y_std: ";
    Printer<double>::stream(s, indent + "  ", v.gyro_bias_y_std);
    s << indent << "gyro_bias_z_std: ";
    Printer<double>::stream(s, indent + "  ", v.gyro_bias_z_std);
    s << indent << "accel_bias_x_std: ";
    Printer<double>::stream(s, indent + "  ", v.accel_bias_x_std);
    s << indent << "accel_bias_y_std: ";
    Printer<double>::stream(s, indent + "  ", v.accel_bias_y_std);
    s << indent << "accel_bias_z_std: ";
    Printer<double>::stream(s, indent + "  ", v.accel_bias_z_std);
  }
};

} // namespace message_operations
} // namespace ros

#endif // LIDAR_LOCALIZATION_MESSAGE_ESKFSTD_H
