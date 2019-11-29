#ifndef MANIPULATIONPLANNERCOORDINATIONSERVICE_H_
#define MANIPULATIONPLANNERCOORDINATIONSERVICE_H_
#include "aceSmartSoft.hh"

// include communication objects
#include <CommManipulationPlannerObjects/CommManipulationPlannerEventParameter.hh>
#include <CommManipulationPlannerObjects/CommManipulationPlannerEventParameterACE.hh>
#include <CommManipulationPlannerObjects/CommManipulationPlannerEventResult.hh>
#include <CommManipulationPlannerObjects/CommManipulationPlannerEventResultACE.hh>
#include <CommManipulationPlannerObjects/CommManipulationPlannerEventState.hh>
#include <CommManipulationPlannerObjects/CommManipulationPlannerEventStateACE.hh>


#include "ManipulationPlannerCoordinationServicePlannereventEventHandlerCore.hh"


class ManipulationPlannerCoordinationService {
 	
public:
	ManipulationPlannerCoordinationService ();
	~ManipulationPlannerCoordinationService ();


	//variables, ports, handlers
	//param, state, wiring is dealt with the single master
	Smart::IEventClientPattern<CommManipulationPlannerObjects::CommManipulationPlannerEventParameter, CommManipulationPlannerObjects::CommManipulationPlannerEventResult> *manipulationPlannerCoordinationServiceplannereventClient;
	ManipulationPlannerCoordinationServicePlannereventEventHandlerCore *manipulationPlannerCoordinationServiceplannereventEventHandlerCore;
 };
#endif /* MANIPULATIONPLANNERCOORDINATIONSERVICE_H_ */
