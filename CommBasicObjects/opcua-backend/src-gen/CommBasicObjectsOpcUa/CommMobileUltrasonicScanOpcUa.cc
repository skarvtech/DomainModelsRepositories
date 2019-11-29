#include "CommMobileUltrasonicScanOpcUa.hh"

#define SERONET_NO_DEPRECATED
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ComplexType.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementPrimitives.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/SelfDescriptionArray.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementArray.hpp>

#include "CommBasicObjectsOpcUa/CommBaseStateOpcUa.hh"
#include "CommBasicObjectsOpcUa/CommUltrasonicScanOpcUa.hh"

namespace SeRoNet {
namespace CommunicationObjects {
namespace Description {
	
// serialization for CommBasicObjectsIDL::CommMobileUltrasonicScan
template <>
IDescription::shp_t SelfDescription(CommBasicObjectsIDL::CommMobileUltrasonicScan *obj, std::string name)
{
	auto ret = std::make_shared<SeRoNet::CommunicationObjects::Description::ComplexType>(name);
	// add baseState
	ret->add(
		SelfDescription(&(obj->baseState), "BaseState")
	);
	// add usScan
	ret->add(
		SelfDescription(&(obj->usScan), "UsScan")
	);
	return ret;
} // end SelfDescription

} // end namespace Description
} // end namespace CommunicationObjects
} // end namespace SeRoNet
