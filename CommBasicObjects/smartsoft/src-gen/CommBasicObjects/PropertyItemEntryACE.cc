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
#include "CommBasicObjects/PropertyItemEntryACE.hh"
#include <ace/SString.h>

// serialization operator for element PropertyItemEntry
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommBasicObjectsIDL::PropertyItemEntry &data)
{
	ACE_CDR::Boolean good_bit = true;
	// serialize list-element key
	good_bit = good_bit && cdr << ACE_CString(data.key.c_str());
	// serialize list-element value
	good_bit = good_bit && cdr << ACE_CString(data.value.c_str());
	// serialize list-element parent
	good_bit = good_bit && cdr.write_ulong(data.parent);
	
	return good_bit;
}

// de-serialization operator for element PropertyItemEntry
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommBasicObjectsIDL::PropertyItemEntry &data)
{
	ACE_CDR::Boolean good_bit = true;
	// deserialize string-type element key
	ACE_CString data_key_str;
	good_bit = good_bit && cdr >> data_key_str;
	data.key = data_key_str.c_str();
	// deserialize string-type element value
	ACE_CString data_value_str;
	good_bit = good_bit && cdr >> data_value_str;
	data.value = data_value_str.c_str();
	// deserialize type element parent
	good_bit = good_bit && cdr.read_ulong(data.parent);
	
	return good_bit;
}

// serialization operator for CommunicationObject PropertyItemEntry
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommBasicObjects::PropertyItemEntry &obj)
{
	return cdr << obj.get();
}

// de-serialization operator for CommunicationObject PropertyItemEntry
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommBasicObjects::PropertyItemEntry &obj)
{
	return cdr >> obj.set();
}
