#ifndef BASECOORDINATIONSERVICE_H_
#define BASECOORDINATIONSERVICE_H_
#include "aceSmartSoft.hh"

// include communication objects
#include <CommBasicObjects/CommBaseState.hh>
#include <CommBasicObjects/CommBaseStateACE.hh>
#include <CommBasicObjects/CommBatteryEvent.hh>
#include <CommBasicObjects/CommBatteryEventACE.hh>
#include <CommBasicObjects/CommBatteryParameter.hh>
#include <CommBasicObjects/CommBatteryParameterACE.hh>
#include <CommBasicObjects/CommBatteryState.hh>
#include <CommBasicObjects/CommBatteryStateACE.hh>
#include <CommBasicObjects/CommBumperEventParameter.hh>
#include <CommBasicObjects/CommBumperEventParameterACE.hh>
#include <CommBasicObjects/CommBumperEventResult.hh>
#include <CommBasicObjects/CommBumperEventResultACE.hh>
#include <CommBasicObjects/CommBumperEventState.hh>
#include <CommBasicObjects/CommBumperEventStateACE.hh>
#include <CommBasicObjects/CommVoid.hh>
#include <CommBasicObjects/CommVoidACE.hh>


#include "BaseCoordinationServiceBaseStateQueryHandler.hh"
#include "BaseCoordinationServiceBatteryEventEventHandlerCore.hh"
#include "BaseCoordinationServiceBumperEventEventHandlerCore.hh"


class BaseCoordinationService {
 	
public:
	BaseCoordinationService ();
	~BaseCoordinationService ();


	//variables, ports, handlers
	//param, state, wiring is dealt with the single master
	Smart::IQueryClientPattern<CommBasicObjects::CommVoid, CommBasicObjects::CommBaseState, SmartACE::QueryId> *baseCoordinationServicebaseStateClient;
	BaseCoordinationServiceBaseStateQueryHandler *baseCoordinationServicebaseStateQueryHandler;
	Smart::IEventClientPattern<CommBasicObjects::CommBatteryParameter, CommBasicObjects::CommBatteryEvent, SmartACE::EventId> *baseCoordinationServicebatteryEventClient;
	BaseCoordinationServiceBatteryEventEventHandlerCore *baseCoordinationServicebatteryEventEventHandlerCore;
	Smart::IEventClientPattern<CommBasicObjects::CommBumperEventParameter, CommBasicObjects::CommBumperEventResult, SmartACE::EventId> *baseCoordinationServicebumperEventClient;
	BaseCoordinationServiceBumperEventEventHandlerCore *baseCoordinationServicebumperEventEventHandlerCore;
 };
#endif /* BASECOORDINATIONSERVICE_H_ */
