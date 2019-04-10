#ifndef _BASECOORDINATIONSERVICEBATTERYEVENTEVENTHANDLERCORE_HH_
#define _BASECOORDINATIONSERVICEBATTERYEVENTEVENTHANDLERCORE_HH_
#include "aceSmartSoft.hh"
#include <string>

#include "CommBasicObjects/CommBatteryEvent.hh"
#include "CommBasicObjects/CommBatteryParameter.hh"
#include "BaseCoordinationServiceBatteryEventEventHandler.hh"

class BaseCoordinationServiceBatteryEventEventHandlerCore : public Smart::IEventHandler<CommBasicObjects::CommBatteryEvent, SmartACE::EventId>
{
public:
	BaseCoordinationServiceBatteryEventEventHandlerCore(Smart::IEventClientPattern<CommBasicObjects::CommBatteryParameter, CommBasicObjects::CommBatteryEvent, SmartACE::EventId> *client, std::string moduleInstanceName);
	virtual void handleEvent(const SmartACE::EventId &id, const CommBasicObjects::CommBatteryEvent &r) override;
	CommBasicObjects::CommBatteryParameter activateEventParam(const std::string& parameterString);
private:
	BaseCoordinationServiceBatteryEventEventHandler userHandler;
	std::string ciInstanceName;
};

#endif
