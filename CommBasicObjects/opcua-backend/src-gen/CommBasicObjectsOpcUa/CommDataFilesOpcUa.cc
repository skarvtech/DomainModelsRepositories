#include "CommDataFilesOpcUa.hh"

#define SERONET_NO_DEPRECATED
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ComplexType.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementPrimitives.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/SelfDescriptionArray.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementArray.hpp>

#include "CommBasicObjectsOpcUa/CommFileMetaDataOpcUa.hh"
#include "CommBasicObjectsOpcUa/CommTimeStampOpcUa.hh"

namespace SeRoNet {
namespace CommunicationObjects {
namespace Description {
	
// serialization for CommBasicObjectsIDL::CommDataFiles
template <>
IDescription::shp_t SelfDescription(CommBasicObjectsIDL::CommDataFiles *obj, std::string name)
{
	auto ret = std::make_shared<SeRoNet::CommunicationObjects::Description::ComplexType>(name);
	// add fileMetaData
	ret->add(
		SelfDescription(&(obj->fileMetaData), "FileMetaData")
	);
	// add timestamp
	ret->add(
		SelfDescription(&(obj->timestamp), "Timestamp")
	);
	// add datastream
	ret->add(
		SelfDescription(&(obj->datastream), "Datastream")
	);
	// add commpression
	ret->add(
		SelfDescription(&(obj->commpression), "Commpression")
	);
	// add baseFileName
	ret->add(
		SelfDescription(&(obj->baseFileName), "BaseFileName")
	);
	// add isSingleFile
	ret->add(
		SelfDescription(&(obj->isSingleFile), "IsSingleFile")
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
