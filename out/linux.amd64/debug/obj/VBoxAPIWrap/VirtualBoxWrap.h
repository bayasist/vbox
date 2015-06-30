/** @file
 *
 * VirtualBox API class wrapper header for IVirtualBox.
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl
 * Generator: src/VBox/Main/idl/apiwrap-server.xsl
 */

/**
 * Copyright (C) 2010-2014 Oracle Corporation
 *
 * This file is part of VirtualBox Open Source Edition (OSE), as
 * available from http://www.virtualbox.org. This file is free software;
 * you can redistribute it and/or modify it under the terms of the GNU
 * General Public License (GPL) as published by the Free Software
 * Foundation, in version 2 as it comes in the "COPYING" file of the
 * VirtualBox OSE distribution. VirtualBox OSE is distributed in the
 * hope that it will be useful, but WITHOUT ANY WARRANTY of any kind.
 */

#ifndef VirtualBoxWrap_H_
#define VirtualBoxWrap_H_

#include "VirtualBoxBase.h"
#include "Wrapper.h"

class ATL_NO_VTABLE VirtualBoxWrap:
    public VirtualBoxBase,
    VBOX_SCRIPTABLE_IMPL(IVirtualBox)
{
    Q_OBJECT

public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(VirtualBoxWrap, IVirtualBox)
    DECLARE_NOT_AGGREGATABLE(VirtualBoxWrap)
    DECLARE_PROTECT_FINAL_CONSTRUCT()

    BEGIN_COM_MAP(VirtualBoxWrap)
        COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IVirtualBox)
        COM_INTERFACE_ENTRY2(IDispatch, IVirtualBox)
    END_COM_MAP()

    DECLARE_EMPTY_CTOR_DTOR(VirtualBoxWrap)

    // public IVirtualBox properties
    STDMETHOD(COMGETTER(Version))(BSTR *aVersion);
    STDMETHOD(COMGETTER(VersionNormalized))(BSTR *aVersionNormalized);
    STDMETHOD(COMGETTER(Revision))(ULONG *aRevision);
    STDMETHOD(COMGETTER(PackageType))(BSTR *aPackageType);
    STDMETHOD(COMGETTER(APIVersion))(BSTR *aAPIVersion);
    STDMETHOD(COMGETTER(HomeFolder))(BSTR *aHomeFolder);
    STDMETHOD(COMGETTER(SettingsFilePath))(BSTR *aSettingsFilePath);
    STDMETHOD(COMGETTER(Host))(IHost **aHost);
    STDMETHOD(COMGETTER(SystemProperties))(ISystemProperties **aSystemProperties);
    STDMETHOD(COMGETTER(Machines))(ComSafeArrayOut(IMachine *, aMachines));
    STDMETHOD(COMGETTER(MachineGroups))(ComSafeArrayOut(BSTR, aMachineGroups));
    STDMETHOD(COMGETTER(HardDisks))(ComSafeArrayOut(IMedium *, aHardDisks));
    STDMETHOD(COMGETTER(DVDImages))(ComSafeArrayOut(IMedium *, aDVDImages));
    STDMETHOD(COMGETTER(FloppyImages))(ComSafeArrayOut(IMedium *, aFloppyImages));
    STDMETHOD(COMGETTER(ProgressOperations))(ComSafeArrayOut(IProgress *, aProgressOperations));
    STDMETHOD(COMGETTER(GuestOSTypes))(ComSafeArrayOut(IGuestOSType *, aGuestOSTypes));
    STDMETHOD(COMGETTER(SharedFolders))(ComSafeArrayOut(ISharedFolder *, aSharedFolders));
    STDMETHOD(COMGETTER(PerformanceCollector))(IPerformanceCollector **aPerformanceCollector);
    STDMETHOD(COMGETTER(DHCPServers))(ComSafeArrayOut(IDHCPServer *, aDHCPServers));
    STDMETHOD(COMGETTER(NATNetworks))(ComSafeArrayOut(INATNetwork *, aNATNetworks));
    STDMETHOD(COMGETTER(EventSource))(IEventSource **aEventSource);
    STDMETHOD(COMGETTER(ExtensionPackManager))(IExtPackManager **aExtensionPackManager);
    STDMETHOD(COMGETTER(InternalNetworks))(ComSafeArrayOut(BSTR, aInternalNetworks));
    STDMETHOD(COMGETTER(GenericNetworkDrivers))(ComSafeArrayOut(BSTR, aGenericNetworkDrivers));

    // public IVirtualBox methods
    STDMETHOD(ComposeMachineFilename)(IN_BSTR aName,
                                      IN_BSTR aGroup,
                                      IN_BSTR aCreateFlags,
                                      IN_BSTR aBaseFolder,
                                      BSTR *aFile);
    STDMETHOD(CreateMachine)(IN_BSTR aSettingsFile,
                             IN_BSTR aName,
                             ComSafeArrayIn(IN_BSTR, aGroups),
                             IN_BSTR aOsTypeId,
                             IN_BSTR aFlags,
                             IMachine **aMachine);
    STDMETHOD(OpenMachine)(IN_BSTR aSettingsFile,
                           IMachine **aMachine);
    STDMETHOD(RegisterMachine)(IMachine *aMachine);
    STDMETHOD(FindMachine)(IN_BSTR aNameOrId,
                           IMachine **aMachine);
    STDMETHOD(GetMachinesByGroups)(ComSafeArrayIn(IN_BSTR, aGroups),
                                   ComSafeArrayOut(IMachine *, aMachines));
    STDMETHOD(GetMachineStates)(ComSafeArrayIn(IMachine *, aMachines),
                                ComSafeArrayOut(MachineState_T, aStates));
    STDMETHOD(CreateAppliance)(IAppliance **aAppliance);
    STDMETHOD(CreateHardDisk)(IN_BSTR aFormat,
                              IN_BSTR aLocation,
                              IMedium **aMedium);
    STDMETHOD(OpenMedium)(IN_BSTR aLocation,
                          DeviceType_T aDeviceType,
                          AccessMode_T aAccessMode,
                          BOOL aForceNewUuid,
                          IMedium **aMedium);
    STDMETHOD(GetGuestOSType)(IN_BSTR aId,
                              IGuestOSType **aType);
    STDMETHOD(CreateSharedFolder)(IN_BSTR aName,
                                  IN_BSTR aHostPath,
                                  BOOL aWritable,
                                  BOOL aAutomount);
    STDMETHOD(RemoveSharedFolder)(IN_BSTR aName);
    STDMETHOD(GetExtraDataKeys)(ComSafeArrayOut(BSTR, aKeys));
    STDMETHOD(GetExtraData)(IN_BSTR aKey,
                            BSTR *aValue);
    STDMETHOD(SetExtraData)(IN_BSTR aKey,
                            IN_BSTR aValue);
    STDMETHOD(SetSettingsSecret)(IN_BSTR aPassword);
    STDMETHOD(CreateDHCPServer)(IN_BSTR aName,
                                IDHCPServer **aServer);
    STDMETHOD(FindDHCPServerByNetworkName)(IN_BSTR aName,
                                           IDHCPServer **aServer);
    STDMETHOD(RemoveDHCPServer)(IDHCPServer *aServer);
    STDMETHOD(CreateNATNetwork)(IN_BSTR aNetworkName,
                                INATNetwork **aNetwork);
    STDMETHOD(FindNATNetworkByName)(IN_BSTR aNetworkName,
                                    INATNetwork **aNetwork);
    STDMETHOD(RemoveNATNetwork)(INATNetwork *aNetwork);
    STDMETHOD(CheckFirmwarePresent)(FirmwareType_T aFirmwareType,
                                    IN_BSTR aVersion,
                                    BSTR *aUrl,
                                    BSTR *aFile,
                                    BOOL *aResult);

private:
    // wrapped IVirtualBox properties
    virtual HRESULT getVersion(com::Utf8Str &aVersion) = 0;
    virtual HRESULT getVersionNormalized(com::Utf8Str &aVersionNormalized) = 0;
    virtual HRESULT getRevision(ULONG *aRevision) = 0;
    virtual HRESULT getPackageType(com::Utf8Str &aPackageType) = 0;
    virtual HRESULT getAPIVersion(com::Utf8Str &aAPIVersion) = 0;
    virtual HRESULT getHomeFolder(com::Utf8Str &aHomeFolder) = 0;
    virtual HRESULT getSettingsFilePath(com::Utf8Str &aSettingsFilePath) = 0;
    virtual HRESULT getHost(ComPtr<IHost> &aHost) = 0;
    virtual HRESULT getSystemProperties(ComPtr<ISystemProperties> &aSystemProperties) = 0;
    virtual HRESULT getMachines(std::vector<ComPtr<IMachine> > &aMachines) = 0;
    virtual HRESULT getMachineGroups(std::vector<com::Utf8Str> &aMachineGroups) = 0;
    virtual HRESULT getHardDisks(std::vector<ComPtr<IMedium> > &aHardDisks) = 0;
    virtual HRESULT getDVDImages(std::vector<ComPtr<IMedium> > &aDVDImages) = 0;
    virtual HRESULT getFloppyImages(std::vector<ComPtr<IMedium> > &aFloppyImages) = 0;
    virtual HRESULT getProgressOperations(std::vector<ComPtr<IProgress> > &aProgressOperations) = 0;
    virtual HRESULT getGuestOSTypes(std::vector<ComPtr<IGuestOSType> > &aGuestOSTypes) = 0;
    virtual HRESULT getSharedFolders(std::vector<ComPtr<ISharedFolder> > &aSharedFolders) = 0;
    virtual HRESULT getPerformanceCollector(ComPtr<IPerformanceCollector> &aPerformanceCollector) = 0;
    virtual HRESULT getDHCPServers(std::vector<ComPtr<IDHCPServer> > &aDHCPServers) = 0;
    virtual HRESULT getNATNetworks(std::vector<ComPtr<INATNetwork> > &aNATNetworks) = 0;
    virtual HRESULT getEventSource(ComPtr<IEventSource> &aEventSource) = 0;
    virtual HRESULT getExtensionPackManager(ComPtr<IExtPackManager> &aExtensionPackManager) = 0;
    virtual HRESULT getInternalNetworks(std::vector<com::Utf8Str> &aInternalNetworks) = 0;
    virtual HRESULT getGenericNetworkDrivers(std::vector<com::Utf8Str> &aGenericNetworkDrivers) = 0;

    // wrapped IVirtualBox methods
    virtual HRESULT composeMachineFilename(const com::Utf8Str &aName,
                                           const com::Utf8Str &aGroup,
                                           const com::Utf8Str &aCreateFlags,
                                           const com::Utf8Str &aBaseFolder,
                                           com::Utf8Str &aFile) = 0;
    virtual HRESULT createMachine(const com::Utf8Str &aSettingsFile,
                                  const com::Utf8Str &aName,
                                  const std::vector<com::Utf8Str> &aGroups,
                                  const com::Utf8Str &aOsTypeId,
                                  const com::Utf8Str &aFlags,
                                  ComPtr<IMachine> &aMachine) = 0;
    virtual HRESULT openMachine(const com::Utf8Str &aSettingsFile,
                                ComPtr<IMachine> &aMachine) = 0;
    virtual HRESULT registerMachine(const ComPtr<IMachine> &aMachine) = 0;
    virtual HRESULT findMachine(const com::Utf8Str &aNameOrId,
                                ComPtr<IMachine> &aMachine) = 0;
    virtual HRESULT getMachinesByGroups(const std::vector<com::Utf8Str> &aGroups,
                                        std::vector<ComPtr<IMachine> > &aMachines) = 0;
    virtual HRESULT getMachineStates(const std::vector<ComPtr<IMachine> > &aMachines,
                                     std::vector<MachineState_T> &aStates) = 0;
    virtual HRESULT createAppliance(ComPtr<IAppliance> &aAppliance) = 0;
    virtual HRESULT createHardDisk(const com::Utf8Str &aFormat,
                                   const com::Utf8Str &aLocation,
                                   ComPtr<IMedium> &aMedium) = 0;
    virtual HRESULT openMedium(const com::Utf8Str &aLocation,
                               DeviceType_T aDeviceType,
                               AccessMode_T aAccessMode,
                               BOOL aForceNewUuid,
                               ComPtr<IMedium> &aMedium) = 0;
    virtual HRESULT getGuestOSType(const com::Guid &aId,
                                   ComPtr<IGuestOSType> &aType) = 0;
    virtual HRESULT createSharedFolder(const com::Utf8Str &aName,
                                       const com::Utf8Str &aHostPath,
                                       BOOL aWritable,
                                       BOOL aAutomount) = 0;
    virtual HRESULT removeSharedFolder(const com::Utf8Str &aName) = 0;
    virtual HRESULT getExtraDataKeys(std::vector<com::Utf8Str> &aKeys) = 0;
    virtual HRESULT getExtraData(const com::Utf8Str &aKey,
                                 com::Utf8Str &aValue) = 0;
    virtual HRESULT setExtraData(const com::Utf8Str &aKey,
                                 const com::Utf8Str &aValue) = 0;
    virtual HRESULT setSettingsSecret(const com::Utf8Str &aPassword) = 0;
    virtual HRESULT createDHCPServer(const com::Utf8Str &aName,
                                     ComPtr<IDHCPServer> &aServer) = 0;
    virtual HRESULT findDHCPServerByNetworkName(const com::Utf8Str &aName,
                                                ComPtr<IDHCPServer> &aServer) = 0;
    virtual HRESULT removeDHCPServer(const ComPtr<IDHCPServer> &aServer) = 0;
    virtual HRESULT createNATNetwork(const com::Utf8Str &aNetworkName,
                                     ComPtr<INATNetwork> &aNetwork) = 0;
    virtual HRESULT findNATNetworkByName(const com::Utf8Str &aNetworkName,
                                         ComPtr<INATNetwork> &aNetwork) = 0;
    virtual HRESULT removeNATNetwork(const ComPtr<INATNetwork> &aNetwork) = 0;
    virtual HRESULT checkFirmwarePresent(FirmwareType_T aFirmwareType,
                                         const com::Utf8Str &aVersion,
                                         com::Utf8Str &aUrl,
                                         com::Utf8Str &aFile,
                                         BOOL *aResult) = 0;
};

#endif // !VirtualBoxWrap_H_
