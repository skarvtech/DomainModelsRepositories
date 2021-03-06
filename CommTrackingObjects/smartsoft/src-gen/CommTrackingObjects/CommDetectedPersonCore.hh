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
#ifndef COMMTRACKINGOBJECTS_COMMDETECTEDPERSON_CORE_H_
#define COMMTRACKINGOBJECTS_COMMDETECTEDPERSON_CORE_H_

#include "CommTrackingObjects/CommDetectedPersonData.hh"
#include "CommBasicObjects/CommPose3d.hh"
#include "CommBasicObjects/CommBaseState.hh"

#include <iostream>
#include <string>
#include <list>

namespace CommTrackingObjects {
	
class CommDetectedPersonCore {
protected:
	// data structure
	CommTrackingObjectsIDL::CommDetectedPerson idl_CommDetectedPerson;
	
public:
	// give a publicly accessible type-name for the template parameter IDL
	typedef CommTrackingObjectsIDL::CommDetectedPerson DATATYPE;
	
	#ifdef ENABLE_HASH
		static size_t generateDataHash(const DATATYPE &);
	#endif
	
	static const char* getCompiledHash();
	static void getAllHashValues(std::list<std::string> &hashes);
	static void checkAllHashValues(std::list<std::string> &hashes);
	
	// default constructors
	CommDetectedPersonCore();
	CommDetectedPersonCore(const DATATYPE &data);
	// default destructor
	virtual ~CommDetectedPersonCore();
	
	const DATATYPE& get() const { return idl_CommDetectedPerson; }
	operator const DATATYPE&() const { return idl_CommDetectedPerson; }
	DATATYPE& set() { return idl_CommDetectedPerson; }

	static inline std::string identifier(void) { return "CommTrackingObjects::CommDetectedPerson"; }
	
	// helper method to easily implement output stream in derived classes
	void to_ostream(std::ostream &os = std::cout) const;
	
	// convert to xml stream
	void to_xml(std::ostream &os, const std::string &indent = "") const;
	
	// restore from xml stream
	void from_xml(std::istream &is);
	
	// User Interface
	
	// getter and setter for element Id
	inline unsigned int getId() const { return idl_CommDetectedPerson.id; }
	inline CommDetectedPersonCore& setId(const unsigned int &id) { idl_CommDetectedPerson.id = id; return *this; }
	
	// getter and setter for element Is_valid
	inline bool getIs_valid() const { return idl_CommDetectedPerson.is_valid; }
	inline CommDetectedPersonCore& setIs_valid(const bool &is_valid) { idl_CommDetectedPerson.is_valid = is_valid; return *this; }
	
	// getter and setter for element Pose
	inline CommBasicObjects::CommPose3d getPose() const { return CommBasicObjects::CommPose3d(idl_CommDetectedPerson.pose); }
	inline CommDetectedPersonCore& setPose(const CommBasicObjects::CommPose3d &pose) { idl_CommDetectedPerson.pose = pose; return *this; }
	
	// getter and setter for element Base_state
	inline CommBasicObjects::CommBaseState getBase_state() const { return CommBasicObjects::CommBaseState(idl_CommDetectedPerson.base_state); }
	inline CommDetectedPersonCore& setBase_state(const CommBasicObjects::CommBaseState &base_state) { idl_CommDetectedPerson.base_state = base_state; return *this; }
};

} /* namespace CommTrackingObjects */
#endif /* COMMTRACKINGOBJECTS_COMMDETECTEDPERSON_CORE_H_ */
