#include "BaseCoordinationServiceBumperEventEventHandlerCore.hh"
#include "runTimeInterface.hh"
#include <cstdio>
#include <iostream>

BaseCoordinationServiceBumperEventEventHandlerCore::BaseCoordinationServiceBumperEventEventHandlerCore(Smart::IEventClientPattern<CommBasicObjects::CommBumperEventParameter, CommBasicObjects::CommBumperEventResult, SmartACE::EventId> *client, std::string ciInstanceName)
: Smart::IEventHandler<CommBasicObjects::CommBumperEventResult,SmartACE::EventId>(client)
{
	this->ciInstanceName = ciInstanceName;
}
		
void BaseCoordinationServiceBumperEventEventHandlerCore::handleEvent(const SmartACE::EventId &id, const CommBasicObjects::CommBumperEventResult &r) {
	std::cout<<"Event CORE Called!"<<std::endl;
	std::string resultString;
	resultString = userHandler.handleEvent(r);
	
	std::ostringstream eventResult;
	eventResult<< "(";
	eventResult<< "( coordination-interfaces-type . \"BaseCoordinationService\")";
	eventResult<< "( coordination-interface-instance . \""<<this->ciInstanceName<<"\")";
	eventResult<< "( service-name . \"bumperEvent\")";
	eventResult<< "( id . "<<id<<")";
	eventResult<< "( data . \""<<resultString<<"\")";
	eventResult<< ")";
//	eventResult<<"((\"BaseCoordinationService\" "<<this->ciInstanceName<<" \"bumperEvent\" "<<id<<") "<<resultString<<")";
	int result = appedEvent(eventResult.str());
}

CommBasicObjects::CommBumperEventParameter BaseCoordinationServiceBumperEventEventHandlerCore::activateEventParam(const std::string& parameterString){
	std::cout<<"Activate Event Parameter string: "<<parameterString<<std::endl;
	return userHandler.activateEventParam(parameterString);
}
