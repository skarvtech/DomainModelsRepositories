#ifndef _BASECOORDINATIONSERVICEBATTERYEVENTEVENTHANDLER_HH_
#define _BASECOORDINATIONSERVICEBATTERYEVENTEVENTHANDLER_HH_
#include "aceSmartSoft.hh"
#include <string>
#include <iostream>


#include "CommBasicObjects/CommBatteryEvent.hh"
#include "CommBasicObjects/CommBatteryParameter.hh"

class BaseCoordinationServiceBatteryEventEventHandler
{
public:
	std::string handleEvent(const CommBasicObjects::CommBatteryEvent &r) throw();
	CommBasicObjects::CommBatteryParameter activateEventParam(const std::string& parameterString);
};

#endif
