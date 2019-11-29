#include "CommNavigationTopologyMapOpcUa.hh"

#define SERONET_NO_DEPRECATED
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ComplexType.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementPrimitives.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/SelfDescriptionArray.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementArray.hpp>

#include "CommNavigationObjectsOpcUa/CommNavigationTopologyPartOpcUa.hh"
#include "CommNavigationObjectsOpcUa/CommNavigationTopologyConnectionOpcUa.hh"

namespace SeRoNet {
namespace CommunicationObjects {
namespace Description {
	
// serialization for CommNavigationObjectsIDL::CommNavigationTopologyMap
template <>
IDescription::shp_t SelfDescription(CommNavigationObjectsIDL::CommNavigationTopologyMap *obj, std::string name)
{
	auto ret = std::make_shared<SeRoNet::CommunicationObjects::Description::ComplexType>(name);
	// add isValid
	ret->add(
		SelfDescription(&(obj->isValid), "IsValid")
	);
	// add vertices
	ret->add(
		SelfDescription(&(obj->vertices), "Vertices")
	);
	// add edges
	ret->add(
		SelfDescription(&(obj->edges), "Edges")
	);
	return ret;
} // end SelfDescription

} // end namespace Description
} // end namespace CommunicationObjects
} // end namespace SeRoNet
