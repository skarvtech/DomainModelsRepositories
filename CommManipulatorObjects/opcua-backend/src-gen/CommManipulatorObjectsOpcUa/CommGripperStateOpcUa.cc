#include "CommGripperStateOpcUa.hh"

#define SERONET_NO_DEPRECATED
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ComplexType.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementPrimitives.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/SelfDescriptionArray.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementArray.hpp>


namespace SeRoNet {
namespace CommunicationObjects {
namespace Description {
	
// serialization for CommManipulatorObjectsIDL::CommGripperState
template <>
IDescription::shp_t SelfDescription(CommManipulatorObjectsIDL::CommGripperState *obj, std::string name)
{
	auto ret = std::make_shared<SeRoNet::CommunicationObjects::Description::ComplexType>(name);
	// add pos
	ret->add(
		SelfDescription(&(obj->pos), "Pos")
	);
	// add is_valid
	ret->add(
		SelfDescription(&(obj->is_valid), "Is_valid")
	);
	// add graspState
	ret->add(
		SelfDescription(&(obj->graspState), "GraspState")
	);
	// add graspState_valid
	ret->add(
		SelfDescription(&(obj->graspState_valid), "GraspState_valid")
	);
	return ret;
} // end SelfDescription

} // end namespace Description
} // end namespace CommunicationObjects
} // end namespace SeRoNet
