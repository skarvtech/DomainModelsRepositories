#ifndef OPENRAVECOORDINATIONSERVICECORE_H_
#define OPENRAVECOORDINATIONSERVICECORE_H_
#include "aceSmartSoft.hh"
#include "runTimeInterface.hh"

#include <string>
#include <map>
#include <iostream>

#include "OpenRaveCoordinationService.hh"

 class OpenRaveCoordinationServiceCore {
 	friend class ACE_Singleton<OpenRaveCoordinationServiceCore, ACE_Thread_Mutex>;
private:
	OpenRaveCoordinationServiceCore (){
		std::cout<<"Create OpenRaveCoordinationService Module Singelton..."<<std::endl;
	}
	~OpenRaveCoordinationServiceCore (){
		std::cout<<"Destroy OpenRaveCoordinationService Module Singelton..."<<std::endl;
	}
	
	std::map<std::string, OpenRaveCoordinationService, ciLessLibC> ciInstanceMap;
public:
	void addNewModuleInstance(const std::string& name);
	int initCiInstance(SmartACE::SmartComponent * component, const std::string& ciInstanceName, const std::map< std::string, CiConnection, ciLessLibC> &ciConnectionsMap);
	int finiCiInstance(const std::string& ciInstanceName);
	std::string switchCi(const std::string& ciInstanceName, const std::string& componentName, const std::string& componentInstanceName, const std::string& service, const std::string& inString);

 };
#endif /* OPENRAVECOORDINATIONSERVICECORE_H_ */
