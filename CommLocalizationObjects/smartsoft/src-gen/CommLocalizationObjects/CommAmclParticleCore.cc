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
#include "CommLocalizationObjects/CommAmclParticleCore.hh"

// serialization/deserialization operators
//#include "CommLocalizationObjects/CommAmclParticleACE.hh"

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

namespace CommLocalizationObjects 
{
	const char* CommAmclParticleCore::getCompiledHash()
	{
		return CommLocalizationObjectsIDL::REPO_HASH;
	}
	
	void CommAmclParticleCore::getAllHashValues(std::list<std::string> &hashes)
	{
		// get own hash value
		hashes.push_back(getCompiledHash());
		// get hash value(s) for CommBasicObjects::CommPose3d(idl_CommAmclParticle.pose)
		CommBasicObjects::CommPose3d::getAllHashValues(hashes);
	}
	
	void CommAmclParticleCore::checkAllHashValues(std::list<std::string> &hashes)
	{
		// check own hash value
		if (strcmp(getCompiledHash(), hashes.front().c_str()) != 0)
		{
			std::cerr << "###################################################" << std::endl;
			std::cerr << "WARNING: HASHES OF COMMUNICATION OBJECTS MISSMATCH!" << std::endl;
			std::cerr << "CommAmclParticleCore hash" << std::endl;
			std::cerr << "Expected: " << getCompiledHash() << std::endl;
			std::cerr << "Received: " << hashes.front() << std::endl;
			std::cerr << "###################################################" << std::endl;
		}
		assert(strcmp(getCompiledHash(), hashes.front().c_str()) == 0);
		hashes.pop_front();
		
		// check hash value(s) for CommBasicObjects::CommPose3d(idl_CommAmclParticle.pose)
		CommBasicObjects::CommPose3d::checkAllHashValues(hashes);
	}
	
	#ifdef ENABLE_HASH
	size_t CommAmclParticleCore::generateDataHash(const DATATYPE &data)
	{
		size_t seed = 0;
		
		seed += CommBasicObjects::CommPose3d::generateDataHash(data.pose);
		boost::hash_combine(seed, data.weight);
		
		return seed;
	}
	#endif
	
	// default constructor
	CommAmclParticleCore::CommAmclParticleCore()
	:	idl_CommAmclParticle()
	{  
		setPose(CommBasicObjects::CommPose3d());
		setWeight(0.0);
	}
	
	CommAmclParticleCore::CommAmclParticleCore(const DATATYPE &data)
	:	idl_CommAmclParticle(data)
	{  }

	CommAmclParticleCore::~CommAmclParticleCore()
	{  }
	
	void CommAmclParticleCore::to_ostream(std::ostream &os) const
	{
	  os << "CommAmclParticle(";
	  getPose().to_ostream(os);
	  os << getWeight() << " ";
	  os << ") ";
	}
	
	// convert to xml stream
	void CommAmclParticleCore::to_xml(std::ostream &os, const std::string &indent) const {
		os << indent << "<pose>";
		getPose().to_xml(os, indent);
		os << indent << "</pose>";
		os << indent << "<weight>" << getWeight() << "</weight>";
	}
	
	// restore from xml stream
	void CommAmclParticleCore::from_xml(std::istream &is) {
		static const Smart::KnuthMorrisPratt kmp_pose("<pose>");
		static const Smart::KnuthMorrisPratt kmp_weight("<weight>");
		
		if(kmp_pose.search(is)) {
			CommBasicObjects::CommPose3d poseItem;
			poseItem.from_xml(is);
			setPose(poseItem);
		}
		if(kmp_weight.search(is)) {
			double weightItem;
			is >> weightItem;
			setWeight(weightItem);
		}
	}
	
	/*
	void CommAmclParticleCore::get(ACE_Message_Block *&msg) const
	{
		// start with a default internal buffer size(will automatically grow if needed)
		ACE_OutputCDR cdr(ACE_DEFAULT_CDR_BUFSIZE);
		
		CommLocalizationObjectsIDL::HashList hashes;
		getAllHashValues(hashes);
		cdr << static_cast<ACE_CDR::Long>(hashes.size());
		for(CommLocalizationObjectsIDL::HashList::const_iterator it=hashes.begin(); it!=hashes.end(); it++)
		{
			cdr << ACE_CString(it->c_str());
		}
		
		// Here the actual serialization takes place using the OutputCDR serialization operator<<
		// (see CommAmclParticleACE.hh)
		cdr << idl_CommAmclParticle;
		
	#ifdef ENABLE_HASH
		ACE_CDR::ULong data_hash = generateDataHash(idl_CommAmclParticle);
		cdr << data_hash;
		// std::cout << "CommAmclParticleCore: current data hash: " << data_hash << std::endl;
	#endif
		
		// return a shallow copy of the serialized message 
		// (no data is actually copied, only the internal reference counter is incremented)
		// in order to prevent memory leaks the caller of this get(msg) method must
		// manually free the memory by calling the release() method of the message block msg
		msg = cdr.begin()->duplicate();
	}
	
	void CommAmclParticleCore::set(const ACE_Message_Block *msg)
	{
		ACE_InputCDR cdr(msg);
	
		CommLocalizationObjectsIDL::HashList hashes;
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
		// (see CommAmclParticleACE.hh)
		cdr >> idl_CommAmclParticle;
		
	#ifdef ENABLE_HASH
		ACE_CDR::Long data_hash;
		cdr >> data_hash;
		ACE_CDR::Long own_hash = generateDataHash(idl_CommAmclParticle);
		assert(data_hash == own_hash);
		// std::cout << "CommAmclParticleCore: own data hash: " << own_hash << "; received data hash: " << data_hash << std::endl;
	#endif
	}
	*/
} /* namespace CommLocalizationObjects */