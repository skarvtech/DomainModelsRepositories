#include "PlannerCoordinationServicePlannerEventEventHandler.hh"

std::string PlannerCoordinationServicePlannerEventEventHandler::handleEvent(const CommNavigationObjects::CommPlannerEventResult &r) throw() {
	std::string outString;
	//convert the event result commObject to string representation outString (to TCL)

	if(r.getState() == CommNavigationObjects::PlannerEventType::PLANNER_NO_ERROR) {
		outString = "(ok)";
	} else if(r.getState() == CommNavigationObjects::PlannerEventType::PLANNER_UNKNOWN_ERROR){
		outString = "(unknown error)";
	} else if(r.getState() == CommNavigationObjects::PlannerEventType::PLANNER_NO_GOAL_AVAILABLE){
		outString = "(no goal available)";
	} else if(r.getState() == CommNavigationObjects::PlannerEventType::PLANNER_GOAL_OK){
		outString = "(goal ok)";
	} else if(r.getState() == CommNavigationObjects::PlannerEventType::PLANNER_GOAL_NOT_MARKED){
		outString = "(goal not marked)";
	} else if(r.getState() == CommNavigationObjects::PlannerEventType::PLANNER_START_OCCUPIED_OBSTACLE){
		outString = "(start occupied by obstacle)";
	} else if(r.getState() == CommNavigationObjects::PlannerEventType::PLANNER_START_OCCUPIED_GOAL){
		outString = "(start occupied by goal)";
	} else if(r.getState() == CommNavigationObjects::PlannerEventType::PLANNER_NO_PATH){
		outString = "(no path)";
	} else if(r.getState() == CommNavigationObjects::PlannerEventType::PLANNER_PATH_FOUND){
		outString = "(path found)";
	} else if(r.getState() == CommNavigationObjects::PlannerEventType::PLANNER_WRONG_MAPID){
		outString = "(wrong map id)";
	} else if(r.getState() == CommNavigationObjects::PlannerEventType::PLANNER_INVALID_MAP){
		outString = "(invalid map)";
	} else if(r.getState() == CommNavigationObjects::PlannerEventType::PLANNER_UNKNOWN){
		outString = "(unknown)";
	} else {
		outString = "(error)";
	}

	return outString;
}

CommNavigationObjects::CommPlannerEventParameter PlannerCoordinationServicePlannerEventEventHandler::activateEventParam(const std::string& parameterString){
	CommNavigationObjects::CommPlannerEventParameter param;
	
	param.setOldState(CommNavigationObjects::PlannerEventType::PLANNER_UNKNOWN);
	return param;
}
