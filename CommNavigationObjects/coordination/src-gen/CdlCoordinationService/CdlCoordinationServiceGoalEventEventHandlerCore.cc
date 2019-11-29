#include "CdlCoordinationServiceGoalEventEventHandlerCore.hh"
#include "runTimeInterface.hh"
#include <cstdio>
#include <iostream>

CdlCoordinationServiceGoalEventEventHandlerCore::CdlCoordinationServiceGoalEventEventHandlerCore(Smart::IEventClientPattern<CommNavigationObjects::CommCdlGoalEventParameter, CommNavigationObjects::CommCdlGoalEventResult> *client, std::string ciInstanceName)
: Smart::IEventHandler<CommNavigationObjects::CommCdlGoalEventResult>(client)
{
	this->ciInstanceName = ciInstanceName;
}
		
void CdlCoordinationServiceGoalEventEventHandlerCore::handleEvent(const Smart::EventIdPtr &id, const CommNavigationObjects::CommCdlGoalEventResult &r) {
	std::cout<<"Event CORE Called!"<<std::endl;
	std::string resultString;
	resultString = userHandler.handleEvent(r);
	
	std::ostringstream eventResult;
	eventResult<< "(";
	eventResult<< "( coordination-interfaces-type . \"CdlCoordinationService\")";
	eventResult<< "( coordination-interface-instance . \""<<this->ciInstanceName<<"\")";
	eventResult<< "( service-name . \"goalEvent\")";
	eventResult<< "( id . "<<id<<")";
	eventResult<< "( data . \""<<resultString<<"\")";
	eventResult<< ")";
//	eventResult<<"((\"CdlCoordinationService\" "<<this->ciInstanceName<<" \"goalEvent\" "<<id<<") "<<resultString<<")";
	int result = appedEvent(eventResult.str());
}

CommNavigationObjects::CommCdlGoalEventParameter CdlCoordinationServiceGoalEventEventHandlerCore::activateEventParam(const std::string& parameterString){
	std::cout<<"Activate Event Parameter string: "<<parameterString<<std::endl;
	return userHandler.activateEventParam(parameterString);
}
