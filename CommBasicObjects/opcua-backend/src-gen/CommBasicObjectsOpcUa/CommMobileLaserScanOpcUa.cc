#include "CommMobileLaserScanOpcUa.hh"

#define SERONET_NO_DEPRECATED
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ComplexType.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementPrimitives.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/SelfDescriptionArray.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementArray.hpp>

#include "CommBasicObjectsOpcUa/CommBaseStateOpcUa.hh"
#include "CommBasicObjectsOpcUa/LaserScan6DPoseOpcUa.hh"
#include "CommBasicObjectsOpcUa/CommPose3dOpcUa.hh"

namespace SeRoNet {
namespace CommunicationObjects {
namespace Description {
	
// serialization for CommBasicObjectsIDL::CommMobileLaserScan
template <>
IDescription::shp_t SelfDescription(CommBasicObjectsIDL::CommMobileLaserScan *obj, std::string name)
{
	auto ret = std::make_shared<SeRoNet::CommunicationObjects::Description::ComplexType>(name);
	// add base_state
	ret->add(
		SelfDescription(&(obj->base_state), "Base_state")
	);
	// add laser_scan_pose
	ret->add(
		SelfDescription(&(obj->laser_scan_pose), "Laser_scan_pose")
	);
	// add laser_world_pose
	ret->add(
		SelfDescription(&(obj->laser_world_pose), "Laser_world_pose")
	);
	return ret;
} // end SelfDescription

} // end namespace Description
} // end namespace CommunicationObjects
} // end namespace SeRoNet
