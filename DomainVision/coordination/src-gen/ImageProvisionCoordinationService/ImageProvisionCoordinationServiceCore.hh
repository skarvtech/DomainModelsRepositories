#ifndef IMAGEPROVISIONCOORDINATIONSERVICECORE_H_
#define IMAGEPROVISIONCOORDINATIONSERVICECORE_H_
#include "aceSmartSoft.hh"
#include "runTimeInterface.hh"

#include <string>
#include <map>
#include <iostream>

#include "ImageProvisionCoordinationService.hh"

 class ImageProvisionCoordinationServiceCore {
 	friend class ACE_Singleton<ImageProvisionCoordinationServiceCore, ACE_Thread_Mutex>;
private:
	ImageProvisionCoordinationServiceCore (){
		std::cout<<"Create ImageProvisionCoordinationService Module Singelton..."<<std::endl;
	}
	~ImageProvisionCoordinationServiceCore (){
		std::cout<<"Destroy ImageProvisionCoordinationService Module Singelton..."<<std::endl;
	}
	
	std::map<std::string, ImageProvisionCoordinationService, ciLessLibC> ciInstanceMap;
public:
	void addNewModuleInstance(const std::string& name);
	int initCiInstance(SmartACE::SmartComponent * component, const std::string& ciInstanceName, const std::map< std::string, CiConnection, ciLessLibC> &ciConnectionsMap);
	int finiCiInstance(const std::string& ciInstanceName);
	std::string switchCi(const std::string& ciInstanceName, const std::string& componentName, const std::string& componentInstanceName, const std::string& service, const std::string& inString);

 };
#endif /* IMAGEPROVISIONCOORDINATIONSERVICECORE_H_ */
