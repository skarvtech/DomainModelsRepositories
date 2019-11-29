#include "CdlCoordinationServiceBlockedEventEventHandlerCore.hh"
#include "runTimeInterface.hh"
#include <cstdio>
#include <iostream>

CdlCoordinationServiceBlockedEventEventHandlerCore::CdlCoordinationServiceBlockedEventEventHandlerCore(Smart::IEventClientPattern<CommNavigationObjects::CommCdlRobotBlockedEventParameter, CommNavigationObjects::CommCdlRobotBlockedEventResult> *client, std::string ciInstanceName)
: Smart::IEventHandler<CommNavigationObjects::CommCdlRobotBlockedEventResult>(client)
{
	this->ciInstanceName = ciInstanceName;
}
		
void CdlCoordinationServiceBlockedEventEventHandlerCore::handleEvent(const Smart::EventIdPtr &id, const CommNavigationObjects::CommCdlRobotBlockedEventResult &r) {
	std::cout<<"Event CORE Called!"<<std::endl;
	std::string resultString;
	resultString = userHandler.handleEvent(r);
	
	std::ostringstream eventResult;
	eventResult<< "(";
	eventResult<< "( coordination-interfaces-type . \"CdlCoordinationService\")";
	eventResult<< "( coordination-interface-instance . \""<<this->ciInstanceName<<"\")";
	eventResult<< "( service-name . \"blockedEvent\")";
	eventResult<< "( id . "<<id<<")";
	eventResult<< "( data . \""<<resultString<<"\")";
	eventResult<< ")";
//	eventResult<<"((\"CdlCoordinationService\" "<<this->ciInstanceName<<" \"blockedEvent\" "<<id<<") "<<resultString<<")";
	int result = appedEvent(eventResult.str());
}

CommNavigationObjects::CommCdlRobotBlockedEventParameter CdlCoordinationServiceBlockedEventEventHandlerCore::activateEventParam(const std::string& parameterString){
	std::cout<<"Activate Event Parameter string: "<<parameterString<<std::endl;
	return userHandler.activateEventParam(parameterString);
}
