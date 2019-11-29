#include "CommDepthImageOpcUa.hh"

#define SERONET_NO_DEPRECATED
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ComplexType.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementPrimitives.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/SelfDescriptionArray.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementArray.hpp>


namespace SeRoNet {
namespace CommunicationObjects {
namespace Description {
	
// serialization for DomainVisionIDL::CommDepthImage
template <>
IDescription::shp_t SelfDescription(DomainVisionIDL::CommDepthImage *obj, std::string name)
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
	// add pixel_size
	ret->add(
		SelfDescription(&(obj->pixel_size), "Pixel_size")
	);
	// add min_distcance
	ret->add(
		SelfDescription(&(obj->min_distcance), "Min_distcance")
	);
	// add max_distcance
	ret->add(
		SelfDescription(&(obj->max_distcance), "Max_distcance")
	);
	// add data
	ret->add(
		SelfDescription(&(obj->data), "Data")
	);
	// add intrinsic_m
	ret->add(
		SelfDescription(&(obj->intrinsic_m), "Intrinsic_m")
	);
	// add extrinsic_m
	ret->add(
		SelfDescription(&(obj->extrinsic_m), "Extrinsic_m")
	);
	// add stereo_m
	ret->add(
		SelfDescription(&(obj->stereo_m), "Stereo_m")
	);
	// add distortion_m
	ret->add(
		SelfDescription(&(obj->distortion_m), "Distortion_m")
	);
	// add distortion_model
	ret->add(
		SelfDescription(&(obj->distortion_model), "Distortion_model")
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
