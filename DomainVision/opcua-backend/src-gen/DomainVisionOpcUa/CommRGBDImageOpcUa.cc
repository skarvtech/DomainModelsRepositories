#include "CommRGBDImageOpcUa.hh"

#define SERONET_NO_DEPRECATED
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ComplexType.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementPrimitives.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/SelfDescriptionArray.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementArray.hpp>

#include "DomainVisionOpcUa/CommVideoImageOpcUa.hh"
#include "DomainVisionOpcUa/CommDepthImageOpcUa.hh"
#include "CommBasicObjectsOpcUa/CommBaseStateOpcUa.hh"
#include "CommBasicObjectsOpcUa/CommPose3dOpcUa.hh"

namespace SeRoNet {
namespace CommunicationObjects {
namespace Description {
	
// serialization for DomainVisionIDL::CommRGBDImage
template <>
IDescription::shp_t SelfDescription(DomainVisionIDL::CommRGBDImage *obj, std::string name)
{
	auto ret = std::make_shared<SeRoNet::CommunicationObjects::Description::ComplexType>(name);
	// add color_image
	ret->add(
		SelfDescription(&(obj->color_image), "Color_image")
	);
	// add depth_image
	ret->add(
		SelfDescription(&(obj->depth_image), "Depth_image")
	);
	// add base_state
	ret->add(
		SelfDescription(&(obj->base_state), "Base_state")
	);
	// add sensor_pose
	ret->add(
		SelfDescription(&(obj->sensor_pose), "Sensor_pose")
	);
	// add seq_count
	ret->add(
		SelfDescription(&(obj->seq_count), "Seq_count")
	);
	// add is_valid
	ret->add(
		SelfDescription(&(obj->is_valid), "Is_valid")
	);
	return ret;
} // end SelfDescription

} // end namespace Description
} // end namespace CommunicationObjects
} // end namespace SeRoNet
