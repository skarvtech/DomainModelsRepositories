#ifndef _PTUCOORDINATIONSERVICEPTUEVENTEVENTHANDLERCORE_HH_
#define _PTUCOORDINATIONSERVICEPTUEVENTEVENTHANDLERCORE_HH_
#include "aceSmartSoft.hh"
#include <string>

#include "DomainPTU/CommPTUGoalEventResult.hh"
#include "DomainPTU/CommPTUGoalEventParameter.hh"
#include "PTUCoordinationServicePtueventEventHandler.hh"

class PTUCoordinationServicePtueventEventHandlerCore : public Smart::IEventHandler<DomainPTU::CommPTUGoalEventResult>
{
public:
	PTUCoordinationServicePtueventEventHandlerCore(Smart::IEventClientPattern<DomainPTU::CommPTUGoalEventParameter, DomainPTU::CommPTUGoalEventResult> *client, std::string moduleInstanceName);
	virtual void handleEvent(const Smart::EventIdPtr &id, const DomainPTU::CommPTUGoalEventResult &r) override;
	DomainPTU::CommPTUGoalEventParameter activateEventParam(const std::string& parameterString);
private:
	PTUCoordinationServicePtueventEventHandler userHandler;
	std::string ciInstanceName;
};

#endif
