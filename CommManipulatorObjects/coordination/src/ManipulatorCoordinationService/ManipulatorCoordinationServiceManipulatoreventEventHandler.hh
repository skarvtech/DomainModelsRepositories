#ifndef _MANIPULATORCOORDINATIONSERVICEMANIPULATOREVENTEVENTHANDLER_HH_
#define _MANIPULATORCOORDINATIONSERVICEMANIPULATOREVENTEVENTHANDLER_HH_
#include "aceSmartSoft.hh"
#include <string>
#include <iostream>


#include "CommManipulatorObjects/CommManipulatorEventResult.hh"
#include "CommManipulatorObjects/CommManipulatorEventParameter.hh"

class ManipulatorCoordinationServiceManipulatoreventEventHandler
{
public:
	std::string handleEvent(const CommManipulatorObjects::CommManipulatorEventResult &r) throw();
	CommManipulatorObjects::CommManipulatorEventParameter activateEventParam(const std::string& parameterString);
};

#endif
