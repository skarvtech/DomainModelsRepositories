#include "CdlCoordinationServiceBlockedEventEventHandler.hh"

std::string CdlCoordinationServiceBlockedEventEventHandler::handleEvent(const CommNavigationObjects::CommCdlRobotBlockedEventResult &r) throw() {
	std::string outString;

	//convert the event result commObject to string representation outString (to TCL)
	if(r.getState() == CommNavigationObjects::CdlRobotBlockEventType::CDL_ROBOT_UNKNOWN) {
		outString = "(unknown)";
	} else if(r.getState() == CommNavigationObjects::CdlRobotBlockEventType::CDL_ROBOT_BLOCKED){
		outString = "(blocked)";
	} else if(r.getState() == CommNavigationObjects::CdlRobotBlockEventType::CDL_ROBOT_NOT_BLOCKED){
		outString = "(notblocked)";
	} else if(r.getState() == CommNavigationObjects::CdlRobotBlockEventType::CDL_ROBOT_BLOCKED_PATH){
		outString = "(blocked-path)";
	} else if(r.getState() == CommNavigationObjects::CdlRobotBlockEventType::CDL_ROBOT_UNBLOCKED_PATH){
		outString = "(unblocked-path)";
	} else {
		outString = "(error)";
	}
	return outString;
}

CommNavigationObjects::CommCdlRobotBlockedEventParameter CdlCoordinationServiceBlockedEventEventHandler::activateEventParam(const std::string& parameterString){
	CommNavigationObjects::CommCdlRobotBlockedEventParameter param;
	
	//fill the event activation (parameter) commObject with the data provided via the inString (from TCL)
	param.setOldState(CommNavigationObjects::CdlRobotBlockEventType::CDL_ROBOT_UNKNOWN);
	return param;
}
