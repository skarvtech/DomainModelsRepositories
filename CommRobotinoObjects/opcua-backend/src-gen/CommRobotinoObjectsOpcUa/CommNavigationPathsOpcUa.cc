#include "CommNavigationPathsOpcUa.hh"

#define SERONET_NO_DEPRECATED
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ComplexType.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementPrimitives.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/SelfDescriptionArray.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementArray.hpp>

#include "CommRobotinoObjectsOpcUa/CommPathNodeOpcUa.hh"

namespace SeRoNet {
namespace CommunicationObjects {
namespace Description {
	
// serialization for CommRobotinoObjectsIDL::CommNavigationPaths
template <>
IDescription::shp_t SelfDescription(CommRobotinoObjectsIDL::CommNavigationPaths *obj, std::string name)
{
	auto ret = std::make_shared<SeRoNet::CommunicationObjects::Description::ComplexType>(name);
	// add nodes
	ret->add(
		SelfDescription(&(obj->nodes), "Nodes")
	);
	// add pathWidth
	ret->add(
		SelfDescription(&(obj->pathWidth), "PathWidth")
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
