#include "CommPathFreeAreaOpcUa.hh"

#define SERONET_NO_DEPRECATED
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ComplexType.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementPrimitives.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/SelfDescriptionArray.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementArray.hpp>


namespace SeRoNet {
namespace CommunicationObjects {
namespace Description {
	
// serialization for CommRobotinoObjectsIDL::CommPathFreeArea
template <>
IDescription::shp_t SelfDescription(CommRobotinoObjectsIDL::CommPathFreeArea *obj, std::string name)
{
	auto ret = std::make_shared<SeRoNet::CommunicationObjects::Description::ComplexType>(name);
	// add areaID
	ret->add(
		SelfDescription(&(obj->areaID), "AreaID")
	);
	// add maxOccupancy
	ret->add(
		SelfDescription(&(obj->maxOccupancy), "MaxOccupancy")
	);
	// add robotIDs
	ret->add(
		SelfDescription(&(obj->robotIDs), "RobotIDs")
	);
	// add nodeXvector
	ret->add(
		SelfDescription(&(obj->nodeXvector), "NodeXvector")
	);
	// add nodeYvector
	ret->add(
		SelfDescription(&(obj->nodeYvector), "NodeYvector")
	);
	return ret;
} // end SelfDescription

} // end namespace Description
} // end namespace CommunicationObjects
} // end namespace SeRoNet
