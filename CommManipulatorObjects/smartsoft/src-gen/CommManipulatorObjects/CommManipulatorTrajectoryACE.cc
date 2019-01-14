//--------------------------------------------------------------------------
// Code generated by the SmartSoft MDSD Toolchain
// The SmartSoft Toolchain has been developed by:
//  
// Service Robotics Research Center
// University of Applied Sciences Ulm
// Prittwitzstr. 10
// 89075 Ulm (Germany)
//
// Information about the SmartSoft MDSD Toolchain is available at:
// www.servicerobotik-ulm.de
//
// Please do not modify this file. It will be re-generated
// running the code generator.
//--------------------------------------------------------------------------
#include "CommManipulatorObjects/CommManipulatorTrajectoryACE.hh"
#include <ace/SString.h>
#include "CommManipulatorObjects/JointValuesACE.hh"
#include "CommBasicObjects/CommPose3dACE.hh"
#include "CommManipulatorObjects/enumManipulatorTrajectoryFlagData.hh"
#include "CommManipulatorObjects/CommGripperTrajectoryACE.hh"

// serialization operator for element CommManipulatorTrajectory
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommManipulatorObjectsIDL::CommManipulatorTrajectory &data)
{
	ACE_CDR::Boolean good_bit = true;
	// serialize list-element joint_angles
	good_bit = good_bit && cdr << ACE_Utils::truncate_cast<ACE_CDR::ULong>(data.joint_angles.size());
	std::vector<CommManipulatorObjectsIDL::JointValues>::const_iterator data_joint_anglesIt;
	for(data_joint_anglesIt=data.joint_angles.begin(); data_joint_anglesIt!=data.joint_angles.end(); data_joint_anglesIt++) {
		good_bit = good_bit && cdr << *data_joint_anglesIt;
	}
	// serialize list-element pose_tcp
	good_bit = good_bit && cdr << data.pose_tcp;
	// serialize list-element gripper_angles
	good_bit = good_bit && cdr << data.gripper_angles;
	// serialize list-element flag
	good_bit = good_bit && cdr.write_long(data.flag);
	
	return good_bit;
}

// de-serialization operator for element CommManipulatorTrajectory
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommManipulatorObjectsIDL::CommManipulatorTrajectory &data)
{
	ACE_CDR::Boolean good_bit = true;
	// deserialize list-type element joint_angles
	ACE_CDR::ULong data_joint_anglesNbr;
	good_bit = good_bit && cdr >> data_joint_anglesNbr;
	data.joint_angles.clear();
	CommManipulatorObjectsIDL::JointValues data_joint_anglesItem;
	for(ACE_CDR::ULong i=0; i<data_joint_anglesNbr; ++i) {
		good_bit = good_bit && cdr >> data_joint_anglesItem;
		data.joint_angles.push_back(data_joint_anglesItem);
	}
	// deserialize type element pose_tcp
	good_bit = good_bit && cdr >> data.pose_tcp;
	// deserialize type element gripper_angles
	good_bit = good_bit && cdr >> data.gripper_angles;
	// deserialize type element flag
	good_bit = good_bit && cdr.read_long(data.flag);
	
	return good_bit;
}

// serialization operator for CommunicationObject CommManipulatorTrajectory
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommManipulatorObjects::CommManipulatorTrajectory &obj)
{
	return cdr << obj.get();
}

// de-serialization operator for CommunicationObject CommManipulatorTrajectory
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommManipulatorObjects::CommManipulatorTrajectory &obj)
{
	return cdr >> obj.set();
}
