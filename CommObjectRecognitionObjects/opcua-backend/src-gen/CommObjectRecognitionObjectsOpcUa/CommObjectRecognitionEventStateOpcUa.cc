#include "CommObjectRecognitionEventStateOpcUa.hh"

#define SERONET_NO_DEPRECATED
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ComplexType.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementPrimitives.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/SelfDescriptionArray.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementArray.hpp>


namespace SeRoNet {
namespace CommunicationObjects {
namespace Description {
	
// serialization for CommObjectRecognitionObjectsIDL::CommObjectRecognitionEventState
template <>
IDescription::shp_t SelfDescription(CommObjectRecognitionObjectsIDL::CommObjectRecognitionEventState *obj, std::string name)
{
	auto ret = std::make_shared<SeRoNet::CommunicationObjects::Description::ComplexType>(name);
	// add state
	ret->add(
		SelfDescription(&(obj->state), "State")
	);
	// add object_id
	ret->add(
		SelfDescription(&(obj->object_id), "Object_id")
	);
	return ret;
} // end SelfDescription

} // end namespace Description
} // end namespace CommunicationObjects
} // end namespace SeRoNet
