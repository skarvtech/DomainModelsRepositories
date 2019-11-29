#include "CMatrixDouble22OpcUa.hh"

#define SERONET_NO_DEPRECATED
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ComplexType.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementPrimitives.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/SelfDescriptionArray.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementArray.hpp>


namespace SeRoNet {
namespace CommunicationObjects {
namespace Description {
	
// serialization for CommLocalizationObjectsIDL::CMatrixDouble22
template <>
IDescription::shp_t SelfDescription(CommLocalizationObjectsIDL::CMatrixDouble22 *obj, std::string name)
{
	auto ret = std::make_shared<SeRoNet::CommunicationObjects::Description::ComplexType>(name);
	// add m_00
	ret->add(
		SelfDescription(&(obj->m_00), "M_00")
	);
	// add m_01
	ret->add(
		SelfDescription(&(obj->m_01), "M_01")
	);
	// add m_10
	ret->add(
		SelfDescription(&(obj->m_10), "M_10")
	);
	// add m_11
	ret->add(
		SelfDescription(&(obj->m_11), "M_11")
	);
	return ret;
} // end SelfDescription

} // end namespace Description
} // end namespace CommunicationObjects
} // end namespace SeRoNet
