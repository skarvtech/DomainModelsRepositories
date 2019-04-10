#ifndef CDLCOORDINATIONSERVICE_H_
#define CDLCOORDINATIONSERVICE_H_
#include "aceSmartSoft.hh"

// include communication objects
#include <CommNavigationObjects/CdlGoalEventState.hh>
#include <CommNavigationObjects/CdlGoalEventStateACE.hh>
#include <CommNavigationObjects/CommCdlGoalEventParameter.hh>
#include <CommNavigationObjects/CommCdlGoalEventParameterACE.hh>
#include <CommNavigationObjects/CommCdlGoalEventResult.hh>
#include <CommNavigationObjects/CommCdlGoalEventResultACE.hh>
#include <CommNavigationObjects/CommCdlRobotBlockedEventParameter.hh>
#include <CommNavigationObjects/CommCdlRobotBlockedEventParameterACE.hh>
#include <CommNavigationObjects/CommCdlRobotBlockedEventResult.hh>
#include <CommNavigationObjects/CommCdlRobotBlockedEventResultACE.hh>
#include <CommNavigationObjects/CommCdlRobotBlockedState.hh>
#include <CommNavigationObjects/CommCdlRobotBlockedStateACE.hh>


#include "CdlCoordinationServiceBlockedEventEventHandlerCore.hh"
#include "CdlCoordinationServiceGoalEventEventHandlerCore.hh"


class CdlCoordinationService {
 	
public:
	CdlCoordinationService ();
	~CdlCoordinationService ();


	//variables, ports, handlers
	//param, state, wiring is dealt with the single master
	Smart::IEventClientPattern<CommNavigationObjects::CommCdlRobotBlockedEventParameter, CommNavigationObjects::CommCdlRobotBlockedEventResult, SmartACE::EventId> *cdlCoordinationServiceblockedEventClient;
	CdlCoordinationServiceBlockedEventEventHandlerCore *cdlCoordinationServiceblockedEventEventHandlerCore;
	Smart::IEventClientPattern<CommNavigationObjects::CommCdlGoalEventParameter, CommNavigationObjects::CommCdlGoalEventResult, SmartACE::EventId> *cdlCoordinationServicegoalEventClient;
	CdlCoordinationServiceGoalEventEventHandlerCore *cdlCoordinationServicegoalEventEventHandlerCore;
 };
#endif /* CDLCOORDINATIONSERVICE_H_ */
