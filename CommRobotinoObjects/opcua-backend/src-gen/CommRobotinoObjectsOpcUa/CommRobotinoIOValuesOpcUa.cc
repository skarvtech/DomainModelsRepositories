#include "CommRobotinoIOValuesOpcUa.hh"

#define SERONET_NO_DEPRECATED
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ComplexType.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementPrimitives.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/SelfDescriptionArray.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementArray.hpp>

#include "CommRobotinoObjectsOpcUa/CommAnalogOutputRequestOpcUa.hh"
#include "CommRobotinoObjectsOpcUa/CommDigitalOutputRequestOpcUa.hh"

namespace SeRoNet {
namespace CommunicationObjects {
namespace Description {
	
// serialization for CommRobotinoObjectsIDL::CommRobotinoIOValues
template <>
IDescription::shp_t SelfDescription(CommRobotinoObjectsIDL::CommRobotinoIOValues *obj, std::string name)
{
	auto ret = std::make_shared<SeRoNet::CommunicationObjects::Description::ComplexType>(name);
	// add analogInputValues
	ret->add(
		SelfDescription(&(obj->analogInputValues), "AnalogInputValues")
	);
	// add digitalInputValues
	ret->add(
		SelfDescription(&(obj->digitalInputValues), "DigitalInputValues")
	);
	// add analogOutputValues
	ret->add(
		SelfDescription(&(obj->analogOutputValues), "AnalogOutputValues")
	);
	// add digitalOutputValues
	ret->add(
		SelfDescription(&(obj->digitalOutputValues), "DigitalOutputValues")
	);
	return ret;
} // end SelfDescription

} // end namespace Description
} // end namespace CommunicationObjects
} // end namespace SeRoNet
