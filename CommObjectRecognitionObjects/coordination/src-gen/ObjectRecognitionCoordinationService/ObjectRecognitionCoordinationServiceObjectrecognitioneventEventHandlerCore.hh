#ifndef _OBJECTRECOGNITIONCOORDINATIONSERVICEOBJECTRECOGNITIONEVENTEVENTHANDLERCORE_HH_
#define _OBJECTRECOGNITIONCOORDINATIONSERVICEOBJECTRECOGNITIONEVENTEVENTHANDLERCORE_HH_
#include "aceSmartSoft.hh"
#include <string>

#include "CommObjectRecognitionObjects/CommObjectRecognitionEventResult.hh"
#include "CommBasicObjects/CommVoid.hh"
#include "ObjectRecognitionCoordinationServiceObjectrecognitioneventEventHandler.hh"

class ObjectRecognitionCoordinationServiceObjectrecognitioneventEventHandlerCore : public Smart::IEventHandler<CommObjectRecognitionObjects::CommObjectRecognitionEventResult>
{
public:
	ObjectRecognitionCoordinationServiceObjectrecognitioneventEventHandlerCore(Smart::IEventClientPattern<CommBasicObjects::CommVoid, CommObjectRecognitionObjects::CommObjectRecognitionEventResult> *client, std::string moduleInstanceName);
	virtual void handleEvent(const Smart::EventIdPtr &id, const CommObjectRecognitionObjects::CommObjectRecognitionEventResult &r) override;
	CommBasicObjects::CommVoid activateEventParam(const std::string& parameterString);
private:
	ObjectRecognitionCoordinationServiceObjectrecognitioneventEventHandler userHandler;
	std::string ciInstanceName;
};

#endif
