#include "CommObjectRecognitionObjectPropertiesOpcUa.hh"

#define SERONET_NO_DEPRECATED
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ComplexType.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementPrimitives.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/SelfDescriptionArray.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementArray.hpp>

#include "CommBasicObjectsOpcUa/CommPose3dOpcUa.hh"
#include "CommBasicObjectsOpcUa/CommPosition3dOpcUa.hh"
#include "CommObjectRecognitionObjectsOpcUa/CommObjectBeliefOpcUa.hh"
#include "CommObjectRecognitionObjectsOpcUa/CommTriMeshOpcUa.hh"
#include "CommObjectRecognitionObjectsOpcUa/CommObjectRelationOpcUa.hh"
#include "CommBasicObjectsOpcUa/CommPose3dOpcUa.hh"

namespace SeRoNet {
namespace CommunicationObjects {
namespace Description {
	
// serialization for CommObjectRecognitionObjectsIDL::CommObjectRecognitionObjectProperties
template <>
IDescription::shp_t SelfDescription(CommObjectRecognitionObjectsIDL::CommObjectRecognitionObjectProperties *obj, std::string name)
{
	auto ret = std::make_shared<SeRoNet::CommunicationObjects::Description::ComplexType>(name);
	// add is_valid
	ret->add(
		SelfDescription(&(obj->is_valid), "Is_valid")
	);
	// add object_id
	ret->add(
		SelfDescription(&(obj->object_id), "Object_id")
	);
	// add object_type
	ret->add(
		SelfDescription(&(obj->object_type), "Object_type")
	);
	// add pose
	ret->add(
		SelfDescription(&(obj->pose), "Pose")
	);
	// add dimension
	ret->add(
		SelfDescription(&(obj->dimension), "Dimension")
	);
	// add beliefs
	ret->add(
		SelfDescription(&(obj->beliefs), "Beliefs")
	);
	// add mesh
	ret->add(
		SelfDescription(&(obj->mesh), "Mesh")
	);
	// add relations
	ret->add(
		SelfDescription(&(obj->relations), "Relations")
	);
	// add fill_level
	ret->add(
		SelfDescription(&(obj->fill_level), "Fill_level")
	);
	// add objectSurfacePoses
	ret->add(
		SelfDescription(&(obj->objectSurfacePoses), "ObjectSurfacePoses")
	);
	return ret;
} // end SelfDescription

} // end namespace Description
} // end namespace CommunicationObjects
} // end namespace SeRoNet
