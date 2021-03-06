//--------------------------------------------------------------------------
// Code generated by the SmartSoft MDSD Toolchain
// The SmartSoft Toolchain has been developed by:
//  
// Christian Schlegel (schlegel@hs-ulm.de)
// University of Applied Sciences Ulm
// Prittwitzstr. 10
// 89075 Ulm (Germany)
//
// Information about the SmartSoft MDSD Toolchain is available at:
// www.servicerobotik-ulm.de
//
// This file is generated once. Modify this file to your needs. 
// If you want the toolchain to re-generate this file, please 
// delete it before running the code generator.
//--------------------------------------------------------------------------
#ifndef COMMBASICOBJECTS_PROPERTYSETENTRY_H_
#define COMMBASICOBJECTS_PROPERTYSETENTRY_H_

#include "CommBasicObjects/PropertySetEntryCore.hh"

namespace CommBasicObjects {
		
class PropertySetEntry : public PropertySetEntryCore {
	public:
		// default constructors
		PropertySetEntry();
		
		/**
		 * Constructor to set all values.
		 * NOTE that you have to keep this constructor consistent with the model!
		 * Use  at your own choice.
		 *
		 * The preferred way to set values for initialization is:
		 *      CommRepository::MyCommObject obj;
		 *      obj.setX(1).setY(2).setZ(3)...;
		 */
		// PropertySetEntry(const std::string &key, const unsigned int &parent);
		
		PropertySetEntry(const PropertySetEntryCore &propertySetEntry);
		PropertySetEntry(const DATATYPE &propertySetEntry);
		virtual ~PropertySetEntry();
		
		// use framework specific getter and setter methods from core (base) class
		using PropertySetEntryCore::get;
		using PropertySetEntryCore::set;
		
		//
		// feel free to add customized methods here
		//
};

inline std::ostream &operator<<(std::ostream &os, const PropertySetEntry &co)
{
	co.to_ostream(os);
	return os;
}
	
} /* namespace CommBasicObjects */
#endif /* COMMBASICOBJECTS_PROPERTYSETENTRY_H_ */
