#include "CommGridMapOpcUa.hh"

#define SERONET_NO_DEPRECATED
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ComplexType.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementPrimitives.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/SelfDescriptionArray.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementArray.hpp>

#include "CommBasicObjectsOpcUa/CommTimeStampOpcUa.hh"

namespace SeRoNet {
namespace CommunicationObjects {
namespace Description {
	
// serialization for CommNavigationObjectsIDL::CommGridMap
template <>
IDescription::shp_t SelfDescription(CommNavigationObjectsIDL::CommGridMap *obj, std::string name)
{
	auto ret = std::make_shared<SeRoNet::CommunicationObjects::Description::ComplexType>(name);
	// add id
	ret->add(
		SelfDescription(&(obj->id), "Id")
	);
	// add is_valid
	ret->add(
		SelfDescription(&(obj->is_valid), "Is_valid")
	);
	// add time
	ret->add(
		SelfDescription(&(obj->time), "Time")
	);
	// add xOffsetMM
	ret->add(
		SelfDescription(&(obj->xOffsetMM), "XOffsetMM")
	);
	// add yOffsetMM
	ret->add(
		SelfDescription(&(obj->yOffsetMM), "YOffsetMM")
	);
	// add xOffsetCells
	ret->add(
		SelfDescription(&(obj->xOffsetCells), "XOffsetCells")
	);
	// add yOffsetCells
	ret->add(
		SelfDescription(&(obj->yOffsetCells), "YOffsetCells")
	);
	// add cellSizeMM
	ret->add(
		SelfDescription(&(obj->cellSizeMM), "CellSizeMM")
	);
	// add xSizeMM
	ret->add(
		SelfDescription(&(obj->xSizeMM), "XSizeMM")
	);
	// add ySizeMM
	ret->add(
		SelfDescription(&(obj->ySizeMM), "YSizeMM")
	);
	// add xSizeCells
	ret->add(
		SelfDescription(&(obj->xSizeCells), "XSizeCells")
	);
	// add ySizeCells
	ret->add(
		SelfDescription(&(obj->ySizeCells), "YSizeCells")
	);
	// add size
	ret->add(
		SelfDescription(&(obj->size), "Size")
	);
	// add cell
	ret->add(
		SelfDescription(&(obj->cell), "Cell")
	);
	return ret;
} // end SelfDescription

} // end namespace Description
} // end namespace CommunicationObjects
} // end namespace SeRoNet
