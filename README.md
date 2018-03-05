# Set of Repositories for DomainModels

**DomainModels** consist of **CommunicationObjects**, **ServiceDefinitions**, **Parameters** and **StateDefinitions**.

**DomainModels** specify domain-specific structures for a particular sub-fomain in robotics like mobile manipulation, object recognition, SLAM, etc. (see also [Composition Tier 2](http://robmosys.eu/wiki/general_principles:ecosystem:start)). DomainModels are shaped by the experts of these robotics sub-domains. This is typically a community effort which structures each robotics domain by creating domain-models. Domain-models, for example, are “Service Definitions” that cover data structure, communication semantics and additional properties for specific services such as “robot localization”. To find such a service definition, domain experts of each particular domain discuss how to represent the location/position of a robot and what additional attributes are required and how they are represented (e.g. how the accuracy is represented).

All the **DomainModels** in this repository have been modelled and developed with the [**SmartMDSD Toolchain v3**](http://robmosys.eu/wiki/baseline:environment_tools:smartsoft:smartmdsd-toolchain:start).

**DomainModels** are used by [**Component**](https://github.com/Servicerobotics-Ulm/ComponentRepository) projects as an external dependency.

## Installation insttructions

DomainModels are generally independent of specific components or systems. However, some predefined C++ structures such as the digital-data representations (also called CommunicationObjects) for service-definitions, need to be compiled. The CommunicationObjects of one repository might depend on other CommunicationObject from another repository. These dependencies are automatically resolved by the CMake scripts using the environment variable called **SMART_PACKAGE_PATH**. Therefore this variable should point to one (or several) root folders containing domain-models repositories (multiple folders should be separated by a **:** within the varaible value).

Moreover, CommunicationObjects additionally depend on some of the [**UtilityRepositories**](https://github.com/Servicerobotics-Ulm/UtilityRepository). Therefore, the location of the cloned UtilityRepositories should be stored within the same environment variable called **SMART_PACKAGE_PATH**. You can specify one **parent** location such as e.g. **~/SOFTWARE/smartsoft/src** for all the repositories and point the **SMART_PACKAGE_PATH** to this top-level folder only. All the subfolders will be searched resursivelly for the matching dependencies. Alltogether, DomainModels can be compiled as follows:

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
