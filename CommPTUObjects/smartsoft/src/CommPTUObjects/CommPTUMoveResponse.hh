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
#ifndef COMMPTUOBJECTS_COMMPTUMOVERESPONSE_H_
#define COMMPTUOBJECTS_COMMPTUMOVERESPONSE_H_

#include "CommPTUObjects/CommPTUMoveResponseCore.hh"

#include "armadillo.hh"  // from utility
#include "EulerTransformationMatrices.hh"

namespace CommPTUObjects {
		
class CommPTUMoveResponse : public CommPTUMoveResponseCore {
	public:
		// default constructors
		CommPTUMoveResponse();
		
		/**
		 * Constructor to set all values.
		 * NOTE that you have to keep this constructor consistent with the model!
		 * Use  at your own choice.
		 *
		 * The preferred way to set values for initialization is:
		 *      CommRepository::MyCommObject obj;
		 *      obj.setX(1).setY(2).setZ(3)...;
		 */
		// CommPTUMoveResponse(const CommBasicObjects::CommPose3d &devicePose, const CommBasicObjects::CommBaseState &stateBase, const CommPTUObjects::PTUMoveStatus &status);
		
		CommPTUMoveResponse(const CommPTUMoveResponseCore &commPTUMoveResponse);
		CommPTUMoveResponse(const DATATYPE &commPTUMoveResponse);
		virtual ~CommPTUMoveResponse();
		
		// use framework specific getter and setter methods from core (base) class
		using CommPTUMoveResponseCore::get;
		using CommPTUMoveResponseCore::set;
		
		//
		// feel free to add customized methods here
		//

		inline CommBasicObjects::CommPose3d getDevicePose() const
		{
			return CommBasicObjects::CommPose3d(idl_CommPTUMoveResponse.devicePose);
		}
		inline void setDevicePose(const CommBasicObjects::CommPose3d &devicePose)
		{
			idl_CommPTUMoveResponse.devicePose = devicePose;
		}

		inline CommBasicObjects::CommBaseState getStateBase() const
		{
			return CommBasicObjects::CommBaseState(
					idl_CommPTUMoveResponse.stateBase);
		}
		inline void setStateBase(const CommBasicObjects::CommBaseState &stateBase)
		{
			idl_CommPTUMoveResponse.stateBase = stateBase;
		}

		inline PTUMoveStatus getStatus() const
		{
			return idl_CommPTUMoveResponse.status;
		}
		inline void setStatus(const PTUMoveStatus &status)
		{
			idl_CommPTUMoveResponse.status = status;
		}

		//
		// add your customized interface here
		//


		/**
		 * Set the pose of the device relative to the robot coordinate system.
		 * (in case of a moving the device the endeffector pose)
		 */
		inline void set_device_pose3d_robot(const CommBasicObjects::CommPose3d& pose) {
			idl_CommPTUMoveResponse.devicePose = pose;
		}

		/**
		 * Get the pose of the device relative to the robot coordinate system.
		 * (in case of a moving the device the endeffector pose)
		 */
		inline const CommBasicObjects::CommPose3d get_device_pose3d_robot() const {
			return CommBasicObjects::CommPose3d(idl_CommPTUMoveResponse.devicePose);
		}

		/**
		 * Get the pose of the device relative to the world coordinate system.
		 *  (in case of a moving the device the endeffector pose)
		 */
		inline const CommBasicObjects::CommPose3d get_device_pose3d_world() const {
			arma::mat worldOffset;
			arma::mat deviceOffset;
			arma::mat offset;

			EulerTransformationMatrices::create_zyx_matrix(idl_CommPTUMoveResponse.stateBase.basePose.pose3D.position.x,
					idl_CommPTUMoveResponse.stateBase.basePose.pose3D.position.y, idl_CommPTUMoveResponse.stateBase.basePose.pose3D.position.z,
					idl_CommPTUMoveResponse.stateBase.basePose.pose3D.orientation.azimuth,
					idl_CommPTUMoveResponse.stateBase.basePose.pose3D.orientation.elevation,
					idl_CommPTUMoveResponse.stateBase.basePose.pose3D.orientation.roll, worldOffset);

			EulerTransformationMatrices::create_zyx_matrix(idl_CommPTUMoveResponse.devicePose.position.x,
					idl_CommPTUMoveResponse.devicePose.position.y, idl_CommPTUMoveResponse.devicePose.position.z,
					idl_CommPTUMoveResponse.devicePose.orientation.azimuth,
					idl_CommPTUMoveResponse.devicePose.orientation.elevation,
					idl_CommPTUMoveResponse.devicePose.orientation.roll, deviceOffset);

			offset = worldOffset * deviceOffset;
			return CommBasicObjects::CommPose3d(offset);
		}

		/**
		 * Set the state of the base.
		 */
		inline void set_base_state(const CommBasicObjects::CommBaseState& state) {
			idl_CommPTUMoveResponse.stateBase = state;
		}

		/**
		 * Get the state of the base.
		 */
		inline const CommBasicObjects::CommBaseState get_base_state() const {
			return CommBasicObjects::CommBaseState(idl_CommPTUMoveResponse.stateBase);
		}

		/**
		 * Set the status of the PTU action. (Success, Failure, etc.)
		 */
		inline void set_status(CommPTUObjects::PTUMoveStatus status) {
			idl_CommPTUMoveResponse.status =  status;
		}

		/**
		 * Get the status of the PTU action. (Success, Failure, etc.)
		 */
		inline PTUMoveStatus get_status() const {
			return  idl_CommPTUMoveResponse.status;
		}

		/**
		 * Print the object to an output stream.
		 * @param os Output stream to which should be printed
		 */
		void print(std::ostream &os = std::cout) const;
};

inline std::ostream &operator<<(std::ostream &os, const CommPTUMoveResponse &co)
{
	co.to_ostream(os);
	return os;
}
	
} /* namespace CommPTUObjects */
#endif /* COMMPTUOBJECTS_COMMPTUMOVERESPONSE_H_ */
