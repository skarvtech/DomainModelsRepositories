#include "CommOrientation3dOpcUa.hh"

#define SERONET_NO_DEPRECATED
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ComplexType.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementPrimitives.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/SelfDescriptionArray.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementArray.hpp>


namespace SeRoNet {
namespace CommunicationObjects {
namespace Description {
	
// serialization for CommBasicObjectsIDL::CommOrientation3d
template <>
IDescription::shp_t SelfDescription(CommBasicObjectsIDL::CommOrientation3d *obj, std::string name)
{
	auto ret = std::make_shared<SeRoNet::CommunicationObjects::Description::ComplexType>(name);
	// add azimuth
	ret->add(
		SelfDescription(&(obj->azimuth), "Azimuth")
	);
	// add elevation
	ret->add(
		SelfDescription(&(obj->elevation), "Elevation")
	);
	// add roll
	ret->add(
		SelfDescription(&(obj->roll), "Roll")
	);
	return ret;
} // end SelfDescription

} // end namespace Description
} // end namespace CommunicationObjects
} // end namespace SeRoNet
