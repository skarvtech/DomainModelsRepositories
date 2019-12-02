#include "PTUCoordinationService.hh"

PTUCoordinationService::PTUCoordinationService (){
		pTUCoordinationServiceptueventClient = NULL;
		pTUCoordinationServiceptueventEventHandlerCore = NULL;
		pTUCoordinationServiceptuposeSendHandler = NULL;
		pTUCoordinationServiceptuposeClient = NULL;
}
PTUCoordinationService::~PTUCoordinationService (){
	
}

