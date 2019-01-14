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
#ifndef COMMMANIPULATOROBJECTS_JOINTVALUES_CORE_H_
#define COMMMANIPULATOROBJECTS_JOINTVALUES_CORE_H_

#include "CommManipulatorObjects/JointValuesData.hh"

#include <iostream>
#include <string>
#include <list>

namespace CommManipulatorObjects {
	
class JointValuesCore {
protected:
	// data structure
	CommManipulatorObjectsIDL::JointValues idl_JointValues;
	
public:
	// give a publicly accessible type-name for the template parameter IDL
	typedef CommManipulatorObjectsIDL::JointValues DATATYPE;
	
	#ifdef ENABLE_HASH
		static size_t generateDataHash(const DATATYPE &);
	#endif
	
	static const char* getCompiledHash();
	static void getAllHashValues(std::list<std::string> &hashes);
	static void checkAllHashValues(std::list<std::string> &hashes);
	
	// default constructors
	JointValuesCore();
	JointValuesCore(const DATATYPE &data);
	// default destructor
	virtual ~JointValuesCore();
	
	const DATATYPE& get() const { return idl_JointValues; }
	operator const DATATYPE&() const { return idl_JointValues; }
	DATATYPE& set() { return idl_JointValues; }

	static inline std::string identifier(void) { return "CommManipulatorObjects::JointValues"; }
	
	// helper method to easily implement output stream in derived classes
	void to_ostream(std::ostream &os = std::cout) const;
	
	// convert to xml stream
	void to_xml(std::ostream &os, const std::string &indent = "") const;
	
	// restore from xml stream
	void from_xml(std::istream &is);
	
	// User Interface
	
	// getter and setter for element Values
	/**
	 * Getter methods for idl_JointValues.values of type vector<double>
	 */
	inline std::vector<double>& getValuesRef() { return idl_JointValues.values; }
	inline std::vector<double> getValuesCopy() const {
		return std::vector<double>(idl_JointValues.values.begin(), idl_JointValues.values.end());
	}
	inline double getValuesElemAtPos(const size_t &pos) const { return idl_JointValues.values[pos]; }
	inline size_t getValuesSize() const { return idl_JointValues.values.size(); }
	inline bool isValuesEmpty() const { return idl_JointValues.values.empty(); }
	/**
	 * Setter methods for idl_JointValues.values of type vector<double>
	 */
	inline JointValuesCore& setValues(const std::vector<double> &values) { idl_JointValues.values = values; return *this; }
	inline bool setValuesElemAtPos(const size_t &pos, const double &elem) {
		if(pos < idl_JointValues.values.size()) {
			idl_JointValues.values[pos] = elem;
			return true;
		}
		return false;
	}
	inline bool insertValuesVectorAtPos(const size_t &pos, const std::vector<double> &data) {
		if(pos < idl_JointValues.values.size()) {
			idl_JointValues.values.insert(idl_JointValues.values.begin()+pos, data.begin(), data.end());
			return true;
		}
		return false;
	}
	inline void resizeValues(const size_t &size) { idl_JointValues.values.resize(size); }
	inline bool eraseValuesElemsAtPos(const size_t &pos, const size_t &nbr_elems) {
		if( (pos+nbr_elems) <= idl_JointValues.values.size() ) {
			idl_JointValues.values.erase(idl_JointValues.values.begin()+pos, idl_JointValues.values.begin()+pos+nbr_elems);
			return true;
		}
		return false;
	}
	inline void clearValues() { idl_JointValues.values.clear(); }
	
	// getter and setter for element Time
	inline float getTime() const { return idl_JointValues.time; }
	inline JointValuesCore& setTime(const float &time) { idl_JointValues.time = time; return *this; }
};

} /* namespace CommManipulatorObjects */
#endif /* COMMMANIPULATOROBJECTS_JOINTVALUES_CORE_H_ */
