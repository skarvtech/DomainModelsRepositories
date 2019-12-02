#include "CommPTUMoveResponseOpcUa.hh"

#define SERONET_NO_DEPRECATED
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ComplexType.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementPrimitives.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/SelfDescriptionArray.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementArray.hpp>

#include "CommBasicObjectsOpcUa/CommPose3dOpcUa.hh"
#include "CommBasicObjectsOpcUa/CommBaseStateOpcUa.hh"

namespace SeRoNet {
namespace CommunicationObjects {
namespace Description {
	
// serialization for DomainPTUIDL::CommPTUMoveResponse
template <>
IDescription::shp_t SelfDescription(DomainPTUIDL::CommPTUMoveResponse *obj, std::string name)
{
	auto ret = std::make_shared<SeRoNet::CommunicationObjects::Description::ComplexType>(name);
	// add devicePose
	ret->add(
		SelfDescription(&(obj->devicePose), "DevicePose")
	);
	// add stateBase
	ret->add(
		SelfDescription(&(obj->stateBase), "StateBase")
	);
	// add status
	ret->add(
		SelfDescription(&(obj->status), "Status")
	);
	return ret;
} // end SelfDescription

} // end namespace Description
} // end namespace CommunicationObjects
} // end namespace SeRoNet
