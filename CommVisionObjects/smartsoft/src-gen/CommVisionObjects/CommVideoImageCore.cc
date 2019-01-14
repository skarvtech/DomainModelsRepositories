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
#include "CommVisionObjects/CommVideoImageCore.hh"

// serialization/deserialization operators
//#include "CommVisionObjects/CommVideoImageACE.hh"

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

namespace CommVisionObjects 
{
	const char* CommVideoImageCore::getCompiledHash()
	{
		return CommVisionObjectsIDL::REPO_HASH;
	}
	
	void CommVideoImageCore::getAllHashValues(std::list<std::string> &hashes)
	{
		// get own hash value
		hashes.push_back(getCompiledHash());
		// get hash value(s) for CommVisionObjects::ImageParameters(idl_CommVideoImage.parameter)
		CommVisionObjects::ImageParameters::getAllHashValues(hashes);
		// get hash value(s) for CommBasicObjects::CommPose3d(idl_CommVideoImage.sensor_pose)
		CommBasicObjects::CommPose3d::getAllHashValues(hashes);
		// get hash value(s) for CommBasicObjects::CommBaseState(idl_CommVideoImage.base_state)
		CommBasicObjects::CommBaseState::getAllHashValues(hashes);
	}
	
	void CommVideoImageCore::checkAllHashValues(std::list<std::string> &hashes)
	{
		// check own hash value
		if (strcmp(getCompiledHash(), hashes.front().c_str()) != 0)
		{
			std::cerr << "###################################################" << std::endl;
			std::cerr << "WARNING: HASHES OF COMMUNICATION OBJECTS MISSMATCH!" << std::endl;
			std::cerr << "CommVideoImageCore hash" << std::endl;
			std::cerr << "Expected: " << getCompiledHash() << std::endl;
			std::cerr << "Received: " << hashes.front() << std::endl;
			std::cerr << "###################################################" << std::endl;
		}
		assert(strcmp(getCompiledHash(), hashes.front().c_str()) == 0);
		hashes.pop_front();
		
		// check hash value(s) for CommVisionObjects::ImageParameters(idl_CommVideoImage.parameter)
		CommVisionObjects::ImageParameters::checkAllHashValues(hashes);
		// check hash value(s) for CommBasicObjects::CommPose3d(idl_CommVideoImage.sensor_pose)
		CommBasicObjects::CommPose3d::checkAllHashValues(hashes);
		// check hash value(s) for CommBasicObjects::CommBaseState(idl_CommVideoImage.base_state)
		CommBasicObjects::CommBaseState::checkAllHashValues(hashes);
	}
	
	#ifdef ENABLE_HASH
	size_t CommVideoImageCore::generateDataHash(const DATATYPE &data)
	{
		size_t seed = 0;
		
		seed += CommVisionObjects::ImageParameters::generateDataHash(data.parameter);
		std::vector<ACE_CDR::Octet>::const_iterator data_dataIt;
		for(data_dataIt=data.data.begin(); data_dataIt!=data.data.end(); data_dataIt++) {
			boost::hash_combine(seed, *data_dataIt);
		}
		seed += CommBasicObjects::CommPose3d::generateDataHash(data.sensor_pose);
		seed += CommBasicObjects::CommBaseState::generateDataHash(data.base_state);
		boost::hash_combine(seed, data.is_valid);
		boost::hash_combine(seed, data.seq_count);
		std::vector<ACE_CDR::Double>::const_iterator data_intrinsic_mIt;
		for(data_intrinsic_mIt=data.intrinsic_m.begin(); data_intrinsic_mIt!=data.intrinsic_m.end(); data_intrinsic_mIt++) {
			boost::hash_combine(seed, *data_intrinsic_mIt);
		}
		std::vector<ACE_CDR::Double>::const_iterator data_distortion_mIt;
		for(data_distortion_mIt=data.distortion_m.begin(); data_distortion_mIt!=data.distortion_m.end(); data_distortion_mIt++) {
			boost::hash_combine(seed, *data_distortion_mIt);
		}
		boost::hash_combine(seed, data.distortion_model);
		
		return seed;
	}
	#endif
	
	// default constructor
	CommVideoImageCore::CommVideoImageCore()
	:	idl_CommVideoImage()
	{  
		setParameter(CommVisionObjects::ImageParameters());
		setData(std::vector<unsigned char>());
		setSensor_pose(CommBasicObjects::CommPose3d());
		setBase_state(CommBasicObjects::CommBaseState());
		setIs_valid(false);
		setSeq_count(0);
		setIntrinsic_m(std::vector<double>());
		setDistortion_m(std::vector<double>());
		setDistortion_model(CommVisionObjects::ImageDistortionModel());
	}
	
	CommVideoImageCore::CommVideoImageCore(const DATATYPE &data)
	:	idl_CommVideoImage(data)
	{  }

	CommVideoImageCore::~CommVideoImageCore()
	{  }
	
	void CommVideoImageCore::to_ostream(std::ostream &os) const
	{
	  os << "CommVideoImage(";
	  getParameter().to_ostream(os);
	  std::vector<unsigned char>::const_iterator dataIt;
	  std::vector<unsigned char> dataList = getDataCopy();
	  for(dataIt=dataList.begin(); dataIt!=dataList.end(); dataIt++) {
	  	os << *dataIt << " ";
	  }
	  getSensor_pose().to_ostream(os);
	  getBase_state().to_ostream(os);
	  os << getIs_valid() << " ";
	  os << getSeq_count() << " ";
	  std::vector<double>::const_iterator intrinsic_mIt;
	  std::vector<double> intrinsic_mList = getIntrinsic_mCopy();
	  for(intrinsic_mIt=intrinsic_mList.begin(); intrinsic_mIt!=intrinsic_mList.end(); intrinsic_mIt++) {
	  	os << *intrinsic_mIt << " ";
	  }
	  std::vector<double>::const_iterator distortion_mIt;
	  std::vector<double> distortion_mList = getDistortion_mCopy();
	  for(distortion_mIt=distortion_mList.begin(); distortion_mIt!=distortion_mList.end(); distortion_mIt++) {
	  	os << *distortion_mIt << " ";
	  }
	  getDistortion_model().to_ostream(os);
	  os << ") ";
	}
	
	// convert to xml stream
	void CommVideoImageCore::to_xml(std::ostream &os, const std::string &indent) const {
		size_t counter = 0;
		
		os << indent << "<parameter>";
		getParameter().to_xml(os, indent);
		os << indent << "</parameter>";
		std::vector<unsigned char>::const_iterator dataIt;
		std::vector<unsigned char> dataList = getDataCopy();
		counter = 0;
		os << indent << "<dataList n=\"" << dataList.size() << "\">";
		for(dataIt=dataList.begin(); dataIt!=dataList.end(); dataIt++) {
			os << indent << "<data i=\"" << counter++ << "\">" << *dataIt << "</data>";
		}
		os << indent << "</dataList>";
		os << indent << "<sensor_pose>";
		getSensor_pose().to_xml(os, indent);
		os << indent << "</sensor_pose>";
		os << indent << "<base_state>";
		getBase_state().to_xml(os, indent);
		os << indent << "</base_state>";
		os << indent << "<is_valid>" << getIs_valid() << "</is_valid>";
		os << indent << "<seq_count>" << getSeq_count() << "</seq_count>";
		std::vector<double>::const_iterator intrinsic_mIt;
		std::vector<double> intrinsic_mList = getIntrinsic_mCopy();
		counter = 0;
		os << indent << "<intrinsic_mList n=\"" << intrinsic_mList.size() << "\">";
		for(intrinsic_mIt=intrinsic_mList.begin(); intrinsic_mIt!=intrinsic_mList.end(); intrinsic_mIt++) {
			os << indent << "<intrinsic_m i=\"" << counter++ << "\">" << *intrinsic_mIt << "</intrinsic_m>";
		}
		os << indent << "</intrinsic_mList>";
		std::vector<double>::const_iterator distortion_mIt;
		std::vector<double> distortion_mList = getDistortion_mCopy();
		counter = 0;
		os << indent << "<distortion_mList n=\"" << distortion_mList.size() << "\">";
		for(distortion_mIt=distortion_mList.begin(); distortion_mIt!=distortion_mList.end(); distortion_mIt++) {
			os << indent << "<distortion_m i=\"" << counter++ << "\">" << *distortion_mIt << "</distortion_m>";
		}
		os << indent << "</distortion_mList>";
		os << indent << "<distortion_model>";
		getDistortion_model().to_xml(os, indent);
		os << indent << "</distortion_model>";
	}
	
	// restore from xml stream
	void CommVideoImageCore::from_xml(std::istream &is) {
		size_t counter = 0;
		
		static const Smart::KnuthMorrisPratt kmp_parameter("<parameter>");
		static const Smart::KnuthMorrisPratt kmp_dataList("<dataList n=\"");
		static const Smart::KnuthMorrisPratt kmp_data("\">");
		static const Smart::KnuthMorrisPratt kmp_sensor_pose("<sensor_pose>");
		static const Smart::KnuthMorrisPratt kmp_base_state("<base_state>");
		static const Smart::KnuthMorrisPratt kmp_is_valid("<is_valid>");
		static const Smart::KnuthMorrisPratt kmp_seq_count("<seq_count>");
		static const Smart::KnuthMorrisPratt kmp_intrinsic_mList("<intrinsic_mList n=\"");
		static const Smart::KnuthMorrisPratt kmp_intrinsic_m("\">");
		static const Smart::KnuthMorrisPratt kmp_distortion_mList("<distortion_mList n=\"");
		static const Smart::KnuthMorrisPratt kmp_distortion_m("\">");
		static const Smart::KnuthMorrisPratt kmp_distortion_model("<distortion_model>");
		
		if(kmp_parameter.search(is)) {
			CommVisionObjects::ImageParameters parameterItem;
			parameterItem.from_xml(is);
			setParameter(parameterItem);
		}
		if(kmp_dataList.search(is)) {
			size_t numberElements;
			is >> numberElements;
			unsigned char dataItem;
			std::vector<unsigned char> dataList;
			kmp_data.search(is);
			for(counter=0; counter<numberElements; counter++) {
				if(kmp_data.search(is)) {
					is >> dataItem;
					dataList.push_back(dataItem);
				}
			}
			setData(dataList);
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
		if(kmp_is_valid.search(is)) {
			bool is_validItem;
			is >> is_validItem;
			setIs_valid(is_validItem);
		}
		if(kmp_seq_count.search(is)) {
			unsigned int seq_countItem;
			is >> seq_countItem;
			setSeq_count(seq_countItem);
		}
		if(kmp_intrinsic_mList.search(is)) {
			size_t numberElements;
			is >> numberElements;
			double intrinsic_mItem;
			std::vector<double> intrinsic_mList;
			kmp_intrinsic_m.search(is);
			for(counter=0; counter<numberElements; counter++) {
				if(kmp_intrinsic_m.search(is)) {
					is >> intrinsic_mItem;
					intrinsic_mList.push_back(intrinsic_mItem);
				}
			}
			setIntrinsic_m(intrinsic_mList);
		}
		if(kmp_distortion_mList.search(is)) {
			size_t numberElements;
			is >> numberElements;
			double distortion_mItem;
			std::vector<double> distortion_mList;
			kmp_distortion_m.search(is);
			for(counter=0; counter<numberElements; counter++) {
				if(kmp_distortion_m.search(is)) {
					is >> distortion_mItem;
					distortion_mList.push_back(distortion_mItem);
				}
			}
			setDistortion_m(distortion_mList);
		}
		if(kmp_distortion_model.search(is)) {
			CommVisionObjects::ImageDistortionModel distortion_modelItem;
			distortion_modelItem.from_xml(is);
			setDistortion_model(distortion_modelItem);
		}
	}
	
	/*
	void CommVideoImageCore::get(ACE_Message_Block *&msg) const
	{
		// start with a default internal buffer size(will automatically grow if needed)
		ACE_OutputCDR cdr(ACE_DEFAULT_CDR_BUFSIZE);
		
		CommVisionObjectsIDL::HashList hashes;
		getAllHashValues(hashes);
		cdr << static_cast<ACE_CDR::Long>(hashes.size());
		for(CommVisionObjectsIDL::HashList::const_iterator it=hashes.begin(); it!=hashes.end(); it++)
		{
			cdr << ACE_CString(it->c_str());
		}
		
		// Here the actual serialization takes place using the OutputCDR serialization operator<<
		// (see CommVideoImageACE.hh)
		cdr << idl_CommVideoImage;
		
	#ifdef ENABLE_HASH
		ACE_CDR::ULong data_hash = generateDataHash(idl_CommVideoImage);
		cdr << data_hash;
		// std::cout << "CommVideoImageCore: current data hash: " << data_hash << std::endl;
	#endif
		
		// return a shallow copy of the serialized message 
		// (no data is actually copied, only the internal reference counter is incremented)
		// in order to prevent memory leaks the caller of this get(msg) method must
		// manually free the memory by calling the release() method of the message block msg
		msg = cdr.begin()->duplicate();
	}
	
	void CommVideoImageCore::set(const ACE_Message_Block *msg)
	{
		ACE_InputCDR cdr(msg);
	
		CommVisionObjectsIDL::HashList hashes;
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
		// (see CommVideoImageACE.hh)
		cdr >> idl_CommVideoImage;
		
	#ifdef ENABLE_HASH
		ACE_CDR::Long data_hash;
		cdr >> data_hash;
		ACE_CDR::Long own_hash = generateDataHash(idl_CommVideoImage);
		assert(data_hash == own_hash);
		// std::cout << "CommVideoImageCore: own data hash: " << own_hash << "; received data hash: " << data_hash << std::endl;
	#endif
	}
	*/
} /* namespace CommVisionObjects */
