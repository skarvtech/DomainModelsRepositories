#include "ManipulatorCoordinationServiceManipulatorstateQueryHandler.hh"

#include <iomanip>
  
CommBasicObjects::CommVoid ManipulatorCoordinationServiceManipulatorstateQueryHandler::handleRequest(const std::string& inString){

	CommBasicObjects::CommVoid request;
	//fill the request commObject with the data provided via the inString (from TCL)
	//e.g. request.setLisp(inString);
	return request;
}

std::string ManipulatorCoordinationServiceManipulatorstateQueryHandler::handleAnswer(const CommManipulatorObjects::CommMobileManipulatorState& answer){
	
	std::ostringstream outString;

	if(answer.is_valid() && answer.get_manipulator_state().is_valid()) {

		double x,y,z,yaw,pitch,roll;
		std::cout << "c++ joint count: " << answer.get_manipulator_state().get_joint_count() << std::endl;
		answer.get_manipulator_state().get_pose_TCP_robot(x, y, z, yaw, pitch, roll, 1.0);

		outString << std::setprecision(5);
		outString << "(ok ((angles ";
		for (int i = 0; i < answer.get_manipulator_state().get_joint_count(); ++i) {
			outString << answer.get_manipulator_state().get_joint_angle(i) << " ";
		}
		outString << ")";

		outString << "(pose " << x << " " << y << " " << z << " " << yaw << " "
				<< pitch << " " << roll << ")))";
	}
	else {
		outString << "(ok (no valid answer))";
	}

	return outString.str();
}
