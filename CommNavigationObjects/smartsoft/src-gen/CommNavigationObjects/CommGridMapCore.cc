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
#include "CommNavigationObjects/CommGridMapCore.hh"

// serialization/deserialization operators
//#include "CommNavigationObjects/CommGridMapACE.hh"

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

namespace CommNavigationObjects 
{
	const char* CommGridMapCore::getCompiledHash()
	{
		return CommNavigationObjectsIDL::REPO_HASH;
	}
	
	void CommGridMapCore::getAllHashValues(std::list<std::string> &hashes)
	{
		// get own hash value
		hashes.push_back(getCompiledHash());
		// get hash value(s) for CommBasicObjects::CommTimeStamp(idl_CommGridMap.time)
		CommBasicObjects::CommTimeStamp::getAllHashValues(hashes);
	}
	
	void CommGridMapCore::checkAllHashValues(std::list<std::string> &hashes)
	{
		// check own hash value
		if (strcmp(getCompiledHash(), hashes.front().c_str()) != 0)
		{
			std::cerr << "###################################################" << std::endl;
			std::cerr << "WARNING: HASHES OF COMMUNICATION OBJECTS MISSMATCH!" << std::endl;
			std::cerr << "CommGridMapCore hash" << std::endl;
			std::cerr << "Expected: " << getCompiledHash() << std::endl;
			std::cerr << "Received: " << hashes.front() << std::endl;
			std::cerr << "###################################################" << std::endl;
		}
		assert(strcmp(getCompiledHash(), hashes.front().c_str()) == 0);
		hashes.pop_front();
		
		// check hash value(s) for CommBasicObjects::CommTimeStamp(idl_CommGridMap.time)
		CommBasicObjects::CommTimeStamp::checkAllHashValues(hashes);
	}
	
	#ifdef ENABLE_HASH
	size_t CommGridMapCore::generateDataHash(const DATATYPE &data)
	{
		size_t seed = 0;
		
		boost::hash_combine(seed, data.id);
		boost::hash_combine(seed, data.is_valid);
		seed += CommBasicObjects::CommTimeStamp::generateDataHash(data.time);
		boost::hash_combine(seed, data.xOffsetMM);
		boost::hash_combine(seed, data.yOffsetMM);
		boost::hash_combine(seed, data.xOffsetCells);
		boost::hash_combine(seed, data.yOffsetCells);
		boost::hash_combine(seed, data.cellSizeMM);
		boost::hash_combine(seed, data.xSizeMM);
		boost::hash_combine(seed, data.ySizeMM);
		boost::hash_combine(seed, data.xSizeCells);
		boost::hash_combine(seed, data.ySizeCells);
		boost::hash_combine(seed, data.size);
		std::vector<ACE_CDR::Octet>::const_iterator data_cellIt;
		for(data_cellIt=data.cell.begin(); data_cellIt!=data.cell.end(); data_cellIt++) {
			boost::hash_combine(seed, *data_cellIt);
		}
		
		return seed;
	}
	#endif
	
	// default constructor
	CommGridMapCore::CommGridMapCore()
	:	idl_CommGridMap()
	{  
		setId(0);
		setIs_valid(false);
		setTime(CommBasicObjects::CommTimeStamp());
		setXOffsetMM(0);
		setYOffsetMM(0);
		setXOffsetCells(0);
		setYOffsetCells(0);
		setCellSizeMM(0);
		setXSizeMM(0);
		setYSizeMM(0);
		setXSizeCells(0);
		setYSizeCells(0);
		setSize(0);
		setCell(std::vector<unsigned char>());
	}
	
	CommGridMapCore::CommGridMapCore(const DATATYPE &data)
	:	idl_CommGridMap(data)
	{  }

	CommGridMapCore::~CommGridMapCore()
	{  }
	
	void CommGridMapCore::to_ostream(std::ostream &os) const
	{
	  os << "CommGridMap(";
	  os << getId() << " ";
	  os << getIs_valid() << " ";
	  getTime().to_ostream(os);
	  os << getXOffsetMM() << " ";
	  os << getYOffsetMM() << " ";
	  os << getXOffsetCells() << " ";
	  os << getYOffsetCells() << " ";
	  os << getCellSizeMM() << " ";
	  os << getXSizeMM() << " ";
	  os << getYSizeMM() << " ";
	  os << getXSizeCells() << " ";
	  os << getYSizeCells() << " ";
	  os << getSize() << " ";
	  std::vector<unsigned char>::const_iterator cellIt;
	  std::vector<unsigned char> cellList = getCellCopy();
	  for(cellIt=cellList.begin(); cellIt!=cellList.end(); cellIt++) {
	  	os << *cellIt << " ";
	  }
	  os << ") ";
	}
	
	// convert to xml stream
	void CommGridMapCore::to_xml(std::ostream &os, const std::string &indent) const {
		size_t counter = 0;
		
		os << indent << "<id>" << getId() << "</id>";
		os << indent << "<is_valid>" << getIs_valid() << "</is_valid>";
		os << indent << "<time>";
		getTime().to_xml(os, indent);
		os << indent << "</time>";
		os << indent << "<xOffsetMM>" << getXOffsetMM() << "</xOffsetMM>";
		os << indent << "<yOffsetMM>" << getYOffsetMM() << "</yOffsetMM>";
		os << indent << "<xOffsetCells>" << getXOffsetCells() << "</xOffsetCells>";
		os << indent << "<yOffsetCells>" << getYOffsetCells() << "</yOffsetCells>";
		os << indent << "<cellSizeMM>" << getCellSizeMM() << "</cellSizeMM>";
		os << indent << "<xSizeMM>" << getXSizeMM() << "</xSizeMM>";
		os << indent << "<ySizeMM>" << getYSizeMM() << "</ySizeMM>";
		os << indent << "<xSizeCells>" << getXSizeCells() << "</xSizeCells>";
		os << indent << "<ySizeCells>" << getYSizeCells() << "</ySizeCells>";
		os << indent << "<size>" << getSize() << "</size>";
		std::vector<unsigned char>::const_iterator cellIt;
		std::vector<unsigned char> cellList = getCellCopy();
		counter = 0;
		os << indent << "<cellList n=\"" << cellList.size() << "\">";
		for(cellIt=cellList.begin(); cellIt!=cellList.end(); cellIt++) {
			os << indent << "<cell i=\"" << counter++ << "\">" << *cellIt << "</cell>";
		}
		os << indent << "</cellList>";
	}
	
	// restore from xml stream
	void CommGridMapCore::from_xml(std::istream &is) {
		size_t counter = 0;
		
		static const Smart::KnuthMorrisPratt kmp_id("<id>");
		static const Smart::KnuthMorrisPratt kmp_is_valid("<is_valid>");
		static const Smart::KnuthMorrisPratt kmp_time("<time>");
		static const Smart::KnuthMorrisPratt kmp_xOffsetMM("<xOffsetMM>");
		static const Smart::KnuthMorrisPratt kmp_yOffsetMM("<yOffsetMM>");
		static const Smart::KnuthMorrisPratt kmp_xOffsetCells("<xOffsetCells>");
		static const Smart::KnuthMorrisPratt kmp_yOffsetCells("<yOffsetCells>");
		static const Smart::KnuthMorrisPratt kmp_cellSizeMM("<cellSizeMM>");
		static const Smart::KnuthMorrisPratt kmp_xSizeMM("<xSizeMM>");
		static const Smart::KnuthMorrisPratt kmp_ySizeMM("<ySizeMM>");
		static const Smart::KnuthMorrisPratt kmp_xSizeCells("<xSizeCells>");
		static const Smart::KnuthMorrisPratt kmp_ySizeCells("<ySizeCells>");
		static const Smart::KnuthMorrisPratt kmp_size("<size>");
		static const Smart::KnuthMorrisPratt kmp_cellList("<cellList n=\"");
		static const Smart::KnuthMorrisPratt kmp_cell("\">");
		
		if(kmp_id.search(is)) {
			unsigned int idItem;
			is >> idItem;
			setId(idItem);
		}
		if(kmp_is_valid.search(is)) {
			bool is_validItem;
			is >> is_validItem;
			setIs_valid(is_validItem);
		}
		if(kmp_time.search(is)) {
			CommBasicObjects::CommTimeStamp timeItem;
			timeItem.from_xml(is);
			setTime(timeItem);
		}
		if(kmp_xOffsetMM.search(is)) {
			int xOffsetMMItem;
			is >> xOffsetMMItem;
			setXOffsetMM(xOffsetMMItem);
		}
		if(kmp_yOffsetMM.search(is)) {
			int yOffsetMMItem;
			is >> yOffsetMMItem;
			setYOffsetMM(yOffsetMMItem);
		}
		if(kmp_xOffsetCells.search(is)) {
			int xOffsetCellsItem;
			is >> xOffsetCellsItem;
			setXOffsetCells(xOffsetCellsItem);
		}
		if(kmp_yOffsetCells.search(is)) {
			int yOffsetCellsItem;
			is >> yOffsetCellsItem;
			setYOffsetCells(yOffsetCellsItem);
		}
		if(kmp_cellSizeMM.search(is)) {
			int cellSizeMMItem;
			is >> cellSizeMMItem;
			setCellSizeMM(cellSizeMMItem);
		}
		if(kmp_xSizeMM.search(is)) {
			unsigned int xSizeMMItem;
			is >> xSizeMMItem;
			setXSizeMM(xSizeMMItem);
		}
		if(kmp_ySizeMM.search(is)) {
			unsigned int ySizeMMItem;
			is >> ySizeMMItem;
			setYSizeMM(ySizeMMItem);
		}
		if(kmp_xSizeCells.search(is)) {
			unsigned int xSizeCellsItem;
			is >> xSizeCellsItem;
			setXSizeCells(xSizeCellsItem);
		}
		if(kmp_ySizeCells.search(is)) {
			unsigned int ySizeCellsItem;
			is >> ySizeCellsItem;
			setYSizeCells(ySizeCellsItem);
		}
		if(kmp_size.search(is)) {
			unsigned int sizeItem;
			is >> sizeItem;
			setSize(sizeItem);
		}
		if(kmp_cellList.search(is)) {
			size_t numberElements;
			is >> numberElements;
			unsigned char cellItem;
			std::vector<unsigned char> cellList;
			kmp_cell.search(is);
			for(counter=0; counter<numberElements; counter++) {
				if(kmp_cell.search(is)) {
					is >> cellItem;
					cellList.push_back(cellItem);
				}
			}
			setCell(cellList);
		}
	}
	
	/*
	void CommGridMapCore::get(ACE_Message_Block *&msg) const
	{
		// start with a default internal buffer size(will automatically grow if needed)
		ACE_OutputCDR cdr(ACE_DEFAULT_CDR_BUFSIZE);
		
		CommNavigationObjectsIDL::HashList hashes;
		getAllHashValues(hashes);
		cdr << static_cast<ACE_CDR::Long>(hashes.size());
		for(CommNavigationObjectsIDL::HashList::const_iterator it=hashes.begin(); it!=hashes.end(); it++)
		{
			cdr << ACE_CString(it->c_str());
		}
		
		// Here the actual serialization takes place using the OutputCDR serialization operator<<
		// (see CommGridMapACE.hh)
		cdr << idl_CommGridMap;
		
	#ifdef ENABLE_HASH
		ACE_CDR::ULong data_hash = generateDataHash(idl_CommGridMap);
		cdr << data_hash;
		// std::cout << "CommGridMapCore: current data hash: " << data_hash << std::endl;
	#endif
		
		// return a shallow copy of the serialized message 
		// (no data is actually copied, only the internal reference counter is incremented)
		// in order to prevent memory leaks the caller of this get(msg) method must
		// manually free the memory by calling the release() method of the message block msg
		msg = cdr.begin()->duplicate();
	}
	
	void CommGridMapCore::set(const ACE_Message_Block *msg)
	{
		ACE_InputCDR cdr(msg);
	
		CommNavigationObjectsIDL::HashList hashes;
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
		// (see CommGridMapACE.hh)
		cdr >> idl_CommGridMap;
		
	#ifdef ENABLE_HASH
		ACE_CDR::Long data_hash;
		cdr >> data_hash;
		ACE_CDR::Long own_hash = generateDataHash(idl_CommGridMap);
		assert(data_hash == own_hash);
		// std::cout << "CommGridMapCore: own data hash: " << own_hash << "; received data hash: " << data_hash << std::endl;
	#endif
	}
	*/
} /* namespace CommNavigationObjects */