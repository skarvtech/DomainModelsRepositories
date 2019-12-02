#include "CommCoordinatedNavigationResourceStateOpcUa.hh"

#define SERONET_NO_DEPRECATED
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ComplexType.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementPrimitives.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/SelfDescriptionArray.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementArray.hpp>


namespace SeRoNet {
namespace CommunicationObjects {
namespace Description {
	
// serialization for CommRobotinoObjectsIDL::CommCoordinatedNavigationResourceState
template <>
IDescription::shp_t SelfDescription(CommRobotinoObjectsIDL::CommCoordinatedNavigationResourceState *obj, std::string name)
{
	auto ret = std::make_shared<SeRoNet::CommunicationObjects::Description::ComplexType>(name);
	// add resourceID
	ret->add(
		SelfDescription(&(obj->resourceID), "ResourceID")
	);
	// add robotID
	ret->add(
		SelfDescription(&(obj->robotID), "RobotID")
	);
	// add state
	ret->add(
		SelfDescription(&(obj->state), "State")
	);
	// add remainingCapacity
	ret->add(
		SelfDescription(&(obj->remainingCapacity), "RemainingCapacity")
	);
	return ret;
} // end SelfDescription

} // end namespace Description
} // end namespace CommunicationObjects
} // end namespace SeRoNet
