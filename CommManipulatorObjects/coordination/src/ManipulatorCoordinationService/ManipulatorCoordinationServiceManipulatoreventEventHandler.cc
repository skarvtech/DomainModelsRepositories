#include "ManipulatorCoordinationServiceManipulatoreventEventHandler.hh"

std::string ManipulatorCoordinationServiceManipulatoreventEventHandler::handleEvent(const CommManipulatorObjects::CommManipulatorEventResult &r) throw() {
	std::string outString;
	
	std::cout << "TIMO: manipulatorEvent rcvd: " << r.getEvent().to_string() << std::endl;

	//convert the event result commObject to string representation outString (to TCL)
	if (r.getEvent() == CommManipulatorObjects::ManipulatorEvent::COLLISION) {
		outString = "(COLLISION)";
	} else if (r.getEvent() == CommManipulatorObjects::ManipulatorEvent::NO_SOLUTION_FOUND) {
		outString = "(NO SOLUTION FOUND)";
	} else if (r.getEvent() == CommManipulatorObjects::ManipulatorEvent::VALUE_OUT_OF_RANGE) {
		outString = "(VALUE OUT OF RANGE)";
	} else if (r.getEvent() == CommManipulatorObjects::ManipulatorEvent::GOAL_REACHED) {
		outString = "(GOAL REACHED)";
	} else if (r.getEvent() == CommManipulatorObjects::ManipulatorEvent::GOAL_NOT_REACHED) {
		outString = "(GOAL NOT REACHED)";
	} else {
		outString = "(ERROR)";
	}

	return outString;
}

CommManipulatorObjects::CommManipulatorEventParameter ManipulatorCoordinationServiceManipulatoreventEventHandler::activateEventParam(const std::string& parameterString){
	CommManipulatorObjects::CommManipulatorEventParameter param;
	
	//fill the event activation (parameter) commObject with the data provided via the inString (from TCL)
	//e.g. param.setLisp(inString);
	param.setEvent(CommManipulatorObjects::ManipulatorEvent::UNKNOWN);
	return param;
}
