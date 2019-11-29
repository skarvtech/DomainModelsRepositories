#ifndef _MANIPULATORCOORDINATIONSERVICEMANIPULATOREVENTEVENTHANDLERCORE_HH_
#define _MANIPULATORCOORDINATIONSERVICEMANIPULATOREVENTEVENTHANDLERCORE_HH_
#include "aceSmartSoft.hh"
#include <string>

#include "CommManipulatorObjects/CommManipulatorEventResult.hh"
#include "CommManipulatorObjects/CommManipulatorEventParameter.hh"
#include "ManipulatorCoordinationServiceManipulatoreventEventHandler.hh"

class ManipulatorCoordinationServiceManipulatoreventEventHandlerCore : public Smart::IEventHandler<CommManipulatorObjects::CommManipulatorEventResult>
{
public:
	ManipulatorCoordinationServiceManipulatoreventEventHandlerCore(Smart::IEventClientPattern<CommManipulatorObjects::CommManipulatorEventParameter, CommManipulatorObjects::CommManipulatorEventResult> *client, std::string moduleInstanceName);
	virtual void handleEvent(const Smart::EventIdPtr &id, const CommManipulatorObjects::CommManipulatorEventResult &r) override;
	CommManipulatorObjects::CommManipulatorEventParameter activateEventParam(const std::string& parameterString);
private:
	ManipulatorCoordinationServiceManipulatoreventEventHandler userHandler;
	std::string ciInstanceName;
};

#endif
