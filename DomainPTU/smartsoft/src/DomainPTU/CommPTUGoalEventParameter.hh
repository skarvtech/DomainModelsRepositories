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
// --------------------------------------------------------------------------
//
//  Copyright (C) 2018 Servicerobotik Ulm
//
//  Service Robotics Research Center
//  University of Applied Sciences Ulm
//  Prittwitzstr. 10
//  89075 Ulm (Germany)
//
//  This library is free software; you can redistribute it and/or
//  modify it under the terms of the GNU Lesser General Public
//  License as published by the Free Software Foundation; either
//  version 2.1 of the License, or (at your option) any later version.
//
//  This library is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
//  Lesser General Public License for more details.
//
//  You should have received a copy of the GNU Lesser General Public
//  License along with this library; if not, write to the Free Software
//  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
//
// --------------------------------------------------------------------------


#ifndef DOMAINPTU_COMMPTUGOALEVENTPARAMETER_H_
#define DOMAINPTU_COMMPTUGOALEVENTPARAMETER_H_

#include "DomainPTU/CommPTUGoalEventParameterCore.hh"

namespace DomainPTU {
		
class CommPTUGoalEventParameter : public CommPTUGoalEventParameterCore {
	public:
		// default constructors
		CommPTUGoalEventParameter();
		
		/**
		 * Constructor to set all values.
		 * NOTE that you have to keep this constructor consistent with the model!
		 * Use  at your own choice.
		 *
		 * The preferred way to set values for initialization is:
		 *      CommRepository::MyCommObject obj;
		 *      obj.setX(1).setY(2).setZ(3)...;
		 */
		// CommPTUGoalEventParameter(const DomainPTU::PTUMoveStatus &oldState);
		
		CommPTUGoalEventParameter(const CommPTUGoalEventParameterCore &commPTUGoalEventParameter);
		CommPTUGoalEventParameter(const DATATYPE &commPTUGoalEventParameter);
		virtual ~CommPTUGoalEventParameter();
		
		// use framework specific getter and setter methods from core (base) class
		using CommPTUGoalEventParameterCore::get;
		using CommPTUGoalEventParameterCore::set;
		
		//
		// feel free to add customized methods here
		//
};

inline std::ostream &operator<<(std::ostream &os, const CommPTUGoalEventParameter &co)
{
	co.to_ostream(os);
	return os;
}
	
} /* namespace DomainPTU */
#endif /* DOMAINPTU_COMMPTUGOALEVENTPARAMETER_H_ */
