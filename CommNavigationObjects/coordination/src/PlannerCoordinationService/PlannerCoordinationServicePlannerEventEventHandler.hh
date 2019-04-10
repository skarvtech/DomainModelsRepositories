#ifndef _PLANNERCOORDINATIONSERVICEPLANNEREVENTEVENTHANDLER_HH_
#define _PLANNERCOORDINATIONSERVICEPLANNEREVENTEVENTHANDLER_HH_
#include "aceSmartSoft.hh"
#include <string>
#include <iostream>


#include "CommNavigationObjects/CommPlannerEventResult.hh"
#include "CommNavigationObjects/CommPlannerEventParameter.hh"

class PlannerCoordinationServicePlannerEventEventHandler
{
public:
	std::string handleEvent(const CommNavigationObjects::CommPlannerEventResult &r) throw();
	CommNavigationObjects::CommPlannerEventParameter activateEventParam(const std::string& parameterString);
};

#endif
