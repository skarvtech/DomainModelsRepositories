#include "../../../../CommNavigationObjects/coordination/src/BaseCoordinationService/BaseCoordinationServiceBumperEventEventHandler.hh"

std::string BaseCoordinationServiceBumperEventEventHandler::handleEvent(const CommBasicObjects::CommBumperEventResult &r) throw() {
	std::string outString;
	
	std::stringstream eventResult;
	eventResult << "(";
	if(r.getState() == CommBasicObjects::BumperEventType::BUMPER_UNKNOWN)
	{
		eventResult << "unknown";
	}
	else if(r.getState() == CommBasicObjects::BumperEventType::BUMPER_PRESSED)
	{
		eventResult << "pressed";
	}
	else if(r.getState() == CommBasicObjects::BumperEventType::BUMPER_NOT_PRESSED)
	{
		eventResult << "notpressed";
	}
	else
	{
		eventResult << "error";
	}
	eventResult<< ")";

	outString = eventResult.str();
	return outString;

}

CommBasicObjects::CommBumperEventParameter BaseCoordinationServiceBumperEventEventHandler::activateEventParam(const std::string& parameterString){
	CommBasicObjects::CommBumperEventParameter param;
	
	param.setOldState(CommBasicObjects::BumperEventType::BUMPER_UNKNOWN);
	return param;
}
