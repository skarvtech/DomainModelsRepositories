#include "CPose2DOpcUa.hh"

#define SERONET_NO_DEPRECATED
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ComplexType.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementPrimitives.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/SelfDescriptionArray.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementArray.hpp>


namespace SeRoNet {
namespace CommunicationObjects {
namespace Description {
	
// serialization for CommLocalizationObjectsIDL::CPose2D
template <>
IDescription::shp_t SelfDescription(CommLocalizationObjectsIDL::CPose2D *obj, std::string name)
{
	auto ret = std::make_shared<SeRoNet::CommunicationObjects::Description::ComplexType>(name);
	// add m_phi
	ret->add(
		SelfDescription(&(obj->m_phi), "M_phi")
	);
	// add m_is3D
	ret->add(
		SelfDescription(&(obj->m_is3D), "M_is3D")
	);
	// add m_x
	ret->add(
		SelfDescription(&(obj->m_x), "M_x")
	);
	// add m_y
	ret->add(
		SelfDescription(&(obj->m_y), "M_y")
	);
	// add m_z
	ret->add(
		SelfDescription(&(obj->m_z), "M_z")
	);
	return ret;
} // end SelfDescription

} // end namespace Description
} // end namespace CommunicationObjects
} // end namespace SeRoNet
