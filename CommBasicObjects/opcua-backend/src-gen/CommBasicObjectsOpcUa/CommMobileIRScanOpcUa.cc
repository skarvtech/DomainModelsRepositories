#include "CommMobileIRScanOpcUa.hh"

#define SERONET_NO_DEPRECATED
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ComplexType.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementPrimitives.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/SelfDescriptionArray.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementArray.hpp>

#include "CommBasicObjectsOpcUa/CommBaseStateOpcUa.hh"
#include "CommBasicObjectsOpcUa/CommIRScanOpcUa.hh"

namespace SeRoNet {
namespace CommunicationObjects {
namespace Description {
	
// serialization for CommBasicObjectsIDL::CommMobileIRScan
template <>
IDescription::shp_t SelfDescription(CommBasicObjectsIDL::CommMobileIRScan *obj, std::string name)
{
	auto ret = std::make_shared<SeRoNet::CommunicationObjects::Description::ComplexType>(name);
	// add is_valid
	ret->add(
		SelfDescription(&(obj->is_valid), "Is_valid")
	);
	// add baseState
	ret->add(
		SelfDescription(&(obj->baseState), "BaseState")
	);
	// add irScan
	ret->add(
		SelfDescription(&(obj->irScan), "IrScan")
	);
	return ret;
} // end SelfDescription

} // end namespace Description
} // end namespace CommunicationObjects
} // end namespace SeRoNet
