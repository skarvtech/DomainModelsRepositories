#include "KBCoordinationServiceKbQueryQueryHandler.hh"
  
CommBasicObjects::CommKBRequest KBCoordinationServiceKbQueryQueryHandler::handleRequest(const std::string& inString){
	//fill the request commObject with the data provided via the inString (from TCL)

	CommBasicObjects::CommKBRequest request;
	request.setRequest(inString);

	return request;
}

std::string KBCoordinationServiceKbQueryQueryHandler::handleAnswer(const CommBasicObjects::CommKBResponse& answer){
	//fill the outString (to TCL) with the data provided via the answer commObject

	return answer.getResponse();
}
