#ifndef _LOCALIZATIONCOORDINATIONSERVICELOCALIZATIONEVENTEVENTHANDLER_HH_
#define _LOCALIZATIONCOORDINATIONSERVICELOCALIZATIONEVENTEVENTHANDLER_HH_
#include "aceSmartSoft.hh"
#include <string>
#include <iostream>


#include "CommLocalizationObjects/CommLocalizationEventResult.hh"
#include "CommLocalizationObjects/CommLocalizationEventParameter.hh"

class LocalizationCoordinationServiceLocalizationEventEventHandler
{
public:
	std::string handleEvent(const CommLocalizationObjects::CommLocalizationEventResult &r) throw();
	CommLocalizationObjects::CommLocalizationEventParameter activateEventParam(const std::string& parameterString);
};

#endif
