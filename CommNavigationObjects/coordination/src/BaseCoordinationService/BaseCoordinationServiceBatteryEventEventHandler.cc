#include "../../../../CommNavigationObjects/coordination/src/BaseCoordinationService/BaseCoordinationServiceBatteryEventEventHandler.hh"

#ifndef LISP_SEPARATOR
#define LISP_SEPARATOR " ()\"\n"
#define LISP_STRING    100000
#endif

std::string BaseCoordinationServiceBatteryEventEventHandler::handleEvent(const CommBasicObjects::CommBatteryEvent &r) throw() {
	std::string outString;

	std::stringstream eventState;
	eventState << "(";
	if(r.getBatteryState() == CommBasicObjects::ComparisonState::GREATER)
	{
		eventState << "GREATER";
	}
	else if(r.getBatteryState() == CommBasicObjects::ComparisonState::INBETWEEN)
	{
		eventState << "INBETWEEN";
	}
	else if(r.getBatteryState() == CommBasicObjects::ComparisonState::LOWER)
	{
		eventState << "LOWER";
	}
	else
	{
		eventState << "UNKNOWN";
	}
	eventState << " " << r.getVoltage() << ")";

	outString = eventState.str();
	return outString;
}

CommBasicObjects::CommBatteryParameter BaseCoordinationServiceBatteryEventEventHandler::activateEventParam(const std::string& parameterString){
	CommBasicObjects::CommBatteryParameter param;
	

	char *input  = (char *)NULL;
	char *pointer = (char *)NULL;
	char *param1  = (char *)NULL;
	char *param2  = (char *)NULL;

	param.setCurrentState(CommBasicObjects::ComparisonState::UNKNOWN);

	pointer = input = strdup(parameterString.c_str());

	// single continuous
	do
	{
		param1 = strsep(&input,LISP_SEPARATOR);
	} while ((param1 != NULL) && (strlen(param1)==0));

	// desired state
	do
	{
		param2 = strsep(&input,LISP_SEPARATOR);
	} while ((param2 != NULL) && (strlen(param2)==0));

	if( strcasecmp(param2, "GREATER") == 0 )
	{
		param.setDesiredState(CommBasicObjects::ComparisonState::GREATER);
	}
	else if( strcasecmp(param2, "INBETWEEN") == 0 )
	{
		param.setDesiredState(CommBasicObjects::ComparisonState::INBETWEEN);
	}
	else if( strcasecmp(param2, "LOWER") == 0 )
	{
		param.setDesiredState(CommBasicObjects::ComparisonState::LOWER);
	}
	else if( strcasecmp(param2, "ALL") == 0 )
	{
		param.setDesiredState(CommBasicObjects::ComparisonState::UNKNOWN);
	}
	else
	{
		param.setDesiredState(CommBasicObjects::ComparisonState::UNKNOWN);
	}


	// lower voltage
	do
	{
		param2 = strsep(&input,LISP_SEPARATOR);
	} while ((param2 != NULL) && (strlen(param2)==0));
	param.setLowerThreshold(atof(param2));

	// upper voltage
	do
	{
		param2 = strsep(&input,LISP_SEPARATOR);
	} while ((param2 != NULL) && (strlen(param2)==0));
	param.setUpperThreshold(atof(param2));

	//std::cout << "Event:\n  desired: " << evtParam.getDesiredtState().get_string() << "\n  current: " << evtParam.getCurrentState()
	//	<< "\n  lower: " << evtParam.getLowerThreshold() << "\n  upper: " << evtParam.getUpperThreshold() << std::endl;
	return param;
}
