#include "CommNavigationTopologyPartOpcUa.hh"

#define SERONET_NO_DEPRECATED
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ComplexType.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementPrimitives.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/SelfDescriptionArray.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementArray.hpp>


namespace SeRoNet {
namespace CommunicationObjects {
namespace Description {
	
// serialization for CommNavigationObjectsIDL::CommNavigationTopologyPart
template <>
IDescription::shp_t SelfDescription(CommNavigationObjectsIDL::CommNavigationTopologyPart *obj, std::string name)
{
	auto ret = std::make_shared<SeRoNet::CommunicationObjects::Description::ComplexType>(name);
	// add type
	ret->add(
		SelfDescription(&(obj->type), "Type")
	);
	// add id
	ret->add(
		SelfDescription(&(obj->id), "Id")
	);
	// add name
	ret->add(
		SelfDescription(&(obj->name), "Name")
	);
	// add contained_location_ids
	ret->add(
		SelfDescription(&(obj->contained_location_ids), "Contained_location_ids")
	);
	return ret;
} // end SelfDescription

} // end namespace Description
} // end namespace CommunicationObjects
} // end namespace SeRoNet
