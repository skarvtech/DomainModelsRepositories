#include "ManipulationPlannerCoordinationServicePlannereventEventHandler.hh"

std::string ManipulationPlannerCoordinationServicePlannereventEventHandler::handleEvent(const CommManipulationPlannerObjects::CommManipulationPlannerEventResult &r) throw() {

	// TODO: Check if correct
	std::string outString;
	//convert the event result commObject to string representation outString (to TCL)
	//outString = r.to_lisp_string();
	return outString;
}

CommManipulationPlannerObjects::CommManipulationPlannerEventParameter ManipulationPlannerCoordinationServicePlannereventEventHandler::activateEventParam(const std::string& parameterString){
	CommManipulationPlannerObjects::CommManipulationPlannerEventParameter param;
	
	//fill the event activation (parameter) commObject with the data provided via the inString (from TCL)
	//e.g. param.setLisp(inString);
	//param.setEvent(CommManipulatorObjects::ManipulatorEvent::UNKNOWN);
	param.setEvent(CommManipulationPlannerObjects::ManipulationPlannerEvent::UNKNOWN);
	return param;
}
