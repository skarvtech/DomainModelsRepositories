//--------------------------------------------------------------------------
// Code generated by the SmartSoft MDSD Toolchain
// The SmartSoft Toolchain has been developed by:
//  
// Service Robotics Research Center
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

#include "CommBasicObjects/CommFileReadRequest.hh"

#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/SelfDescription.hpp>
#pragma once

namespace SeRoNet {
namespace CommunicationObjects {
namespace Description {
	
// serialization for CommBasicObjectsIDL::CommFileReadRequest
template <>
IDescription::shp_t SelfDescription(CommBasicObjectsIDL::CommFileReadRequest *obj, std::string name);

// serialization for CommFileReadRequest
template <>
inline IDescription::shp_t SelfDescription(CommBasicObjects::CommFileReadRequest *obj, std::string name)
{
	return SelfDescription(&(obj->set()),name); 
} // end SelfDescription

} // end namespace Description
} // end namespace CommunicationObjects
} // end namespace SeRoNet
