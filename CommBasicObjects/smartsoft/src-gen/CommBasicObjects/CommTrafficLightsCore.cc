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
#include "CommBasicObjects/CommTrafficLightsCore.hh"

// serialization/deserialization operators
//#include "CommBasicObjects/CommTrafficLightsACE.hh"

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

namespace CommBasicObjects 
{
	const char* CommTrafficLightsCore::getCompiledHash()
	{
		return CommBasicObjectsIDL::REPO_HASH;
	}
	
	void CommTrafficLightsCore::getAllHashValues(std::list<std::string> &hashes)
	{
		// get own hash value
		hashes.push_back(getCompiledHash());
	}
	
	void CommTrafficLightsCore::checkAllHashValues(std::list<std::string> &hashes)
	{
		// check own hash value
		if (strcmp(getCompiledHash(), hashes.front().c_str()) != 0)
		{
			std::cerr << "###################################################" << std::endl;
			std::cerr << "WARNING: HASHES OF COMMUNICATION OBJECTS MISSMATCH!" << std::endl;
			std::cerr << "CommTrafficLightsCore hash" << std::endl;
			std::cerr << "Expected: " << getCompiledHash() << std::endl;
			std::cerr << "Received: " << hashes.front() << std::endl;
			std::cerr << "###################################################" << std::endl;
		}
		assert(strcmp(getCompiledHash(), hashes.front().c_str()) == 0);
		hashes.pop_front();
		
	}
	
	#ifdef ENABLE_HASH
	size_t CommTrafficLightsCore::generateDataHash(const DATATYPE &data)
	{
		size_t seed = 0;
		
		boost::hash_combine(seed, data.red);
		boost::hash_combine(seed, data.yellow);
		boost::hash_combine(seed, data.green);
		
		return seed;
	}
	#endif
	
	// default constructor
	CommTrafficLightsCore::CommTrafficLightsCore()
	:	idl_CommTrafficLights()
	{  
		setRed(false);
		setYellow(false);
		setGreen(false);
	}
	
	CommTrafficLightsCore::CommTrafficLightsCore(const DATATYPE &data)
	:	idl_CommTrafficLights(data)
	{  }

	CommTrafficLightsCore::~CommTrafficLightsCore()
	{  }
	
	void CommTrafficLightsCore::to_ostream(std::ostream &os) const
	{
	  os << "CommTrafficLights(";
	  os << getRed() << " ";
	  os << getYellow() << " ";
	  os << getGreen() << " ";
	  os << ") ";
	}
	
	// convert to xml stream
	void CommTrafficLightsCore::to_xml(std::ostream &os, const std::string &indent) const {
		os << indent << "<red>" << getRed() << "</red>";
		os << indent << "<yellow>" << getYellow() << "</yellow>";
		os << indent << "<green>" << getGreen() << "</green>";
	}
	
	// restore from xml stream
	void CommTrafficLightsCore::from_xml(std::istream &is) {
		static const Smart::KnuthMorrisPratt kmp_red("<red>");
		static const Smart::KnuthMorrisPratt kmp_yellow("<yellow>");
		static const Smart::KnuthMorrisPratt kmp_green("<green>");
		
		if(kmp_red.search(is)) {
			bool redItem;
			is >> redItem;
			setRed(redItem);
		}
		if(kmp_yellow.search(is)) {
			bool yellowItem;
			is >> yellowItem;
			setYellow(yellowItem);
		}
		if(kmp_green.search(is)) {
			bool greenItem;
			is >> greenItem;
			setGreen(greenItem);
		}
	}
	
	/*
	void CommTrafficLightsCore::get(ACE_Message_Block *&msg) const
	{
		// start with a default internal buffer size(will automatically grow if needed)
		ACE_OutputCDR cdr(ACE_DEFAULT_CDR_BUFSIZE);
		
		CommBasicObjectsIDL::HashList hashes;
		getAllHashValues(hashes);
		cdr << static_cast<ACE_CDR::Long>(hashes.size());
		for(CommBasicObjectsIDL::HashList::const_iterator it=hashes.begin(); it!=hashes.end(); it++)
		{
			cdr << ACE_CString(it->c_str());
		}
		
		// Here the actual serialization takes place using the OutputCDR serialization operator<<
		// (see CommTrafficLightsACE.hh)
		cdr << idl_CommTrafficLights;
		
	#ifdef ENABLE_HASH
		ACE_CDR::ULong data_hash = generateDataHash(idl_CommTrafficLights);
		cdr << data_hash;
		// std::cout << "CommTrafficLightsCore: current data hash: " << data_hash << std::endl;
	#endif
		
		// return a shallow copy of the serialized message 
		// (no data is actually copied, only the internal reference counter is incremented)
		// in order to prevent memory leaks the caller of this get(msg) method must
		// manually free the memory by calling the release() method of the message block msg
		msg = cdr.begin()->duplicate();
	}
	
	void CommTrafficLightsCore::set(const ACE_Message_Block *msg)
	{
		ACE_InputCDR cdr(msg);
	
		CommBasicObjectsIDL::HashList hashes;
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
		// (see CommTrafficLightsACE.hh)
		cdr >> idl_CommTrafficLights;
		
	#ifdef ENABLE_HASH
		ACE_CDR::Long data_hash;
		cdr >> data_hash;
		ACE_CDR::Long own_hash = generateDataHash(idl_CommTrafficLights);
		assert(data_hash == own_hash);
		// std::cout << "CommTrafficLightsCore: own data hash: " << own_hash << "; received data hash: " << data_hash << std::endl;
	#endif
	}
	*/
} /* namespace CommBasicObjects */