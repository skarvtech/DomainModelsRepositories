#include "CommPathNavigationNodePathRequestOpcUa.hh"

#define SERONET_NO_DEPRECATED
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ComplexType.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementPrimitives.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/SelfDescriptionArray.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementArray.hpp>


namespace SeRoNet {
namespace CommunicationObjects {
namespace Description {
	
// serialization for CommRobotinoObjectsIDL::CommPathNavigationNodePathRequest
template <>
IDescription::shp_t SelfDescription(CommRobotinoObjectsIDL::CommPathNavigationNodePathRequest *obj, std::string name)
{
	auto ret = std::make_shared<SeRoNet::CommunicationObjects::Description::ComplexType>(name);
	// add startPose
	ret->add(
		SelfDescription(&(obj->startPose), "StartPose")
	);
	// add goalPose
	ret->add(
		SelfDescription(&(obj->goalPose), "GoalPose")
	);
	return ret;
} // end SelfDescription

} // end namespace Description
} // end namespace CommunicationObjects
} // end namespace SeRoNet
