#ifndef _KBCOORDINATIONSERVICEKBEVENTEVENTHANDLERCORE_HH_
#define _KBCOORDINATIONSERVICEKBEVENTEVENTHANDLERCORE_HH_
#include "aceSmartSoft.hh"
#include <string>

#include "CommBasicObjects/CommKBEventResult.hh"
#include "CommBasicObjects/CommKBEventParam.hh"
#include "KBCoordinationServiceKbEventEventHandler.hh"

class KBCoordinationServiceKbEventEventHandlerCore : public Smart::IEventHandler<CommBasicObjects::CommKBEventResult, SmartACE::EventId>
{
public:
	KBCoordinationServiceKbEventEventHandlerCore(Smart::IEventClientPattern<CommBasicObjects::CommKBEventParam, CommBasicObjects::CommKBEventResult, SmartACE::EventId> *client, std::string moduleInstanceName);
	virtual void handleEvent(const SmartACE::EventId &id, const CommBasicObjects::CommKBEventResult &r) override;
	CommBasicObjects::CommKBEventParam activateEventParam(const std::string& parameterString);
private:
	KBCoordinationServiceKbEventEventHandler userHandler;
	std::string ciInstanceName;
};

#endif
