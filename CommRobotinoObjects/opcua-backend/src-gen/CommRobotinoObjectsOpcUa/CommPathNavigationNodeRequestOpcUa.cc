#include "CommPathNavigationNodeRequestOpcUa.hh"

#define SERONET_NO_DEPRECATED
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ComplexType.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementPrimitives.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/SelfDescriptionArray.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementArray.hpp>

#include "CommRobotinoObjectsOpcUa/CommPathNodeOpcUa.hh"

namespace SeRoNet {
namespace CommunicationObjects {
namespace Description {
	
// serialization for CommRobotinoObjectsIDL::CommPathNavigationNodeRequest
template <>
IDescription::shp_t SelfDescription(CommRobotinoObjectsIDL::CommPathNavigationNodeRequest *obj, std::string name)
{
	auto ret = std::make_shared<SeRoNet::CommunicationObjects::Description::ComplexType>(name);
	// add requestType
	ret->add(
		SelfDescription(&(obj->requestType), "RequestType")
	);
	// add nodesList
	ret->add(
		SelfDescription(&(obj->nodesList), "NodesList")
	);
	// add robotID
	ret->add(
		SelfDescription(&(obj->robotID), "RobotID")
	);
	return ret;
} // end SelfDescription

} // end namespace Description
} // end namespace CommunicationObjects
} // end namespace SeRoNet
