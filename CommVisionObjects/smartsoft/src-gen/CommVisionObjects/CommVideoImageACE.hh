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
#ifndef COMMVISIONOBJECTS_COMMVIDEOIMAGE_ACE_H_
#define COMMVISIONOBJECTS_COMMVIDEOIMAGE_ACE_H_

#include "CommVisionObjects/CommVideoImage.hh"

#include <ace/CDR_Stream.h>

// serialization operator for DataStructure CommVideoImage
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommVisionObjectsIDL::CommVideoImage &data);

// de-serialization operator for DataStructure CommVideoImage
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommVisionObjectsIDL::CommVideoImage &data);

// serialization operator for CommunicationObject CommVideoImage
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommVisionObjects::CommVideoImage &obj);

// de-serialization operator for CommunicationObject CommVideoImage
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommVisionObjects::CommVideoImage &obj);

#endif /* COMMVISIONOBJECTS_COMMVIDEOIMAGE_ACE_H_ */
