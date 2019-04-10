#ifndef _KBCOORDINATIONSERVICEKBQUERYQUERYHANDLER_HH_
#define _KBCOORDINATIONSERVICEKBQUERYQUERYHANDLER_HH_

#include "CommBasicObjects/CommKBRequest.hh"
#include "CommBasicObjects/CommKBResponse.hh"
#include <string>

class KBCoordinationServiceKbQueryQueryHandler
{
public:

	KBCoordinationServiceKbQueryQueryHandler(){

	}

	CommBasicObjects::CommKBRequest handleRequest(const std::string& inString);

	std::string handleAnswer(const CommBasicObjects::CommKBResponse& answer);
};

#endif
