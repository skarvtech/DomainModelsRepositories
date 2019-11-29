#include "CommSpeechOutputMessageOpcUa.hh"

#define SERONET_NO_DEPRECATED
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ComplexType.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementPrimitives.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/SelfDescriptionArray.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementArray.hpp>

#include "CommBasicObjectsOpcUa/CommTimeStampOpcUa.hh"

namespace SeRoNet {
namespace CommunicationObjects {
namespace Description {
	
// serialization for DomainSpeechIDL::CommSpeechOutputMessage
template <>
IDescription::shp_t SelfDescription(DomainSpeechIDL::CommSpeechOutputMessage *obj, std::string name)
{
	auto ret = std::make_shared<SeRoNet::CommunicationObjects::Description::ComplexType>(name);
	// add time
	ret->add(
		SelfDescription(&(obj->time), "Time")
	);
	// add reset
	ret->add(
		SelfDescription(&(obj->reset), "Reset")
	);
	// add ttl
	ret->add(
		SelfDescription(&(obj->ttl), "Ttl")
	);
	// add text
	ret->add(
		SelfDescription(&(obj->text), "Text")
	);
	return ret;
} // end SelfDescription

} // end namespace Description
} // end namespace CommunicationObjects
} // end namespace SeRoNet
