#include "BaseCoordinationServiceBatteryEventEventHandlerCore.hh"
#include "runTimeInterface.hh"
#include <cstdio>
#include <iostream>

BaseCoordinationServiceBatteryEventEventHandlerCore::BaseCoordinationServiceBatteryEventEventHandlerCore(Smart::IEventClientPattern<CommBasicObjects::CommBatteryParameter, CommBasicObjects::CommBatteryEvent> *client, std::string ciInstanceName)
: Smart::IEventHandler<CommBasicObjects::CommBatteryEvent>(client)
{
	this->ciInstanceName = ciInstanceName;
}
		
void BaseCoordinationServiceBatteryEventEventHandlerCore::handleEvent(const Smart::EventIdPtr &id, const CommBasicObjects::CommBatteryEvent &r) {
	std::cout<<"Event CORE Called!"<<std::endl;
	std::string resultString;
	resultString = userHandler.handleEvent(r);
	
	std::ostringstream eventResult;
	eventResult<< "(";
	eventResult<< "( coordination-interfaces-type . \"BaseCoordinationService\")";
	eventResult<< "( coordination-interface-instance . \""<<this->ciInstanceName<<"\")";
	eventResult<< "( service-name . \"batteryEvent\")";
	eventResult<< "( id . "<<id<<")";
	eventResult<< "( data . \""<<resultString<<"\")";
	eventResult<< ")";
//	eventResult<<"((\"BaseCoordinationService\" "<<this->ciInstanceName<<" \"batteryEvent\" "<<id<<") "<<resultString<<")";
	int result = appedEvent(eventResult.str());
}

CommBasicObjects::CommBatteryParameter BaseCoordinationServiceBatteryEventEventHandlerCore::activateEventParam(const std::string& parameterString){
	std::cout<<"Activate Event Parameter string: "<<parameterString<<std::endl;
	return userHandler.activateEventParam(parameterString);
}
