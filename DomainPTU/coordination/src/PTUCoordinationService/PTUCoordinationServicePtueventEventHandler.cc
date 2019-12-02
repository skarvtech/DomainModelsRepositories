#include "PTUCoordinationServicePtueventEventHandler.hh"

std::string PTUCoordinationServicePtueventEventHandler::handleEvent(const DomainPTU::CommPTUGoalEventResult &r) throw() {

	std::stringstream outString;

	char eventState[100000];
	r.get(eventState);
	outString << eventState;

	//convert the event result commObject to string representation outString (to TCL)
	//std::ostringstream ss;
	//ss << "("<< std::setprecision( 2 ) << answer_data<<")";
	//outString = ss.str();
	return outString.str();
}

DomainPTU::CommPTUGoalEventParameter PTUCoordinationServicePtueventEventHandler::activateEventParam(const std::string& parameterString){
	DomainPTU::CommPTUGoalEventParameter param;
	
	//fill the event activation (parameter) commObject with the data provided via the inString (from TCL)
	//e.g. param.setLisp(inString);

	// TODO: Check what to do here
	// param.setEvent(DomainPTU::PTUMoveStatus::UNKNOWN);
	return param;
}
