#include "ViewpointLocationOpcUa.hh"

#define SERONET_NO_DEPRECATED
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ComplexType.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementPrimitives.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/SelfDescriptionArray.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementArray.hpp>

#include "CommLocalizationObjectsOpcUa/CPose2DOpcUa.hh"
#include "CommLocalizationObjectsOpcUa/CMatrixDouble22OpcUa.hh"
#include "CommLocalizationObjectsOpcUa/CMatrixDouble22OpcUa.hh"

namespace SeRoNet {
namespace CommunicationObjects {
namespace Description {
	
// serialization for CommLocalizationObjectsIDL::ViewpointLocation
template <>
IDescription::shp_t SelfDescription(CommLocalizationObjectsIDL::ViewpointLocation *obj, std::string name)
{
	auto ret = std::make_shared<SeRoNet::CommunicationObjects::Description::ComplexType>(name);
	// add id
	ret->add(
		SelfDescription(&(obj->id), "Id")
	);
	// add mean
	ret->add(
		SelfDescription(&(obj->mean), "Mean")
	);
	// add cov
	ret->add(
		SelfDescription(&(obj->cov), "Cov")
	);
	// add invCov
	ret->add(
		SelfDescription(&(obj->invCov), "InvCov")
	);
	// add observationCount
	ret->add(
		SelfDescription(&(obj->observationCount), "ObservationCount")
	);
	// add possibleObservations
	ret->add(
		SelfDescription(&(obj->possibleObservations), "PossibleObservations")
	);
	return ret;
} // end SelfDescription

} // end namespace Description
} // end namespace CommunicationObjects
} // end namespace SeRoNet
