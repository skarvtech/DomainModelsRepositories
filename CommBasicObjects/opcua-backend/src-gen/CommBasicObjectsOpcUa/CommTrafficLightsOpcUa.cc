#include "CommTrafficLightsOpcUa.hh"

#define SERONET_NO_DEPRECATED
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ComplexType.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementPrimitives.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/SelfDescriptionArray.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementArray.hpp>


namespace SeRoNet {
namespace CommunicationObjects {
namespace Description {
	
// serialization for CommBasicObjectsIDL::CommTrafficLights
template <>
IDescription::shp_t SelfDescription(CommBasicObjectsIDL::CommTrafficLights *obj, std::string name)
{
	auto ret = std::make_shared<SeRoNet::CommunicationObjects::Description::ComplexType>(name);
	// add red
	ret->add(
		SelfDescription(&(obj->red), "Red")
	);
	// add yellow
	ret->add(
		SelfDescription(&(obj->yellow), "Yellow")
	);
	// add green
	ret->add(
		SelfDescription(&(obj->green), "Green")
	);
	return ret;
} // end SelfDescription

} // end namespace Description
} // end namespace CommunicationObjects
} // end namespace SeRoNet
