#include "ObjectRecognitionCoordinationServiceObjectrecognitioneventEventHandlerCore.hh"
#include "runTimeInterface.hh"
#include <cstdio>
#include <iostream>

ObjectRecognitionCoordinationServiceObjectrecognitioneventEventHandlerCore::ObjectRecognitionCoordinationServiceObjectrecognitioneventEventHandlerCore(Smart::IEventClientPattern<CommBasicObjects::CommVoid, CommObjectRecognitionObjects::CommObjectRecognitionEventResult> *client, std::string ciInstanceName)
: Smart::IEventHandler<CommObjectRecognitionObjects::CommObjectRecognitionEventResult>(client)
{
	this->ciInstanceName = ciInstanceName;
}
		
void ObjectRecognitionCoordinationServiceObjectrecognitioneventEventHandlerCore::handleEvent(const Smart::EventIdPtr &id, const CommObjectRecognitionObjects::CommObjectRecognitionEventResult &r) {
	std::cout<<"Event CORE Called!"<<std::endl;
	std::string resultString;
	resultString = userHandler.handleEvent(r);
	
	std::ostringstream eventResult;
	eventResult<< "(";
	eventResult<< "( coordination-interfaces-type . \"ObjectRecognitionCoordinationService\")";
	eventResult<< "( coordination-interface-instance . \""<<this->ciInstanceName<<"\")";
	eventResult<< "( service-name . \"objectrecognitionevent\")";
	eventResult<< "( id . "<<id<<")";
	eventResult<< "( data . \""<<resultString<<"\")";
	eventResult<< ")";
//	eventResult<<"((\"ObjectRecognitionCoordinationService\" "<<this->ciInstanceName<<" \"objectrecognitionevent\" "<<id<<") "<<resultString<<")";
	int result = appedEvent(eventResult.str());
}

CommBasicObjects::CommVoid ObjectRecognitionCoordinationServiceObjectrecognitioneventEventHandlerCore::activateEventParam(const std::string& parameterString){
	std::cout<<"Activate Event Parameter string: "<<parameterString<<std::endl;
	return userHandler.activateEventParam(parameterString);
}
