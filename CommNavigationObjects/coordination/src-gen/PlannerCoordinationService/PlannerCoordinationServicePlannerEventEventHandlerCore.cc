#include "PlannerCoordinationServicePlannerEventEventHandlerCore.hh"
#include "runTimeInterface.hh"
#include <cstdio>
#include <iostream>

PlannerCoordinationServicePlannerEventEventHandlerCore::PlannerCoordinationServicePlannerEventEventHandlerCore(Smart::IEventClientPattern<CommNavigationObjects::CommPlannerEventParameter, CommNavigationObjects::CommPlannerEventResult> *client, std::string ciInstanceName)
: Smart::IEventHandler<CommNavigationObjects::CommPlannerEventResult>(client)
{
	this->ciInstanceName = ciInstanceName;
}
		
void PlannerCoordinationServicePlannerEventEventHandlerCore::handleEvent(const Smart::EventIdPtr &id, const CommNavigationObjects::CommPlannerEventResult &r) {
	std::cout<<"Event CORE Called!"<<std::endl;
	std::string resultString;
	resultString = userHandler.handleEvent(r);
	
	std::ostringstream eventResult;
	eventResult<< "(";
	eventResult<< "( coordination-interfaces-type . \"PlannerCoordinationService\")";
	eventResult<< "( coordination-interface-instance . \""<<this->ciInstanceName<<"\")";
	eventResult<< "( service-name . \"plannerEvent\")";
	eventResult<< "( id . "<<id<<")";
	eventResult<< "( data . \""<<resultString<<"\")";
	eventResult<< ")";
//	eventResult<<"((\"PlannerCoordinationService\" "<<this->ciInstanceName<<" \"plannerEvent\" "<<id<<") "<<resultString<<")";
	int result = appedEvent(eventResult.str());
}

CommNavigationObjects::CommPlannerEventParameter PlannerCoordinationServicePlannerEventEventHandlerCore::activateEventParam(const std::string& parameterString){
	std::cout<<"Activate Event Parameter string: "<<parameterString<<std::endl;
	return userHandler.activateEventParam(parameterString);
}
