#include "ImageParametersOpcUa.hh"

#define SERONET_NO_DEPRECATED
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ComplexType.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementPrimitives.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/SelfDescriptionArray.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementArray.hpp>


namespace SeRoNet {
namespace CommunicationObjects {
namespace Description {
	
// serialization for DomainVisionIDL::ImageParameters
template <>
IDescription::shp_t SelfDescription(DomainVisionIDL::ImageParameters *obj, std::string name)
{
	auto ret = std::make_shared<SeRoNet::CommunicationObjects::Description::ComplexType>(name);
	// add width
	ret->add(
		SelfDescription(&(obj->width), "Width")
	);
	// add height
	ret->add(
		SelfDescription(&(obj->height), "Height")
	);
	// add format
	ret->add(
		SelfDescription(&(obj->format), "Format")
	);
	// add depth
	ret->add(
		SelfDescription(&(obj->depth), "Depth")
	);
	// add size
	ret->add(
		SelfDescription(&(obj->size), "Size")
	);
	return ret;
} // end SelfDescription

} // end namespace Description
} // end namespace CommunicationObjects
} // end namespace SeRoNet
