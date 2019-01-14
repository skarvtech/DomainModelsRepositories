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
#ifndef DOMAINPTU_PTUTAGTYPE_ENUM_H_
#define DOMAINPTU_PTUTAGTYPE_ENUM_H_

#include <DomainPTU/enumPTUTagTypeData.hh>

#include <string>
#include <iostream>

// SmartUtils used in from_xml method
#include "smartKnuthMorrisPratt.hh"

namespace DomainPTU {
	
	class PTUTagType {
	private:
		DomainPTUIDL::PTUTagType value;
		
	public:
		enum ENUM_PTUTagType {
			ENUM_VALUE_UNDEFINED = 0,
			UNSET = 1,
			RESET = 2,
			ACCELERATION_PAN = 3,
			ACCLERATION_TILT = 4,
			SPEED_PAN = 5,
			SPEED_TILT = 6,
			SPEED_LIMIT_PAN = 7,
			SPEED_LIMIT_TILT = 8,
			START_UP_SPEED_PAN = 9,
			START_UP_SPEED_TILT = 10,
			SENSOR_OFFSET = 11
		};
		
		// default constructor
		PTUTagType() { 
			value = ENUM_VALUE_UNDEFINED;
		}
		
		// copy constructor for enum type
		PTUTagType(ENUM_PTUTagType e) {
			value = static_cast<int>(e);
		}
		
		// copy constructor for IDL type
		PTUTagType(DomainPTUIDL::PTUTagType e) {
			value = e;
		}
		
		//const DomainPTUIDL::PTUTagType& get() const { return value; }
		
		// ENUM operator
		operator ENUM_PTUTagType() const {
			return static_cast<ENUM_PTUTagType>(value);
		}
		
		// compare operator
		bool operator == (const ENUM_PTUTagType t) const {
			return this->value == t;
		}
		
		std::string to_string() const {
			std::string result = "";
			switch (value) {
				case UNSET:
					result = "PTUTagType::UNSET";
					break;
				case RESET:
					result = "PTUTagType::RESET";
					break;
				case ACCELERATION_PAN:
					result = "PTUTagType::ACCELERATION_PAN";
					break;
				case ACCLERATION_TILT:
					result = "PTUTagType::ACCLERATION_TILT";
					break;
				case SPEED_PAN:
					result = "PTUTagType::SPEED_PAN";
					break;
				case SPEED_TILT:
					result = "PTUTagType::SPEED_TILT";
					break;
				case SPEED_LIMIT_PAN:
					result = "PTUTagType::SPEED_LIMIT_PAN";
					break;
				case SPEED_LIMIT_TILT:
					result = "PTUTagType::SPEED_LIMIT_TILT";
					break;
				case START_UP_SPEED_PAN:
					result = "PTUTagType::START_UP_SPEED_PAN";
					break;
				case START_UP_SPEED_TILT:
					result = "PTUTagType::START_UP_SPEED_TILT";
					break;
				case SENSOR_OFFSET:
					result = "PTUTagType::SENSOR_OFFSET";
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
	
	inline std::ostream &operator<<(std::ostream &os, const PTUTagType &e)
	{
		e.to_ostream(os);
		return os;
	}
};

#endif
