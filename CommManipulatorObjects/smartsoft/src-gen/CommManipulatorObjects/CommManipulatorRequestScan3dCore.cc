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
#include "CommManipulatorObjects/CommManipulatorRequestScan3dCore.hh"

// serialization/deserialization operators
//#include "CommManipulatorObjects/CommManipulatorRequestScan3dACE.hh"

// include the hash.idl containing the hash constant
#include "hash.hh"
#include <assert.h>
#include <cstring>
#include <iostream>

// SmartUtils used in from_xml method
#include "smartKnuthMorrisPratt.hh"

#ifdef ENABLE_HASH
	#include <boost/functional/hash.hpp>
#endif

namespace CommManipulatorObjects 
{
	const char* CommManipulatorRequestScan3dCore::getCompiledHash()
	{
		return CommManipulatorObjectsIDL::REPO_HASH;
	}
	
	void CommManipulatorRequestScan3dCore::getAllHashValues(std::list<std::string> &hashes)
	{
		// get own hash value
		hashes.push_back(getCompiledHash());
	}
	
	void CommManipulatorRequestScan3dCore::checkAllHashValues(std::list<std::string> &hashes)
	{
		// check own hash value
		if (strcmp(getCompiledHash(), hashes.front().c_str()) != 0)
		{
			std::cerr << "###################################################" << std::endl;
			std::cerr << "WARNING: HASHES OF COMMUNICATION OBJECTS MISSMATCH!" << std::endl;
			std::cerr << "CommManipulatorRequestScan3dCore hash" << std::endl;
			std::cerr << "Expected: " << getCompiledHash() << std::endl;
			std::cerr << "Received: " << hashes.front() << std::endl;
			std::cerr << "###################################################" << std::endl;
		}
		assert(strcmp(getCompiledHash(), hashes.front().c_str()) == 0);
		hashes.pop_front();
		
	}
	
	#ifdef ENABLE_HASH
	size_t CommManipulatorRequestScan3dCore::generateDataHash(const DATATYPE &data)
	{
		size_t seed = 0;
		
		std::vector<ACE_CDR::Double>::const_iterator data_begin_joint_anglesIt;
		for(data_begin_joint_anglesIt=data.begin_joint_angles.begin(); data_begin_joint_anglesIt!=data.begin_joint_angles.end(); data_begin_joint_anglesIt++) {
			boost::hash_combine(seed, *data_begin_joint_anglesIt);
		}
		std::vector<ACE_CDR::Double>::const_iterator data_end_joint_anglesIt;
		for(data_end_joint_anglesIt=data.end_joint_angles.begin(); data_end_joint_anglesIt!=data.end_joint_angles.end(); data_end_joint_anglesIt++) {
			boost::hash_combine(seed, *data_end_joint_anglesIt);
		}
		boost::hash_combine(seed, data.laser_begin_angle);
		boost::hash_combine(seed, data.laser_end_angle);
		boost::hash_combine(seed, data.number_of_steps);
		
		return seed;
	}
	#endif
	
	// default constructor
	CommManipulatorRequestScan3dCore::CommManipulatorRequestScan3dCore()
	:	idl_CommManipulatorRequestScan3d()
	{  
		setBegin_joint_angles(std::vector<double>());
		setEnd_joint_angles(std::vector<double>());
		setLaser_begin_angle(0.0);
		setLaser_end_angle(0.0);
		setNumber_of_steps(0);
	}
	
	CommManipulatorRequestScan3dCore::CommManipulatorRequestScan3dCore(const DATATYPE &data)
	:	idl_CommManipulatorRequestScan3d(data)
	{  }

	CommManipulatorRequestScan3dCore::~CommManipulatorRequestScan3dCore()
	{  }
	
	void CommManipulatorRequestScan3dCore::to_ostream(std::ostream &os) const
	{
	  os << "CommManipulatorRequestScan3d(";
	  std::vector<double>::const_iterator begin_joint_anglesIt;
	  std::vector<double> begin_joint_anglesList = getBegin_joint_anglesCopy();
	  for(begin_joint_anglesIt=begin_joint_anglesList.begin(); begin_joint_anglesIt!=begin_joint_anglesList.end(); begin_joint_anglesIt++) {
	  	os << *begin_joint_anglesIt << " ";
	  }
	  std::vector<double>::const_iterator end_joint_anglesIt;
	  std::vector<double> end_joint_anglesList = getEnd_joint_anglesCopy();
	  for(end_joint_anglesIt=end_joint_anglesList.begin(); end_joint_anglesIt!=end_joint_anglesList.end(); end_joint_anglesIt++) {
	  	os << *end_joint_anglesIt << " ";
	  }
	  os << getLaser_begin_angle() << " ";
	  os << getLaser_end_angle() << " ";
	  os << getNumber_of_steps() << " ";
	  os << ") ";
	}
	
	// convert to xml stream
	void CommManipulatorRequestScan3dCore::to_xml(std::ostream &os, const std::string &indent) const {
		size_t counter = 0;
		
		std::vector<double>::const_iterator begin_joint_anglesIt;
		std::vector<double> begin_joint_anglesList = getBegin_joint_anglesCopy();
		counter = 0;
		os << indent << "<begin_joint_anglesList n=\"" << begin_joint_anglesList.size() << "\">";
		for(begin_joint_anglesIt=begin_joint_anglesList.begin(); begin_joint_anglesIt!=begin_joint_anglesList.end(); begin_joint_anglesIt++) {
			os << indent << "<begin_joint_angles i=\"" << counter++ << "\">" << *begin_joint_anglesIt << "</begin_joint_angles>";
		}
		os << indent << "</begin_joint_anglesList>";
		std::vector<double>::const_iterator end_joint_anglesIt;
		std::vector<double> end_joint_anglesList = getEnd_joint_anglesCopy();
		counter = 0;
		os << indent << "<end_joint_anglesList n=\"" << end_joint_anglesList.size() << "\">";
		for(end_joint_anglesIt=end_joint_anglesList.begin(); end_joint_anglesIt!=end_joint_anglesList.end(); end_joint_anglesIt++) {
			os << indent << "<end_joint_angles i=\"" << counter++ << "\">" << *end_joint_anglesIt << "</end_joint_angles>";
		}
		os << indent << "</end_joint_anglesList>";
		os << indent << "<laser_begin_angle>" << getLaser_begin_angle() << "</laser_begin_angle>";
		os << indent << "<laser_end_angle>" << getLaser_end_angle() << "</laser_end_angle>";
		os << indent << "<number_of_steps>" << getNumber_of_steps() << "</number_of_steps>";
	}
	
	// restore from xml stream
	void CommManipulatorRequestScan3dCore::from_xml(std::istream &is) {
		size_t counter = 0;
		
		static const Smart::KnuthMorrisPratt kmp_begin_joint_anglesList("<begin_joint_anglesList n=\"");
		static const Smart::KnuthMorrisPratt kmp_begin_joint_angles("\">");
		static const Smart::KnuthMorrisPratt kmp_end_joint_anglesList("<end_joint_anglesList n=\"");
		static const Smart::KnuthMorrisPratt kmp_end_joint_angles("\">");
		static const Smart::KnuthMorrisPratt kmp_laser_begin_angle("<laser_begin_angle>");
		static const Smart::KnuthMorrisPratt kmp_laser_end_angle("<laser_end_angle>");
		static const Smart::KnuthMorrisPratt kmp_number_of_steps("<number_of_steps>");
		
		if(kmp_begin_joint_anglesList.search(is)) {
			size_t numberElements;
			is >> numberElements;
			double begin_joint_anglesItem;
			std::vector<double> begin_joint_anglesList;
			kmp_begin_joint_angles.search(is);
			for(counter=0; counter<numberElements; counter++) {
				if(kmp_begin_joint_angles.search(is)) {
					is >> begin_joint_anglesItem;
					begin_joint_anglesList.push_back(begin_joint_anglesItem);
				}
			}
			setBegin_joint_angles(begin_joint_anglesList);
		}
		if(kmp_end_joint_anglesList.search(is)) {
			size_t numberElements;
			is >> numberElements;
			double end_joint_anglesItem;
			std::vector<double> end_joint_anglesList;
			kmp_end_joint_angles.search(is);
			for(counter=0; counter<numberElements; counter++) {
				if(kmp_end_joint_angles.search(is)) {
					is >> end_joint_anglesItem;
					end_joint_anglesList.push_back(end_joint_anglesItem);
				}
			}
			setEnd_joint_angles(end_joint_anglesList);
		}
		if(kmp_laser_begin_angle.search(is)) {
			double laser_begin_angleItem;
			is >> laser_begin_angleItem;
			setLaser_begin_angle(laser_begin_angleItem);
		}
		if(kmp_laser_end_angle.search(is)) {
			double laser_end_angleItem;
			is >> laser_end_angleItem;
			setLaser_end_angle(laser_end_angleItem);
		}
		if(kmp_number_of_steps.search(is)) {
			unsigned short number_of_stepsItem;
			is >> number_of_stepsItem;
			setNumber_of_steps(number_of_stepsItem);
		}
	}
	
	/*
	void CommManipulatorRequestScan3dCore::get(ACE_Message_Block *&msg) const
	{
		// start with a default internal buffer size(will automatically grow if needed)
		ACE_OutputCDR cdr(ACE_DEFAULT_CDR_BUFSIZE);
		
		CommManipulatorObjectsIDL::HashList hashes;
		getAllHashValues(hashes);
		cdr << static_cast<ACE_CDR::Long>(hashes.size());
		for(CommManipulatorObjectsIDL::HashList::const_iterator it=hashes.begin(); it!=hashes.end(); it++)
		{
			cdr << ACE_CString(it->c_str());
		}
		
		// Here the actual serialization takes place using the OutputCDR serialization operator<<
		// (see CommManipulatorRequestScan3dACE.hh)
		cdr << idl_CommManipulatorRequestScan3d;
		
	#ifdef ENABLE_HASH
		ACE_CDR::ULong data_hash = generateDataHash(idl_CommManipulatorRequestScan3d);
		cdr << data_hash;
		// std::cout << "CommManipulatorRequestScan3dCore: current data hash: " << data_hash << std::endl;
	#endif
		
		// return a shallow copy of the serialized message 
		// (no data is actually copied, only the internal reference counter is incremented)
		// in order to prevent memory leaks the caller of this get(msg) method must
		// manually free the memory by calling the release() method of the message block msg
		msg = cdr.begin()->duplicate();
	}
	
	void CommManipulatorRequestScan3dCore::set(const ACE_Message_Block *msg)
	{
		ACE_InputCDR cdr(msg);
	
		CommManipulatorObjectsIDL::HashList hashes;
		ACE_CDR::Long hashes_size;
		cdr >> hashes_size;
		for(int i=0; i<hashes_size; ++i) 
		{
			ACE_CString hash;
			cdr >> hash;
			hashes.push_back(hash.c_str());
		}
		checkAllHashValues(hashes);
		
		// Here the actual de-serialization takes place using the InputCDR serialization operator>>
		// (see CommManipulatorRequestScan3dACE.hh)
		cdr >> idl_CommManipulatorRequestScan3d;
		
	#ifdef ENABLE_HASH
		ACE_CDR::Long data_hash;
		cdr >> data_hash;
		ACE_CDR::Long own_hash = generateDataHash(idl_CommManipulatorRequestScan3d);
		assert(data_hash == own_hash);
		// std::cout << "CommManipulatorRequestScan3dCore: own data hash: " << own_hash << "; received data hash: " << data_hash << std::endl;
	#endif
	}
	*/
} /* namespace CommManipulatorObjects */
