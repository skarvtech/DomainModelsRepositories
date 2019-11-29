#include "ObjectRecognitionCoordinationServiceObjectqueryQueryHandler.hh"
  
#include <iostream>
#include <string>

CommObjectRecognitionObjects::CommObjectRecognitionId ObjectRecognitionCoordinationServiceObjectqueryQueryHandler::handleRequest(const std::string& inString){

	CommObjectRecognitionObjects::CommObjectRecognitionId request;
	//fill the request commObject with the data provided via the inString (from TCL)
	//e.g. request.setLisp(inString);

	std::cout << "String from Sequencer: " << inString << std::endl;

	request.setId(std::stoi(inString));

	return request;
}

std::string ObjectRecognitionCoordinationServiceObjectqueryQueryHandler::handleAnswer(const CommObjectRecognitionObjects::CommObjectRecognitionObjectProperties& answer){
	
	std::ostringstream outString;
	//fill the outString (to TCL) with the data provided via the answer commObject

	std::string name;
	answer.get_type(name);
	CommBasicObjects::CommPose3d pose = answer.get_pose();

	double x, y, z, azimuth, elevation, roll, fill_level,
	xS, yS, zS, azimuthS, elevationS, rollS;
	x 			= pose.get_x();
	y 			= pose.get_y();
	z 			= pose.get_z();
	azimuth   	= pose.get_azimuth();
	elevation	= pose.get_elevation();
	roll		= pose.get_roll();

	fill_level = answer.get_fillLevel();

	// Timo, 08.05.18
	if (answer.getObjectSurfacePosesSize() > 0) {

		std::vector<CommBasicObjects::CommPose3d> poseS = answer.getObjectSurfacePosesCopy();

		xS = poseS[0].getPosition().get_x();
		yS = poseS[0].getPosition().get_y();
		zS = poseS[0].getPosition().get_z();

		azimuthS = poseS[0].get_azimuth();
		elevationS = poseS[0].get_elevation();
		rollS = poseS[0].get_roll();
	}
	else {

		xS = 0.0;
		yS = 0.0;
		zS = 0.0;

		azimuthS = 0.0;
		elevationS = 0.0;
		rollS = 0.0;
	}

	outString << "(" << name.c_str() << std::fixed << std::setprecision(2) << " " << x << " " << y << " " << z << " " << azimuth << " " << elevation << " " << roll << " " << fill_level << " " << xS
 << " " << yS << " " << zS << " " << azimuthS << " " << elevationS << " " << rollS << ")";

	return outString.str();
}
