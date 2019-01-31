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
#include "CommRobotinoObjects/CommPathFreeAreaCore.hh"

// serialization/deserialization operators
//#include "CommRobotinoObjects/CommPathFreeAreaACE.hh"

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
	const char* CommPathFreeAreaCore::getCompiledHash()
	{
		return CommRobotinoObjectsIDL::REPO_HASH;
	}
	
	void CommPathFreeAreaCore::getAllHashValues(std::list<std::string> &hashes)
	{
		// get own hash value
		hashes.push_back(getCompiledHash());
	}
	
	void CommPathFreeAreaCore::checkAllHashValues(std::list<std::string> &hashes)
	{
		// check own hash value
		if (strcmp(getCompiledHash(), hashes.front().c_str()) != 0)
		{
			std::cerr << "###################################################" << std::endl;
			std::cerr << "WARNING: HASHES OF COMMUNICATION OBJECTS MISSMATCH!" << std::endl;
			std::cerr << "CommPathFreeAreaCore hash" << std::endl;
			std::cerr << "Expected: " << getCompiledHash() << std::endl;
			std::cerr << "Received: " << hashes.front() << std::endl;
			std::cerr << "###################################################" << std::endl;
		}
		assert(strcmp(getCompiledHash(), hashes.front().c_str()) == 0);
		hashes.pop_front();
		
	}
	
	#ifdef ENABLE_HASH
	size_t CommPathFreeAreaCore::generateDataHash(const DATATYPE &data)
	{
		size_t seed = 0;
		
		boost::hash_combine(seed, data.areaID);
		boost::hash_combine(seed, data.maxOccupancy);
		std::vector<ACE_CDR::Long>::const_iterator data_robotIDsIt;
		for(data_robotIDsIt=data.robotIDs.begin(); data_robotIDsIt!=data.robotIDs.end(); data_robotIDsIt++) {
			boost::hash_combine(seed, *data_robotIDsIt);
		}
		std::vector<ACE_CDR::Double>::const_iterator data_nodeXvectorIt;
		for(data_nodeXvectorIt=data.nodeXvector.begin(); data_nodeXvectorIt!=data.nodeXvector.end(); data_nodeXvectorIt++) {
			boost::hash_combine(seed, *data_nodeXvectorIt);
		}
		std::vector<ACE_CDR::Double>::const_iterator data_nodeYvectorIt;
		for(data_nodeYvectorIt=data.nodeYvector.begin(); data_nodeYvectorIt!=data.nodeYvector.end(); data_nodeYvectorIt++) {
			boost::hash_combine(seed, *data_nodeYvectorIt);
		}
		
		return seed;
	}
	#endif
	
	// default constructor
	CommPathFreeAreaCore::CommPathFreeAreaCore()
	:	idl_CommPathFreeArea()
	{  
		setAreaID(0);
		setMaxOccupancy(0);
		setRobotIDs(std::vector<int>());
		setNodeXvector(std::vector<double>());
		setNodeYvector(std::vector<double>());
	}
	
	CommPathFreeAreaCore::CommPathFreeAreaCore(const DATATYPE &data)
	:	idl_CommPathFreeArea(data)
	{  }

	CommPathFreeAreaCore::~CommPathFreeAreaCore()
	{  }
	
	void CommPathFreeAreaCore::to_ostream(std::ostream &os) const
	{
	  os << "CommPathFreeArea(";
	  os << getAreaID() << " ";
	  os << getMaxOccupancy() << " ";
	  std::vector<int>::const_iterator robotIDsIt;
	  std::vector<int> robotIDsList = getRobotIDsCopy();
	  for(robotIDsIt=robotIDsList.begin(); robotIDsIt!=robotIDsList.end(); robotIDsIt++) {
	  	os << *robotIDsIt << " ";
	  }
	  std::vector<double>::const_iterator nodeXvectorIt;
	  std::vector<double> nodeXvectorList = getNodeXvectorCopy();
	  for(nodeXvectorIt=nodeXvectorList.begin(); nodeXvectorIt!=nodeXvectorList.end(); nodeXvectorIt++) {
	  	os << *nodeXvectorIt << " ";
	  }
	  std::vector<double>::const_iterator nodeYvectorIt;
	  std::vector<double> nodeYvectorList = getNodeYvectorCopy();
	  for(nodeYvectorIt=nodeYvectorList.begin(); nodeYvectorIt!=nodeYvectorList.end(); nodeYvectorIt++) {
	  	os << *nodeYvectorIt << " ";
	  }
	  os << ") ";
	}
	
	// convert to xml stream
	void CommPathFreeAreaCore::to_xml(std::ostream &os, const std::string &indent) const {
		size_t counter = 0;
		
		os << indent << "<areaID>" << getAreaID() << "</areaID>";
		os << indent << "<maxOccupancy>" << getMaxOccupancy() << "</maxOccupancy>";
		std::vector<int>::const_iterator robotIDsIt;
		std::vector<int> robotIDsList = getRobotIDsCopy();
		counter = 0;
		os << indent << "<robotIDsList n=\"" << robotIDsList.size() << "\">";
		for(robotIDsIt=robotIDsList.begin(); robotIDsIt!=robotIDsList.end(); robotIDsIt++) {
			os << indent << "<robotIDs i=\"" << counter++ << "\">" << *robotIDsIt << "</robotIDs>";
		}
		os << indent << "</robotIDsList>";
		std::vector<double>::const_iterator nodeXvectorIt;
		std::vector<double> nodeXvectorList = getNodeXvectorCopy();
		counter = 0;
		os << indent << "<nodeXvectorList n=\"" << nodeXvectorList.size() << "\">";
		for(nodeXvectorIt=nodeXvectorList.begin(); nodeXvectorIt!=nodeXvectorList.end(); nodeXvectorIt++) {
			os << indent << "<nodeXvector i=\"" << counter++ << "\">" << *nodeXvectorIt << "</nodeXvector>";
		}
		os << indent << "</nodeXvectorList>";
		std::vector<double>::const_iterator nodeYvectorIt;
		std::vector<double> nodeYvectorList = getNodeYvectorCopy();
		counter = 0;
		os << indent << "<nodeYvectorList n=\"" << nodeYvectorList.size() << "\">";
		for(nodeYvectorIt=nodeYvectorList.begin(); nodeYvectorIt!=nodeYvectorList.end(); nodeYvectorIt++) {
			os << indent << "<nodeYvector i=\"" << counter++ << "\">" << *nodeYvectorIt << "</nodeYvector>";
		}
		os << indent << "</nodeYvectorList>";
	}
	
	// restore from xml stream
	void CommPathFreeAreaCore::from_xml(std::istream &is) {
		size_t counter = 0;
		
		static const Smart::KnuthMorrisPratt kmp_areaID("<areaID>");
		static const Smart::KnuthMorrisPratt kmp_maxOccupancy("<maxOccupancy>");
		static const Smart::KnuthMorrisPratt kmp_robotIDsList("<robotIDsList n=\"");
		static const Smart::KnuthMorrisPratt kmp_robotIDs("\">");
		static const Smart::KnuthMorrisPratt kmp_nodeXvectorList("<nodeXvectorList n=\"");
		static const Smart::KnuthMorrisPratt kmp_nodeXvector("\">");
		static const Smart::KnuthMorrisPratt kmp_nodeYvectorList("<nodeYvectorList n=\"");
		static const Smart::KnuthMorrisPratt kmp_nodeYvector("\">");
		
		if(kmp_areaID.search(is)) {
			int areaIDItem;
			is >> areaIDItem;
			setAreaID(areaIDItem);
		}
		if(kmp_maxOccupancy.search(is)) {
			int maxOccupancyItem;
			is >> maxOccupancyItem;
			setMaxOccupancy(maxOccupancyItem);
		}
		if(kmp_robotIDsList.search(is)) {
			size_t numberElements;
			is >> numberElements;
			int robotIDsItem;
			std::vector<int> robotIDsList;
			kmp_robotIDs.search(is);
			for(counter=0; counter<numberElements; counter++) {
				if(kmp_robotIDs.search(is)) {
					is >> robotIDsItem;
					robotIDsList.push_back(robotIDsItem);
				}
			}
			setRobotIDs(robotIDsList);
		}
		if(kmp_nodeXvectorList.search(is)) {
			size_t numberElements;
			is >> numberElements;
			double nodeXvectorItem;
			std::vector<double> nodeXvectorList;
			kmp_nodeXvector.search(is);
			for(counter=0; counter<numberElements; counter++) {
				if(kmp_nodeXvector.search(is)) {
					is >> nodeXvectorItem;
					nodeXvectorList.push_back(nodeXvectorItem);
				}
			}
			setNodeXvector(nodeXvectorList);
		}
		if(kmp_nodeYvectorList.search(is)) {
			size_t numberElements;
			is >> numberElements;
			double nodeYvectorItem;
			std::vector<double> nodeYvectorList;
			kmp_nodeYvector.search(is);
			for(counter=0; counter<numberElements; counter++) {
				if(kmp_nodeYvector.search(is)) {
					is >> nodeYvectorItem;
					nodeYvectorList.push_back(nodeYvectorItem);
				}
			}
			setNodeYvector(nodeYvectorList);
		}
	}
	
	/*
	void CommPathFreeAreaCore::get(ACE_Message_Block *&msg) const
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
		// (see CommPathFreeAreaACE.hh)
		cdr << idl_CommPathFreeArea;
		
	#ifdef ENABLE_HASH
		ACE_CDR::ULong data_hash = generateDataHash(idl_CommPathFreeArea);
		cdr << data_hash;
		// std::cout << "CommPathFreeAreaCore: current data hash: " << data_hash << std::endl;
	#endif
		
		// return a shallow copy of the serialized message 
		// (no data is actually copied, only the internal reference counter is incremented)
		// in order to prevent memory leaks the caller of this get(msg) method must
		// manually free the memory by calling the release() method of the message block msg
		msg = cdr.begin()->duplicate();
	}
	
	void CommPathFreeAreaCore::set(const ACE_Message_Block *msg)
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
		// (see CommPathFreeAreaACE.hh)
		cdr >> idl_CommPathFreeArea;
		
	#ifdef ENABLE_HASH
		ACE_CDR::Long data_hash;
		cdr >> data_hash;
		ACE_CDR::Long own_hash = generateDataHash(idl_CommPathFreeArea);
		assert(data_hash == own_hash);
		// std::cout << "CommPathFreeAreaCore: own data hash: " << own_hash << "; received data hash: " << data_hash << std::endl;
	#endif
	}
	*/
} /* namespace CommRobotinoObjects */