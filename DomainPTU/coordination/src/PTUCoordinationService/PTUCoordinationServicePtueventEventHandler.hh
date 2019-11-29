#ifndef _PTUCOORDINATIONSERVICEPTUEVENTEVENTHANDLER_HH_
#define _PTUCOORDINATIONSERVICEPTUEVENTEVENTHANDLER_HH_
#include "aceSmartSoft.hh"
#include <string>
#include <iostream>


#include "DomainPTU/CommPTUGoalEventResult.hh"
#include "DomainPTU/CommPTUGoalEventParameter.hh"

class PTUCoordinationServicePtueventEventHandler
{
public:
	std::string handleEvent(const DomainPTU::CommPTUGoalEventResult &r) throw();
	DomainPTU::CommPTUGoalEventParameter activateEventParam(const std::string& parameterString);
};

#endif
