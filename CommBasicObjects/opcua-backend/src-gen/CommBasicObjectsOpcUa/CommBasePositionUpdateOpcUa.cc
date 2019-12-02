#include "CommBasePositionUpdateOpcUa.hh"

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

namespace SeRoNet {
namespace CommunicationObjects {
namespace Description {
	
// serialization for CommBasicObjectsIDL::CommBasePositionUpdate
template <>
IDescription::shp_t SelfDescription(CommBasicObjectsIDL::CommBasePositionUpdate *obj, std::string name)
{
	auto ret = std::make_shared<SeRoNet::CommunicationObjects::Description::ComplexType>(name);
	// add timeStamp
	ret->add(
		SelfDescription(&(obj->timeStamp), "TimeStamp")
	);
	// add pose
	ret->add(
		SelfDescription(&(obj->pose), "Pose")
	);
	// add correctedPose
	ret->add(
		SelfDescription(&(obj->correctedPose), "CorrectedPose")
	);
	// add velocity
	ret->add(
		SelfDescription(&(obj->velocity), "Velocity")
	);
	// add correctedVelocity
	ret->add(
		SelfDescription(&(obj->correctedVelocity), "CorrectedVelocity")
	);
	return ret;
} // end SelfDescription

} // end namespace Description
} // end namespace CommunicationObjects
} // end namespace SeRoNet
