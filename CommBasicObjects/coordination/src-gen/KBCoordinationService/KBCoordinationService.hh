#ifndef KBCOORDINATIONSERVICE_H_
#define KBCOORDINATIONSERVICE_H_
#include "aceSmartSoft.hh"

// include communication objects
#include <CommBasicObjects/CommKBEventParam.hh>
#include <CommBasicObjects/CommKBEventParamACE.hh>
#include <CommBasicObjects/CommKBEventResult.hh>
#include <CommBasicObjects/CommKBEventResultACE.hh>
#include <CommBasicObjects/CommKBRequest.hh>
#include <CommBasicObjects/CommKBRequestACE.hh>
#include <CommBasicObjects/CommKBResponse.hh>
#include <CommBasicObjects/CommKBResponseACE.hh>
#include <CommBasicObjects/CommVoid.hh>
#include <CommBasicObjects/CommVoidACE.hh>


#include "KBCoordinationServiceKbEventEventHandlerCore.hh"
#include "KBCoordinationServiceKbQueryQueryHandler.hh"


class KBCoordinationService {
 	
public:
	KBCoordinationService ();
	~KBCoordinationService ();


	//variables, ports, handlers
	//param, state, wiring is dealt with the single master
	Smart::IEventClientPattern<CommBasicObjects::CommKBEventParam, CommBasicObjects::CommKBEventResult> *kBCoordinationServicekbEventClient;
	KBCoordinationServiceKbEventEventHandlerCore *kBCoordinationServicekbEventEventHandlerCore;
	Smart::IQueryClientPattern<CommBasicObjects::CommKBRequest, CommBasicObjects::CommKBResponse> *kBCoordinationServicekbQueryClient;
	KBCoordinationServiceKbQueryQueryHandler *kBCoordinationServicekbQueryQueryHandler;
 };
#endif /* KBCOORDINATIONSERVICE_H_ */
