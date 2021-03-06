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
#include "CommRobotinoObjects/CommPathNavigationNodePathAnswerACE.hh"
#include <ace/SString.h>
#include "CommRobotinoObjects/CommNavigationPathsACE.hh"

// serialization operator for element CommPathNavigationNodePathAnswer
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommRobotinoObjectsIDL::CommPathNavigationNodePathAnswer &data)
{
	ACE_CDR::Boolean good_bit = true;
	// serialize list-element valid
	good_bit = good_bit && cdr.write_boolean(data.valid);
	// serialize list-element paths
	good_bit = good_bit && cdr << data.paths;
	
	return good_bit;
}

// de-serialization operator for element CommPathNavigationNodePathAnswer
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommRobotinoObjectsIDL::CommPathNavigationNodePathAnswer &data)
{
	ACE_CDR::Boolean good_bit = true;
	// deserialize type element valid
	good_bit = good_bit && cdr.read_boolean(data.valid);
	// deserialize type element paths
	good_bit = good_bit && cdr >> data.paths;
	
	return good_bit;
}

// serialization operator for CommunicationObject CommPathNavigationNodePathAnswer
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommRobotinoObjects::CommPathNavigationNodePathAnswer &obj)
{
	return cdr << obj.get();
}

// de-serialization operator for CommunicationObject CommPathNavigationNodePathAnswer
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommRobotinoObjects::CommPathNavigationNodePathAnswer &obj)
{
	return cdr >> obj.set();
}
