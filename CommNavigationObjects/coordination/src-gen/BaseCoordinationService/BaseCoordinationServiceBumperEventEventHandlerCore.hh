#ifndef _BASECOORDINATIONSERVICEBUMPEREVENTEVENTHANDLERCORE_HH_
#define _BASECOORDINATIONSERVICEBUMPEREVENTEVENTHANDLERCORE_HH_
#include "aceSmartSoft.hh"
#include <string>

#include "CommBasicObjects/CommBumperEventResult.hh"
#include "CommBasicObjects/CommBumperEventParameter.hh"
#include "BaseCoordinationServiceBumperEventEventHandler.hh"

class BaseCoordinationServiceBumperEventEventHandlerCore : public Smart::IEventHandler<CommBasicObjects::CommBumperEventResult>
{
public:
	BaseCoordinationServiceBumperEventEventHandlerCore(Smart::IEventClientPattern<CommBasicObjects::CommBumperEventParameter, CommBasicObjects::CommBumperEventResult> *client, std::string moduleInstanceName);
	virtual void handleEvent(const Smart::EventIdPtr &id, const CommBasicObjects::CommBumperEventResult &r) override;
	CommBasicObjects::CommBumperEventParameter activateEventParam(const std::string& parameterString);
private:
	BaseCoordinationServiceBumperEventEventHandler userHandler;
	std::string ciInstanceName;
};

#endif
