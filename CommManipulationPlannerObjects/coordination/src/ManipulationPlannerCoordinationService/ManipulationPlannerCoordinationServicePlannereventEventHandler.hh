#ifndef _MANIPULATIONPLANNERCOORDINATIONSERVICEPLANNEREVENTEVENTHANDLER_HH_
#define _MANIPULATIONPLANNERCOORDINATIONSERVICEPLANNEREVENTEVENTHANDLER_HH_
#include "aceSmartSoft.hh"
#include <string>
#include <iostream>


#include "CommManipulationPlannerObjects/CommManipulationPlannerEventResult.hh"
#include "CommManipulationPlannerObjects/CommManipulationPlannerEventParameter.hh"

class ManipulationPlannerCoordinationServicePlannereventEventHandler
{
public:
	std::string handleEvent(const CommManipulationPlannerObjects::CommManipulationPlannerEventResult &r) throw();
	CommManipulationPlannerObjects::CommManipulationPlannerEventParameter activateEventParam(const std::string& parameterString);
};

#endif
