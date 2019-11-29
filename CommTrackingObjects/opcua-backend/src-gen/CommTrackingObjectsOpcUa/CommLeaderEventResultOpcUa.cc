#include "CommLeaderEventResultOpcUa.hh"

#define SERONET_NO_DEPRECATED
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ComplexType.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementPrimitives.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/SelfDescriptionArray.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementArray.hpp>


namespace SeRoNet {
namespace CommunicationObjects {
namespace Description {
	
// serialization for CommTrackingObjectsIDL::CommLeaderEventResult
template <>
IDescription::shp_t SelfDescription(CommTrackingObjectsIDL::CommLeaderEventResult *obj, std::string name)
{
	auto ret = std::make_shared<SeRoNet::CommunicationObjects::Description::ComplexType>(name);
	// add type
	ret->add(
		SelfDescription(&(obj->type), "Type")
	);
	// add goal_x
	ret->add(
		SelfDescription(&(obj->goal_x), "Goal_x")
	);
	// add goal_y
	ret->add(
		SelfDescription(&(obj->goal_y), "Goal_y")
	);
	return ret;
} // end SelfDescription

} // end namespace Description
} // end namespace CommunicationObjects
} // end namespace SeRoNet
