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

#include "CommObjectRecognitionObjects/TriMesh.hh"

using namespace CommObjectRecognitionObjects;

TriMesh::TriMesh()
:	TriMeshCore()
{  }


/**
 * Constructor to set all values.
 * NOTE that you have to keep this constructor consistent with the model!
 * Use  at your own choice.
 *
 * The preferred way to set values for initialization is:
 *      CommRepository::MyCommObject obj;
 *      obj.setX(1).setY(2).setZ(3)...;
TriMesh::TriMesh(const std::vector<unsigned int> &vertices_p1, const std::vector<unsigned int> &vertices_p2, const std::vector<unsigned int> &vertices_p3, const std::vector<double> &points_x, const std::vector<double> &points_y, const std::vector<double> &points_z)
:	TriMeshCore() // base constructor sets default values as defined in the model
{
	setVertices_p1(vertices_p1);
	setVertices_p2(vertices_p2);
	setVertices_p3(vertices_p3);
	setPoints_x(points_x);
	setPoints_y(points_y);
	setPoints_z(points_z);
}
 */

TriMesh::TriMesh(const TriMeshCore &triMesh)
:	TriMeshCore(triMesh)
{  }

TriMesh::TriMesh(const DATATYPE &triMesh)
:	TriMeshCore(triMesh)
{  }

TriMesh::~TriMesh()
{  }
