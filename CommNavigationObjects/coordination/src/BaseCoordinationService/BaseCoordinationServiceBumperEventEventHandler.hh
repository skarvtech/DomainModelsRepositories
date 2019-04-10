#ifndef _BASECOORDINATIONSERVICEBUMPEREVENTEVENTHANDLER_HH_
#define _BASECOORDINATIONSERVICEBUMPEREVENTEVENTHANDLER_HH_
#include "aceSmartSoft.hh"
#include <string>
#include <iostream>


#include "CommBasicObjects/CommBumperEventResult.hh"
#include "CommBasicObjects/CommBumperEventParameter.hh"

class BaseCoordinationServiceBumperEventEventHandler
{
public:
	std::string handleEvent(const CommBasicObjects::CommBumperEventResult &r) throw();
	CommBasicObjects::CommBumperEventParameter activateEventParam(const std::string& parameterString);
};

#endif
