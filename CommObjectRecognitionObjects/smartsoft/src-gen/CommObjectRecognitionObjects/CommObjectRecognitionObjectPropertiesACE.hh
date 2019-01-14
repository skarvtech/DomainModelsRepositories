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
#ifndef COMMOBJECTRECOGNITIONOBJECTS_COMMOBJECTRECOGNITIONOBJECTPROPERTIES_ACE_H_
#define COMMOBJECTRECOGNITIONOBJECTS_COMMOBJECTRECOGNITIONOBJECTPROPERTIES_ACE_H_

#include "CommObjectRecognitionObjects/CommObjectRecognitionObjectProperties.hh"

#include <ace/CDR_Stream.h>

// serialization operator for DataStructure CommObjectRecognitionObjectProperties
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommObjectRecognitionObjectsIDL::CommObjectRecognitionObjectProperties &data);

// de-serialization operator for DataStructure CommObjectRecognitionObjectProperties
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommObjectRecognitionObjectsIDL::CommObjectRecognitionObjectProperties &data);

// serialization operator for CommunicationObject CommObjectRecognitionObjectProperties
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommObjectRecognitionObjects::CommObjectRecognitionObjectProperties &obj);

// de-serialization operator for CommunicationObject CommObjectRecognitionObjectProperties
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommObjectRecognitionObjects::CommObjectRecognitionObjectProperties &obj);

#endif /* COMMOBJECTRECOGNITIONOBJECTS_COMMOBJECTRECOGNITIONOBJECTPROPERTIES_ACE_H_ */
