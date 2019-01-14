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
#ifndef COMMPTUOBJECTS_COMMPTUMOVEREQUEST_ACE_H_
#define COMMPTUOBJECTS_COMMPTUMOVEREQUEST_ACE_H_

#include "CommPTUObjects/CommPTUMoveRequest.hh"

#include <ace/CDR_Stream.h>

// serialization operator for DataStructure CommPTUMoveRequest
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommPTUObjectsIDL::CommPTUMoveRequest &data);

// de-serialization operator for DataStructure CommPTUMoveRequest
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommPTUObjectsIDL::CommPTUMoveRequest &data);

// serialization operator for CommunicationObject CommPTUMoveRequest
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommPTUObjects::CommPTUMoveRequest &obj);

// de-serialization operator for CommunicationObject CommPTUMoveRequest
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommPTUObjects::CommPTUMoveRequest &obj);

#endif /* COMMPTUOBJECTS_COMMPTUMOVEREQUEST_ACE_H_ */
