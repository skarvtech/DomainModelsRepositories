#ifndef PTUCOORDINATIONSERVICE_H_
#define PTUCOORDINATIONSERVICE_H_
#include "aceSmartSoft.hh"

// include communication objects
#include <DomainPTU/CommPTUGoalEventParameter.hh>
#include <DomainPTU/CommPTUGoalEventParameterACE.hh>
#include <DomainPTU/CommPTUGoalEventResult.hh>
#include <DomainPTU/CommPTUGoalEventResultACE.hh>
#include <DomainPTU/CommPTUMoveRequest.hh>
#include <DomainPTU/CommPTUMoveRequestACE.hh>
#include <DomainPTU/PTUGoalEventState.hh>
#include <DomainPTU/PTUGoalEventStateACE.hh>


#include "PTUCoordinationServicePtueventEventHandlerCore.hh"
#include "PTUCoordinationServicePtuposeSendHandler.hh"


class PTUCoordinationService {
 	
public:
	PTUCoordinationService ();
	~PTUCoordinationService ();


	//variables, ports, handlers
	//param, state, wiring is dealt with the single master
	Smart::IEventClientPattern<DomainPTU::CommPTUGoalEventParameter, DomainPTU::CommPTUGoalEventResult> *pTUCoordinationServiceptueventClient;
	PTUCoordinationServicePtueventEventHandlerCore *pTUCoordinationServiceptueventEventHandlerCore;
	SmartACE::SendClient<DomainPTU::CommPTUMoveRequest> *pTUCoordinationServiceptuposeClient;
	PTUCoordinationServicePtuposeSendHandler *pTUCoordinationServiceptuposeSendHandler;
 };
#endif /* PTUCOORDINATIONSERVICE_H_ */
