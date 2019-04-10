#ifndef _KBCOORDINATIONSERVICEKBEVENTEVENTHANDLER_HH_
#define _KBCOORDINATIONSERVICEKBEVENTEVENTHANDLER_HH_
#include "aceSmartSoft.hh"
#include <string>
#include <iostream>


#include "CommBasicObjects/CommKBEventResult.hh"
#include "CommBasicObjects/CommKBEventParam.hh"

class KBCoordinationServiceKbEventEventHandler
{
public:
	std::string handleEvent(const CommBasicObjects::CommKBEventResult &r) throw();
	CommBasicObjects::CommKBEventParam activateEventParam(const std::string& parameterString);
};

#endif
