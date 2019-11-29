#ifndef _MANIPULATORCOORDINATIONSERVICEMANIPULATORSTATEQUERYHANDLER_HH_
#define _MANIPULATORCOORDINATIONSERVICEMANIPULATORSTATEQUERYHANDLER_HH_

#include "CommBasicObjects/CommVoid.hh"
#include "CommManipulatorObjects/CommMobileManipulatorState.hh"
#include <string>

class ManipulatorCoordinationServiceManipulatorstateQueryHandler
{
public:

	ManipulatorCoordinationServiceManipulatorstateQueryHandler(){

	}

	CommBasicObjects::CommVoid handleRequest(const std::string& inString);

	std::string handleAnswer(const CommManipulatorObjects::CommMobileManipulatorState& answer);
};

#endif
