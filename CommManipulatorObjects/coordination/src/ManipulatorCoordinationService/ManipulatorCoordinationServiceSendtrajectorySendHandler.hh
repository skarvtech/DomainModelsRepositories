#ifndef _MANIPULATORCOORDINATIONSERVICESENDTRAJECTORYSENDHANDLER_HH_
#define _MANIPULATORCOORDINATIONSERVICESENDTRAJECTORYSENDHANDLER_HH_

#include "CommManipulatorObjects/CommManipulatorTrajectory.hh"
#include <string>

class ManipulatorCoordinationServiceSendtrajectorySendHandler
{
public:

	ManipulatorCoordinationServiceSendtrajectorySendHandler(){

	}

	CommManipulatorObjects::CommManipulatorTrajectory handleSend(std::string inString);
};

#endif
