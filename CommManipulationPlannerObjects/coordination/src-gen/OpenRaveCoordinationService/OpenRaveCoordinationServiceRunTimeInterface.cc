#include "OpenRaveCoordinationServiceCore.hh"
#include "runTimeInterface.hh"

typedef ACE_Singleton<OpenRaveCoordinationServiceCore, ACE_Thread_Mutex> OPENRAVECOORDINATIONSERVICE_MODULE;

//INIT FUNCTION

extern "C" int initOpenRaveCoordinationService(SmartACE::SmartComponent * component, const std::string& ciInstanceName, const std::map< std::string,  CiConnection, ciLessLibC > &ciConnectionsMap){
	OPENRAVECOORDINATIONSERVICE_MODULE::instance()->addNewModuleInstance(ciInstanceName);

	return OPENRAVECOORDINATIONSERVICE_MODULE::instance()->initCiInstance(component,ciInstanceName,ciConnectionsMap);
}



//FINI FUNCTION

extern "C" int finiOpenRaveCoordinationService(const std::string& ciInstanceName){
	return OPENRAVECOORDINATIONSERVICE_MODULE::instance()->finiCiInstance(ciInstanceName);
}


//SWITCH FUNCTION

extern "C" std::string switchOpenRaveCoordinationService(const std::string& ciInstanceName, const std::string& componentName, const std::string& componentInstanceName, const std::string& service, const std::string& inString)
{
	return OPENRAVECOORDINATIONSERVICE_MODULE::instance()->switchCi(ciInstanceName,componentName,componentInstanceName,service,inString);
}
