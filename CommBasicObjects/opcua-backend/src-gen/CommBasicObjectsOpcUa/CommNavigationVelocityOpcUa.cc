#include "CommNavigationVelocityOpcUa.hh"

#define SERONET_NO_DEPRECATED
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ComplexType.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementPrimitives.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/SelfDescriptionArray.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementArray.hpp>


namespace SeRoNet {
namespace CommunicationObjects {
namespace Description {
	
// serialization for CommBasicObjectsIDL::CommNavigationVelocity
template <>
IDescription::shp_t SelfDescription(CommBasicObjectsIDL::CommNavigationVelocity *obj, std::string name)
{
	auto ret = std::make_shared<SeRoNet::CommunicationObjects::Description::ComplexType>(name);
	// add vX
	ret->add(
		SelfDescription(&(obj->vX), "VX")
	);
	// add vY
	ret->add(
		SelfDescription(&(obj->vY), "VY")
	);
	// add omega
	ret->add(
		SelfDescription(&(obj->omega), "Omega")
	);
	return ret;
} // end SelfDescription

} // end namespace Description
} // end namespace CommunicationObjects
} // end namespace SeRoNet
