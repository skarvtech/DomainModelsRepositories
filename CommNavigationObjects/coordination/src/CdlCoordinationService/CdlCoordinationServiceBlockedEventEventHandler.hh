#ifndef _CDLCOORDINATIONSERVICEBLOCKEDEVENTEVENTHANDLER_HH_
#define _CDLCOORDINATIONSERVICEBLOCKEDEVENTEVENTHANDLER_HH_
#include "aceSmartSoft.hh"
#include <string>
#include <iostream>


#include "CommNavigationObjects/CommCdlRobotBlockedEventResult.hh"
#include "CommNavigationObjects/CommCdlRobotBlockedEventParameter.hh"

class CdlCoordinationServiceBlockedEventEventHandler
{
public:
	std::string handleEvent(const CommNavigationObjects::CommCdlRobotBlockedEventResult &r) throw();
	CommNavigationObjects::CommCdlRobotBlockedEventParameter activateEventParam(const std::string& parameterString);
};

#endif
