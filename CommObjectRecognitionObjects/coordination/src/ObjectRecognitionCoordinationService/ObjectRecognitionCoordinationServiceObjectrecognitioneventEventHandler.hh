#ifndef _OBJECTRECOGNITIONCOORDINATIONSERVICEOBJECTRECOGNITIONEVENTEVENTHANDLER_HH_
#define _OBJECTRECOGNITIONCOORDINATIONSERVICEOBJECTRECOGNITIONEVENTEVENTHANDLER_HH_
#include "aceSmartSoft.hh"
#include <string>
#include <iostream>


#include "CommObjectRecognitionObjects/CommObjectRecognitionEventResult.hh"
#include "CommBasicObjects/CommVoid.hh"

class ObjectRecognitionCoordinationServiceObjectrecognitioneventEventHandler
{
public:
	std::string handleEvent(const CommObjectRecognitionObjects::CommObjectRecognitionEventResult &r) throw();
	CommBasicObjects::CommVoid activateEventParam(const std::string& parameterString);
};

#endif
