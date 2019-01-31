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
#ifndef COMMMANIPULATOROBJECTS_COMMMOBILEMANIPULATORSTATE_H_
#define COMMMANIPULATOROBJECTS_COMMMOBILEMANIPULATORSTATE_H_

#include "CommManipulatorObjects/CommMobileManipulatorStateCore.hh"

namespace CommManipulatorObjects {
		
class CommMobileManipulatorState : public CommMobileManipulatorStateCore {
	public:
		// default constructors
		CommMobileManipulatorState();
		
		/**
		 * Constructor to set all values.
		 * NOTE that you have to keep this constructor consistent with the model!
		 * Use  at your own choice.
		 *
		 * The preferred way to set values for initialization is:
		 *      CommRepository::MyCommObject obj;
		 *      obj.setX(1).setY(2).setZ(3)...;
		 */
		// CommMobileManipulatorState(const CommManipulatorObjects::CommManipulatorState &manipulator_state, const CommBasicObjects::CommBaseState &base_state);
		
		CommMobileManipulatorState(const CommMobileManipulatorStateCore &commMobileManipulatorState);
		CommMobileManipulatorState(const DATATYPE &commMobileManipulatorState);
		virtual ~CommMobileManipulatorState();
		
		// use framework specific getter and setter methods from core (base) class
		using CommMobileManipulatorStateCore::get;
		using CommMobileManipulatorStateCore::set;
		
		//
		// feel free to add customized methods here
		//

		inline CommBasicObjects::CommBaseState getBase_state() const
			{
				return CommBasicObjects::CommBaseState(
						idl_CommMobileManipulatorState.base_state);
			}
			inline void setBase_state(const CommBasicObjects::CommBaseState &base_state)
			{
				idl_CommMobileManipulatorState.base_state = base_state;
			}

			inline CommManipulatorObjects::CommManipulatorState getManipulator_state() const
			{
				return CommManipulatorObjects::CommManipulatorState(
						idl_CommMobileManipulatorState.manipulator_state);
			}
			inline void setManipulator_state(
					const CommManipulatorObjects::CommManipulatorState &manipulator_state)
			{
				idl_CommMobileManipulatorState.manipulator_state = manipulator_state;
			}

			//
			// add your customized interface here
			//

			/**
			 * Set the state of the base.
			 */
			inline void set_base_state(const CommBasicObjects::CommBaseState &baseState) {
				idl_CommMobileManipulatorState.base_state = baseState;
			}

			/**
			 * Get the state of the base.
			 */
			inline CommBasicObjects::CommBaseState get_base_state() const {
				//return CommBasicObjects::CommBaseState(idl_CommMobileManipulatorState.base_state);
				return idl_CommMobileManipulatorState.base_state;
			}

			/**
			 * Set the state of the manipulator.
			 */
			inline void set_manipulator_state(const CommManipulatorState &manipState) {
				idl_CommMobileManipulatorState.manipulator_state = manipState;
			}

			/**
			 * Get the state of the manipulator.
			 */
			inline CommManipulatorState get_manipulator_state() const {
				//return CommManipulatorState(
				//		idl_CommMobileManipulatorState.manipulator_state);
				return 	idl_CommMobileManipulatorState.manipulator_state;
			}

			/**
			 * Set if the state is valid.
			 */
			inline void set_valid(bool valid) {
				idl_CommMobileManipulatorState.manipulator_state.is_valid = valid;
			}

			/**
			 * Get if the state is valid.
			 */
			inline bool is_valid() const {
				return idl_CommMobileManipulatorState.manipulator_state.is_valid;
			}

			/**
			 * Print the object to an output stream.
			 * @param os Output stream to which should be printed
			 */
			void print(std::ostream &os = std::cout) const;
};

inline std::ostream &operator<<(std::ostream &os, const CommMobileManipulatorState &co)
{
	co.to_ostream(os);
	return os;
}
	
} /* namespace CommManipulatorObjects */
#endif /* COMMMANIPULATOROBJECTS_COMMMOBILEMANIPULATORSTATE_H_ */