#include "CommAmclVisualizationInfoOpcUa.hh"

#define SERONET_NO_DEPRECATED
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ComplexType.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementPrimitives.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/SelfDescriptionArray.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementArray.hpp>

#include "CommLocalizationObjectsOpcUa/CommAmclParticleOpcUa.hh"
#include "CommLocalizationObjectsOpcUa/CommAmclHypothesisOpcUa.hh"

namespace SeRoNet {
namespace CommunicationObjects {
namespace Description {
	
// serialization for CommLocalizationObjectsIDL::CommAmclVisualizationInfo
template <>
IDescription::shp_t SelfDescription(CommLocalizationObjectsIDL::CommAmclVisualizationInfo *obj, std::string name)
{
	auto ret = std::make_shared<SeRoNet::CommunicationObjects::Description::ComplexType>(name);
	// add particles
	ret->add(
		SelfDescription(&(obj->particles), "Particles")
	);
	// add hypotheses
	ret->add(
		SelfDescription(&(obj->hypotheses), "Hypotheses")
	);
	return ret;
} // end SelfDescription

} // end namespace Description
} // end namespace CommunicationObjects
} // end namespace SeRoNet
