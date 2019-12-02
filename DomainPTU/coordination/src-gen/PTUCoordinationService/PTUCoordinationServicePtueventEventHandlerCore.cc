#include "PTUCoordinationServicePtueventEventHandlerCore.hh"
#include "runTimeInterface.hh"
#include <cstdio>
#include <iostream>

PTUCoordinationServicePtueventEventHandlerCore::PTUCoordinationServicePtueventEventHandlerCore(Smart::IEventClientPattern<DomainPTU::CommPTUGoalEventParameter, DomainPTU::CommPTUGoalEventResult> *client, std::string ciInstanceName)
: Smart::IEventHandler<DomainPTU::CommPTUGoalEventResult>(client)
{
	this->ciInstanceName = ciInstanceName;
}
		
void PTUCoordinationServicePtueventEventHandlerCore::handleEvent(const Smart::EventIdPtr &id, const DomainPTU::CommPTUGoalEventResult &r) {
	std::cout<<"Event CORE Called!"<<std::endl;
	std::string resultString;
	resultString = userHandler.handleEvent(r);
	
	std::ostringstream eventResult;
	eventResult<< "(";
	eventResult<< "( coordination-interfaces-type . \"PTUCoordinationService\")";
	eventResult<< "( coordination-interface-instance . \""<<this->ciInstanceName<<"\")";
	eventResult<< "( service-name . \"ptuevent\")";
	eventResult<< "( id . "<<id<<")";
	eventResult<< "( data . \""<<resultString<<"\")";
	eventResult<< ")";
//	eventResult<<"((\"PTUCoordinationService\" "<<this->ciInstanceName<<" \"ptuevent\" "<<id<<") "<<resultString<<")";
	int result = appedEvent(eventResult.str());
}

DomainPTU::CommPTUGoalEventParameter PTUCoordinationServicePtueventEventHandlerCore::activateEventParam(const std::string& parameterString){
	std::cout<<"Activate Event Parameter string: "<<parameterString<<std::endl;
	return userHandler.activateEventParam(parameterString);
}
