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
#ifndef COMMROBOTINOOBJECTS_COMMNAVIGATIONGRAPHEDGE_DATA_H_
#define COMMROBOTINOOBJECTS_COMMNAVIGATIONGRAPHEDGE_DATA_H_

#include "CommRobotinoObjects/enumEDGE_TYPEData.hh"


namespace CommRobotinoObjectsIDL 
{
	struct CommNavigationGraphEdge
	{
		int u;
		int v;
		int path;
		int way;
		double gap;
		CommRobotinoObjectsIDL::EDGE_TYPE type;
  	};
};

#endif /* COMMROBOTINOOBJECTS_COMMNAVIGATIONGRAPHEDGE_DATA_H_ */
