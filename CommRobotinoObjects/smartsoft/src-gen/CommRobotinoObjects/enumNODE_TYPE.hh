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
#ifndef COMMROBOTINOOBJECTS_NODE_TYPE_ENUM_H_
#define COMMROBOTINOOBJECTS_NODE_TYPE_ENUM_H_

#include <CommRobotinoObjects/enumNODE_TYPEData.hh>

#include <string>
#include <iostream>

// SmartUtils used in from_xml method
#include "smartKnuthMorrisPratt.hh"

namespace CommRobotinoObjects {
	
	class NODE_TYPE {
	private:
		CommRobotinoObjectsIDL::NODE_TYPE value;
		
	public:
		enum ENUM_NODE_TYPE {
			ENUM_VALUE_UNDEFINED = 0,
			NORMAL = 1,
			CROSS = 2,
			WAIT = 3,
			NEWCROSS = 4
		};
		
		// default constructor
		NODE_TYPE() { 
			value = ENUM_VALUE_UNDEFINED;
		}
		
		// copy constructor for enum type
		NODE_TYPE(ENUM_NODE_TYPE e) {
			value = static_cast<int>(e);
		}
		
		// copy constructor for IDL type
		NODE_TYPE(CommRobotinoObjectsIDL::NODE_TYPE e) {
			value = e;
		}
		
		//const CommRobotinoObjectsIDL::NODE_TYPE& get() const { return value; }
		
		// ENUM operator
		operator ENUM_NODE_TYPE() const {
			return static_cast<ENUM_NODE_TYPE>(value);
		}
		
		// compare operator
		bool operator == (const ENUM_NODE_TYPE t) const {
			return this->value == t;
		}
		
		std::string to_string() const {
			std::string result = "";
			switch (value) {
				case NORMAL:
					result = "NODE_TYPE::NORMAL";
					break;
				case CROSS:
					result = "NODE_TYPE::CROSS";
					break;
				case WAIT:
					result = "NODE_TYPE::WAIT";
					break;
				case NEWCROSS:
					result = "NODE_TYPE::NEWCROSS";
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
	
	inline std::ostream &operator<<(std::ostream &os, const NODE_TYPE &e)
	{
		e.to_ostream(os);
		return os;
	}
};

#endif