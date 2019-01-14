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
#include "DomainVision/CommRGBDImageACE.hh"
#include <ace/SString.h>
#include "CommBasicObjects/CommBaseStateACE.hh"
#include "CommBasicObjects/CommPose3dACE.hh"
#include "DomainVision/CommDepthImageACE.hh"
#include "DomainVision/CommVideoImageACE.hh"

// serialization operator for element CommRGBDImage
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const DomainVisionIDL::CommRGBDImage &data)
{
	ACE_CDR::Boolean good_bit = true;
	// serialize list-element color_image
	good_bit = good_bit && cdr << data.color_image;
	// serialize list-element depth_image
	good_bit = good_bit && cdr << data.depth_image;
	// serialize list-element base_state
	good_bit = good_bit && cdr << data.base_state;
	// serialize list-element sensor_pose
	good_bit = good_bit && cdr << data.sensor_pose;
	// serialize list-element seq_count
	good_bit = good_bit && cdr.write_ulong(data.seq_count);
	// serialize list-element is_valid
	good_bit = good_bit && cdr.write_boolean(data.is_valid);
	
	return good_bit;
}

// de-serialization operator for element CommRGBDImage
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, DomainVisionIDL::CommRGBDImage &data)
{
	ACE_CDR::Boolean good_bit = true;
	// deserialize type element color_image
	good_bit = good_bit && cdr >> data.color_image;
	// deserialize type element depth_image
	good_bit = good_bit && cdr >> data.depth_image;
	// deserialize type element base_state
	good_bit = good_bit && cdr >> data.base_state;
	// deserialize type element sensor_pose
	good_bit = good_bit && cdr >> data.sensor_pose;
	// deserialize type element seq_count
	good_bit = good_bit && cdr.read_ulong(data.seq_count);
	// deserialize type element is_valid
	good_bit = good_bit && cdr.read_boolean(data.is_valid);
	
	return good_bit;
}

// serialization operator for CommunicationObject CommRGBDImage
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const DomainVision::CommRGBDImage &obj)
{
	return cdr << obj.get();
}

// de-serialization operator for CommunicationObject CommRGBDImage
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, DomainVision::CommRGBDImage &obj)
{
	return cdr >> obj.set();
}
