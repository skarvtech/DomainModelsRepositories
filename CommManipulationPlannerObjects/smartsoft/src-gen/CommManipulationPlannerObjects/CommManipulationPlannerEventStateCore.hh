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
#ifndef COMMMANIPULATIONPLANNEROBJECTS_COMMMANIPULATIONPLANNEREVENTSTATE_CORE_H_
#define COMMMANIPULATIONPLANNEROBJECTS_COMMMANIPULATIONPLANNEREVENTSTATE_CORE_H_

#include "CommManipulationPlannerObjects/CommManipulationPlannerEventStateData.hh"
#include "CommManipulationPlannerObjects/enumManipulationPlannerEvent.hh"
#include "CommBasicObjects/CommPose3d.hh"

#include <iostream>
#include <string>
#include <list>

namespace CommManipulationPlannerObjects {
	
class CommManipulationPlannerEventStateCore {
protected:
	// data structure
	CommManipulationPlannerObjectsIDL::CommManipulationPlannerEventState idl_CommManipulationPlannerEventState;
	
public:
	// give a publicly accessible type-name for the template parameter IDL
	typedef CommManipulationPlannerObjectsIDL::CommManipulationPlannerEventState DATATYPE;
	
	#ifdef ENABLE_HASH
		static size_t generateDataHash(const DATATYPE &);
	#endif
	
	static const char* getCompiledHash();
	static void getAllHashValues(std::list<std::string> &hashes);
	static void checkAllHashValues(std::list<std::string> &hashes);
	
	// default constructors
	CommManipulationPlannerEventStateCore();
	CommManipulationPlannerEventStateCore(const DATATYPE &data);
	// default destructor
	virtual ~CommManipulationPlannerEventStateCore();
	
	const DATATYPE& get() const { return idl_CommManipulationPlannerEventState; }
	operator const DATATYPE&() const { return idl_CommManipulationPlannerEventState; }
	DATATYPE& set() { return idl_CommManipulationPlannerEventState; }

	static inline std::string identifier(void) { return "CommManipulationPlannerObjects::CommManipulationPlannerEventState"; }
	
	// helper method to easily implement output stream in derived classes
	void to_ostream(std::ostream &os = std::cout) const;
	
	// convert to xml stream
	void to_xml(std::ostream &os, const std::string &indent = "") const;
	
	// restore from xml stream
	void from_xml(std::istream &is);
	
	// User Interface
	
	// getter and setter for element Event
	inline CommManipulationPlannerObjects::ManipulationPlannerEvent getEvent() const { return CommManipulationPlannerObjects::ManipulationPlannerEvent(idl_CommManipulationPlannerEventState.event); }
	inline CommManipulationPlannerEventStateCore& setEvent(const CommManipulationPlannerObjects::ManipulationPlannerEvent &event) { idl_CommManipulationPlannerEventState.event = event; return *this; }
	
	// getter and setter for element Pose
	inline CommBasicObjects::CommPose3d getPose() const { return CommBasicObjects::CommPose3d(idl_CommManipulationPlannerEventState.pose); }
	inline CommManipulationPlannerEventStateCore& setPose(const CommBasicObjects::CommPose3d &pose) { idl_CommManipulationPlannerEventState.pose = pose; return *this; }
};

} /* namespace CommManipulationPlannerObjects */
#endif /* COMMMANIPULATIONPLANNEROBJECTS_COMMMANIPULATIONPLANNEREVENTSTATE_CORE_H_ */
