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
#ifndef COMMBASICOBJECTS_BASETAGTYPE_ENUM_H_
#define COMMBASICOBJECTS_BASETAGTYPE_ENUM_H_

#include <CommBasicObjects/enumBaseTagTypeData.hh>

#include <string>
#include <iostream>

// SmartUtils used in from_xml method
#include "smartKnuthMorrisPratt.hh"

namespace CommBasicObjects {
	
	class BaseTagType {
	private:
		CommBasicObjectsIDL::BaseTagType value;
		
	public:
		enum ENUM_BaseTagType {
			ENUM_VALUE_UNDEFINED = 0,
			SIGNAL_STATE_IDLE = 1,
			SIGNAL_STATE_ERROR = 2,
			SIGNAL_STATE_BUSY = 3,
			SIGNAL_STATE_LOCALIZATION_ERROR = 4,
			SIGNAL_STATE_SAFETY_FIELD = 5
		};
		
		// default constructor
		BaseTagType() { 
			value = ENUM_VALUE_UNDEFINED;
		}
		
		// copy constructor for enum type
		BaseTagType(ENUM_BaseTagType e) {
			value = static_cast<int>(e);
		}
		
		// copy constructor for IDL type
		BaseTagType(CommBasicObjectsIDL::BaseTagType e) {
			value = e;
		}
		
		//const CommBasicObjectsIDL::BaseTagType& get() const { return value; }
		
		// ENUM operator
		operator ENUM_BaseTagType() const {
			return static_cast<ENUM_BaseTagType>(value);
		}
		
		// compare operator
		bool operator == (const ENUM_BaseTagType t) const {
			return this->value == t;
		}
		
		std::string to_string() const {
			std::string result = "";
			switch (value) {
				case SIGNAL_STATE_IDLE:
					result = "BaseTagType::SIGNAL_STATE_IDLE";
					break;
				case SIGNAL_STATE_ERROR:
					result = "BaseTagType::SIGNAL_STATE_ERROR";
					break;
				case SIGNAL_STATE_BUSY:
					result = "BaseTagType::SIGNAL_STATE_BUSY";
					break;
				case SIGNAL_STATE_LOCALIZATION_ERROR:
					result = "BaseTagType::SIGNAL_STATE_LOCALIZATION_ERROR";
					break;
				case SIGNAL_STATE_SAFETY_FIELD:
					result = "BaseTagType::SIGNAL_STATE_SAFETY_FIELD";
					break;
				default:
					result = "ENUM_VALUE_UNDEFINED";
					break;
			};
			return result;
		}
		
		// helper method to easily implement output stream
		void to_ostream(std::ostream &os = std::cout) const {
			os << to_string();
		}
		
		// convert to xml stream
		void to_xml(std::ostream &os, const std::string &indent = "") const {
			os << indent << "<value>" << value << "</value>";
		}
		
		// restore from xml stream
		void from_xml(std::istream &is) {
			static const Smart::KnuthMorrisPratt kmp_value("<value>");
			if(kmp_value.search(is)) {
				is >> value;
			}
		}
	
	};
	
	inline std::ostream &operator<<(std::ostream &os, const BaseTagType &e)
	{
		e.to_ostream(os);
		return os;
	}
};

#endif