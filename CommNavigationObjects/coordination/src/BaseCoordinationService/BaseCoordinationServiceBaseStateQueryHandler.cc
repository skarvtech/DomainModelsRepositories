#include "../../../../CommNavigationObjects/coordination/src/BaseCoordinationService/BaseCoordinationServiceBaseStateQueryHandler.hh"

#include <iomanip>

CommBasicObjects::CommVoid BaseCoordinationServiceBaseStateQueryHandler::handleRequest(const std::string& inString){

	CommBasicObjects::CommVoid request;
	//nothing to do here (CommVoid)
	return request;
}

std::string BaseCoordinationServiceBaseStateQueryHandler::handleAnswer(const CommBasicObjects::CommBaseState& answer){

	std::ostringstream outString;
	double x = answer.get_base_position().get_x();
	double y = answer.get_base_position().get_y();
	double alpha = answer.get_base_position().get_base_azimuth();
	bool charging = answer.getBatteryState().getExternalPower();
	outString << "("<<(int)x<<" "<<(int)y<<" "<<std::fixed << std::setprecision(2)<<alpha<<" "<<charging<<")";
//	sprintf(outString.c_str(),"(ok (%d %d %.2f %d))", (int)x, (int)y, alpha, charging);

	return outString.str();
}
