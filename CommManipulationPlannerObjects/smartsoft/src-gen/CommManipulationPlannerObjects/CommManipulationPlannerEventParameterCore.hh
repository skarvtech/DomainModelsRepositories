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
#ifndef COMMMANIPULATIONPLANNEROBJECTS_COMMMANIPULATIONPLANNEREVENTPARAMETER_CORE_H_
#define COMMMANIPULATIONPLANNEROBJECTS_COMMMANIPULATIONPLANNEREVENTPARAMETER_CORE_H_

#include "CommManipulationPlannerObjects/CommManipulationPlannerEventParameterData.hh"
#include "CommManipulationPlannerObjects/enumManipulationPlannerEvent.hh"

#include <iostream>
#include <string>
#include <list>

namespace CommManipulationPlannerObjects {
	
class CommManipulationPlannerEventParameterCore {
protected:
	// data structure
	CommManipulationPlannerObjectsIDL::CommManipulationPlannerEventParameter idl_CommManipulationPlannerEventParameter;
	
public:
	// give a publicly accessible type-name for the template parameter IDL
	typedef CommManipulationPlannerObjectsIDL::CommManipulationPlannerEventParameter DATATYPE;
	
	#ifdef ENABLE_HASH
		static size_t generateDataHash(const DATATYPE &);
	#endif
	
	static const char* getCompiledHash();
	static void getAllHashValues(std::list<std::string> &hashes);
	static void checkAllHashValues(std::list<std::string> &hashes);
	
	// default constructors
	CommManipulationPlannerEventParameterCore();
	CommManipulationPlannerEventParameterCore(const DATATYPE &data);
	// default destructor
	virtual ~CommManipulationPlannerEventParameterCore();
	
	const DATATYPE& get() const { return idl_CommManipulationPlannerEventParameter; }
	operator const DATATYPE&() const { return idl_CommManipulationPlannerEventParameter; }
	DATATYPE& set() { return idl_CommManipulationPlannerEventParameter; }

	static inline std::string identifier(void) { return "CommManipulationPlannerObjects::CommManipulationPlannerEventParameter"; }
	
	// helper method to easily implement output stream in derived classes
	void to_ostream(std::ostream &os = std::cout) const;
	
	// convert to xml stream
	void to_xml(std::ostream &os, const std::string &indent = "") const;
	
	// restore from xml stream
	void from_xml(std::istream &is);
	
	// User Interface
	
	// getter and setter for element Event
	inline CommManipulationPlannerObjects::ManipulationPlannerEvent getEvent() const { return CommManipulationPlannerObjects::ManipulationPlannerEvent(idl_CommManipulationPlannerEventParameter.event); }
	inline CommManipulationPlannerEventParameterCore& setEvent(const CommManipulationPlannerObjects::ManipulationPlannerEvent &event) { idl_CommManipulationPlannerEventParameter.event = event; return *this; }
};

} /* namespace CommManipulationPlannerObjects */
#endif /* COMMMANIPULATIONPLANNEROBJECTS_COMMMANIPULATIONPLANNEREVENTPARAMETER_CORE_H_ */
