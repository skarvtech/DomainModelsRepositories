#ifndef _CDLCOORDINATIONSERVICEGOALEVENTEVENTHANDLER_HH_
#define _CDLCOORDINATIONSERVICEGOALEVENTEVENTHANDLER_HH_
#include "aceSmartSoft.hh"
#include <string>
#include <iostream>


#include "CommNavigationObjects/CommCdlGoalEventResult.hh"
#include "CommNavigationObjects/CommCdlGoalEventParameter.hh"

class CdlCoordinationServiceGoalEventEventHandler
{
public:
	std::string handleEvent(const CommNavigationObjects::CommCdlGoalEventResult &r) throw();
	CommNavigationObjects::CommCdlGoalEventParameter activateEventParam(const std::string& parameterString);
};

#endif
