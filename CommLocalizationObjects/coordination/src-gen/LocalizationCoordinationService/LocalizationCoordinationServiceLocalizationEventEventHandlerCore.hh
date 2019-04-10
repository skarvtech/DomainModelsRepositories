#ifndef _LOCALIZATIONCOORDINATIONSERVICELOCALIZATIONEVENTEVENTHANDLERCORE_HH_
#define _LOCALIZATIONCOORDINATIONSERVICELOCALIZATIONEVENTEVENTHANDLERCORE_HH_
#include "aceSmartSoft.hh"
#include <string>

#include "CommLocalizationObjects/CommLocalizationEventResult.hh"
#include "CommLocalizationObjects/CommLocalizationEventParameter.hh"
#include "LocalizationCoordinationServiceLocalizationEventEventHandler.hh"

class LocalizationCoordinationServiceLocalizationEventEventHandlerCore : public Smart::IEventHandler<CommLocalizationObjects::CommLocalizationEventResult, SmartACE::EventId>
{
public:
	LocalizationCoordinationServiceLocalizationEventEventHandlerCore(Smart::IEventClientPattern<CommLocalizationObjects::CommLocalizationEventParameter, CommLocalizationObjects::CommLocalizationEventResult, SmartACE::EventId> *client, std::string moduleInstanceName);
	virtual void handleEvent(const SmartACE::EventId &id, const CommLocalizationObjects::CommLocalizationEventResult &r) override;
	CommLocalizationObjects::CommLocalizationEventParameter activateEventParam(const std::string& parameterString);
private:
	LocalizationCoordinationServiceLocalizationEventEventHandler userHandler;
	std::string ciInstanceName;
};

#endif
