#include "BaseCoordinationService.hh"

BaseCoordinationService::BaseCoordinationService (){
		baseCoordinationServicebaseStateQueryHandler = NULL;
		baseCoordinationServicebaseStateClient = NULL;
		baseCoordinationServicebatteryEventClient = NULL;
		baseCoordinationServicebatteryEventEventHandlerCore = NULL;
		baseCoordinationServicebumperEventClient = NULL;
		baseCoordinationServicebumperEventEventHandlerCore = NULL;
}
BaseCoordinationService::~BaseCoordinationService (){
	
}

