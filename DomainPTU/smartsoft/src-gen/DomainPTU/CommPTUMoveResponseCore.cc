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
#include "DomainPTU/CommPTUMoveResponseCore.hh"

// serialization/deserialization operators
//#include "DomainPTU/CommPTUMoveResponseACE.hh"

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

namespace DomainPTU 
{
	const char* CommPTUMoveResponseCore::getCompiledHash()
	{
		return DomainPTUIDL::REPO_HASH;
	}
	
	void CommPTUMoveResponseCore::getAllHashValues(std::list<std::string> &hashes)
	{
		// get own hash value
		hashes.push_back(getCompiledHash());
		// get hash value(s) for CommBasicObjects::CommPose3d(idl_CommPTUMoveResponse.devicePose)
		CommBasicObjects::CommPose3d::getAllHashValues(hashes);
		// get hash value(s) for CommBasicObjects::CommBaseState(idl_CommPTUMoveResponse.stateBase)
		CommBasicObjects::CommBaseState::getAllHashValues(hashes);
	}
	
	void CommPTUMoveResponseCore::checkAllHashValues(std::list<std::string> &hashes)
	{
		// check own hash value
		if (strcmp(getCompiledHash(), hashes.front().c_str()) != 0)
		{
			std::cerr << "###################################################" << std::endl;
			std::cerr << "WARNING: HASHES OF COMMUNICATION OBJECTS MISSMATCH!" << std::endl;
			std::cerr << "CommPTUMoveResponseCore hash" << std::endl;
			std::cerr << "Expected: " << getCompiledHash() << std::endl;
			std::cerr << "Received: " << hashes.front() << std::endl;
			std::cerr << "###################################################" << std::endl;
		}
		assert(strcmp(getCompiledHash(), hashes.front().c_str()) == 0);
		hashes.pop_front();
		
		// check hash value(s) for CommBasicObjects::CommPose3d(idl_CommPTUMoveResponse.devicePose)
		CommBasicObjects::CommPose3d::checkAllHashValues(hashes);
		// check hash value(s) for CommBasicObjects::CommBaseState(idl_CommPTUMoveResponse.stateBase)
		CommBasicObjects::CommBaseState::checkAllHashValues(hashes);
	}
	
	#ifdef ENABLE_HASH
	size_t CommPTUMoveResponseCore::generateDataHash(const DATATYPE &data)
	{
		size_t seed = 0;
		
		seed += CommBasicObjects::CommPose3d::generateDataHash(data.devicePose);
		seed += CommBasicObjects::CommBaseState::generateDataHash(data.stateBase);
		boost::hash_combine(seed, data.status);
		
		return seed;
	}
	#endif
	
	// default constructor
	CommPTUMoveResponseCore::CommPTUMoveResponseCore()
	:	idl_CommPTUMoveResponse()
	{  
		setDevicePose(CommBasicObjects::CommPose3d());
		setStateBase(CommBasicObjects::CommBaseState());
		setStatus(DomainPTU::PTUMoveStatus());
	}
	
	CommPTUMoveResponseCore::CommPTUMoveResponseCore(const DATATYPE &data)
	:	idl_CommPTUMoveResponse(data)
	{  }

	CommPTUMoveResponseCore::~CommPTUMoveResponseCore()
	{  }
	
	void CommPTUMoveResponseCore::to_ostream(std::ostream &os) const
	{
	  os << "CommPTUMoveResponse(";
	  getDevicePose().to_ostream(os);
	  getStateBase().to_ostream(os);
	  getStatus().to_ostream(os);
	  os << ") ";
	}
	
	// convert to xml stream
	void CommPTUMoveResponseCore::to_xml(std::ostream &os, const std::string &indent) const {
		os << indent << "<devicePose>";
		getDevicePose().to_xml(os, indent);
		os << indent << "</devicePose>";
		os << indent << "<stateBase>";
		getStateBase().to_xml(os, indent);
		os << indent << "</stateBase>";
		os << indent << "<status>";
		getStatus().to_xml(os, indent);
		os << indent << "</status>";
	}
	
	// restore from xml stream
	void CommPTUMoveResponseCore::from_xml(std::istream &is) {
		static const Smart::KnuthMorrisPratt kmp_devicePose("<devicePose>");
		static const Smart::KnuthMorrisPratt kmp_stateBase("<stateBase>");
		static const Smart::KnuthMorrisPratt kmp_status("<status>");
		
		if(kmp_devicePose.search(is)) {
			CommBasicObjects::CommPose3d devicePoseItem;
			devicePoseItem.from_xml(is);
			setDevicePose(devicePoseItem);
		}
		if(kmp_stateBase.search(is)) {
			CommBasicObjects::CommBaseState stateBaseItem;
			stateBaseItem.from_xml(is);
			setStateBase(stateBaseItem);
		}
		if(kmp_status.search(is)) {
			DomainPTU::PTUMoveStatus statusItem;
			statusItem.from_xml(is);
			setStatus(statusItem);
		}
	}
	
	/*
	void CommPTUMoveResponseCore::get(ACE_Message_Block *&msg) const
	{
		// start with a default internal buffer size(will automatically grow if needed)
		ACE_OutputCDR cdr(ACE_DEFAULT_CDR_BUFSIZE);
		
		DomainPTUIDL::HashList hashes;
		getAllHashValues(hashes);
		cdr << static_cast<ACE_CDR::Long>(hashes.size());
		for(DomainPTUIDL::HashList::const_iterator it=hashes.begin(); it!=hashes.end(); it++)
		{
			cdr << ACE_CString(it->c_str());
		}
		
		// Here the actual serialization takes place using the OutputCDR serialization operator<<
		// (see CommPTUMoveResponseACE.hh)
		cdr << idl_CommPTUMoveResponse;
		
	#ifdef ENABLE_HASH
		ACE_CDR::ULong data_hash = generateDataHash(idl_CommPTUMoveResponse);
		cdr << data_hash;
		// std::cout << "CommPTUMoveResponseCore: current data hash: " << data_hash << std::endl;
	#endif
		
		// return a shallow copy of the serialized message 
		// (no data is actually copied, only the internal reference counter is incremented)
		// in order to prevent memory leaks the caller of this get(msg) method must
		// manually free the memory by calling the release() method of the message block msg
		msg = cdr.begin()->duplicate();
	}
	
	void CommPTUMoveResponseCore::set(const ACE_Message_Block *msg)
	{
		ACE_InputCDR cdr(msg);
	
		DomainPTUIDL::HashList hashes;
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
		// (see CommPTUMoveResponseACE.hh)
		cdr >> idl_CommPTUMoveResponse;
		
	#ifdef ENABLE_HASH
		ACE_CDR::Long data_hash;
		cdr >> data_hash;
		ACE_CDR::Long own_hash = generateDataHash(idl_CommPTUMoveResponse);
		assert(data_hash == own_hash);
		// std::cout << "CommPTUMoveResponseCore: own data hash: " << own_hash << "; received data hash: " << data_hash << std::endl;
	#endif
	}
	*/
} /* namespace DomainPTU */