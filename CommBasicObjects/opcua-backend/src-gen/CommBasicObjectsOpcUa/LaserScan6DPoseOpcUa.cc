#include "LaserScan6DPoseOpcUa.hh"

#define SERONET_NO_DEPRECATED
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ComplexType.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementPrimitives.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/SelfDescriptionArray.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementArray.hpp>

#include "CommBasicObjectsOpcUa/CommLaserScanOpcUa.hh"
#include "CommBasicObjectsOpcUa/CommPose3dOpcUa.hh"

namespace SeRoNet {
namespace CommunicationObjects {
namespace Description {
	
// serialization for CommBasicObjectsIDL::LaserScan6DPose
template <>
IDescription::shp_t SelfDescription(CommBasicObjectsIDL::LaserScan6DPose *obj, std::string name)
{
	auto ret = std::make_shared<SeRoNet::CommunicationObjects::Description::ComplexType>(name);
	// add laser_scan
	ret->add(
		SelfDescription(&(obj->laser_scan), "Laser_scan")
	);
	// add sensor_pose
	ret->add(
		SelfDescription(&(obj->sensor_pose), "Sensor_pose")
	);
	return ret;
} // end SelfDescription

} // end namespace Description
} // end namespace CommunicationObjects
} // end namespace SeRoNet
