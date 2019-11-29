#include "CommManipulatorRequestScan3dOpcUa.hh"

#define SERONET_NO_DEPRECATED
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ComplexType.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementPrimitives.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/SelfDescriptionArray.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementArray.hpp>


namespace SeRoNet {
namespace CommunicationObjects {
namespace Description {
	
// serialization for CommManipulatorObjectsIDL::CommManipulatorRequestScan3d
template <>
IDescription::shp_t SelfDescription(CommManipulatorObjectsIDL::CommManipulatorRequestScan3d *obj, std::string name)
{
	auto ret = std::make_shared<SeRoNet::CommunicationObjects::Description::ComplexType>(name);
	// add begin_joint_angles
	ret->add(
		SelfDescription(&(obj->begin_joint_angles), "Begin_joint_angles")
	);
	// add end_joint_angles
	ret->add(
		SelfDescription(&(obj->end_joint_angles), "End_joint_angles")
	);
	// add laser_begin_angle
	ret->add(
		SelfDescription(&(obj->laser_begin_angle), "Laser_begin_angle")
	);
	// add laser_end_angle
	ret->add(
		SelfDescription(&(obj->laser_end_angle), "Laser_end_angle")
	);
	// add number_of_steps
	ret->add(
		SelfDescription(&(obj->number_of_steps), "Number_of_steps")
	);
	return ret;
} // end SelfDescription

} // end namespace Description
} // end namespace CommunicationObjects
} // end namespace SeRoNet
