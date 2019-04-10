#include "ImageProvisionCoordinationServiceCore.hh"
#include "runTimeInterface.hh"

typedef ACE_Singleton<ImageProvisionCoordinationServiceCore, ACE_Thread_Mutex> IMAGEPROVISIONCOORDINATIONSERVICE_MODULE;

//INIT FUNCTION

extern "C" int initImageProvisionCoordinationService(SmartACE::SmartComponent * component, const std::string& ciInstanceName, const std::map< std::string,  CiConnection, ciLessLibC > &ciConnectionsMap){
	IMAGEPROVISIONCOORDINATIONSERVICE_MODULE::instance()->addNewModuleInstance(ciInstanceName);

	return IMAGEPROVISIONCOORDINATIONSERVICE_MODULE::instance()->initCiInstance(component,ciInstanceName,ciConnectionsMap);
}



//FINI FUNCTION

extern "C" int finiImageProvisionCoordinationService(const std::string& ciInstanceName){
	return IMAGEPROVISIONCOORDINATIONSERVICE_MODULE::instance()->finiCiInstance(ciInstanceName);
}


//SWITCH FUNCTION

extern "C" std::string switchImageProvisionCoordinationService(const std::string& ciInstanceName, const std::string& componentName, const std::string& componentInstanceName, const std::string& service, const std::string& inString)
{
	return IMAGEPROVISIONCOORDINATIONSERVICE_MODULE::instance()->switchCi(ciInstanceName,componentName,componentInstanceName,service,inString);
}
