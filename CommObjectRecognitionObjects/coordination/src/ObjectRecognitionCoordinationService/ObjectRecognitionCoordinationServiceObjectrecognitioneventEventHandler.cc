#include "ObjectRecognitionCoordinationServiceObjectrecognitioneventEventHandler.hh"

std::string ObjectRecognitionCoordinationServiceObjectrecognitioneventEventHandler::handleEvent(const CommObjectRecognitionObjects::CommObjectRecognitionEventResult &r) throw() {
	std::string outString;
	
	int numberOfObjects;
	int envId;
	std::ostringstream eventState;


	envId = r.get_environment_id();

	eventState << "(" << envId;

	numberOfObjects = r.get_object_id_size();

	eventState << "(";

	for (int i = 0; i < numberOfObjects; i++) {
		eventState << " " << r.get_object_id(i);
	}
	eventState << "))";

	//convert the event result commObject to string representation outString (to TCL)
	//std::ostringstream ss;
	//ss << "("<< std::setprecision( 2 ) << answer_data<<")";
	outString = eventState.str();
	return outString;
}

CommBasicObjects::CommVoid ObjectRecognitionCoordinationServiceObjectrecognitioneventEventHandler::activateEventParam(const std::string& parameterString){
	CommBasicObjects::CommVoid param;
	
	//fill the event activation (parameter) commObject with the data provided via the inString (from TCL)
	//e.g. param.setLisp(inString);
	return param;
}
