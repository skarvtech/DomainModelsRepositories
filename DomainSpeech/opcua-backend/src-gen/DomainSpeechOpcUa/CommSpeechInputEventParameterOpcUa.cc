#include "CommSpeechInputEventParameterOpcUa.hh"

#define SERONET_NO_DEPRECATED
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ComplexType.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementPrimitives.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/SelfDescriptionArray.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementArray.hpp>


namespace SeRoNet {
namespace CommunicationObjects {
namespace Description {
	
// serialization for DomainSpeechIDL::CommSpeechInputEventParameter
template <>
IDescription::shp_t SelfDescription(DomainSpeechIDL::CommSpeechInputEventParameter *obj, std::string name)
{
	auto ret = std::make_shared<SeRoNet::CommunicationObjects::Description::ComplexType>(name);
	// add confidence
	ret->add(
		SelfDescription(&(obj->confidence), "Confidence")
	);
	// add topic
	ret->add(
		SelfDescription(&(obj->topic), "Topic")
	);
	return ret;
} // end SelfDescription

} // end namespace Description
} // end namespace CommunicationObjects
} // end namespace SeRoNet
