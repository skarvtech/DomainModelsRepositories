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
#ifndef COMMPTUOBJECTS_PTUGOALEVENTSTATE_ACE_H_
#define COMMPTUOBJECTS_PTUGOALEVENTSTATE_ACE_H_

#include "CommPTUObjects/PTUGoalEventState.hh"

#include <ace/CDR_Stream.h>

// serialization operator for DataStructure PTUGoalEventState
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommPTUObjectsIDL::PTUGoalEventState &data);

// de-serialization operator for DataStructure PTUGoalEventState
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommPTUObjectsIDL::PTUGoalEventState &data);

// serialization operator for CommunicationObject PTUGoalEventState
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommPTUObjects::PTUGoalEventState &obj);

// de-serialization operator for CommunicationObject PTUGoalEventState
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommPTUObjects::PTUGoalEventState &obj);

#endif /* COMMPTUOBJECTS_PTUGOALEVENTSTATE_ACE_H_ */
