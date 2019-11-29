#include "CommBasePoseOpcUa.hh"

#define SERONET_NO_DEPRECATED
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ComplexType.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementPrimitives.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/SelfDescriptionArray.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementArray.hpp>

#include "CommBasicObjectsOpcUa/CommPose3dOpcUa.hh"
#include "CommBasicObjectsOpcUa/CommTimeStampOpcUa.hh"

namespace SeRoNet {
namespace CommunicationObjects {
namespace Description {
	
// serialization for CommBasicObjectsIDL::CommBasePose
template <>
IDescription::shp_t SelfDescription(CommBasicObjectsIDL::CommBasePose *obj, std::string name)
{
	auto ret = std::make_shared<SeRoNet::CommunicationObjects::Description::ComplexType>(name);
	// add covInvalid
	ret->add(
		SelfDescription(&(obj->covInvalid), "CovInvalid")
	);
	// add covMatrix
	ret->add(
		SelfDescription(&(obj->covMatrix), "CovMatrix")
	);
	// add updateCount
	ret->add(
		SelfDescription(&(obj->updateCount), "UpdateCount")
	);
	// add pose3D
	ret->add(
		SelfDescription(&(obj->pose3D), "Pose3D")
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
