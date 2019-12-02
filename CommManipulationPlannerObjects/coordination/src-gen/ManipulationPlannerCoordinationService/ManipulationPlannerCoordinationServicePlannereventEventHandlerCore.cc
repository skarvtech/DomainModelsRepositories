#include "ManipulationPlannerCoordinationServicePlannereventEventHandlerCore.hh"
#include "runTimeInterface.hh"
#include <cstdio>
#include <iostream>

ManipulationPlannerCoordinationServicePlannereventEventHandlerCore::ManipulationPlannerCoordinationServicePlannereventEventHandlerCore(Smart::IEventClientPattern<CommManipulationPlannerObjects::CommManipulationPlannerEventParameter, CommManipulationPlannerObjects::CommManipulationPlannerEventResult> *client, std::string ciInstanceName)
: Smart::IEventHandler<CommManipulationPlannerObjects::CommManipulationPlannerEventResult>(client)
{
	this->ciInstanceName = ciInstanceName;
}
		
void ManipulationPlannerCoordinationServicePlannereventEventHandlerCore::handleEvent(const Smart::EventIdPtr &id, const CommManipulationPlannerObjects::CommManipulationPlannerEventResult &r) {
	std::cout<<"Event CORE Called!"<<std::endl;
	std::string resultString;
	resultString = userHandler.handleEvent(r);
	
	std::ostringstream eventResult;
	eventResult<< "(";
	eventResult<< "( coordination-interfaces-type . \"ManipulationPlannerCoordinationService\")";
	eventResult<< "( coordination-interface-instance . \""<<this->ciInstanceName<<"\")";
	eventResult<< "( service-name . \"plannerevent\")";
	eventResult<< "( id . "<<id<<")";
	eventResult<< "( data . \""<<resultString<<"\")";
	eventResult<< ")";
//	eventResult<<"((\"ManipulationPlannerCoordinationService\" "<<this->ciInstanceName<<" \"plannerevent\" "<<id<<") "<<resultString<<")";
	int result = appedEvent(eventResult.str());
}

CommManipulationPlannerObjects::CommManipulationPlannerEventParameter ManipulationPlannerCoordinationServicePlannereventEventHandlerCore::activateEventParam(const std::string& parameterString){
	std::cout<<"Activate Event Parameter string: "<<parameterString<<std::endl;
	return userHandler.activateEventParam(parameterString);
}
