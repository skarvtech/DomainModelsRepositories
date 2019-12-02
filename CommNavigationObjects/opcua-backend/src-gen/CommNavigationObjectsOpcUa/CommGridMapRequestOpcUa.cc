#include "CommGridMapRequestOpcUa.hh"

#define SERONET_NO_DEPRECATED
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ComplexType.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementPrimitives.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/SelfDescriptionArray.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementArray.hpp>


namespace SeRoNet {
namespace CommunicationObjects {
namespace Description {
	
// serialization for CommNavigationObjectsIDL::CommGridMapRequest
template <>
IDescription::shp_t SelfDescription(CommNavigationObjectsIDL::CommGridMapRequest *obj, std::string name)
{
	auto ret = std::make_shared<SeRoNet::CommunicationObjects::Description::ComplexType>(name);
	// add id
	ret->add(
		SelfDescription(&(obj->id), "Id")
	);
	// add xOffsetMM
	ret->add(
		SelfDescription(&(obj->xOffsetMM), "XOffsetMM")
	);
	// add yOffsetMM
	ret->add(
		SelfDescription(&(obj->yOffsetMM), "YOffsetMM")
	);
	// add xSizeMM
	ret->add(
		SelfDescription(&(obj->xSizeMM), "XSizeMM")
	);
	// add ySizeMM
	ret->add(
		SelfDescription(&(obj->ySizeMM), "YSizeMM")
	);
	// add curLtmState
	ret->add(
		SelfDescription(&(obj->curLtmState), "CurLtmState")
	);
	// add curLtmThreshold
	ret->add(
		SelfDescription(&(obj->curLtmThreshold), "CurLtmThreshold")
	);
	return ret;
} // end SelfDescription

} // end namespace Description
} // end namespace CommunicationObjects
} // end namespace SeRoNet
