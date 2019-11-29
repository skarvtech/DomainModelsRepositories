#include "CommDataFileOpcUa.hh"

#define SERONET_NO_DEPRECATED
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ComplexType.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementPrimitives.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/SelfDescriptionArray.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementArray.hpp>

#include "CommBasicObjectsOpcUa/CommTimeStampOpcUa.hh"

namespace SeRoNet {
namespace CommunicationObjects {
namespace Description {
	
// serialization for CommBasicObjectsIDL::CommDataFile
template <>
IDescription::shp_t SelfDescription(CommBasicObjectsIDL::CommDataFile *obj, std::string name)
{
	auto ret = std::make_shared<SeRoNet::CommunicationObjects::Description::ComplexType>(name);
	// add filename
	ret->add(
		SelfDescription(&(obj->filename), "Filename")
	);
	// add filesize
	ret->add(
		SelfDescription(&(obj->filesize), "Filesize")
	);
	// add timestamp
	ret->add(
		SelfDescription(&(obj->timestamp), "Timestamp")
	);
	// add data
	ret->add(
		SelfDescription(&(obj->data), "Data")
	);
	// add valid
	ret->add(
		SelfDescription(&(obj->valid), "Valid")
	);
	return ret;
} // end SelfDescription

} // end namespace Description
} // end namespace CommunicationObjects
} // end namespace SeRoNet
