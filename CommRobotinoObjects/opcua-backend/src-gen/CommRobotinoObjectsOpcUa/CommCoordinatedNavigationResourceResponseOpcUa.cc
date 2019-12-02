#include "CommCoordinatedNavigationResourceResponseOpcUa.hh"

#define SERONET_NO_DEPRECATED
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ComplexType.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementPrimitives.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/SelfDescriptionArray.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementArray.hpp>


namespace SeRoNet {
namespace CommunicationObjects {
namespace Description {
	
// serialization for CommRobotinoObjectsIDL::CommCoordinatedNavigationResourceResponse
template <>
IDescription::shp_t SelfDescription(CommRobotinoObjectsIDL::CommCoordinatedNavigationResourceResponse *obj, std::string name)
{
	auto ret = std::make_shared<SeRoNet::CommunicationObjects::Description::ComplexType>(name);
	// add resourceID
	ret->add(
		SelfDescription(&(obj->resourceID), "ResourceID")
	);
	// add reservedSuccess
	ret->add(
		SelfDescription(&(obj->reservedSuccess), "ReservedSuccess")
	);
	// add remainingCapacity
	ret->add(
		SelfDescription(&(obj->remainingCapacity), "RemainingCapacity")
	);
	return ret;
} // end SelfDescription

} // end namespace Description
} // end namespace CommunicationObjects
} // end namespace SeRoNet
