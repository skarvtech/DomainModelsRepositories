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
#include "CommObjectRecognitionObjects/TriMeshCore.hh"

// serialization/deserialization operators
//#include "CommObjectRecognitionObjects/TriMeshACE.hh"

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

namespace CommObjectRecognitionObjects 
{
	const char* TriMeshCore::getCompiledHash()
	{
		return CommObjectRecognitionObjectsIDL::REPO_HASH;
	}
	
	void TriMeshCore::getAllHashValues(std::list<std::string> &hashes)
	{
		// get own hash value
		hashes.push_back(getCompiledHash());
	}
	
	void TriMeshCore::checkAllHashValues(std::list<std::string> &hashes)
	{
		// check own hash value
		if (strcmp(getCompiledHash(), hashes.front().c_str()) != 0)
		{
			std::cerr << "###################################################" << std::endl;
			std::cerr << "WARNING: HASHES OF COMMUNICATION OBJECTS MISSMATCH!" << std::endl;
			std::cerr << "TriMeshCore hash" << std::endl;
			std::cerr << "Expected: " << getCompiledHash() << std::endl;
			std::cerr << "Received: " << hashes.front() << std::endl;
			std::cerr << "###################################################" << std::endl;
		}
		assert(strcmp(getCompiledHash(), hashes.front().c_str()) == 0);
		hashes.pop_front();
		
	}
	
	#ifdef ENABLE_HASH
	size_t TriMeshCore::generateDataHash(const DATATYPE &data)
	{
		size_t seed = 0;
		
		std::vector<ACE_CDR::ULong>::const_iterator data_vertices_p1It;
		for(data_vertices_p1It=data.vertices_p1.begin(); data_vertices_p1It!=data.vertices_p1.end(); data_vertices_p1It++) {
			boost::hash_combine(seed, *data_vertices_p1It);
		}
		std::vector<ACE_CDR::ULong>::const_iterator data_vertices_p2It;
		for(data_vertices_p2It=data.vertices_p2.begin(); data_vertices_p2It!=data.vertices_p2.end(); data_vertices_p2It++) {
			boost::hash_combine(seed, *data_vertices_p2It);
		}
		std::vector<ACE_CDR::ULong>::const_iterator data_vertices_p3It;
		for(data_vertices_p3It=data.vertices_p3.begin(); data_vertices_p3It!=data.vertices_p3.end(); data_vertices_p3It++) {
			boost::hash_combine(seed, *data_vertices_p3It);
		}
		std::vector<ACE_CDR::Double>::const_iterator data_points_xIt;
		for(data_points_xIt=data.points_x.begin(); data_points_xIt!=data.points_x.end(); data_points_xIt++) {
			boost::hash_combine(seed, *data_points_xIt);
		}
		std::vector<ACE_CDR::Double>::const_iterator data_points_yIt;
		for(data_points_yIt=data.points_y.begin(); data_points_yIt!=data.points_y.end(); data_points_yIt++) {
			boost::hash_combine(seed, *data_points_yIt);
		}
		std::vector<ACE_CDR::Double>::const_iterator data_points_zIt;
		for(data_points_zIt=data.points_z.begin(); data_points_zIt!=data.points_z.end(); data_points_zIt++) {
			boost::hash_combine(seed, *data_points_zIt);
		}
		
		return seed;
	}
	#endif
	
	// default constructor
	TriMeshCore::TriMeshCore()
	:	idl_TriMesh()
	{  
		setVertices_p1(std::vector<unsigned int>());
		setVertices_p2(std::vector<unsigned int>());
		setVertices_p3(std::vector<unsigned int>());
		setPoints_x(std::vector<double>());
		setPoints_y(std::vector<double>());
		setPoints_z(std::vector<double>());
	}
	
	TriMeshCore::TriMeshCore(const DATATYPE &data)
	:	idl_TriMesh(data)
	{  }

	TriMeshCore::~TriMeshCore()
	{  }
	
	void TriMeshCore::to_ostream(std::ostream &os) const
	{
	  os << "TriMesh(";
	  std::vector<unsigned int>::const_iterator vertices_p1It;
	  std::vector<unsigned int> vertices_p1List = getVertices_p1Copy();
	  for(vertices_p1It=vertices_p1List.begin(); vertices_p1It!=vertices_p1List.end(); vertices_p1It++) {
	  	os << *vertices_p1It << " ";
	  }
	  std::vector<unsigned int>::const_iterator vertices_p2It;
	  std::vector<unsigned int> vertices_p2List = getVertices_p2Copy();
	  for(vertices_p2It=vertices_p2List.begin(); vertices_p2It!=vertices_p2List.end(); vertices_p2It++) {
	  	os << *vertices_p2It << " ";
	  }
	  std::vector<unsigned int>::const_iterator vertices_p3It;
	  std::vector<unsigned int> vertices_p3List = getVertices_p3Copy();
	  for(vertices_p3It=vertices_p3List.begin(); vertices_p3It!=vertices_p3List.end(); vertices_p3It++) {
	  	os << *vertices_p3It << " ";
	  }
	  std::vector<double>::const_iterator points_xIt;
	  std::vector<double> points_xList = getPoints_xCopy();
	  for(points_xIt=points_xList.begin(); points_xIt!=points_xList.end(); points_xIt++) {
	  	os << *points_xIt << " ";
	  }
	  std::vector<double>::const_iterator points_yIt;
	  std::vector<double> points_yList = getPoints_yCopy();
	  for(points_yIt=points_yList.begin(); points_yIt!=points_yList.end(); points_yIt++) {
	  	os << *points_yIt << " ";
	  }
	  std::vector<double>::const_iterator points_zIt;
	  std::vector<double> points_zList = getPoints_zCopy();
	  for(points_zIt=points_zList.begin(); points_zIt!=points_zList.end(); points_zIt++) {
	  	os << *points_zIt << " ";
	  }
	  os << ") ";
	}
	
	// convert to xml stream
	void TriMeshCore::to_xml(std::ostream &os, const std::string &indent) const {
		size_t counter = 0;
		
		std::vector<unsigned int>::const_iterator vertices_p1It;
		std::vector<unsigned int> vertices_p1List = getVertices_p1Copy();
		counter = 0;
		os << indent << "<vertices_p1List n=\"" << vertices_p1List.size() << "\">";
		for(vertices_p1It=vertices_p1List.begin(); vertices_p1It!=vertices_p1List.end(); vertices_p1It++) {
			os << indent << "<vertices_p1 i=\"" << counter++ << "\">" << *vertices_p1It << "</vertices_p1>";
		}
		os << indent << "</vertices_p1List>";
		std::vector<unsigned int>::const_iterator vertices_p2It;
		std::vector<unsigned int> vertices_p2List = getVertices_p2Copy();
		counter = 0;
		os << indent << "<vertices_p2List n=\"" << vertices_p2List.size() << "\">";
		for(vertices_p2It=vertices_p2List.begin(); vertices_p2It!=vertices_p2List.end(); vertices_p2It++) {
			os << indent << "<vertices_p2 i=\"" << counter++ << "\">" << *vertices_p2It << "</vertices_p2>";
		}
		os << indent << "</vertices_p2List>";
		std::vector<unsigned int>::const_iterator vertices_p3It;
		std::vector<unsigned int> vertices_p3List = getVertices_p3Copy();
		counter = 0;
		os << indent << "<vertices_p3List n=\"" << vertices_p3List.size() << "\">";
		for(vertices_p3It=vertices_p3List.begin(); vertices_p3It!=vertices_p3List.end(); vertices_p3It++) {
			os << indent << "<vertices_p3 i=\"" << counter++ << "\">" << *vertices_p3It << "</vertices_p3>";
		}
		os << indent << "</vertices_p3List>";
		std::vector<double>::const_iterator points_xIt;
		std::vector<double> points_xList = getPoints_xCopy();
		counter = 0;
		os << indent << "<points_xList n=\"" << points_xList.size() << "\">";
		for(points_xIt=points_xList.begin(); points_xIt!=points_xList.end(); points_xIt++) {
			os << indent << "<points_x i=\"" << counter++ << "\">" << *points_xIt << "</points_x>";
		}
		os << indent << "</points_xList>";
		std::vector<double>::const_iterator points_yIt;
		std::vector<double> points_yList = getPoints_yCopy();
		counter = 0;
		os << indent << "<points_yList n=\"" << points_yList.size() << "\">";
		for(points_yIt=points_yList.begin(); points_yIt!=points_yList.end(); points_yIt++) {
			os << indent << "<points_y i=\"" << counter++ << "\">" << *points_yIt << "</points_y>";
		}
		os << indent << "</points_yList>";
		std::vector<double>::const_iterator points_zIt;
		std::vector<double> points_zList = getPoints_zCopy();
		counter = 0;
		os << indent << "<points_zList n=\"" << points_zList.size() << "\">";
		for(points_zIt=points_zList.begin(); points_zIt!=points_zList.end(); points_zIt++) {
			os << indent << "<points_z i=\"" << counter++ << "\">" << *points_zIt << "</points_z>";
		}
		os << indent << "</points_zList>";
	}
	
	// restore from xml stream
	void TriMeshCore::from_xml(std::istream &is) {
		size_t counter = 0;
		
		static const Smart::KnuthMorrisPratt kmp_vertices_p1List("<vertices_p1List n=\"");
		static const Smart::KnuthMorrisPratt kmp_vertices_p1("\">");
		static const Smart::KnuthMorrisPratt kmp_vertices_p2List("<vertices_p2List n=\"");
		static const Smart::KnuthMorrisPratt kmp_vertices_p2("\">");
		static const Smart::KnuthMorrisPratt kmp_vertices_p3List("<vertices_p3List n=\"");
		static const Smart::KnuthMorrisPratt kmp_vertices_p3("\">");
		static const Smart::KnuthMorrisPratt kmp_points_xList("<points_xList n=\"");
		static const Smart::KnuthMorrisPratt kmp_points_x("\">");
		static const Smart::KnuthMorrisPratt kmp_points_yList("<points_yList n=\"");
		static const Smart::KnuthMorrisPratt kmp_points_y("\">");
		static const Smart::KnuthMorrisPratt kmp_points_zList("<points_zList n=\"");
		static const Smart::KnuthMorrisPratt kmp_points_z("\">");
		
		if(kmp_vertices_p1List.search(is)) {
			size_t numberElements;
			is >> numberElements;
			unsigned int vertices_p1Item;
			std::vector<unsigned int> vertices_p1List;
			kmp_vertices_p1.search(is);
			for(counter=0; counter<numberElements; counter++) {
				if(kmp_vertices_p1.search(is)) {
					is >> vertices_p1Item;
					vertices_p1List.push_back(vertices_p1Item);
				}
			}
			setVertices_p1(vertices_p1List);
		}
		if(kmp_vertices_p2List.search(is)) {
			size_t numberElements;
			is >> numberElements;
			unsigned int vertices_p2Item;
			std::vector<unsigned int> vertices_p2List;
			kmp_vertices_p2.search(is);
			for(counter=0; counter<numberElements; counter++) {
				if(kmp_vertices_p2.search(is)) {
					is >> vertices_p2Item;
					vertices_p2List.push_back(vertices_p2Item);
				}
			}
			setVertices_p2(vertices_p2List);
		}
		if(kmp_vertices_p3List.search(is)) {
			size_t numberElements;
			is >> numberElements;
			unsigned int vertices_p3Item;
			std::vector<unsigned int> vertices_p3List;
			kmp_vertices_p3.search(is);
			for(counter=0; counter<numberElements; counter++) {
				if(kmp_vertices_p3.search(is)) {
					is >> vertices_p3Item;
					vertices_p3List.push_back(vertices_p3Item);
				}
			}
			setVertices_p3(vertices_p3List);
		}
		if(kmp_points_xList.search(is)) {
			size_t numberElements;
			is >> numberElements;
			double points_xItem;
			std::vector<double> points_xList;
			kmp_points_x.search(is);
			for(counter=0; counter<numberElements; counter++) {
				if(kmp_points_x.search(is)) {
					is >> points_xItem;
					points_xList.push_back(points_xItem);
				}
			}
			setPoints_x(points_xList);
		}
		if(kmp_points_yList.search(is)) {
			size_t numberElements;
			is >> numberElements;
			double points_yItem;
			std::vector<double> points_yList;
			kmp_points_y.search(is);
			for(counter=0; counter<numberElements; counter++) {
				if(kmp_points_y.search(is)) {
					is >> points_yItem;
					points_yList.push_back(points_yItem);
				}
			}
			setPoints_y(points_yList);
		}
		if(kmp_points_zList.search(is)) {
			size_t numberElements;
			is >> numberElements;
			double points_zItem;
			std::vector<double> points_zList;
			kmp_points_z.search(is);
			for(counter=0; counter<numberElements; counter++) {
				if(kmp_points_z.search(is)) {
					is >> points_zItem;
					points_zList.push_back(points_zItem);
				}
			}
			setPoints_z(points_zList);
		}
	}
	
	/*
	void TriMeshCore::get(ACE_Message_Block *&msg) const
	{
		// start with a default internal buffer size(will automatically grow if needed)
		ACE_OutputCDR cdr(ACE_DEFAULT_CDR_BUFSIZE);
		
		CommObjectRecognitionObjectsIDL::HashList hashes;
		getAllHashValues(hashes);
		cdr << static_cast<ACE_CDR::Long>(hashes.size());
		for(CommObjectRecognitionObjectsIDL::HashList::const_iterator it=hashes.begin(); it!=hashes.end(); it++)
		{
			cdr << ACE_CString(it->c_str());
		}
		
		// Here the actual serialization takes place using the OutputCDR serialization operator<<
		// (see TriMeshACE.hh)
		cdr << idl_TriMesh;
		
	#ifdef ENABLE_HASH
		ACE_CDR::ULong data_hash = generateDataHash(idl_TriMesh);
		cdr << data_hash;
		// std::cout << "TriMeshCore: current data hash: " << data_hash << std::endl;
	#endif
		
		// return a shallow copy of the serialized message 
		// (no data is actually copied, only the internal reference counter is incremented)
		// in order to prevent memory leaks the caller of this get(msg) method must
		// manually free the memory by calling the release() method of the message block msg
		msg = cdr.begin()->duplicate();
	}
	
	void TriMeshCore::set(const ACE_Message_Block *msg)
	{
		ACE_InputCDR cdr(msg);
	
		CommObjectRecognitionObjectsIDL::HashList hashes;
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
		// (see TriMeshACE.hh)
		cdr >> idl_TriMesh;
		
	#ifdef ENABLE_HASH
		ACE_CDR::Long data_hash;
		cdr >> data_hash;
		ACE_CDR::Long own_hash = generateDataHash(idl_TriMesh);
		assert(data_hash == own_hash);
		// std::cout << "TriMeshCore: own data hash: " << own_hash << "; received data hash: " << data_hash << std::endl;
	#endif
	}
	*/
} /* namespace CommObjectRecognitionObjects */
