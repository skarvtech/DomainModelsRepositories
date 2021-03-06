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
#include "CommTrackingObjects/CommDetectedMarkerListCore.hh"

// serialization/deserialization operators
//#include "CommTrackingObjects/CommDetectedMarkerListACE.hh"

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

namespace CommTrackingObjects 
{
	const char* CommDetectedMarkerListCore::getCompiledHash()
	{
		return CommTrackingObjectsIDL::REPO_HASH;
	}
	
	void CommDetectedMarkerListCore::getAllHashValues(std::list<std::string> &hashes)
	{
		// get own hash value
		hashes.push_back(getCompiledHash());
		// get hash value(s) for CommTrackingObjects::CommDetectedMarker(idl_CommDetectedMarkerList.markers)
		CommTrackingObjects::CommDetectedMarker::getAllHashValues(hashes);
		// get hash value(s) for CommBasicObjects::CommPose3d(idl_CommDetectedMarkerList.sensor_pose)
		CommBasicObjects::CommPose3d::getAllHashValues(hashes);
		// get hash value(s) for CommBasicObjects::CommBaseState(idl_CommDetectedMarkerList.base_state)
		CommBasicObjects::CommBaseState::getAllHashValues(hashes);
	}
	
	void CommDetectedMarkerListCore::checkAllHashValues(std::list<std::string> &hashes)
	{
		// check own hash value
		if (strcmp(getCompiledHash(), hashes.front().c_str()) != 0)
		{
			std::cerr << "###################################################" << std::endl;
			std::cerr << "WARNING: HASHES OF COMMUNICATION OBJECTS MISSMATCH!" << std::endl;
			std::cerr << "CommDetectedMarkerListCore hash" << std::endl;
			std::cerr << "Expected: " << getCompiledHash() << std::endl;
			std::cerr << "Received: " << hashes.front() << std::endl;
			std::cerr << "###################################################" << std::endl;
		}
		assert(strcmp(getCompiledHash(), hashes.front().c_str()) == 0);
		hashes.pop_front();
		
		// check hash value(s) for CommTrackingObjects::CommDetectedMarker(idl_CommDetectedMarkerList.markers)
		CommTrackingObjects::CommDetectedMarker::checkAllHashValues(hashes);
		// check hash value(s) for CommBasicObjects::CommPose3d(idl_CommDetectedMarkerList.sensor_pose)
		CommBasicObjects::CommPose3d::checkAllHashValues(hashes);
		// check hash value(s) for CommBasicObjects::CommBaseState(idl_CommDetectedMarkerList.base_state)
		CommBasicObjects::CommBaseState::checkAllHashValues(hashes);
	}
	
	#ifdef ENABLE_HASH
	size_t CommDetectedMarkerListCore::generateDataHash(const DATATYPE &data)
	{
		size_t seed = 0;
		
		std::vector<CommTrackingObjectsIDL::CommDetectedMarker>::const_iterator data_markersIt;
		for(data_markersIt=data.markers.begin(); data_markersIt!=data.markers.end(); data_markersIt++) {
			seed += CommTrackingObjects::CommDetectedMarker::generateDataHash(*data_markersIt);
		}
		seed += CommBasicObjects::CommPose3d::generateDataHash(data.sensor_pose);
		seed += CommBasicObjects::CommBaseState::generateDataHash(data.base_state);
		boost::hash_combine(seed, data.valid);
		
		return seed;
	}
	#endif
	
	// default constructor
	CommDetectedMarkerListCore::CommDetectedMarkerListCore()
	:	idl_CommDetectedMarkerList()
	{  
		setMarkers(std::vector<CommTrackingObjects::CommDetectedMarker>());
		setSensor_pose(CommBasicObjects::CommPose3d());
		setBase_state(CommBasicObjects::CommBaseState());
		setValid(false);
	}
	
	CommDetectedMarkerListCore::CommDetectedMarkerListCore(const DATATYPE &data)
	:	idl_CommDetectedMarkerList(data)
	{  }

	CommDetectedMarkerListCore::~CommDetectedMarkerListCore()
	{  }
	
	void CommDetectedMarkerListCore::to_ostream(std::ostream &os) const
	{
	  os << "CommDetectedMarkerList(";
	  std::vector<CommTrackingObjects::CommDetectedMarker>::const_iterator markersIt;
	  std::vector<CommTrackingObjects::CommDetectedMarker> markersList = getMarkersCopy();
	  for(markersIt=markersList.begin(); markersIt!=markersList.end(); markersIt++) {
	  	markersIt->to_ostream(os);
	  }
	  getSensor_pose().to_ostream(os);
	  getBase_state().to_ostream(os);
	  os << getValid() << " ";
	  os << ") ";
	}
	
	// convert to xml stream
	void CommDetectedMarkerListCore::to_xml(std::ostream &os, const std::string &indent) const {
		size_t counter = 0;
		
		std::vector<CommTrackingObjects::CommDetectedMarker>::const_iterator markersIt;
		std::vector<CommTrackingObjects::CommDetectedMarker> markersList = getMarkersCopy();
		counter = 0;
		os << indent << "<markersList n=\"" << markersList.size() << "\">";
		for(markersIt=markersList.begin(); markersIt!=markersList.end(); markersIt++) {
			os << indent << "<markers i=\"" << counter++ << "\">";
			markersIt->to_xml(os, indent);
			os << indent << "</markers>";
		}
		os << indent << "</markersList>";
		os << indent << "<sensor_pose>";
		getSensor_pose().to_xml(os, indent);
		os << indent << "</sensor_pose>";
		os << indent << "<base_state>";
		getBase_state().to_xml(os, indent);
		os << indent << "</base_state>";
		os << indent << "<valid>" << getValid() << "</valid>";
	}
	
	// restore from xml stream
	void CommDetectedMarkerListCore::from_xml(std::istream &is) {
		size_t counter = 0;
		
		static const Smart::KnuthMorrisPratt kmp_markersList("<markersList n=\"");
		static const Smart::KnuthMorrisPratt kmp_markers("\">");
		static const Smart::KnuthMorrisPratt kmp_sensor_pose("<sensor_pose>");
		static const Smart::KnuthMorrisPratt kmp_base_state("<base_state>");
		static const Smart::KnuthMorrisPratt kmp_valid("<valid>");
		
		if(kmp_markersList.search(is)) {
			size_t numberElements;
			is >> numberElements;
			CommTrackingObjects::CommDetectedMarker markersItem;
			std::vector<CommTrackingObjects::CommDetectedMarker> markersList;
			kmp_markers.search(is);
			for(counter=0; counter<numberElements; counter++) {
				if(kmp_markers.search(is)) {
					markersItem.from_xml(is);
					markersList.push_back(markersItem);
				}
			}
			setMarkers(markersList);
		}
		if(kmp_sensor_pose.search(is)) {
			CommBasicObjects::CommPose3d sensor_poseItem;
			sensor_poseItem.from_xml(is);
			setSensor_pose(sensor_poseItem);
		}
		if(kmp_base_state.search(is)) {
			CommBasicObjects::CommBaseState base_stateItem;
			base_stateItem.from_xml(is);
			setBase_state(base_stateItem);
		}
		if(kmp_valid.search(is)) {
			bool validItem;
			is >> validItem;
			setValid(validItem);
		}
	}
	
	/*
	void CommDetectedMarkerListCore::get(ACE_Message_Block *&msg) const
	{
		// start with a default internal buffer size(will automatically grow if needed)
		ACE_OutputCDR cdr(ACE_DEFAULT_CDR_BUFSIZE);
		
		CommTrackingObjectsIDL::HashList hashes;
		getAllHashValues(hashes);
		cdr << static_cast<ACE_CDR::Long>(hashes.size());
		for(CommTrackingObjectsIDL::HashList::const_iterator it=hashes.begin(); it!=hashes.end(); it++)
		{
			cdr << ACE_CString(it->c_str());
		}
		
		// Here the actual serialization takes place using the OutputCDR serialization operator<<
		// (see CommDetectedMarkerListACE.hh)
		cdr << idl_CommDetectedMarkerList;
		
	#ifdef ENABLE_HASH
		ACE_CDR::ULong data_hash = generateDataHash(idl_CommDetectedMarkerList);
		cdr << data_hash;
		// std::cout << "CommDetectedMarkerListCore: current data hash: " << data_hash << std::endl;
	#endif
		
		// return a shallow copy of the serialized message 
		// (no data is actually copied, only the internal reference counter is incremented)
		// in order to prevent memory leaks the caller of this get(msg) method must
		// manually free the memory by calling the release() method of the message block msg
		msg = cdr.begin()->duplicate();
	}
	
	void CommDetectedMarkerListCore::set(const ACE_Message_Block *msg)
	{
		ACE_InputCDR cdr(msg);
	
		CommTrackingObjectsIDL::HashList hashes;
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
		// (see CommDetectedMarkerListACE.hh)
		cdr >> idl_CommDetectedMarkerList;
		
	#ifdef ENABLE_HASH
		ACE_CDR::Long data_hash;
		cdr >> data_hash;
		ACE_CDR::Long own_hash = generateDataHash(idl_CommDetectedMarkerList);
		assert(data_hash == own_hash);
		// std::cout << "CommDetectedMarkerListCore: own data hash: " << own_hash << "; received data hash: " << data_hash << std::endl;
	#endif
	}
	*/
} /* namespace CommTrackingObjects */
