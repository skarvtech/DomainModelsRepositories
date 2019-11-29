#ifndef PLANNERCOORDINATIONSERVICE_H_
#define PLANNERCOORDINATIONSERVICE_H_
#include "aceSmartSoft.hh"

// include communication objects
#include <CommNavigationObjects/CommPlannerEventParameter.hh>
#include <CommNavigationObjects/CommPlannerEventParameterACE.hh>
#include <CommNavigationObjects/CommPlannerEventResult.hh>
#include <CommNavigationObjects/CommPlannerEventResultACE.hh>
#include <CommNavigationObjects/PlannerEventState.hh>
#include <CommNavigationObjects/PlannerEventStateACE.hh>


#include "PlannerCoordinationServicePlannerEventEventHandlerCore.hh"


class PlannerCoordinationService {
 	
public:
	PlannerCoordinationService ();
	~PlannerCoordinationService ();


	//variables, ports, handlers
	//param, state, wiring is dealt with the single master
	Smart::IEventClientPattern<CommNavigationObjects::CommPlannerEventParameter, CommNavigationObjects::CommPlannerEventResult> *plannerCoordinationServiceplannerEventClient;
	PlannerCoordinationServicePlannerEventEventHandlerCore *plannerCoordinationServiceplannerEventEventHandlerCore;
 };
#endif /* PLANNERCOORDINATIONSERVICE_H_ */
