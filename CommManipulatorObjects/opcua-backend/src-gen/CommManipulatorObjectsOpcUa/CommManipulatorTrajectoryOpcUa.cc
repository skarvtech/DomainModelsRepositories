#include "CommManipulatorTrajectoryOpcUa.hh"

#define SERONET_NO_DEPRECATED
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ComplexType.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementPrimitives.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/SelfDescriptionArray.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementArray.hpp>

#include "CommManipulatorObjectsOpcUa/CommJointValuesOpcUa.hh"
#include "CommBasicObjectsOpcUa/CommPose3dOpcUa.hh"
#include "CommManipulatorObjectsOpcUa/CommGripperTrajectoryOpcUa.hh"

namespace SeRoNet {
namespace CommunicationObjects {
namespace Description {
	
// serialization for CommManipulatorObjectsIDL::CommManipulatorTrajectory
template <>
IDescription::shp_t SelfDescription(CommManipulatorObjectsIDL::CommManipulatorTrajectory *obj, std::string name)
{
	auto ret = std::make_shared<SeRoNet::CommunicationObjects::Description::ComplexType>(name);
	// add joint_angles
	ret->add(
		SelfDescription(&(obj->joint_angles), "Joint_angles")
	);
	// add pose_tcp
	ret->add(
		SelfDescription(&(obj->pose_tcp), "Pose_tcp")
	);
	// add gripper_angles
	ret->add(
		SelfDescription(&(obj->gripper_angles), "Gripper_angles")
	);
	// add flag
	ret->add(
		SelfDescription(&(obj->flag), "Flag")
	);
	return ret;
} // end SelfDescription

} // end namespace Description
} // end namespace CommunicationObjects
} // end namespace SeRoNet
