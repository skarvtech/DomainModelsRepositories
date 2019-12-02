#ifndef _PLANNERCOORDINATIONSERVICEPLANNEREVENTEVENTHANDLERCORE_HH_
#define _PLANNERCOORDINATIONSERVICEPLANNEREVENTEVENTHANDLERCORE_HH_
#include "aceSmartSoft.hh"
#include <string>

#include "CommNavigationObjects/CommPlannerEventResult.hh"
#include "CommNavigationObjects/CommPlannerEventParameter.hh"
#include "PlannerCoordinationServicePlannerEventEventHandler.hh"

class PlannerCoordinationServicePlannerEventEventHandlerCore : public Smart::IEventHandler<CommNavigationObjects::CommPlannerEventResult>
{
public:
	PlannerCoordinationServicePlannerEventEventHandlerCore(Smart::IEventClientPattern<CommNavigationObjects::CommPlannerEventParameter, CommNavigationObjects::CommPlannerEventResult> *client, std::string moduleInstanceName);
	virtual void handleEvent(const Smart::EventIdPtr &id, const CommNavigationObjects::CommPlannerEventResult &r) override;
	CommNavigationObjects::CommPlannerEventParameter activateEventParam(const std::string& parameterString);
private:
	PlannerCoordinationServicePlannerEventEventHandler userHandler;
	std::string ciInstanceName;
};

#endif
