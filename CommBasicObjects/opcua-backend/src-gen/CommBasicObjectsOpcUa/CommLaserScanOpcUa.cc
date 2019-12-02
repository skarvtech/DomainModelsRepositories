#include "CommLaserScanOpcUa.hh"

#define SERONET_NO_DEPRECATED
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ComplexType.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementPrimitives.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/SelfDescriptionArray.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementArray.hpp>

#include "CommBasicObjectsOpcUa/CommTimeStampOpcUa.hh"
#include "CommBasicObjectsOpcUa/LaserScanPointOpcUa.hh"

namespace SeRoNet {
namespace CommunicationObjects {
namespace Description {
	
// serialization for CommBasicObjectsIDL::CommLaserScan
template <>
IDescription::shp_t SelfDescription(CommBasicObjectsIDL::CommLaserScan *obj, std::string name)
{
	auto ret = std::make_shared<SeRoNet::CommunicationObjects::Description::ComplexType>(name);
	// add is_valid
	ret->add(
		SelfDescription(&(obj->is_valid), "Is_valid")
	);
	// add time
	ret->add(
		SelfDescription(&(obj->time), "Time")
	);
	// add update_count
	ret->add(
		SelfDescription(&(obj->update_count), "Update_count")
	);
	// add start_angle
	ret->add(
		SelfDescription(&(obj->start_angle), "Start_angle")
	);
	// add resolution
	ret->add(
		SelfDescription(&(obj->resolution), "Resolution")
	);
	// add distance_min
	ret->add(
		SelfDescription(&(obj->distance_min), "Distance_min")
	);
	// add distance_max
	ret->add(
		SelfDescription(&(obj->distance_max), "Distance_max")
	);
	// add length_unit
	ret->add(
		SelfDescription(&(obj->length_unit), "Length_unit")
	);
	// add scan_points
	ret->add(
		SelfDescription(&(obj->scan_points), "Scan_points")
	);
	// add max_scan_points
	ret->add(
		SelfDescription(&(obj->max_scan_points), "Max_scan_points")
	);
	return ret;
} // end SelfDescription

} // end namespace Description
} // end namespace CommunicationObjects
} // end namespace SeRoNet
