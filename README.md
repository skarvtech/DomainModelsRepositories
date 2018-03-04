# Set of Repositories for DomainModels

**DomainModels** ([Composition Tier 2](http://robmosys.eu/wiki/general_principles:ecosystem:start)) consist of **CommunicationObjects**, **ServiceDefinitions**, **Parameters** and **StateDefinitions**.

**DomainModels** specify robotics domain-specific structures. More precisely, DomainModels structure the particular domains within service robotics and are shaped by the experts of these robotics-domains, for example experts from object recognition, from manipulation, or from SLAM. This is a community effort which structures each robotics domain by creating domain-models. Experts working at this level define concrete service definition models, for example a service definition for robot localization.

**DomainModels** are used by [**Component**](https://github.com/Servicerobotics-Ulm/ComponentRepository) projects as an external dependency.

## Installation insttructions

DomainModels are generally independent of specific components or systems. However, some predefined C++ structures such as the digital-data representations (also called CommunicationObjects) for service-definitions, need to be compiled. The CommunicationObjects of one repository might depend on other CommunicationObject from another repository. These dependencies are automatically resolved by the CMake scripts using the environment variable called **SMART_PACKAGE_PATH**. Therefore this variable should point to one (or several) root folders containing domain-models repositories (multiple folders should be separated by a **:** within the varaible value).

Moreover, CommunicationObjects additionally depend on some of the [**UtilityRepositories**](https://github.com/Servicerobotics-Ulm/UtilityRepository Therefore, the location of the cloned UtilityRepositories should be stored within the same environment variable called **SMART_PACKAGE_PATH**. You can specify one location such as e.g. **~/SOFTWARE/smartsoft/src** for all the repositories and point the **SMART_PACKAGE_PATH** to this top-level folder. All the subfolders will be searched resursivelly for the matching dependencies. Alltogether, DomainModels can be compiled as follows:

```
> mkdir ~/SOFTWARE/smartsoft/src
> cd ~/SOFTWARE/smartsoft/src
> echo "export SMART_PACKAGE_PATH=$SMART_PACKAGE_PATH:$PWD" > .profile
> git clone https://github.com/Servicerobotics-Ulm/DomainModelsRepositories.git
> cd DomainModelsRepositories
> mkdir build; cd build
> cmake ..
> make
```

The resulting libraries and header files will be automatically installed into a location specified by the environment variable named **SMART_ROOT_ACE**. A typical value for this variable is for instance `~/SOFTWARE/smartsoft`.

Now you can continue with checking out and building the [**component projects**](https://github.com/Servicerobotics-Ulm/ComponentRepository).
