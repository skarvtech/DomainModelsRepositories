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
// This file is generated once. Modify this file to your needs. 
// If you want the toolchain to re-generate this file, please 
// delete it before running the code generator.
//--------------------------------------------------------------------------
#ifndef COMMROBOTINOOBJECTS_COMMPATHFREEAREA_H_
#define COMMROBOTINOOBJECTS_COMMPATHFREEAREA_H_

#include "CommRobotinoObjects/CommPathFreeAreaCore.hh"

namespace CommRobotinoObjects {
		
class CommPathFreeArea : public CommPathFreeAreaCore {
	public:
		// default constructors
		CommPathFreeArea();
		
		/**
		 * Constructor to set all values.
		 * NOTE that you have to keep this constructor consistent with the model!
		 * Use  at your own choice.
		 *
		 * The preferred way to set values for initialization is:
		 *      CommRepository::MyCommObject obj;
		 *      obj.setX(1).setY(2).setZ(3)...;
		 */
		// CommPathFreeArea(const int &areaID, const int &maxOccupancy, const std::vector<int> &robotIDs, const std::vector<double> &nodeXvector, const std::vector<double> &nodeYvector);
		
		CommPathFreeArea(const CommPathFreeAreaCore &commPathFreeArea);
		CommPathFreeArea(const DATATYPE &commPathFreeArea);
		virtual ~CommPathFreeArea();
		
		// use framework specific getter and setter methods from core (base) class
		using CommPathFreeAreaCore::get;
		using CommPathFreeAreaCore::set;
		
		//
		// feel free to add customized methods here
		//
};

inline std::ostream &operator<<(std::ostream &os, const CommPathFreeArea &co)
{
	co.to_ostream(os);
	return os;
}
	
} /* namespace CommRobotinoObjects */
#endif /* COMMROBOTINOOBJECTS_COMMPATHFREEAREA_H_ */