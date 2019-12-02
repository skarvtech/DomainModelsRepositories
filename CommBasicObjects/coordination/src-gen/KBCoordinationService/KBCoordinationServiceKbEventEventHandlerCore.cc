#include "KBCoordinationServiceKbEventEventHandlerCore.hh"
#include "runTimeInterface.hh"
#include <cstdio>
#include <iostream>

KBCoordinationServiceKbEventEventHandlerCore::KBCoordinationServiceKbEventEventHandlerCore(Smart::IEventClientPattern<CommBasicObjects::CommKBEventParam, CommBasicObjects::CommKBEventResult> *client, std::string ciInstanceName)
: Smart::IEventHandler<CommBasicObjects::CommKBEventResult>(client)
{
	this->ciInstanceName = ciInstanceName;
}
		
void KBCoordinationServiceKbEventEventHandlerCore::handleEvent(const Smart::EventIdPtr &id, const CommBasicObjects::CommKBEventResult &r) {
	std::cout<<"Event CORE Called!"<<std::endl;
	std::string resultString;
	resultString = userHandler.handleEvent(r);
	
	std::ostringstream eventResult;
	eventResult<< "(";
	eventResult<< "( coordination-interfaces-type . \"KBCoordinationService\")";
	eventResult<< "( coordination-interface-instance . \""<<this->ciInstanceName<<"\")";
	eventResult<< "( service-name . \"kbEvent\")";
	eventResult<< "( id . "<<id<<")";
	eventResult<< "( data . \""<<resultString<<"\")";
	eventResult<< ")";
//	eventResult<<"((\"KBCoordinationService\" "<<this->ciInstanceName<<" \"kbEvent\" "<<id<<") "<<resultString<<")";
	int result = appedEvent(eventResult.str());
}

CommBasicObjects::CommKBEventParam KBCoordinationServiceKbEventEventHandlerCore::activateEventParam(const std::string& parameterString){
	std::cout<<"Activate Event Parameter string: "<<parameterString<<std::endl;
	return userHandler.activateEventParam(parameterString);
}
