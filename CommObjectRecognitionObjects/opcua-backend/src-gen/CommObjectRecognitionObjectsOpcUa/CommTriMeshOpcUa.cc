#include "CommTriMeshOpcUa.hh"

#define SERONET_NO_DEPRECATED
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ComplexType.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementPrimitives.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/SelfDescriptionArray.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementArray.hpp>


namespace SeRoNet {
namespace CommunicationObjects {
namespace Description {
	
// serialization for CommObjectRecognitionObjectsIDL::CommTriMesh
template <>
IDescription::shp_t SelfDescription(CommObjectRecognitionObjectsIDL::CommTriMesh *obj, std::string name)
{
	auto ret = std::make_shared<SeRoNet::CommunicationObjects::Description::ComplexType>(name);
	// add vertices_p1
	ret->add(
		SelfDescription(&(obj->vertices_p1), "Vertices_p1")
	);
	// add vertices_p2
	ret->add(
		SelfDescription(&(obj->vertices_p2), "Vertices_p2")
	);
	// add vertices_p3
	ret->add(
		SelfDescription(&(obj->vertices_p3), "Vertices_p3")
	);
	// add points_x
	ret->add(
		SelfDescription(&(obj->points_x), "Points_x")
	);
	// add points_y
	ret->add(
		SelfDescription(&(obj->points_y), "Points_y")
	);
	// add points_z
	ret->add(
		SelfDescription(&(obj->points_z), "Points_z")
	);
	return ret;
} // end SelfDescription

} // end namespace Description
} // end namespace CommunicationObjects
} // end namespace SeRoNet
