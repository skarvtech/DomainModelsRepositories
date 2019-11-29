#include "CommTrackingGoalOpcUa.hh"

#define SERONET_NO_DEPRECATED
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ComplexType.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementPrimitives.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/SelfDescriptionArray.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementArray.hpp>


namespace SeRoNet {
namespace CommunicationObjects {
namespace Description {
	
// serialization for CommTrackingObjectsIDL::CommTrackingGoal
template <>
IDescription::shp_t SelfDescription(CommTrackingObjectsIDL::CommTrackingGoal *obj, std::string name)
{
	auto ret = std::make_shared<SeRoNet::CommunicationObjects::Description::ComplexType>(name);
	// add trackingType
	ret->add(
		SelfDescription(&(obj->trackingType), "TrackingType")
	);
	// add angle
	ret->add(
		SelfDescription(&(obj->angle), "Angle")
	);
	// add distance
	ret->add(
		SelfDescription(&(obj->distance), "Distance")
	);
	// add x
	ret->add(
		SelfDescription(&(obj->x), "X")
	);
	// add y
	ret->add(
		SelfDescription(&(obj->y), "Y")
	);
	// add isValid
	ret->add(
		SelfDescription(&(obj->isValid), "IsValid")
	);
	// add cov
	ret->add(
		SelfDescription(&(obj->cov), "Cov")
	);
	// add goalCount
	ret->add(
		SelfDescription(&(obj->goalCount), "GoalCount")
	);
	return ret;
} // end SelfDescription

} // end namespace Description
} // end namespace CommunicationObjects
} // end namespace SeRoNet
