#include "CommMobilePTUStateOpcUa.hh"

#define SERONET_NO_DEPRECATED
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ComplexType.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementPrimitives.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/SelfDescriptionArray.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementArray.hpp>

#include "DomainPTUOpcUa/CommPTUStateOpcUa.hh"
#include "CommBasicObjectsOpcUa/CommBaseStateOpcUa.hh"

namespace SeRoNet {
namespace CommunicationObjects {
namespace Description {
	
// serialization for DomainPTUIDL::CommMobilePTUState
template <>
IDescription::shp_t SelfDescription(DomainPTUIDL::CommMobilePTUState *obj, std::string name)
{
	auto ret = std::make_shared<SeRoNet::CommunicationObjects::Description::ComplexType>(name);
	// add ptu_state
	ret->add(
		SelfDescription(&(obj->ptu_state), "Ptu_state")
	);
	// add base_state
	ret->add(
		SelfDescription(&(obj->base_state), "Base_state")
	);
	return ret;
} // end SelfDescription

} // end namespace Description
} // end namespace CommunicationObjects
} // end namespace SeRoNet
