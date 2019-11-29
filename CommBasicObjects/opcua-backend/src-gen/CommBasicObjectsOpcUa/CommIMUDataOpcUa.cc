#include "CommIMUDataOpcUa.hh"

#define SERONET_NO_DEPRECATED
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ComplexType.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementPrimitives.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/SelfDescriptionArray.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementArray.hpp>


namespace SeRoNet {
namespace CommunicationObjects {
namespace Description {
	
// serialization for CommBasicObjectsIDL::CommIMUData
template <>
IDescription::shp_t SelfDescription(CommBasicObjectsIDL::CommIMUData *obj, std::string name)
{
	auto ret = std::make_shared<SeRoNet::CommunicationObjects::Description::ComplexType>(name);
	// add timestamp
	ret->add(
		SelfDescription(&(obj->timestamp), "Timestamp")
	);
	// add temperature
	ret->add(
		SelfDescription(&(obj->temperature), "Temperature")
	);
	// add accelerometer_x
	ret->add(
		SelfDescription(&(obj->accelerometer_x), "Accelerometer_x")
	);
	// add accelerometer_y
	ret->add(
		SelfDescription(&(obj->accelerometer_y), "Accelerometer_y")
	);
	// add accelerometer_z
	ret->add(
		SelfDescription(&(obj->accelerometer_z), "Accelerometer_z")
	);
	// add gyroscope_x
	ret->add(
		SelfDescription(&(obj->gyroscope_x), "Gyroscope_x")
	);
	// add gyroscope_y
	ret->add(
		SelfDescription(&(obj->gyroscope_y), "Gyroscope_y")
	);
	// add gyroscope_z
	ret->add(
		SelfDescription(&(obj->gyroscope_z), "Gyroscope_z")
	);
	// add magnetometer_x
	ret->add(
		SelfDescription(&(obj->magnetometer_x), "Magnetometer_x")
	);
	// add magnetometer_y
	ret->add(
		SelfDescription(&(obj->magnetometer_y), "Magnetometer_y")
	);
	// add magnetometer_z
	ret->add(
		SelfDescription(&(obj->magnetometer_z), "Magnetometer_z")
	);
	// add roll
	ret->add(
		SelfDescription(&(obj->roll), "Roll")
	);
	// add pitch
	ret->add(
		SelfDescription(&(obj->pitch), "Pitch")
	);
	// add yaw
	ret->add(
		SelfDescription(&(obj->yaw), "Yaw")
	);
	return ret;
} // end SelfDescription

} // end namespace Description
} // end namespace CommunicationObjects
} // end namespace SeRoNet
