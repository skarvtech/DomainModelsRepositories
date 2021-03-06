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
#include "CommManipulatorObjects/CommManipulatorEventResultCore.hh"

// serialization/deserialization operators
//#include "CommManipulatorObjects/CommManipulatorEventResultACE.hh"

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
	const char* CommManipulatorEventResultCore::getCompiledHash()
	{
		return CommManipulatorObjectsIDL::REPO_HASH;
	}
	
	void CommManipulatorEventResultCore::getAllHashValues(std::list<std::string> &hashes)
	{
		// get own hash value
		hashes.push_back(getCompiledHash());
	}
	
	void CommManipulatorEventResultCore::checkAllHashValues(std::list<std::string> &hashes)
	{
		// check own hash value
		if (strcmp(getCompiledHash(), hashes.front().c_str()) != 0)
		{
			std::cerr << "###################################################" << std::endl;
			std::cerr << "WARNING: HASHES OF COMMUNICATION OBJECTS MISSMATCH!" << std::endl;
			std::cerr << "CommManipulatorEventResultCore hash" << std::endl;
			std::cerr << "Expected: " << getCompiledHash() << std::endl;
			std::cerr << "Received: " << hashes.front() << std::endl;
			std::cerr << "###################################################" << std::endl;
		}
		assert(strcmp(getCompiledHash(), hashes.front().c_str()) == 0);
		hashes.pop_front();
		
	}
	
	#ifdef ENABLE_HASH
	size_t CommManipulatorEventResultCore::generateDataHash(const DATATYPE &data)
	{
		size_t seed = 0;
		
		boost::hash_combine(seed, data.event);
		
		return seed;
	}
	#endif
	
	// default constructor
	CommManipulatorEventResultCore::CommManipulatorEventResultCore()
	:	idl_CommManipulatorEventResult()
	{  
		setEvent(CommManipulatorObjects::ManipulatorEvent());
	}
	
	CommManipulatorEventResultCore::CommManipulatorEventResultCore(const DATATYPE &data)
	:	idl_CommManipulatorEventResult(data)
	{  }

	CommManipulatorEventResultCore::~CommManipulatorEventResultCore()
	{  }
	
	void CommManipulatorEventResultCore::to_ostream(std::ostream &os) const
	{
	  os << "CommManipulatorEventResult(";
	  getEvent().to_ostream(os);
	  os << ") ";
	}
	
	// convert to xml stream
	void CommManipulatorEventResultCore::to_xml(std::ostream &os, const std::string &indent) const {
		os << indent << "<event>";
		getEvent().to_xml(os, indent);
		os << indent << "</event>";
	}
	
	// restore from xml stream
	void CommManipulatorEventResultCore::from_xml(std::istream &is) {
		static const Smart::KnuthMorrisPratt kmp_event("<event>");
		
		if(kmp_event.search(is)) {
			CommManipulatorObjects::ManipulatorEvent eventItem;
			eventItem.from_xml(is);
			setEvent(eventItem);
		}
	}
	
	/*
	void CommManipulatorEventResultCore::get(ACE_Message_Block *&msg) const
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
		// (see CommManipulatorEventResultACE.hh)
		cdr << idl_CommManipulatorEventResult;
		
	#ifdef ENABLE_HASH
		ACE_CDR::ULong data_hash = generateDataHash(idl_CommManipulatorEventResult);
		cdr << data_hash;
		// std::cout << "CommManipulatorEventResultCore: current data hash: " << data_hash << std::endl;
	#endif
		
		// return a shallow copy of the serialized message 
		// (no data is actually copied, only the internal reference counter is incremented)
		// in order to prevent memory leaks the caller of this get(msg) method must
		// manually free the memory by calling the release() method of the message block msg
		msg = cdr.begin()->duplicate();
	}
	
	void CommManipulatorEventResultCore::set(const ACE_Message_Block *msg)
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
		// (see CommManipulatorEventResultACE.hh)
		cdr >> idl_CommManipulatorEventResult;
		
	#ifdef ENABLE_HASH
		ACE_CDR::Long data_hash;
		cdr >> data_hash;
		ACE_CDR::Long own_hash = generateDataHash(idl_CommManipulatorEventResult);
		assert(data_hash == own_hash);
		// std::cout << "CommManipulatorEventResultCore: own data hash: " << own_hash << "; received data hash: " << data_hash << std::endl;
	#endif
	}
	*/
} /* namespace CommManipulatorObjects */
