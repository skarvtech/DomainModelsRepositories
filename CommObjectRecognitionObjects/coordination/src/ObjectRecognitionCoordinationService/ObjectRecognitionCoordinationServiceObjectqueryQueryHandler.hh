#ifndef _OBJECTRECOGNITIONCOORDINATIONSERVICEOBJECTQUERYQUERYHANDLER_HH_
#define _OBJECTRECOGNITIONCOORDINATIONSERVICEOBJECTQUERYQUERYHANDLER_HH_

#include "CommObjectRecognitionObjects/CommObjectRecognitionId.hh"
#include "CommObjectRecognitionObjects/CommObjectRecognitionObjectProperties.hh"
#include <string>

class ObjectRecognitionCoordinationServiceObjectqueryQueryHandler
{
public:

	ObjectRecognitionCoordinationServiceObjectqueryQueryHandler(){

	}

	CommObjectRecognitionObjects::CommObjectRecognitionId handleRequest(const std::string& inString);

	std::string handleAnswer(const CommObjectRecognitionObjects::CommObjectRecognitionObjectProperties& answer);
};

#endif
