#include "CommFileMetaDataOpcUa.hh"

#define SERONET_NO_DEPRECATED
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ComplexType.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementPrimitives.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/SelfDescriptionArray.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementArray.hpp>


namespace SeRoNet {
namespace CommunicationObjects {
namespace Description {
	
// serialization for CommBasicObjectsIDL::CommFileMetaData
template <>
IDescription::shp_t SelfDescription(CommBasicObjectsIDL::CommFileMetaData *obj, std::string name)
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
	// add filetype
	ret->add(
		SelfDescription(&(obj->filetype), "Filetype")
	);
	return ret;
} // end SelfDescription

} // end namespace Description
} // end namespace CommunicationObjects
} // end namespace SeRoNet
