#include "CommLaserTrackedObjectOpcUa.hh"

#define SERONET_NO_DEPRECATED
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ComplexType.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementPrimitives.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/SelfDescriptionArray.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementArray.hpp>


namespace SeRoNet {
namespace CommunicationObjects {
namespace Description {
	
// serialization for CommTrackingObjectsIDL::CommLaserTrackedObject
template <>
IDescription::shp_t SelfDescription(CommTrackingObjectsIDL::CommLaserTrackedObject *obj, std::string name)
{
	auto ret = std::make_shared<SeRoNet::CommunicationObjects::Description::ComplexType>(name);
	// add id
	ret->add(
		SelfDescription(&(obj->id), "Id")
	);
	// add first_point
	ret->add(
		SelfDescription(&(obj->first_point), "First_point")
	);
	// add last_point
	ret->add(
		SelfDescription(&(obj->last_point), "Last_point")
	);
	return ret;
} // end SelfDescription

} // end namespace Description
} // end namespace CommunicationObjects
} // end namespace SeRoNet
