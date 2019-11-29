#include "CommCoordinatedNavigationDataResponseOpcUa.hh"

#define SERONET_NO_DEPRECATED
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ComplexType.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementPrimitives.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/SelfDescriptionArray.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementArray.hpp>

#include "CommRobotinoObjectsOpcUa/CommPathFreeAreaOpcUa.hh"

namespace SeRoNet {
namespace CommunicationObjects {
namespace Description {
	
// serialization for CommRobotinoObjectsIDL::CommCoordinatedNavigationDataResponse
template <>
IDescription::shp_t SelfDescription(CommRobotinoObjectsIDL::CommCoordinatedNavigationDataResponse *obj, std::string name)
{
	auto ret = std::make_shared<SeRoNet::CommunicationObjects::Description::ComplexType>(name);
	// add isValid
	ret->add(
		SelfDescription(&(obj->isValid), "IsValid")
	);
	// add area
	ret->add(
		SelfDescription(&(obj->area), "Area")
	);
	return ret;
} // end SelfDescription

} // end namespace Description
} // end namespace CommunicationObjects
} // end namespace SeRoNet
