#ifndef LOCALIZATIONCOORDINATIONSERVICE_H_
#define LOCALIZATIONCOORDINATIONSERVICE_H_
#include "aceSmartSoft.hh"

// include communication objects
#include <CommLocalizationObjects/CommLocalizationEventParameter.hh>
#include <CommLocalizationObjects/CommLocalizationEventParameterACE.hh>
#include <CommLocalizationObjects/CommLocalizationEventResult.hh>
#include <CommLocalizationObjects/CommLocalizationEventResultACE.hh>
#include <CommLocalizationObjects/LocalizationEventState.hh>
#include <CommLocalizationObjects/LocalizationEventStateACE.hh>


#include "LocalizationCoordinationServiceLocalizationEventEventHandlerCore.hh"


class LocalizationCoordinationService {
 	
public:
	LocalizationCoordinationService ();
	~LocalizationCoordinationService ();


	//variables, ports, handlers
	//param, state, wiring is dealt with the single master
	Smart::IEventClientPattern<CommLocalizationObjects::CommLocalizationEventParameter, CommLocalizationObjects::CommLocalizationEventResult, SmartACE::EventId> *localizationCoordinationServicelocalizationEventClient;
	LocalizationCoordinationServiceLocalizationEventEventHandlerCore *localizationCoordinationServicelocalizationEventEventHandlerCore;
 };
#endif /* LOCALIZATIONCOORDINATIONSERVICE_H_ */
