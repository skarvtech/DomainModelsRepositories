#include "LocalizationCoordinationServiceLocalizationEventEventHandlerCore.hh"
#include "runTimeInterface.hh"
#include <cstdio>
#include <iostream>

LocalizationCoordinationServiceLocalizationEventEventHandlerCore::LocalizationCoordinationServiceLocalizationEventEventHandlerCore(Smart::IEventClientPattern<CommLocalizationObjects::CommLocalizationEventParameter, CommLocalizationObjects::CommLocalizationEventResult> *client, std::string ciInstanceName)
: Smart::IEventHandler<CommLocalizationObjects::CommLocalizationEventResult>(client)
{
	this->ciInstanceName = ciInstanceName;
}
		
void LocalizationCoordinationServiceLocalizationEventEventHandlerCore::handleEvent(const Smart::EventIdPtr &id, const CommLocalizationObjects::CommLocalizationEventResult &r) {
	std::cout<<"Event CORE Called!"<<std::endl;
	std::string resultString;
	resultString = userHandler.handleEvent(r);
	
	std::ostringstream eventResult;
	eventResult<< "(";
	eventResult<< "( coordination-interfaces-type . \"LocalizationCoordinationService\")";
	eventResult<< "( coordination-interface-instance . \""<<this->ciInstanceName<<"\")";
	eventResult<< "( service-name . \"localizationEvent\")";
	eventResult<< "( id . "<<id<<")";
	eventResult<< "( data . \""<<resultString<<"\")";
	eventResult<< ")";
//	eventResult<<"((\"LocalizationCoordinationService\" "<<this->ciInstanceName<<" \"localizationEvent\" "<<id<<") "<<resultString<<")";
	int result = appedEvent(eventResult.str());
}

CommLocalizationObjects::CommLocalizationEventParameter LocalizationCoordinationServiceLocalizationEventEventHandlerCore::activateEventParam(const std::string& parameterString){
	std::cout<<"Activate Event Parameter string: "<<parameterString<<std::endl;
	return userHandler.activateEventParam(parameterString);
}
