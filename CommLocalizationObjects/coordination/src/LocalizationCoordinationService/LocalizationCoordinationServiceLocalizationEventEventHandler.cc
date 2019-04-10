#include "LocalizationCoordinationServiceLocalizationEventEventHandler.hh"

std::string LocalizationCoordinationServiceLocalizationEventEventHandler::handleEvent(const CommLocalizationObjects::CommLocalizationEventResult &r) throw() {
	std::string outString;
	
	//convert the event result commObject to string representation outString (to TCL)
	if(r.getState() == CommLocalizationObjects::LocalizationEventType::LOCALIZATION_UNKNOWN) {
		outString = "(unknown)";
	} else if(r.getState() == CommLocalizationObjects::LocalizationEventType::LOCALIZATION_LOST){
		outString = "(lost)";
	} else if(r.getState() == CommLocalizationObjects::LocalizationEventType::LOCALIZATION_OK){
		outString = "(ok)";
	} else {
		outString = "(error)";
	}
	return outString;
}

CommLocalizationObjects::CommLocalizationEventParameter LocalizationCoordinationServiceLocalizationEventEventHandler::activateEventParam(const std::string& parameterString){
	CommLocalizationObjects::CommLocalizationEventParameter param;
	
	//fill the event activation (parameter) commObject with the data provided via the inString (from TCL)
	//e.g. param.setLisp(inString);
	param.setOldState(CommLocalizationObjects::LocalizationEventType::LOCALIZATION_UNKNOWN);
	return param;
}
