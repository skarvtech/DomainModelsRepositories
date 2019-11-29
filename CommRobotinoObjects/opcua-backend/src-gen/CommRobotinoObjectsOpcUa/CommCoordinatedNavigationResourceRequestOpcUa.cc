#include "CommCoordinatedNavigationResourceRequestOpcUa.hh"

#define SERONET_NO_DEPRECATED
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ComplexType.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementPrimitives.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/SelfDescriptionArray.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementArray.hpp>


namespace SeRoNet {
namespace CommunicationObjects {
namespace Description {
	
// serialization for CommRobotinoObjectsIDL::CommCoordinatedNavigationResourceRequest
template <>
IDescription::shp_t SelfDescription(CommRobotinoObjectsIDL::CommCoordinatedNavigationResourceRequest *obj, std::string name)
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
	// add actionType
	ret->add(
		SelfDescription(&(obj->actionType), "ActionType")
	);
	return ret;
} // end SelfDescription

} // end namespace Description
} // end namespace CommunicationObjects
} // end namespace SeRoNet
