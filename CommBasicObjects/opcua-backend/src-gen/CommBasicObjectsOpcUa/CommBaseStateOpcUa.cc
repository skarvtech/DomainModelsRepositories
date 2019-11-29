#include "CommBaseStateOpcUa.hh"

#define SERONET_NO_DEPRECATED
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ComplexType.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementPrimitives.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/SelfDescriptionArray.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementArray.hpp>

#include "CommBasicObjectsOpcUa/CommTimeStampOpcUa.hh"
#include "CommBasicObjectsOpcUa/CommBasePoseOpcUa.hh"
#include "CommBasicObjectsOpcUa/CommBasePoseOpcUa.hh"
#include "CommBasicObjectsOpcUa/CommBaseVelocityOpcUa.hh"
#include "CommBasicObjectsOpcUa/CommBaseVelocityOpcUa.hh"
#include "CommBasicObjectsOpcUa/CommBatteryLevelOpcUa.hh"
#include "CommBasicObjectsOpcUa/CommBumperStateOpcUa.hh"

namespace SeRoNet {
namespace CommunicationObjects {
namespace Description {
	
// serialization for CommBasicObjectsIDL::CommBaseState
template <>
IDescription::shp_t SelfDescription(CommBasicObjectsIDL::CommBaseState *obj, std::string name)
{
	auto ret = std::make_shared<SeRoNet::CommunicationObjects::Description::ComplexType>(name);
	// add timeStamp
	ret->add(
		SelfDescription(&(obj->timeStamp), "TimeStamp")
	);
	// add basePose
	ret->add(
		SelfDescription(&(obj->basePose), "BasePose")
	);
	// add baseOdomPose
	ret->add(
		SelfDescription(&(obj->baseOdomPose), "BaseOdomPose")
	);
	// add baseVelocity
	ret->add(
		SelfDescription(&(obj->baseVelocity), "BaseVelocity")
	);
	// add baseOdomVelocity
	ret->add(
		SelfDescription(&(obj->baseOdomVelocity), "BaseOdomVelocity")
	);
	// add batteryState
	ret->add(
		SelfDescription(&(obj->batteryState), "BatteryState")
	);
	// add baseBumperState
	ret->add(
		SelfDescription(&(obj->baseBumperState), "BaseBumperState")
	);
	return ret;
} // end SelfDescription

} // end namespace Description
} // end namespace CommunicationObjects
} // end namespace SeRoNet
