#include "LaserScanPointOpcUa.hh"

#define SERONET_NO_DEPRECATED
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ComplexType.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementPrimitives.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/SelfDescriptionArray.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementArray.hpp>


namespace SeRoNet {
namespace CommunicationObjects {
namespace Description {
	
// serialization for CommBasicObjectsIDL::LaserScanPoint
template <>
IDescription::shp_t SelfDescription(CommBasicObjectsIDL::LaserScanPoint *obj, std::string name)
{
	auto ret = std::make_shared<SeRoNet::CommunicationObjects::Description::ComplexType>(name);
	// add index
	ret->add(
		SelfDescription(&(obj->index), "Index")
	);
	// add distance
	ret->add(
		SelfDescription(&(obj->distance), "Distance")
	);
	// add intensity
	ret->add(
		SelfDescription(&(obj->intensity), "Intensity")
	);
	return ret;
} // end SelfDescription

} // end namespace Description
} // end namespace CommunicationObjects
} // end namespace SeRoNet
