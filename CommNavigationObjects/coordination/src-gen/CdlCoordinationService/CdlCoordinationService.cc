#include "CdlCoordinationService.hh"

CdlCoordinationService::CdlCoordinationService (){
		cdlCoordinationServiceblockedEventClient = NULL;
		cdlCoordinationServiceblockedEventEventHandlerCore = NULL;
		cdlCoordinationServicegoalEventClient = NULL;
		cdlCoordinationServicegoalEventEventHandlerCore = NULL;
}
CdlCoordinationService::~CdlCoordinationService (){
	
}

