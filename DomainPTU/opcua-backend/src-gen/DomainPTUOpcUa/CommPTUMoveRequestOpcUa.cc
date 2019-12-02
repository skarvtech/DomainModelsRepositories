#include "CommPTUMoveRequestOpcUa.hh"

#define SERONET_NO_DEPRECATED
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ComplexType.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementPrimitives.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/SelfDescriptionArray.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementArray.hpp>

#include "CommBasicObjectsOpcUa/CommPosition3dOpcUa.hh"

namespace SeRoNet {
namespace CommunicationObjects {
namespace Description {
	
// serialization for DomainPTUIDL::CommPTUMoveRequest
template <>
IDescription::shp_t SelfDescription(DomainPTUIDL::CommPTUMoveRequest *obj, std::string name)
{
	auto ret = std::make_shared<SeRoNet::CommunicationObjects::Description::ComplexType>(name);
	// add pan
	ret->add(
		SelfDescription(&(obj->pan), "Pan")
	);
	// add tilt
	ret->add(
		SelfDescription(&(obj->tilt), "Tilt")
	);
	// add point
	ret->add(
		SelfDescription(&(obj->point), "Point")
	);
	// add flag
	ret->add(
		SelfDescription(&(obj->flag), "Flag")
	);
	return ret;
} // end SelfDescription

} // end namespace Description
} // end namespace CommunicationObjects
} // end namespace SeRoNet
