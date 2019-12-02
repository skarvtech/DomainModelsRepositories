#include "CommBaseVelocityOpcUa.hh"

#define SERONET_NO_DEPRECATED
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ComplexType.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementPrimitives.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/SelfDescriptionArray.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementArray.hpp>

#include "CommBasicObjectsOpcUa/CommTimeStampOpcUa.hh"

namespace SeRoNet {
namespace CommunicationObjects {
namespace Description {
	
// serialization for CommBasicObjectsIDL::CommBaseVelocity
template <>
IDescription::shp_t SelfDescription(CommBasicObjectsIDL::CommBaseVelocity *obj, std::string name)
{
	auto ret = std::make_shared<SeRoNet::CommunicationObjects::Description::ComplexType>(name);
	// add vX
	ret->add(
		SelfDescription(&(obj->vX), "VX")
	);
	// add vY
	ret->add(
		SelfDescription(&(obj->vY), "VY")
	);
	// add vZ
	ret->add(
		SelfDescription(&(obj->vZ), "VZ")
	);
	// add wX
	ret->add(
		SelfDescription(&(obj->wX), "WX")
	);
	// add wY
	ret->add(
		SelfDescription(&(obj->wY), "WY")
	);
	// add wZ
	ret->add(
		SelfDescription(&(obj->wZ), "WZ")
	);
	// add timeStamp
	ret->add(
		SelfDescription(&(obj->timeStamp), "TimeStamp")
	);
	return ret;
} // end SelfDescription

} // end namespace Description
} // end namespace CommunicationObjects
} // end namespace SeRoNet
