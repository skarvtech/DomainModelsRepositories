#ifndef _PLANNERCOORDINATIONSERVICEPLANNEREVENTEVENTHANDLERCORE_HH_
#define _PLANNERCOORDINATIONSERVICEPLANNEREVENTEVENTHANDLERCORE_HH_
#include "aceSmartSoft.hh"
#include <string>

#include "CommNavigationObjects/CommPlannerEventResult.hh"
#include "CommNavigationObjects/CommPlannerEventParameter.hh"
#include "PlannerCoordinationServicePlannerEventEventHandler.hh"

class PlannerCoordinationServicePlannerEventEventHandlerCore : public Smart::IEventHandler<CommNavigationObjects::CommPlannerEventResult, SmartACE::EventId>
{
public:
	PlannerCoordinationServicePlannerEventEventHandlerCore(Smart::IEventClientPattern<CommNavigationObjects::CommPlannerEventParameter, CommNavigationObjects::CommPlannerEventResult, SmartACE::EventId> *client, std::string moduleInstanceName);
	virtual void handleEvent(const SmartACE::EventId &id, const CommNavigationObjects::CommPlannerEventResult &r) override;
	CommNavigationObjects::CommPlannerEventParameter activateEventParam(const std::string& parameterString);
private:
	PlannerCoordinationServicePlannerEventEventHandler userHandler;
	std::string ciInstanceName;
};

#endif
