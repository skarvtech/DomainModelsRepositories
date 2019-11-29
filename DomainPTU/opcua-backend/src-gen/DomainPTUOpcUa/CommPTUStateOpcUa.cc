#include "CommPTUStateOpcUa.hh"

#define SERONET_NO_DEPRECATED
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ComplexType.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementPrimitives.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/SelfDescriptionArray.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementArray.hpp>

#include "CommBasicObjectsOpcUa/CommPose3dOpcUa.hh"

namespace SeRoNet {
namespace CommunicationObjects {
namespace Description {
	
// serialization for DomainPTUIDL::CommPTUState
template <>
IDescription::shp_t SelfDescription(DomainPTUIDL::CommPTUState *obj, std::string name)
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
	// add pose_PTU
	ret->add(
		SelfDescription(&(obj->pose_PTU), "Pose_PTU")
	);
	// add is_valid
	ret->add(
		SelfDescription(&(obj->is_valid), "Is_valid")
	);
	return ret;
} // end SelfDescription

} // end namespace Description
} // end namespace CommunicationObjects
} // end namespace SeRoNet
