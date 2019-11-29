#ifndef _OBJECTQUERYCOORDINATIONSERVICEOBJECTQUERYQUERYHANDLER_HH_
#define _OBJECTQUERYCOORDINATIONSERVICEOBJECTQUERYQUERYHANDLER_HH_

#include "CommObjectRecognitionObjects/CommObjectRecognitionId.hh"
#include "CommObjectRecognitionObjects/CommObjectRecognitionObjectProperties.hh"
#include <string>

class ObjectQueryCoordinationServiceObjectqueryQueryHandler
{
public:

	ObjectQueryCoordinationServiceObjectqueryQueryHandler(){

	}

	CommObjectRecognitionObjects::CommObjectRecognitionId handleRequest(const std::string& inString);

	std::string handleAnswer(const CommObjectRecognitionObjects::CommObjectRecognitionObjectProperties& answer);
};

#endif
