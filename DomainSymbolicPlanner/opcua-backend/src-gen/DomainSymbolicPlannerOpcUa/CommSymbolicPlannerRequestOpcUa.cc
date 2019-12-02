#include "CommSymbolicPlannerRequestOpcUa.hh"

#define SERONET_NO_DEPRECATED
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ComplexType.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementPrimitives.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/SelfDescriptionArray.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementArray.hpp>


namespace SeRoNet {
namespace CommunicationObjects {
namespace Description {
	
// serialization for DomainSymbolicPlannerIDL::CommSymbolicPlannerRequest
template <>
IDescription::shp_t SelfDescription(DomainSymbolicPlannerIDL::CommSymbolicPlannerRequest *obj, std::string name)
{
	auto ret = std::make_shared<SeRoNet::CommunicationObjects::Description::ComplexType>(name);
	// add plannertype
	ret->add(
		SelfDescription(&(obj->plannertype), "Plannertype")
	);
	// add domaindescription
	ret->add(
		SelfDescription(&(obj->domaindescription), "Domaindescription")
	);
	// add factdescription
	ret->add(
		SelfDescription(&(obj->factdescription), "Factdescription")
	);
	return ret;
} // end SelfDescription

} // end namespace Description
} // end namespace CommunicationObjects
} // end namespace SeRoNet
