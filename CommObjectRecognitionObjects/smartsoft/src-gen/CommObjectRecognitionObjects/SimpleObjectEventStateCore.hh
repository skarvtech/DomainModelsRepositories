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
#ifndef COMMOBJECTRECOGNITIONOBJECTS_SIMPLEOBJECTEVENTSTATE_CORE_H_
#define COMMOBJECTRECOGNITIONOBJECTS_SIMPLEOBJECTEVENTSTATE_CORE_H_

#include "CommObjectRecognitionObjects/SimpleObjectEventStateData.hh"
#include "CommObjectRecognitionObjects/enumSimpleObjectState.hh"

#include <iostream>
#include <string>
#include <list>

namespace CommObjectRecognitionObjects {
	
class SimpleObjectEventStateCore {
protected:
	// data structure
	CommObjectRecognitionObjectsIDL::SimpleObjectEventState idl_SimpleObjectEventState;
	
public:
	// give a publicly accessible type-name for the template parameter IDL
	typedef CommObjectRecognitionObjectsIDL::SimpleObjectEventState DATATYPE;
	
	#ifdef ENABLE_HASH
		static size_t generateDataHash(const DATATYPE &);
	#endif
	
	static const char* getCompiledHash();
	static void getAllHashValues(std::list<std::string> &hashes);
	static void checkAllHashValues(std::list<std::string> &hashes);
	
	// default constructors
	SimpleObjectEventStateCore();
	SimpleObjectEventStateCore(const DATATYPE &data);
	// default destructor
	virtual ~SimpleObjectEventStateCore();
	
	const DATATYPE& get() const { return idl_SimpleObjectEventState; }
	operator const DATATYPE&() const { return idl_SimpleObjectEventState; }
	DATATYPE& set() { return idl_SimpleObjectEventState; }

	static inline std::string identifier(void) { return "CommObjectRecognitionObjects::SimpleObjectEventState"; }
	
	// helper method to easily implement output stream in derived classes
	void to_ostream(std::ostream &os = std::cout) const;
	
	// convert to xml stream
	void to_xml(std::ostream &os, const std::string &indent = "") const;
	
	// restore from xml stream
	void from_xml(std::istream &is);
	
	// User Interface
	
	// getter and setter for element NewState
	inline CommObjectRecognitionObjects::SimpleObjectState getNewState() const { return CommObjectRecognitionObjects::SimpleObjectState(idl_SimpleObjectEventState.newState); }
	inline SimpleObjectEventStateCore& setNewState(const CommObjectRecognitionObjects::SimpleObjectState &newState) { idl_SimpleObjectEventState.newState = newState; return *this; }
	
	// getter and setter for element X
	inline int getX() const { return idl_SimpleObjectEventState.x; }
	inline SimpleObjectEventStateCore& setX(const int &x) { idl_SimpleObjectEventState.x = x; return *this; }
	
	// getter and setter for element Y
	inline int getY() const { return idl_SimpleObjectEventState.y; }
	inline SimpleObjectEventStateCore& setY(const int &y) { idl_SimpleObjectEventState.y = y; return *this; }
};

} /* namespace CommObjectRecognitionObjects */
#endif /* COMMOBJECTRECOGNITIONOBJECTS_SIMPLEOBJECTEVENTSTATE_CORE_H_ */
