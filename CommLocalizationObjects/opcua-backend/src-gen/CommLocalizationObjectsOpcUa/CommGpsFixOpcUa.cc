#include "CommGpsFixOpcUa.hh"

#define SERONET_NO_DEPRECATED
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ComplexType.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementPrimitives.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/SelfDescriptionArray.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementArray.hpp>


namespace SeRoNet {
namespace CommunicationObjects {
namespace Description {
	
// serialization for CommLocalizationObjectsIDL::CommGpsFix
template <>
IDescription::shp_t SelfDescription(CommLocalizationObjectsIDL::CommGpsFix *obj, std::string name)
{
	auto ret = std::make_shared<SeRoNet::CommunicationObjects::Description::ComplexType>(name);
	// add gps_timestamp
	ret->add(
		SelfDescription(&(obj->gps_timestamp), "Gps_timestamp")
	);
	// add is_2D
	ret->add(
		SelfDescription(&(obj->is_2D), "Is_2D")
	);
	// add is_3D
	ret->add(
		SelfDescription(&(obj->is_3D), "Is_3D")
	);
	// add satellites_visible
	ret->add(
		SelfDescription(&(obj->satellites_visible), "Satellites_visible")
	);
	// add satellites_used
	ret->add(
		SelfDescription(&(obj->satellites_used), "Satellites_used")
	);
	// add latitude
	ret->add(
		SelfDescription(&(obj->latitude), "Latitude")
	);
	// add longitude
	ret->add(
		SelfDescription(&(obj->longitude), "Longitude")
	);
	// add altitude
	ret->add(
		SelfDescription(&(obj->altitude), "Altitude")
	);
	// add speed
	ret->add(
		SelfDescription(&(obj->speed), "Speed")
	);
	// add climb
	ret->add(
		SelfDescription(&(obj->climb), "Climb")
	);
	// add latitude_uncertainty
	ret->add(
		SelfDescription(&(obj->latitude_uncertainty), "Latitude_uncertainty")
	);
	// add longitude_uncertainty
	ret->add(
		SelfDescription(&(obj->longitude_uncertainty), "Longitude_uncertainty")
	);
	// add altitude_uncertainty
	ret->add(
		SelfDescription(&(obj->altitude_uncertainty), "Altitude_uncertainty")
	);
	// add speed_uncertainty
	ret->add(
		SelfDescription(&(obj->speed_uncertainty), "Speed_uncertainty")
	);
	// add climb_uncertainty
	ret->add(
		SelfDescription(&(obj->climb_uncertainty), "Climb_uncertainty")
	);
	return ret;
} // end SelfDescription

} // end namespace Description
} // end namespace CommunicationObjects
} // end namespace SeRoNet
