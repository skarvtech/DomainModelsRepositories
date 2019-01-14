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
#ifndef COMMPTUOBJECTS_COMMPTUMOVERESPONSE_ACE_H_
#define COMMPTUOBJECTS_COMMPTUMOVERESPONSE_ACE_H_

#include "CommPTUObjects/CommPTUMoveResponse.hh"

#include <ace/CDR_Stream.h>

// serialization operator for DataStructure CommPTUMoveResponse
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommPTUObjectsIDL::CommPTUMoveResponse &data);

// de-serialization operator for DataStructure CommPTUMoveResponse
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommPTUObjectsIDL::CommPTUMoveResponse &data);

// serialization operator for CommunicationObject CommPTUMoveResponse
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommPTUObjects::CommPTUMoveResponse &obj);

// de-serialization operator for CommunicationObject CommPTUMoveResponse
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommPTUObjects::CommPTUMoveResponse &obj);

#endif /* COMMPTUOBJECTS_COMMPTUMOVERESPONSE_ACE_H_ */
