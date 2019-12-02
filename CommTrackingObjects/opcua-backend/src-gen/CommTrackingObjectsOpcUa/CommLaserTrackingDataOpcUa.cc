#include "CommLaserTrackingDataOpcUa.hh"

#define SERONET_NO_DEPRECATED
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ComplexType.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementPrimitives.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/SelfDescriptionArray.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementArray.hpp>

#include "CommBasicObjectsOpcUa/CommMobileLaserScanOpcUa.hh"
#include "CommTrackingObjectsOpcUa/CommLaserTrackedObjectOpcUa.hh"

namespace SeRoNet {
namespace CommunicationObjects {
namespace Description {
	
// serialization for CommTrackingObjectsIDL::CommLaserTrackingData
template <>
IDescription::shp_t SelfDescription(CommTrackingObjectsIDL::CommLaserTrackingData *obj, std::string name)
{
	auto ret = std::make_shared<SeRoNet::CommunicationObjects::Description::ComplexType>(name);
	// add scan
	ret->add(
		SelfDescription(&(obj->scan), "Scan")
	);
	// add objects
	ret->add(
		SelfDescription(&(obj->objects), "Objects")
	);
	return ret;
} // end SelfDescription

} // end namespace Description
} // end namespace CommunicationObjects
} // end namespace SeRoNet
