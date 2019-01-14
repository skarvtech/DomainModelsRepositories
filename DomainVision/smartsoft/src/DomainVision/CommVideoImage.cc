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
//------------------------------------------------------------------------
//
//  Copyright (C) 2010 Manuel Wopfner
//
//        wopfner@hs-ulm.de
//
//        Christian Schlegel (schlegel@hs-ulm.de)
//        University of Applied Sciences
//        Prittwitzstr. 10
//        89075 Ulm (Germany)
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
//--------------------------------------------------------------------------
#include "DomainVision/CommVideoImage.hh"

using namespace DomainVision;

CommVideoImage::CommVideoImage()
:	CommVideoImageCore()
{  }


/**
 * Constructor to set all values.
 * NOTE that you have to keep this constructor consistent with the model!
 * Use  at your own choice.
 *
 * The preferred way to set values for initialization is:
 *      CommRepository::MyCommObject obj;
 *      obj.setX(1).setY(2).setZ(3)...;
CommVideoImage::CommVideoImage(const DomainVision::ImageParameters &parameter, const std::vector<unsigned char> &data, const CommBasicObjects::CommPose3d &sensor_pose, const CommBasicObjects::CommBaseState &base_state, const bool &is_valid, const unsigned int &seq_count, const std::vector<double> &intrinsic_m, const std::vector<double> &distortion_m, const DomainVision::ImageDistortionModel &distortion_model)
:	CommVideoImageCore() // base constructor sets default values as defined in the model
{
	setParameter(parameter);
	setData(data);
	setSensor_pose(sensor_pose);
	setBase_state(base_state);
	setIs_valid(is_valid);
	setSeq_count(seq_count);
	setIntrinsic_m(intrinsic_m);
	setDistortion_m(distortion_m);
	setDistortion_model(distortion_model);
}
 */

CommVideoImage::CommVideoImage(const CommVideoImageCore &commVideoImage)
:	CommVideoImageCore(commVideoImage)
{  }

CommVideoImage::CommVideoImage(const DATATYPE &commVideoImage)
:	CommVideoImageCore(commVideoImage)
{  }

CommVideoImage::~CommVideoImage()
{  }
