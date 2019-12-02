#include "CommBatteryParameterOpcUa.hh"

#define SERONET_NO_DEPRECATED
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ComplexType.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementPrimitives.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/SelfDescriptionArray.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementArray.hpp>


namespace SeRoNet {
namespace CommunicationObjects {
namespace Description {
	
// serialization for CommBasicObjectsIDL::CommBatteryParameter
template <>
IDescription::shp_t SelfDescription(CommBasicObjectsIDL::CommBatteryParameter *obj, std::string name)
{
	auto ret = std::make_shared<SeRoNet::CommunicationObjects::Description::ComplexType>(name);
	// add upperThreshold
	ret->add(
		SelfDescription(&(obj->upperThreshold), "UpperThreshold")
	);
	// add lowerThreshold
	ret->add(
		SelfDescription(&(obj->lowerThreshold), "LowerThreshold")
	);
	// add desiredState
	ret->add(
		SelfDescription(&(obj->desiredState), "DesiredState")
	);
	// add currentState
	ret->add(
		SelfDescription(&(obj->currentState), "CurrentState")
	);
	return ret;
} // end SelfDescription

} // end namespace Description
} // end namespace CommunicationObjects
} // end namespace SeRoNet
