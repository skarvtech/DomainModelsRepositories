#ifndef OBJECTRECOGNITIONCOORDINATIONSERVICE_H_
#define OBJECTRECOGNITIONCOORDINATIONSERVICE_H_
#include "aceSmartSoft.hh"

// include communication objects
#include <CommObjectRecognitionObjects/CommObjectRecognitionEventResult.hh>
#include <CommObjectRecognitionObjects/CommObjectRecognitionEventResultACE.hh>
#include <CommObjectRecognitionObjects/CommObjectRecognitionEventState.hh>
#include <CommObjectRecognitionObjects/CommObjectRecognitionEventStateACE.hh>
#include <CommObjectRecognitionObjects/CommObjectRecognitionId.hh>
#include <CommObjectRecognitionObjects/CommObjectRecognitionIdACE.hh>
#include <CommObjectRecognitionObjects/CommObjectRecognitionObjectProperties.hh>
#include <CommObjectRecognitionObjects/CommObjectRecognitionObjectPropertiesACE.hh>
#include <CommBasicObjects/CommVoid.hh>
#include <CommBasicObjects/CommVoidACE.hh>


#include "ObjectRecognitionCoordinationServiceObjectqueryQueryHandler.hh"
#include "ObjectRecognitionCoordinationServiceObjectrecognitioneventEventHandlerCore.hh"


class ObjectRecognitionCoordinationService {
 	
public:
	ObjectRecognitionCoordinationService ();
	~ObjectRecognitionCoordinationService ();


	//variables, ports, handlers
	//param, state, wiring is dealt with the single master
	Smart::IQueryClientPattern<CommObjectRecognitionObjects::CommObjectRecognitionId, CommObjectRecognitionObjects::CommObjectRecognitionObjectProperties> *objectRecognitionCoordinationServiceobjectqueryClient;
	ObjectRecognitionCoordinationServiceObjectqueryQueryHandler *objectRecognitionCoordinationServiceobjectqueryQueryHandler;
	Smart::IEventClientPattern<CommBasicObjects::CommVoid, CommObjectRecognitionObjects::CommObjectRecognitionEventResult> *objectRecognitionCoordinationServiceobjectrecognitioneventClient;
	ObjectRecognitionCoordinationServiceObjectrecognitioneventEventHandlerCore *objectRecognitionCoordinationServiceobjectrecognitioneventEventHandlerCore;
 };
#endif /* OBJECTRECOGNITIONCOORDINATIONSERVICE_H_ */
