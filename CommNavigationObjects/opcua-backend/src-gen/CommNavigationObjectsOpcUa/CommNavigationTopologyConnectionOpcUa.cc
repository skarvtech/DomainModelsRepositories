#include "CommNavigationTopologyConnectionOpcUa.hh"

#define SERONET_NO_DEPRECATED
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ComplexType.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementPrimitives.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/SelfDescriptionArray.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementArray.hpp>


namespace SeRoNet {
namespace CommunicationObjects {
namespace Description {
	
// serialization for CommNavigationObjectsIDL::CommNavigationTopologyConnection
template <>
IDescription::shp_t SelfDescription(CommNavigationObjectsIDL::CommNavigationTopologyConnection *obj, std::string name)
{
	auto ret = std::make_shared<SeRoNet::CommunicationObjects::Description::ComplexType>(name);
	// add type
	ret->add(
		SelfDescription(&(obj->type), "Type")
	);
	// add locationId
	ret->add(
		SelfDescription(&(obj->locationId), "LocationId")
	);
	// add fromPart
	ret->add(
		SelfDescription(&(obj->fromPart), "FromPart")
	);
	// add toPart
	ret->add(
		SelfDescription(&(obj->toPart), "ToPart")
	);
	return ret;
} // end SelfDescription

} // end namespace Description
} // end namespace CommunicationObjects
} // end namespace SeRoNet
