#include "CommVisualTagOpcUa.hh"

#define SERONET_NO_DEPRECATED
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ComplexType.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementPrimitives.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/SelfDescriptionArray.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementArray.hpp>

#include "CommBasicObjectsOpcUa/CommPose3dOpcUa.hh"
#include "CommBasicObjectsOpcUa/CommBaseStateOpcUa.hh"
#include "CommBasicObjectsOpcUa/CommPose3dOpcUa.hh"

namespace SeRoNet {
namespace CommunicationObjects {
namespace Description {
	
// serialization for CommRobotinoObjectsIDL::CommVisualTag
template <>
IDescription::shp_t SelfDescription(CommRobotinoObjectsIDL::CommVisualTag *obj, std::string name)
{
	auto ret = std::make_shared<SeRoNet::CommunicationObjects::Description::ComplexType>(name);
	// add tagID
	ret->add(
		SelfDescription(&(obj->tagID), "TagID")
	);
	// add tagPose
	ret->add(
		SelfDescription(&(obj->tagPose), "TagPose")
	);
	// add base_state
	ret->add(
		SelfDescription(&(obj->base_state), "Base_state")
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
