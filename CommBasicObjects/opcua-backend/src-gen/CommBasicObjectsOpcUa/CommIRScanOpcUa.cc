#include "CommIRScanOpcUa.hh"

#define SERONET_NO_DEPRECATED
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ComplexType.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementPrimitives.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/SelfDescriptionArray.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementArray.hpp>

#include "CommBasicObjectsOpcUa/CommPose3dOpcUa.hh"
#include "CommBasicObjectsOpcUa/CommTimeStampOpcUa.hh"

namespace SeRoNet {
namespace CommunicationObjects {
namespace Description {
	
// serialization for CommBasicObjectsIDL::CommIRScan
template <>
IDescription::shp_t SelfDescription(CommBasicObjectsIDL::CommIRScan *obj, std::string name)
{
	auto ret = std::make_shared<SeRoNet::CommunicationObjects::Description::ComplexType>(name);
	// add distance_min
	ret->add(
		SelfDescription(&(obj->distance_min), "Distance_min")
	);
	// add distance_max
	ret->add(
		SelfDescription(&(obj->distance_max), "Distance_max")
	);
	// add poses3D
	ret->add(
		SelfDescription(&(obj->poses3D), "Poses3D")
	);
	// add distances
	ret->add(
		SelfDescription(&(obj->distances), "Distances")
	);
	// add timeStamp
	ret->add(
		SelfDescription(&(obj->timeStamp), "TimeStamp")
	);
	// add raw_readings
	ret->add(
		SelfDescription(&(obj->raw_readings), "Raw_readings")
	);
	return ret;
} // end SelfDescription

} // end namespace Description
} // end namespace CommunicationObjects
} // end namespace SeRoNet
