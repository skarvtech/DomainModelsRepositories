#include "CommVideoImageOpcUa.hh"

#define SERONET_NO_DEPRECATED
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ComplexType.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementPrimitives.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/SelfDescriptionArray.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementArray.hpp>

#include "DomainVisionOpcUa/ImageParametersOpcUa.hh"
#include "CommBasicObjectsOpcUa/CommPose3dOpcUa.hh"
#include "CommBasicObjectsOpcUa/CommBaseStateOpcUa.hh"

namespace SeRoNet {
namespace CommunicationObjects {
namespace Description {
	
// serialization for DomainVisionIDL::CommVideoImage
template <>
IDescription::shp_t SelfDescription(DomainVisionIDL::CommVideoImage *obj, std::string name)
{
	auto ret = std::make_shared<SeRoNet::CommunicationObjects::Description::ComplexType>(name);
	// add parameter
	ret->add(
		SelfDescription(&(obj->parameter), "Parameter")
	);
	// add data
	ret->add(
		SelfDescription(&(obj->data), "Data")
	);
	// add sensor_pose
	ret->add(
		SelfDescription(&(obj->sensor_pose), "Sensor_pose")
	);
	// add base_state
	ret->add(
		SelfDescription(&(obj->base_state), "Base_state")
	);
	// add is_valid
	ret->add(
		SelfDescription(&(obj->is_valid), "Is_valid")
	);
	// add seq_count
	ret->add(
		SelfDescription(&(obj->seq_count), "Seq_count")
	);
	// add intrinsic_m
	ret->add(
		SelfDescription(&(obj->intrinsic_m), "Intrinsic_m")
	);
	// add distortion_m
	ret->add(
		SelfDescription(&(obj->distortion_m), "Distortion_m")
	);
	// add distortion_model
	ret->add(
		SelfDescription(&(obj->distortion_model), "Distortion_model")
	);
	return ret;
} // end SelfDescription

} // end namespace Description
} // end namespace CommunicationObjects
} // end namespace SeRoNet
