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
#include "CommBasicObjects/CommIRScanACE.hh"
#include <ace/SString.h>
#include "CommBasicObjects/CommPose3dACE.hh"
#include "CommBasicObjects/CommTimeStampACE.hh"

// serialization operator for element CommIRScan
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommBasicObjectsIDL::CommIRScan &data)
{
	ACE_CDR::Boolean good_bit = true;
	// serialize list-element distance_min
	good_bit = good_bit && cdr.write_double(data.distance_min);
	// serialize list-element distance_max
	good_bit = good_bit && cdr.write_double(data.distance_max);
	// serialize list-element poses3D
	good_bit = good_bit && cdr << ACE_Utils::truncate_cast<ACE_CDR::ULong>(data.poses3D.size());
	std::vector<CommBasicObjectsIDL::CommPose3d>::const_iterator data_poses3DIt;
	for(data_poses3DIt=data.poses3D.begin(); data_poses3DIt!=data.poses3D.end(); data_poses3DIt++) {
		good_bit = good_bit && cdr << *data_poses3DIt;
	}
	// serialize list-element distances
	good_bit = good_bit && cdr << ACE_Utils::truncate_cast<ACE_CDR::ULong>(data.distances.size());
	good_bit = good_bit && cdr.write_double_array(data.distances.data(), data.distances.size());
	// serialize list-element timeStamp
	good_bit = good_bit && cdr << data.timeStamp;
	// serialize list-element raw_readings
	good_bit = good_bit && cdr << ACE_Utils::truncate_cast<ACE_CDR::ULong>(data.raw_readings.size());
	good_bit = good_bit && cdr.write_double_array(data.raw_readings.data(), data.raw_readings.size());
	
	return good_bit;
}

// de-serialization operator for element CommIRScan
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommBasicObjectsIDL::CommIRScan &data)
{
	ACE_CDR::Boolean good_bit = true;
	// deserialize type element distance_min
	good_bit = good_bit && cdr.read_double(data.distance_min);
	// deserialize type element distance_max
	good_bit = good_bit && cdr.read_double(data.distance_max);
	// deserialize list-type element poses3D
	ACE_CDR::ULong data_poses3DNbr;
	good_bit = good_bit && cdr >> data_poses3DNbr;
	data.poses3D.clear();
	CommBasicObjectsIDL::CommPose3d data_poses3DItem;
	for(ACE_CDR::ULong i=0; i<data_poses3DNbr; ++i) {
		good_bit = good_bit && cdr >> data_poses3DItem;
		data.poses3D.push_back(data_poses3DItem);
	}
	// deserialize list-type element distances
	ACE_CDR::ULong data_distancesNbr;
	good_bit = good_bit && cdr >> data_distancesNbr;
	data.distances.resize(data_distancesNbr);
	good_bit = good_bit && cdr.read_double_array(data.distances.data(), data_distancesNbr);
	// deserialize type element timeStamp
	good_bit = good_bit && cdr >> data.timeStamp;
	// deserialize list-type element raw_readings
	ACE_CDR::ULong data_raw_readingsNbr;
	good_bit = good_bit && cdr >> data_raw_readingsNbr;
	data.raw_readings.resize(data_raw_readingsNbr);
	good_bit = good_bit && cdr.read_double_array(data.raw_readings.data(), data_raw_readingsNbr);
	
	return good_bit;
}

// serialization operator for CommunicationObject CommIRScan
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommBasicObjects::CommIRScan &obj)
{
	return cdr << obj.get();
}

// de-serialization operator for CommunicationObject CommIRScan
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommBasicObjects::CommIRScan &obj)
{
	return cdr >> obj.set();
}