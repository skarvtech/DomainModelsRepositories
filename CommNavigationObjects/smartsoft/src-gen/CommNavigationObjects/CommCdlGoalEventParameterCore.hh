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
#ifndef COMMNAVIGATIONOBJECTS_COMMCDLGOALEVENTPARAMETER_CORE_H_
#define COMMNAVIGATIONOBJECTS_COMMCDLGOALEVENTPARAMETER_CORE_H_

#include "CommNavigationObjects/CommCdlGoalEventParameterData.hh"
#include "CommNavigationObjects/enumCdlGoalEventType.hh"

#include <iostream>
#include <string>
#include <list>

namespace CommNavigationObjects {
	
class CommCdlGoalEventParameterCore {
protected:
	// data structure
	CommNavigationObjectsIDL::CommCdlGoalEventParameter idl_CommCdlGoalEventParameter;
	
public:
	// give a publicly accessible type-name for the template parameter IDL
	typedef CommNavigationObjectsIDL::CommCdlGoalEventParameter DATATYPE;
	
	#ifdef ENABLE_HASH
		static size_t generateDataHash(const DATATYPE &);
	#endif
	
	static const char* getCompiledHash();
	static void getAllHashValues(std::list<std::string> &hashes);
	static void checkAllHashValues(std::list<std::string> &hashes);
	
	// default constructors
	CommCdlGoalEventParameterCore();
	CommCdlGoalEventParameterCore(const DATATYPE &data);
	// default destructor
	virtual ~CommCdlGoalEventParameterCore();
	
	const DATATYPE& get() const { return idl_CommCdlGoalEventParameter; }
	operator const DATATYPE&() const { return idl_CommCdlGoalEventParameter; }
	DATATYPE& set() { return idl_CommCdlGoalEventParameter; }

	static inline std::string identifier(void) { return "CommNavigationObjects::CommCdlGoalEventParameter"; }
	
	// helper method to easily implement output stream in derived classes
	void to_ostream(std::ostream &os = std::cout) const;
	
	// convert to xml stream
	void to_xml(std::ostream &os, const std::string &indent = "") const;
	
	// restore from xml stream
	void from_xml(std::istream &is);
	
	// User Interface
	
	// getter and setter for element OldState
	inline CommNavigationObjects::CdlGoalEventType getOldState() const { return CommNavigationObjects::CdlGoalEventType(idl_CommCdlGoalEventParameter.oldState); }
	inline CommCdlGoalEventParameterCore& setOldState(const CommNavigationObjects::CdlGoalEventType &oldState) { idl_CommCdlGoalEventParameter.oldState = oldState; return *this; }
};

} /* namespace CommNavigationObjects */
#endif /* COMMNAVIGATIONOBJECTS_COMMCDLGOALEVENTPARAMETER_CORE_H_ */
