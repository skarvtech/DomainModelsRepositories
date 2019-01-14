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
#include "CommRobotinoObjects/CommCoordinatedNavigationResourceStateCore.hh"

// serialization/deserialization operators
//#include "CommRobotinoObjects/CommCoordinatedNavigationResourceStateACE.hh"

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

namespace CommRobotinoObjects 
{
	const char* CommCoordinatedNavigationResourceStateCore::getCompiledHash()
	{
		return CommRobotinoObjectsIDL::REPO_HASH;
	}
	
	void CommCoordinatedNavigationResourceStateCore::getAllHashValues(std::list<std::string> &hashes)
	{
		// get own hash value
		hashes.push_back(getCompiledHash());
	}
	
	void CommCoordinatedNavigationResourceStateCore::checkAllHashValues(std::list<std::string> &hashes)
	{
		// check own hash value
		if (strcmp(getCompiledHash(), hashes.front().c_str()) != 0)
		{
			std::cerr << "###################################################" << std::endl;
			std::cerr << "WARNING: HASHES OF COMMUNICATION OBJECTS MISSMATCH!" << std::endl;
			std::cerr << "CommCoordinatedNavigationResourceStateCore hash" << std::endl;
			std::cerr << "Expected: " << getCompiledHash() << std::endl;
			std::cerr << "Received: " << hashes.front() << std::endl;
			std::cerr << "###################################################" << std::endl;
		}
		assert(strcmp(getCompiledHash(), hashes.front().c_str()) == 0);
		hashes.pop_front();
		
	}
	
	#ifdef ENABLE_HASH
	size_t CommCoordinatedNavigationResourceStateCore::generateDataHash(const DATATYPE &data)
	{
		size_t seed = 0;
		
		boost::hash_combine(seed, data.resourceID);
		boost::hash_combine(seed, data.robotID);
		boost::hash_combine(seed, data.state);
		boost::hash_combine(seed, data.remainingCapacity);
		
		return seed;
	}
	#endif
	
	// default constructor
	CommCoordinatedNavigationResourceStateCore::CommCoordinatedNavigationResourceStateCore()
	:	idl_CommCoordinatedNavigationResourceState()
	{  
		setResourceID(0);
		setRobotID(0);
		setState(CommRobotinoObjects::CoordinatedNavigationResourceStateType());
		setRemainingCapacity(0);
	}
	
	CommCoordinatedNavigationResourceStateCore::CommCoordinatedNavigationResourceStateCore(const DATATYPE &data)
	:	idl_CommCoordinatedNavigationResourceState(data)
	{  }

	CommCoordinatedNavigationResourceStateCore::~CommCoordinatedNavigationResourceStateCore()
	{  }
	
	void CommCoordinatedNavigationResourceStateCore::to_ostream(std::ostream &os) const
	{
	  os << "CommCoordinatedNavigationResourceState(";
	  os << getResourceID() << " ";
	  os << getRobotID() << " ";
	  getState().to_ostream(os);
	  os << getRemainingCapacity() << " ";
	  os << ") ";
	}
	
	// convert to xml stream
	void CommCoordinatedNavigationResourceStateCore::to_xml(std::ostream &os, const std::string &indent) const {
		os << indent << "<resourceID>" << getResourceID() << "</resourceID>";
		os << indent << "<robotID>" << getRobotID() << "</robotID>";
		os << indent << "<state>";
		getState().to_xml(os, indent);
		os << indent << "</state>";
		os << indent << "<remainingCapacity>" << getRemainingCapacity() << "</remainingCapacity>";
	}
	
	// restore from xml stream
	void CommCoordinatedNavigationResourceStateCore::from_xml(std::istream &is) {
		static const Smart::KnuthMorrisPratt kmp_resourceID("<resourceID>");
		static const Smart::KnuthMorrisPratt kmp_robotID("<robotID>");
		static const Smart::KnuthMorrisPratt kmp_state("<state>");
		static const Smart::KnuthMorrisPratt kmp_remainingCapacity("<remainingCapacity>");
		
		if(kmp_resourceID.search(is)) {
			int resourceIDItem;
			is >> resourceIDItem;
			setResourceID(resourceIDItem);
		}
		if(kmp_robotID.search(is)) {
			int robotIDItem;
			is >> robotIDItem;
			setRobotID(robotIDItem);
		}
		if(kmp_state.search(is)) {
			CommRobotinoObjects::CoordinatedNavigationResourceStateType stateItem;
			stateItem.from_xml(is);
			setState(stateItem);
		}
		if(kmp_remainingCapacity.search(is)) {
			int remainingCapacityItem;
			is >> remainingCapacityItem;
			setRemainingCapacity(remainingCapacityItem);
		}
	}
	
	/*
	void CommCoordinatedNavigationResourceStateCore::get(ACE_Message_Block *&msg) const
	{
		// start with a default internal buffer size(will automatically grow if needed)
		ACE_OutputCDR cdr(ACE_DEFAULT_CDR_BUFSIZE);
		
		CommRobotinoObjectsIDL::HashList hashes;
		getAllHashValues(hashes);
		cdr << static_cast<ACE_CDR::Long>(hashes.size());
		for(CommRobotinoObjectsIDL::HashList::const_iterator it=hashes.begin(); it!=hashes.end(); it++)
		{
			cdr << ACE_CString(it->c_str());
		}
		
		// Here the actual serialization takes place using the OutputCDR serialization operator<<
		// (see CommCoordinatedNavigationResourceStateACE.hh)
		cdr << idl_CommCoordinatedNavigationResourceState;
		
	#ifdef ENABLE_HASH
		ACE_CDR::ULong data_hash = generateDataHash(idl_CommCoordinatedNavigationResourceState);
		cdr << data_hash;
		// std::cout << "CommCoordinatedNavigationResourceStateCore: current data hash: " << data_hash << std::endl;
	#endif
		
		// return a shallow copy of the serialized message 
		// (no data is actually copied, only the internal reference counter is incremented)
		// in order to prevent memory leaks the caller of this get(msg) method must
		// manually free the memory by calling the release() method of the message block msg
		msg = cdr.begin()->duplicate();
	}
	
	void CommCoordinatedNavigationResourceStateCore::set(const ACE_Message_Block *msg)
	{
		ACE_InputCDR cdr(msg);
	
		CommRobotinoObjectsIDL::HashList hashes;
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
		// (see CommCoordinatedNavigationResourceStateACE.hh)
		cdr >> idl_CommCoordinatedNavigationResourceState;
		
	#ifdef ENABLE_HASH
		ACE_CDR::Long data_hash;
		cdr >> data_hash;
		ACE_CDR::Long own_hash = generateDataHash(idl_CommCoordinatedNavigationResourceState);
		assert(data_hash == own_hash);
		// std::cout << "CommCoordinatedNavigationResourceStateCore: own data hash: " << own_hash << "; received data hash: " << data_hash << std::endl;
	#endif
	}
	*/
} /* namespace CommRobotinoObjects */
