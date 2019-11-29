#include "CommPersonTrackingListOpcUa.hh"

#define SERONET_NO_DEPRECATED
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ComplexType.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementPrimitives.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/SelfDescriptionArray.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementArray.hpp>

#include "CommTrackingObjectsOpcUa/CommTrackedPersonOpcUa.hh"

namespace SeRoNet {
namespace CommunicationObjects {
namespace Description {
	
// serialization for CommTrackingObjectsIDL::CommPersonTrackingList
template <>
IDescription::shp_t SelfDescription(CommTrackingObjectsIDL::CommPersonTrackingList *obj, std::string name)
{
	auto ret = std::make_shared<SeRoNet::CommunicationObjects::Description::ComplexType>(name);
	// add trackedPersons
	ret->add(
		SelfDescription(&(obj->trackedPersons), "TrackedPersons")
	);
	// add followedPerson
	ret->add(
		SelfDescription(&(obj->followedPerson), "FollowedPerson")
	);
	// add isValid
	ret->add(
		SelfDescription(&(obj->isValid), "IsValid")
	);
	return ret;
} // end SelfDescription

} // end namespace Description
} // end namespace CommunicationObjects
} // end namespace SeRoNet
