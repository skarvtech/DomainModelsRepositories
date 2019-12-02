#ifndef _CDLCOORDINATIONSERVICEBLOCKEDEVENTEVENTHANDLERCORE_HH_
#define _CDLCOORDINATIONSERVICEBLOCKEDEVENTEVENTHANDLERCORE_HH_
#include "aceSmartSoft.hh"
#include <string>

#include "CommNavigationObjects/CommCdlRobotBlockedEventResult.hh"
#include "CommNavigationObjects/CommCdlRobotBlockedEventParameter.hh"
#include "CdlCoordinationServiceBlockedEventEventHandler.hh"

class CdlCoordinationServiceBlockedEventEventHandlerCore : public Smart::IEventHandler<CommNavigationObjects::CommCdlRobotBlockedEventResult>
{
public:
	CdlCoordinationServiceBlockedEventEventHandlerCore(Smart::IEventClientPattern<CommNavigationObjects::CommCdlRobotBlockedEventParameter, CommNavigationObjects::CommCdlRobotBlockedEventResult> *client, std::string moduleInstanceName);
	virtual void handleEvent(const Smart::EventIdPtr &id, const CommNavigationObjects::CommCdlRobotBlockedEventResult &r) override;
	CommNavigationObjects::CommCdlRobotBlockedEventParameter activateEventParam(const std::string& parameterString);
private:
	CdlCoordinationServiceBlockedEventEventHandler userHandler;
	std::string ciInstanceName;
};

#endif
