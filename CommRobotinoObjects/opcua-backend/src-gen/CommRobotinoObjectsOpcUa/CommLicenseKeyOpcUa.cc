#include "CommLicenseKeyOpcUa.hh"

#define SERONET_NO_DEPRECATED
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ComplexType.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementPrimitives.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/SelfDescriptionArray.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementArray.hpp>

#include "CommBasicObjectsOpcUa/CommTimeStampOpcUa.hh"

namespace SeRoNet {
namespace CommunicationObjects {
namespace Description {
	
// serialization for CommRobotinoObjectsIDL::CommLicenseKey
template <>
IDescription::shp_t SelfDescription(CommRobotinoObjectsIDL::CommLicenseKey *obj, std::string name)
{
	auto ret = std::make_shared<SeRoNet::CommunicationObjects::Description::ComplexType>(name);
	// add key
	ret->add(
		SelfDescription(&(obj->key), "Key")
	);
	// add valid
	ret->add(
		SelfDescription(&(obj->valid), "Valid")
	);
	// add timestamp
	ret->add(
		SelfDescription(&(obj->timestamp), "Timestamp")
	);
	return ret;
} // end SelfDescription

} // end namespace Description
} // end namespace CommunicationObjects
} // end namespace SeRoNet
