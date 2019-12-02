#include "CommPlannerGoalOpcUa.hh"

#define SERONET_NO_DEPRECATED
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ComplexType.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementPrimitives.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/SelfDescriptionArray.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementArray.hpp>


namespace SeRoNet {
namespace CommunicationObjects {
namespace Description {
	
// serialization for CommNavigationObjectsIDL::CommPlannerGoal
template <>
IDescription::shp_t SelfDescription(CommNavigationObjectsIDL::CommPlannerGoal *obj, std::string name)
{
	auto ret = std::make_shared<SeRoNet::CommunicationObjects::Description::ComplexType>(name);
	// add id
	ret->add(
		SelfDescription(&(obj->id), "Id")
	);
	// add flag
	ret->add(
		SelfDescription(&(obj->flag), "Flag")
	);
	// add xWayPoint
	ret->add(
		SelfDescription(&(obj->xWayPoint), "XWayPoint")
	);
	// add yWayPoint
	ret->add(
		SelfDescription(&(obj->yWayPoint), "YWayPoint")
	);
	// add hWayPoint
	ret->add(
		SelfDescription(&(obj->hWayPoint), "HWayPoint")
	);
	// add xGoalPoint
	ret->add(
		SelfDescription(&(obj->xGoalPoint), "XGoalPoint")
	);
	// add yGoalPoint
	ret->add(
		SelfDescription(&(obj->yGoalPoint), "YGoalPoint")
	);
	// add hGoalPoint
	ret->add(
		SelfDescription(&(obj->hGoalPoint), "HGoalPoint")
	);
	return ret;
} // end SelfDescription

} // end namespace Description
} // end namespace CommunicationObjects
} // end namespace SeRoNet
