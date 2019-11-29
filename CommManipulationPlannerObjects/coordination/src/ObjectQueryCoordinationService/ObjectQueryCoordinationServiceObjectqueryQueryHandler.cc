#include "ObjectQueryCoordinationServiceObjectqueryQueryHandler.hh"

#include <iostream>
#include <string>
  
CommObjectRecognitionObjects::CommObjectRecognitionId ObjectQueryCoordinationServiceObjectqueryQueryHandler::handleRequest(const std::string& inString){

	CommObjectRecognitionObjects::CommObjectRecognitionId request;
	//fill the request commObject with the data provided via the inString (from TCL)
	//e.g. request.setLisp(inString);

	std::cout << "String from Sequencer: " << inString << std::endl;
	// TODO: Check if correct
	request.setId(std::stoi(inString));

	return request;
}

std::string ObjectQueryCoordinationServiceObjectqueryQueryHandler::handleAnswer(const CommObjectRecognitionObjects::CommObjectRecognitionObjectProperties& answer){
	
	std::ostringstream outString;

	CommBasicObjects::CommPose3d pose = answer.get_pose();
	double x, y, z, azimuth, elevation, roll;
	x 			= pose.get_x(1);
	y 			= pose.get_y(1);
	z 			= pose.get_z(1);
	azimuth   	= pose.get_azimuth();
	elevation	= pose.get_elevation();
	roll		= pose.get_roll();

	// TODO: Check if correct
	outString << "(" << std::fixed << std::setprecision(2) << x << " " << y << " " << z << " " << azimuth << " " << elevation << " " << roll << ")";

	return outString.str();

	/*std::string name;
	answer.get_type(name);
	if(answer.is_valid()){
	CommBasicObjects::CommPose3d pose = answer.get_pose();
	double x, y, z, azimuth, elevation, roll;
	x 			= pose.get_x(1);
	y 			= pose.get_y(1);
	z 			= pose.get_z(1);
	azimuth   	= pose.get_azimuth();
	elevation	= pose.get_elevation();
	roll		= pose.get_roll();

	sprintf(outString,"(ok (pose %.3f %.3f %.3f %.3f %.3f %.3f))", x, y, z, azimuth, elevation, roll );
	}else{
		std::cout<<"Invalid answer from OpenRave!"<<std::endl;
	}
	break;*/
}
