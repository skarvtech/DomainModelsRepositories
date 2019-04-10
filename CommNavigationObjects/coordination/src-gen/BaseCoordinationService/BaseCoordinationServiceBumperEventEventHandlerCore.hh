#ifndef _BASECOORDINATIONSERVICEBUMPEREVENTEVENTHANDLERCORE_HH_
#define _BASECOORDINATIONSERVICEBUMPEREVENTEVENTHANDLERCORE_HH_
#include "aceSmartSoft.hh"
#include <string>

#include "CommBasicObjects/CommBumperEventResult.hh"
#include "CommBasicObjects/CommBumperEventParameter.hh"
#include "BaseCoordinationServiceBumperEventEventHandler.hh"

class BaseCoordinationServiceBumperEventEventHandlerCore : public Smart::IEventHandler<CommBasicObjects::CommBumperEventResult, SmartACE::EventId>
{
public:
	BaseCoordinationServiceBumperEventEventHandlerCore(Smart::IEventClientPattern<CommBasicObjects::CommBumperEventParameter, CommBasicObjects::CommBumperEventResult, SmartACE::EventId> *client, std::string moduleInstanceName);
	virtual void handleEvent(const SmartACE::EventId &id, const CommBasicObjects::CommBumperEventResult &r) override;
	CommBasicObjects::CommBumperEventParameter activateEventParam(const std::string& parameterString);
private:
	BaseCoordinationServiceBumperEventEventHandler userHandler;
	std::string ciInstanceName;
};

#endif
