#include "CommJoystickOpcUa.hh"

#define SERONET_NO_DEPRECATED
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ComplexType.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementPrimitives.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/SelfDescriptionArray.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementArray.hpp>


namespace SeRoNet {
namespace CommunicationObjects {
namespace Description {
	
// serialization for CommBasicObjectsIDL::CommJoystick
template <>
IDescription::shp_t SelfDescription(CommBasicObjectsIDL::CommJoystick *obj, std::string name)
{
	auto ret = std::make_shared<SeRoNet::CommunicationObjects::Description::ComplexType>(name);
	// add xpos
	ret->add(
		SelfDescription(&(obj->xpos), "Xpos")
	);
	// add ypos
	ret->add(
		SelfDescription(&(obj->ypos), "Ypos")
	);
	// add x2pos
	ret->add(
		SelfDescription(&(obj->x2pos), "X2pos")
	);
	// add y2pos
	ret->add(
		SelfDescription(&(obj->y2pos), "Y2pos")
	);
	// add buttons
	ret->add(
		SelfDescription(&(obj->buttons), "Buttons")
	);
	return ret;
} // end SelfDescription

} // end namespace Description
} // end namespace CommunicationObjects
} // end namespace SeRoNet
