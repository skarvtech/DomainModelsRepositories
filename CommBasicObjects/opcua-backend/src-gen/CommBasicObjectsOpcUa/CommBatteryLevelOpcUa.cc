#include "CommBatteryLevelOpcUa.hh"

#define SERONET_NO_DEPRECATED
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ComplexType.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementPrimitives.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/SelfDescriptionArray.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementArray.hpp>

#include "CommBasicObjectsOpcUa/CommTimeStampOpcUa.hh"
#include "CommBasicObjectsOpcUa/CommTimeStampOpcUa.hh"

namespace SeRoNet {
namespace CommunicationObjects {
namespace Description {
	
// serialization for CommBasicObjectsIDL::CommBatteryLevel
template <>
IDescription::shp_t SelfDescription(CommBasicObjectsIDL::CommBatteryLevel *obj, std::string name)
{
	auto ret = std::make_shared<SeRoNet::CommunicationObjects::Description::ComplexType>(name);
	// add potential
	ret->add(
		SelfDescription(&(obj->potential), "Potential")
	);
	// add chargeLevel
	ret->add(
		SelfDescription(&(obj->chargeLevel), "ChargeLevel")
	);
	// add lifeTime
	ret->add(
		SelfDescription(&(obj->lifeTime), "LifeTime")
	);
	// add timeStamp
	ret->add(
		SelfDescription(&(obj->timeStamp), "TimeStamp")
	);
	// add current
	ret->add(
		SelfDescription(&(obj->current), "Current")
	);
	// add externalPower
	ret->add(
		SelfDescription(&(obj->externalPower), "ExternalPower")
	);
	return ret;
} // end SelfDescription

} // end namespace Description
} // end namespace CommunicationObjects
} // end namespace SeRoNet
