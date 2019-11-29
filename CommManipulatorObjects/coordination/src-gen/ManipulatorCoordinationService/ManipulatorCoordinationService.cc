#include "ManipulatorCoordinationService.hh"

ManipulatorCoordinationService::ManipulatorCoordinationService (){
		manipulatorCoordinationServicemanipulatoreventClient = NULL;
		manipulatorCoordinationServicemanipulatoreventEventHandlerCore = NULL;
		manipulatorCoordinationServicemanipulatorstateQueryHandler = NULL;
		manipulatorCoordinationServicemanipulatorstateClient = NULL;
}
ManipulatorCoordinationService::~ManipulatorCoordinationService (){
	
}

