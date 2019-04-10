#include "CdlCoordinationServiceGoalEventEventHandler.hh"

std::string CdlCoordinationServiceGoalEventEventHandler::handleEvent(const CommNavigationObjects::CommCdlGoalEventResult &r) throw() {
	std::string outString;

	//convert the event result commObject to string representation outString (to TCL)
	if(r.getState() == CommNavigationObjects::CdlGoalEventType::CDL_GOAL_UNKNOWN) {
		outString = "(unknown)";
	} else if(r.getState() == CommNavigationObjects::CdlGoalEventType::CDL_GOAL_REACHED){
		outString = "(reached)";
	} else if(r.getState() == CommNavigationObjects::CdlGoalEventType::CDL_GOAL_NOT_REACHED){
		outString = "(notreached)";
	} else {
		outString = "(error)";
	}
	return outString;
}

CommNavigationObjects::CommCdlGoalEventParameter CdlCoordinationServiceGoalEventEventHandler::activateEventParam(const std::string& parameterString){
	CommNavigationObjects::CommCdlGoalEventParameter param;
	
	//fill the event activation (parameter) commObject with the data provided via the inString (from TCL)
	param.setOldState(CommNavigationObjects::CdlGoalEventType::CDL_GOAL_UNKNOWN);
	return param;
}
