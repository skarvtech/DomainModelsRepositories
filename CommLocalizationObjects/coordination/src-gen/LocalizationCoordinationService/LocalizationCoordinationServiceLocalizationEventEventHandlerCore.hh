#ifndef _LOCALIZATIONCOORDINATIONSERVICELOCALIZATIONEVENTEVENTHANDLERCORE_HH_
#define _LOCALIZATIONCOORDINATIONSERVICELOCALIZATIONEVENTEVENTHANDLERCORE_HH_
#include "aceSmartSoft.hh"
#include <string>

#include "CommLocalizationObjects/CommLocalizationEventResult.hh"
#include "CommLocalizationObjects/CommLocalizationEventParameter.hh"
#include "LocalizationCoordinationServiceLocalizationEventEventHandler.hh"

class LocalizationCoordinationServiceLocalizationEventEventHandlerCore : public Smart::IEventHandler<CommLocalizationObjects::CommLocalizationEventResult>
{
public:
	LocalizationCoordinationServiceLocalizationEventEventHandlerCore(Smart::IEventClientPattern<CommLocalizationObjects::CommLocalizationEventParameter, CommLocalizationObjects::CommLocalizationEventResult> *client, std::string moduleInstanceName);
	virtual void handleEvent(const Smart::EventIdPtr &id, const CommLocalizationObjects::CommLocalizationEventResult &r) override;
	CommLocalizationObjects::CommLocalizationEventParameter activateEventParam(const std::string& parameterString);
private:
	LocalizationCoordinationServiceLocalizationEventEventHandler userHandler;
	std::string ciInstanceName;
};

#endif
