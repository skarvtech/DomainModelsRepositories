//--------------------------------------------------------------------------
// Code generated by the SmartSoft MDSD Toolchain
// The SmartSoft Toolchain has been developed by:
//  
// Christian Schlegel (schlegel@hs-ulm.de)
// University of Applied Sciences Ulm
// Prittwitzstr. 10
// 89075 Ulm (Germany)
//
// Information about the SmartSoft MDSD Toolchain is available at:
// www.servicerobotik-ulm.de
//
// Please do not modify this file. It will be re-generated
// running the code generator.
//--------------------------------------------------------------------------

#include "CommLocalizationObjects/CPose2D.hh"
#include <SeRoNet/CommunicationObjects/Description/SelfDescription.hpp>
#include <SeRoNet/CommunicationObjects/Description/ElementPrimitives.hpp>
#pragma once


namespace SeRoNet {
namespace CommunicationObjects {
namespace Description {
// serialization for CPose2D
template <>
ComplexType::shp_t SelfDescription(CommLocalizationObjects::CPose2D *obj, std::string name)
{
	auto ret = std::make_shared<SeRoNet::CommunicationObjects::Description::ComplexType>(name);
	/// \todo check for ComplexObjects
	// add m_phi
	ret->add(
		SeRoNet::CommunicationObjects::Description::IDescription::shp_t(
			new SeRoNet::CommunicationObjects::Description::ElementDouble(
				"m_phi",
				std::bind(&CommLocalizationObjects::CPose2D::getM_phi, obj),
				std::bind(&CommLocalizationObjects::CPose2D::setM_phi, obj, std::placeholders::_1)
			)
		)
	);
	// add m_is3D
	ret->add(
		SeRoNet::CommunicationObjects::Description::IDescription::shp_t(
			new SeRoNet::CommunicationObjects::Description::ElementBool(
				"m_is3D",
				std::bind(&CommLocalizationObjects::CPose2D::getM_is3D, obj),
				std::bind(&CommLocalizationObjects::CPose2D::setM_is3D, obj, std::placeholders::_1)
			)
		)
	);
	// add m_x
	ret->add(
		SeRoNet::CommunicationObjects::Description::IDescription::shp_t(
			new SeRoNet::CommunicationObjects::Description::ElementDouble(
				"m_x",
				std::bind(&CommLocalizationObjects::CPose2D::getM_x, obj),
				std::bind(&CommLocalizationObjects::CPose2D::setM_x, obj, std::placeholders::_1)
			)
		)
	);
	// add m_y
	ret->add(
		SeRoNet::CommunicationObjects::Description::IDescription::shp_t(
			new SeRoNet::CommunicationObjects::Description::ElementDouble(
				"m_y",
				std::bind(&CommLocalizationObjects::CPose2D::getM_y, obj),
				std::bind(&CommLocalizationObjects::CPose2D::setM_y, obj, std::placeholders::_1)
			)
		)
	);
	// add m_z
	ret->add(
		SeRoNet::CommunicationObjects::Description::IDescription::shp_t(
			new SeRoNet::CommunicationObjects::Description::ElementDouble(
				"m_z",
				std::bind(&CommLocalizationObjects::CPose2D::getM_z, obj),
				std::bind(&CommLocalizationObjects::CPose2D::setM_z, obj, std::placeholders::_1)
			)
		)
	);
	return ret;
} // end SelfDescription
} // end namespace Description
} // end namespace CommunicationObjects
} // end namespace SeRoNet