#include "KBCoordinationService.hh"

KBCoordinationService::KBCoordinationService (){
		kBCoordinationServicekbEventClient = NULL;
		kBCoordinationServicekbEventEventHandlerCore = NULL;
		kBCoordinationServicekbQueryQueryHandler = NULL;
		kBCoordinationServicekbQueryClient = NULL;
}
KBCoordinationService::~KBCoordinationService (){
	
}

