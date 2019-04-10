#ifndef _BASECOORDINATIONSERVICEBASESTATEQUERYHANDLER_HH_
#define _BASECOORDINATIONSERVICEBASESTATEQUERYHANDLER_HH_

#include "CommBasicObjects/CommVoid.hh"
#include "CommBasicObjects/CommBaseState.hh"
#include <string>

class BaseCoordinationServiceBaseStateQueryHandler
{
public:

	BaseCoordinationServiceBaseStateQueryHandler(){

	}

	CommBasicObjects::CommVoid handleRequest(const std::string& inString);

	std::string handleAnswer(const CommBasicObjects::CommBaseState& answer);
};

#endif
