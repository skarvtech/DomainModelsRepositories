#include "CommPersonDetectionEventResultOpcUa.hh"

#define SERONET_NO_DEPRECATED
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ComplexType.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementPrimitives.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/SelfDescriptionArray.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementArray.hpp>


namespace SeRoNet {
namespace CommunicationObjects {
namespace Description {
	
// serialization for CommTrackingObjectsIDL::CommPersonDetectionEventResult
template <>
IDescription::shp_t SelfDescription(CommTrackingObjectsIDL::CommPersonDetectionEventResult *obj, std::string name)
{
	auto ret = std::make_shared<SeRoNet::CommunicationObjects::Description::ComplexType>(name);
	// add environment_id
	ret->add(
		SelfDescription(&(obj->environment_id), "Environment_id")
	);
	// add person_id
	ret->add(
		SelfDescription(&(obj->person_id), "Person_id")
	);
	return ret;
} // end SelfDescription

} // end namespace Description
} // end namespace CommunicationObjects
} // end namespace SeRoNet
