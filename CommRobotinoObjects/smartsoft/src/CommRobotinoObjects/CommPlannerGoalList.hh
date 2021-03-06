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
#ifndef COMMROBOTINOOBJECTS_COMMPLANNERGOALLIST_H_
#define COMMROBOTINOOBJECTS_COMMPLANNERGOALLIST_H_

#include "CommRobotinoObjects/CommPlannerGoalListCore.hh"

namespace CommRobotinoObjects {
		
class CommPlannerGoalList : public CommPlannerGoalListCore {
	public:
		// default constructors
		CommPlannerGoalList();
		
		/**
		 * Constructor to set all values.
		 * NOTE that you have to keep this constructor consistent with the model!
		 * Use  at your own choice.
		 *
		 * The preferred way to set values for initialization is:
		 *      CommRepository::MyCommObject obj;
		 *      obj.setX(1).setY(2).setZ(3)...;
		 */
		// CommPlannerGoalList(const int &id, const int &flag, const std::vector<double> &goalXvector, const std::vector<double> &goalYvector, const std::vector<double> &nodeObstacleVector, const double &finalGoalX, const double &finalGoalY);
		
		CommPlannerGoalList(const CommPlannerGoalListCore &commPlannerGoalList);
		CommPlannerGoalList(const DATATYPE &commPlannerGoalList);
		virtual ~CommPlannerGoalList();
		
		// use framework specific getter and setter methods from core (base) class
		using CommPlannerGoalListCore::get;
		using CommPlannerGoalListCore::set;
		
		//
		// feel free to add customized methods here
		//
};

inline std::ostream &operator<<(std::ostream &os, const CommPlannerGoalList &co)
{
	co.to_ostream(os);
	return os;
}
	
} /* namespace CommRobotinoObjects */
#endif /* COMMROBOTINOOBJECTS_COMMPLANNERGOALLIST_H_ */
