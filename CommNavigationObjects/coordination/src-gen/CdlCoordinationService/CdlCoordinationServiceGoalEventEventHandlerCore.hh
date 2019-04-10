#ifndef _CDLCOORDINATIONSERVICEGOALEVENTEVENTHANDLERCORE_HH_
#define _CDLCOORDINATIONSERVICEGOALEVENTEVENTHANDLERCORE_HH_
#include "aceSmartSoft.hh"
#include <string>

#include "CommNavigationObjects/CommCdlGoalEventResult.hh"
#include "CommNavigationObjects/CommCdlGoalEventParameter.hh"
#include "CdlCoordinationServiceGoalEventEventHandler.hh"

class CdlCoordinationServiceGoalEventEventHandlerCore : public Smart::IEventHandler<CommNavigationObjects::CommCdlGoalEventResult, SmartACE::EventId>
{
public:
	CdlCoordinationServiceGoalEventEventHandlerCore(Smart::IEventClientPattern<CommNavigationObjects::CommCdlGoalEventParameter, CommNavigationObjects::CommCdlGoalEventResult, SmartACE::EventId> *client, std::string moduleInstanceName);
	virtual void handleEvent(const SmartACE::EventId &id, const CommNavigationObjects::CommCdlGoalEventResult &r) override;
	CommNavigationObjects::CommCdlGoalEventParameter activateEventParam(const std::string& parameterString);
private:
	CdlCoordinationServiceGoalEventEventHandler userHandler;
	std::string ciInstanceName;
};

#endif
