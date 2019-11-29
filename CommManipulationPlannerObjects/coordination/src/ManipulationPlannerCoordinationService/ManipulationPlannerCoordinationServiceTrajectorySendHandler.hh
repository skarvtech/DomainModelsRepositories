#ifndef _MANIPULATIONPLANNERCOORDINATIONSERVICETRAJECTORYSENDHANDLER_HH_
#define _MANIPULATIONPLANNERCOORDINATIONSERVICETRAJECTORYSENDHANDLER_HH_

#include "CommManipulatorObjects/CommManipulatorTrajectory.hh"
#include <string>

class ManipulationPlannerCoordinationServiceTrajectorySendHandler
{
public:

	ManipulationPlannerCoordinationServiceTrajectorySendHandler(){

	}

	CommManipulatorObjects::CommManipulatorTrajectory handleSend(std::string inString);
};

#endif
