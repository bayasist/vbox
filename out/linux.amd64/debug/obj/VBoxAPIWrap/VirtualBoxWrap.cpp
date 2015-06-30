/** @file
 *
 * VirtualBox API class wrapper code for IVirtualBox.
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

#define LOG_GROUP_MAIN_OVERRIDE LOG_GROUP_MAIN_VIRTUALBOX

#include "VirtualBoxWrap.h"
#include "Logging.h"

DEFINE_EMPTY_CTOR_DTOR(VirtualBoxWrap)

//
// IVirtualBox properties
//

STDMETHODIMP VirtualBoxWrap::COMGETTER(Version)(BSTR *aVersion)
{
    LogRelFlow(("{%p} %s: enter aVersion=%p\n", this, "VirtualBox::getVersion", aVersion));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aVersion);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getVersion(BSTROutConverter(aVersion).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aVersion=%ls hrc=%Rhrc\n", this, "VirtualBox::getVersion", *aVersion, hrc));
    return hrc;
}

STDMETHODIMP VirtualBoxWrap::COMGETTER(VersionNormalized)(BSTR *aVersionNormalized)
{
    LogRelFlow(("{%p} %s: enter aVersionNormalized=%p\n", this, "VirtualBox::getVersionNormalized", aVersionNormalized));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aVersionNormalized);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getVersionNormalized(BSTROutConverter(aVersionNormalized).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aVersionNormalized=%ls hrc=%Rhrc\n", this, "VirtualBox::getVersionNormalized", *aVersionNormalized, hrc));
    return hrc;
}

STDMETHODIMP VirtualBoxWrap::COMGETTER(Revision)(ULONG *aRevision)
{
    LogRelFlow(("{%p} %s: enter aRevision=%p\n", this, "VirtualBox::getRevision", aRevision));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aRevision);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getRevision(aRevision);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aRevision=%RU32 hrc=%Rhrc\n", this, "VirtualBox::getRevision", *aRevision, hrc));
    return hrc;
}

STDMETHODIMP VirtualBoxWrap::COMGETTER(PackageType)(BSTR *aPackageType)
{
    LogRelFlow(("{%p} %s: enter aPackageType=%p\n", this, "VirtualBox::getPackageType", aPackageType));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aPackageType);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getPackageType(BSTROutConverter(aPackageType).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aPackageType=%ls hrc=%Rhrc\n", this, "VirtualBox::getPackageType", *aPackageType, hrc));
    return hrc;
}

STDMETHODIMP VirtualBoxWrap::COMGETTER(APIVersion)(BSTR *aAPIVersion)
{
    LogRelFlow(("{%p} %s: enter aAPIVersion=%p\n", this, "VirtualBox::getAPIVersion", aAPIVersion));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aAPIVersion);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getAPIVersion(BSTROutConverter(aAPIVersion).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aAPIVersion=%ls hrc=%Rhrc\n", this, "VirtualBox::getAPIVersion", *aAPIVersion, hrc));
    return hrc;
}

STDMETHODIMP VirtualBoxWrap::COMGETTER(HomeFolder)(BSTR *aHomeFolder)
{
    LogRelFlow(("{%p} %s: enter aHomeFolder=%p\n", this, "VirtualBox::getHomeFolder", aHomeFolder));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aHomeFolder);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getHomeFolder(BSTROutConverter(aHomeFolder).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aHomeFolder=%ls hrc=%Rhrc\n", this, "VirtualBox::getHomeFolder", *aHomeFolder, hrc));
    return hrc;
}

STDMETHODIMP VirtualBoxWrap::COMGETTER(SettingsFilePath)(BSTR *aSettingsFilePath)
{
    LogRelFlow(("{%p} %s: enter aSettingsFilePath=%p\n", this, "VirtualBox::getSettingsFilePath", aSettingsFilePath));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aSettingsFilePath);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getSettingsFilePath(BSTROutConverter(aSettingsFilePath).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aSettingsFilePath=%ls hrc=%Rhrc\n", this, "VirtualBox::getSettingsFilePath", *aSettingsFilePath, hrc));
    return hrc;
}

STDMETHODIMP VirtualBoxWrap::COMGETTER(Host)(IHost **aHost)
{
    LogRelFlow(("{%p} %s: enter aHost=%p\n", this, "VirtualBox::getHost", aHost));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aHost);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getHost(ComTypeOutConverter<IHost>(aHost).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aHost=%p hrc=%Rhrc\n", this, "VirtualBox::getHost", *aHost, hrc));
    return hrc;
}

STDMETHODIMP VirtualBoxWrap::COMGETTER(SystemProperties)(ISystemProperties **aSystemProperties)
{
    LogRelFlow(("{%p} %s: enter aSystemProperties=%p\n", this, "VirtualBox::getSystemProperties", aSystemProperties));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aSystemProperties);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getSystemProperties(ComTypeOutConverter<ISystemProperties>(aSystemProperties).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aSystemProperties=%p hrc=%Rhrc\n", this, "VirtualBox::getSystemProperties", *aSystemProperties, hrc));
    return hrc;
}

STDMETHODIMP VirtualBoxWrap::COMGETTER(Machines)(ComSafeArrayOut(IMachine *, aMachines))
{
    LogRelFlow(("{%p} %s: enter aMachines=%p\n", this, "VirtualBox::getMachines", aMachines));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aMachines);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getMachines(ArrayComTypeOutConverter<IMachine>(ComSafeArrayOutArg(aMachines)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aMachines=%zu hrc=%Rhrc\n", this, "VirtualBox::getMachines", ComSafeArraySize(*aMachines), hrc));
    return hrc;
}

STDMETHODIMP VirtualBoxWrap::COMGETTER(MachineGroups)(ComSafeArrayOut(BSTR, aMachineGroups))
{
    LogRelFlow(("{%p} %s: enter aMachineGroups=%p\n", this, "VirtualBox::getMachineGroups", aMachineGroups));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aMachineGroups);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getMachineGroups(ArrayBSTROutConverter(ComSafeArrayOutArg(aMachineGroups)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aMachineGroups=%zu hrc=%Rhrc\n", this, "VirtualBox::getMachineGroups", ComSafeArraySize(*aMachineGroups), hrc));
    return hrc;
}

STDMETHODIMP VirtualBoxWrap::COMGETTER(HardDisks)(ComSafeArrayOut(IMedium *, aHardDisks))
{
    LogRelFlow(("{%p} %s: enter aHardDisks=%p\n", this, "VirtualBox::getHardDisks", aHardDisks));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aHardDisks);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getHardDisks(ArrayComTypeOutConverter<IMedium>(ComSafeArrayOutArg(aHardDisks)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aHardDisks=%zu hrc=%Rhrc\n", this, "VirtualBox::getHardDisks", ComSafeArraySize(*aHardDisks), hrc));
    return hrc;
}

STDMETHODIMP VirtualBoxWrap::COMGETTER(DVDImages)(ComSafeArrayOut(IMedium *, aDVDImages))
{
    LogRelFlow(("{%p} %s: enter aDVDImages=%p\n", this, "VirtualBox::getDVDImages", aDVDImages));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aDVDImages);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getDVDImages(ArrayComTypeOutConverter<IMedium>(ComSafeArrayOutArg(aDVDImages)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aDVDImages=%zu hrc=%Rhrc\n", this, "VirtualBox::getDVDImages", ComSafeArraySize(*aDVDImages), hrc));
    return hrc;
}

STDMETHODIMP VirtualBoxWrap::COMGETTER(FloppyImages)(ComSafeArrayOut(IMedium *, aFloppyImages))
{
    LogRelFlow(("{%p} %s: enter aFloppyImages=%p\n", this, "VirtualBox::getFloppyImages", aFloppyImages));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aFloppyImages);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getFloppyImages(ArrayComTypeOutConverter<IMedium>(ComSafeArrayOutArg(aFloppyImages)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aFloppyImages=%zu hrc=%Rhrc\n", this, "VirtualBox::getFloppyImages", ComSafeArraySize(*aFloppyImages), hrc));
    return hrc;
}

STDMETHODIMP VirtualBoxWrap::COMGETTER(ProgressOperations)(ComSafeArrayOut(IProgress *, aProgressOperations))
{
    LogRelFlow(("{%p} %s: enter aProgressOperations=%p\n", this, "VirtualBox::getProgressOperations", aProgressOperations));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aProgressOperations);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getProgressOperations(ArrayComTypeOutConverter<IProgress>(ComSafeArrayOutArg(aProgressOperations)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aProgressOperations=%zu hrc=%Rhrc\n", this, "VirtualBox::getProgressOperations", ComSafeArraySize(*aProgressOperations), hrc));
    return hrc;
}

STDMETHODIMP VirtualBoxWrap::COMGETTER(GuestOSTypes)(ComSafeArrayOut(IGuestOSType *, aGuestOSTypes))
{
    LogRelFlow(("{%p} %s: enter aGuestOSTypes=%p\n", this, "VirtualBox::getGuestOSTypes", aGuestOSTypes));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aGuestOSTypes);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getGuestOSTypes(ArrayComTypeOutConverter<IGuestOSType>(ComSafeArrayOutArg(aGuestOSTypes)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aGuestOSTypes=%zu hrc=%Rhrc\n", this, "VirtualBox::getGuestOSTypes", ComSafeArraySize(*aGuestOSTypes), hrc));
    return hrc;
}

STDMETHODIMP VirtualBoxWrap::COMGETTER(SharedFolders)(ComSafeArrayOut(ISharedFolder *, aSharedFolders))
{
    LogRelFlow(("{%p} %s: enter aSharedFolders=%p\n", this, "VirtualBox::getSharedFolders", aSharedFolders));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aSharedFolders);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getSharedFolders(ArrayComTypeOutConverter<ISharedFolder>(ComSafeArrayOutArg(aSharedFolders)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aSharedFolders=%zu hrc=%Rhrc\n", this, "VirtualBox::getSharedFolders", ComSafeArraySize(*aSharedFolders), hrc));
    return hrc;
}

STDMETHODIMP VirtualBoxWrap::COMGETTER(PerformanceCollector)(IPerformanceCollector **aPerformanceCollector)
{
    LogRelFlow(("{%p} %s: enter aPerformanceCollector=%p\n", this, "VirtualBox::getPerformanceCollector", aPerformanceCollector));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aPerformanceCollector);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getPerformanceCollector(ComTypeOutConverter<IPerformanceCollector>(aPerformanceCollector).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aPerformanceCollector=%p hrc=%Rhrc\n", this, "VirtualBox::getPerformanceCollector", *aPerformanceCollector, hrc));
    return hrc;
}

STDMETHODIMP VirtualBoxWrap::COMGETTER(DHCPServers)(ComSafeArrayOut(IDHCPServer *, aDHCPServers))
{
    LogRelFlow(("{%p} %s: enter aDHCPServers=%p\n", this, "VirtualBox::getDHCPServers", aDHCPServers));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aDHCPServers);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getDHCPServers(ArrayComTypeOutConverter<IDHCPServer>(ComSafeArrayOutArg(aDHCPServers)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aDHCPServers=%zu hrc=%Rhrc\n", this, "VirtualBox::getDHCPServers", ComSafeArraySize(*aDHCPServers), hrc));
    return hrc;
}

STDMETHODIMP VirtualBoxWrap::COMGETTER(NATNetworks)(ComSafeArrayOut(INATNetwork *, aNATNetworks))
{
    LogRelFlow(("{%p} %s: enter aNATNetworks=%p\n", this, "VirtualBox::getNATNetworks", aNATNetworks));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aNATNetworks);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getNATNetworks(ArrayComTypeOutConverter<INATNetwork>(ComSafeArrayOutArg(aNATNetworks)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aNATNetworks=%zu hrc=%Rhrc\n", this, "VirtualBox::getNATNetworks", ComSafeArraySize(*aNATNetworks), hrc));
    return hrc;
}

STDMETHODIMP VirtualBoxWrap::COMGETTER(EventSource)(IEventSource **aEventSource)
{
    LogRelFlow(("{%p} %s: enter aEventSource=%p\n", this, "VirtualBox::getEventSource", aEventSource));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aEventSource);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getEventSource(ComTypeOutConverter<IEventSource>(aEventSource).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aEventSource=%p hrc=%Rhrc\n", this, "VirtualBox::getEventSource", *aEventSource, hrc));
    return hrc;
}

STDMETHODIMP VirtualBoxWrap::COMGETTER(ExtensionPackManager)(IExtPackManager **aExtensionPackManager)
{
    LogRelFlow(("{%p} %s: enter aExtensionPackManager=%p\n", this, "VirtualBox::getExtensionPackManager", aExtensionPackManager));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aExtensionPackManager);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getExtensionPackManager(ComTypeOutConverter<IExtPackManager>(aExtensionPackManager).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aExtensionPackManager=%p hrc=%Rhrc\n", this, "VirtualBox::getExtensionPackManager", *aExtensionPackManager, hrc));
    return hrc;
}

STDMETHODIMP VirtualBoxWrap::COMGETTER(InternalNetworks)(ComSafeArrayOut(BSTR, aInternalNetworks))
{
    LogRelFlow(("{%p} %s: enter aInternalNetworks=%p\n", this, "VirtualBox::getInternalNetworks", aInternalNetworks));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aInternalNetworks);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getInternalNetworks(ArrayBSTROutConverter(ComSafeArrayOutArg(aInternalNetworks)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aInternalNetworks=%zu hrc=%Rhrc\n", this, "VirtualBox::getInternalNetworks", ComSafeArraySize(*aInternalNetworks), hrc));
    return hrc;
}

STDMETHODIMP VirtualBoxWrap::COMGETTER(GenericNetworkDrivers)(ComSafeArrayOut(BSTR, aGenericNetworkDrivers))
{
    LogRelFlow(("{%p} %s: enter aGenericNetworkDrivers=%p\n", this, "VirtualBox::getGenericNetworkDrivers", aGenericNetworkDrivers));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aGenericNetworkDrivers);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getGenericNetworkDrivers(ArrayBSTROutConverter(ComSafeArrayOutArg(aGenericNetworkDrivers)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aGenericNetworkDrivers=%zu hrc=%Rhrc\n", this, "VirtualBox::getGenericNetworkDrivers", ComSafeArraySize(*aGenericNetworkDrivers), hrc));
    return hrc;
}

//
// IVirtualBox methods
//

STDMETHODIMP VirtualBoxWrap::ComposeMachineFilename(IN_BSTR aName,
                                                    IN_BSTR aGroup,
                                                    IN_BSTR aCreateFlags,
                                                    IN_BSTR aBaseFolder,
                                                    BSTR *aFile)
{
    LogRelFlow(("{%p} %s:enter aName=%ls aGroup=%ls aCreateFlags=%ls aBaseFolder=%ls aFile=%p\n", this, "VirtualBox::composeMachineFilename", aName, aGroup, aCreateFlags, aBaseFolder, aFile));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aFile);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = composeMachineFilename(BSTRInConverter(aName).str(),
                                     BSTRInConverter(aGroup).str(),
                                     BSTRInConverter(aCreateFlags).str(),
                                     BSTRInConverter(aBaseFolder).str(),
                                     BSTROutConverter(aFile).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aFile=%ls hrc=%Rhrc\n", this, "VirtualBox::composeMachineFilename", *aFile, hrc));
    return hrc;
}

STDMETHODIMP VirtualBoxWrap::CreateMachine(IN_BSTR aSettingsFile,
                                           IN_BSTR aName,
                                           ComSafeArrayIn(IN_BSTR, aGroups),
                                           IN_BSTR aOsTypeId,
                                           IN_BSTR aFlags,
                                           IMachine **aMachine)
{
    LogRelFlow(("{%p} %s:enter aSettingsFile=%ls aName=%ls aGroups=%zu aOsTypeId=%ls aFlags=%ls aMachine=%p\n", this, "VirtualBox::createMachine", aSettingsFile, aName, aGroups, aOsTypeId, aFlags, aMachine));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aMachine);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = createMachine(BSTRInConverter(aSettingsFile).str(),
                            BSTRInConverter(aName).str(),
                            ArrayBSTRInConverter(ComSafeArrayInArg(aGroups)).array(),
                            BSTRInConverter(aOsTypeId).str(),
                            BSTRInConverter(aFlags).str(),
                            ComTypeOutConverter<IMachine>(aMachine).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aMachine=%p hrc=%Rhrc\n", this, "VirtualBox::createMachine", *aMachine, hrc));
    return hrc;
}

STDMETHODIMP VirtualBoxWrap::OpenMachine(IN_BSTR aSettingsFile,
                                         IMachine **aMachine)
{
    LogRelFlow(("{%p} %s:enter aSettingsFile=%ls aMachine=%p\n", this, "VirtualBox::openMachine", aSettingsFile, aMachine));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aMachine);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = openMachine(BSTRInConverter(aSettingsFile).str(),
                          ComTypeOutConverter<IMachine>(aMachine).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aMachine=%p hrc=%Rhrc\n", this, "VirtualBox::openMachine", *aMachine, hrc));
    return hrc;
}

STDMETHODIMP VirtualBoxWrap::RegisterMachine(IMachine *aMachine)
{
    LogRelFlow(("{%p} %s:enter aMachine=%p\n", this, "VirtualBox::registerMachine", aMachine));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = registerMachine(ComTypeInConverter<IMachine>(aMachine).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "VirtualBox::registerMachine", hrc));
    return hrc;
}

STDMETHODIMP VirtualBoxWrap::FindMachine(IN_BSTR aNameOrId,
                                         IMachine **aMachine)
{
    LogRelFlow(("{%p} %s:enter aNameOrId=%ls aMachine=%p\n", this, "VirtualBox::findMachine", aNameOrId, aMachine));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aMachine);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = findMachine(BSTRInConverter(aNameOrId).str(),
                          ComTypeOutConverter<IMachine>(aMachine).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aMachine=%p hrc=%Rhrc\n", this, "VirtualBox::findMachine", *aMachine, hrc));
    return hrc;
}

STDMETHODIMP VirtualBoxWrap::GetMachinesByGroups(ComSafeArrayIn(IN_BSTR, aGroups),
                                                 ComSafeArrayOut(IMachine *, aMachines))
{
    LogRelFlow(("{%p} %s:enter aGroups=%zu aMachines=%p\n", this, "VirtualBox::getMachinesByGroups", aGroups, aMachines));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aMachines);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getMachinesByGroups(ArrayBSTRInConverter(ComSafeArrayInArg(aGroups)).array(),
                                  ArrayComTypeOutConverter<IMachine>(ComSafeArrayOutArg(aMachines)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aMachines=%zu hrc=%Rhrc\n", this, "VirtualBox::getMachinesByGroups", ComSafeArraySize(*aMachines), hrc));
    return hrc;
}

STDMETHODIMP VirtualBoxWrap::GetMachineStates(ComSafeArrayIn(IMachine *, aMachines),
                                              ComSafeArrayOut(MachineState_T, aStates))
{
    LogRelFlow(("{%p} %s:enter aMachines=%zu aStates=%p\n", this, "VirtualBox::getMachineStates", aMachines, aStates));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aStates);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getMachineStates(ArrayComTypeInConverter<IMachine>(ComSafeArrayInArg(aMachines)).array(),
                               ArrayOutConverter<MachineState_T>(ComSafeArrayOutArg(aStates)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aStates=%zu hrc=%Rhrc\n", this, "VirtualBox::getMachineStates", ComSafeArraySize(*aStates), hrc));
    return hrc;
}

STDMETHODIMP VirtualBoxWrap::CreateAppliance(IAppliance **aAppliance)
{
    LogRelFlow(("{%p} %s:enter aAppliance=%p\n", this, "VirtualBox::createAppliance", aAppliance));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aAppliance);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = createAppliance(ComTypeOutConverter<IAppliance>(aAppliance).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aAppliance=%p hrc=%Rhrc\n", this, "VirtualBox::createAppliance", *aAppliance, hrc));
    return hrc;
}

STDMETHODIMP VirtualBoxWrap::CreateHardDisk(IN_BSTR aFormat,
                                            IN_BSTR aLocation,
                                            IMedium **aMedium)
{
    LogRelFlow(("{%p} %s:enter aFormat=%ls aLocation=%ls aMedium=%p\n", this, "VirtualBox::createHardDisk", aFormat, aLocation, aMedium));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aMedium);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = createHardDisk(BSTRInConverter(aFormat).str(),
                             BSTRInConverter(aLocation).str(),
                             ComTypeOutConverter<IMedium>(aMedium).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aMedium=%p hrc=%Rhrc\n", this, "VirtualBox::createHardDisk", *aMedium, hrc));
    return hrc;
}

STDMETHODIMP VirtualBoxWrap::OpenMedium(IN_BSTR aLocation,
                                        DeviceType_T aDeviceType,
                                        AccessMode_T aAccessMode,
                                        BOOL aForceNewUuid,
                                        IMedium **aMedium)
{
    LogRelFlow(("{%p} %s:enter aLocation=%ls aDeviceType=%RU32 aAccessMode=%RU32 aForceNewUuid=%RTbool aMedium=%p\n", this, "VirtualBox::openMedium", aLocation, aDeviceType, aAccessMode, aForceNewUuid, aMedium));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aMedium);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = openMedium(BSTRInConverter(aLocation).str(),
                         aDeviceType,
                         aAccessMode,
                         aForceNewUuid,
                         ComTypeOutConverter<IMedium>(aMedium).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aMedium=%p hrc=%Rhrc\n", this, "VirtualBox::openMedium", *aMedium, hrc));
    return hrc;
}

STDMETHODIMP VirtualBoxWrap::GetGuestOSType(IN_BSTR aId,
                                            IGuestOSType **aType)
{
    LogRelFlow(("{%p} %s:enter aId=%ls aType=%p\n", this, "VirtualBox::getGuestOSType", aId, aType));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aType);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getGuestOSType(UuidInConverter(aId).uuid(),
                             ComTypeOutConverter<IGuestOSType>(aType).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aType=%p hrc=%Rhrc\n", this, "VirtualBox::getGuestOSType", *aType, hrc));
    return hrc;
}

STDMETHODIMP VirtualBoxWrap::CreateSharedFolder(IN_BSTR aName,
                                                IN_BSTR aHostPath,
                                                BOOL aWritable,
                                                BOOL aAutomount)
{
    LogRelFlow(("{%p} %s:enter aName=%ls aHostPath=%ls aWritable=%RTbool aAutomount=%RTbool\n", this, "VirtualBox::createSharedFolder", aName, aHostPath, aWritable, aAutomount));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = createSharedFolder(BSTRInConverter(aName).str(),
                                 BSTRInConverter(aHostPath).str(),
                                 aWritable,
                                 aAutomount);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "VirtualBox::createSharedFolder", hrc));
    return hrc;
}

STDMETHODIMP VirtualBoxWrap::RemoveSharedFolder(IN_BSTR aName)
{
    LogRelFlow(("{%p} %s:enter aName=%ls\n", this, "VirtualBox::removeSharedFolder", aName));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = removeSharedFolder(BSTRInConverter(aName).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "VirtualBox::removeSharedFolder", hrc));
    return hrc;
}

STDMETHODIMP VirtualBoxWrap::GetExtraDataKeys(ComSafeArrayOut(BSTR, aKeys))
{
    LogRelFlow(("{%p} %s:enter aKeys=%p\n", this, "VirtualBox::getExtraDataKeys", aKeys));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aKeys);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getExtraDataKeys(ArrayBSTROutConverter(ComSafeArrayOutArg(aKeys)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aKeys=%zu hrc=%Rhrc\n", this, "VirtualBox::getExtraDataKeys", ComSafeArraySize(*aKeys), hrc));
    return hrc;
}

STDMETHODIMP VirtualBoxWrap::GetExtraData(IN_BSTR aKey,
                                          BSTR *aValue)
{
    LogRelFlow(("{%p} %s:enter aKey=%ls aValue=%p\n", this, "VirtualBox::getExtraData", aKey, aValue));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aValue);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getExtraData(BSTRInConverter(aKey).str(),
                           BSTROutConverter(aValue).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aValue=%ls hrc=%Rhrc\n", this, "VirtualBox::getExtraData", *aValue, hrc));
    return hrc;
}

STDMETHODIMP VirtualBoxWrap::SetExtraData(IN_BSTR aKey,
                                          IN_BSTR aValue)
{
    LogRelFlow(("{%p} %s:enter aKey=%ls aValue=%ls\n", this, "VirtualBox::setExtraData", aKey, aValue));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setExtraData(BSTRInConverter(aKey).str(),
                           BSTRInConverter(aValue).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "VirtualBox::setExtraData", hrc));
    return hrc;
}

STDMETHODIMP VirtualBoxWrap::SetSettingsSecret(IN_BSTR aPassword)
{
    LogRelFlow(("{%p} %s:enter aPassword=%ls\n", this, "VirtualBox::setSettingsSecret", aPassword));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setSettingsSecret(BSTRInConverter(aPassword).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "VirtualBox::setSettingsSecret", hrc));
    return hrc;
}

STDMETHODIMP VirtualBoxWrap::CreateDHCPServer(IN_BSTR aName,
                                              IDHCPServer **aServer)
{
    LogRelFlow(("{%p} %s:enter aName=%ls aServer=%p\n", this, "VirtualBox::createDHCPServer", aName, aServer));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aServer);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = createDHCPServer(BSTRInConverter(aName).str(),
                               ComTypeOutConverter<IDHCPServer>(aServer).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aServer=%p hrc=%Rhrc\n", this, "VirtualBox::createDHCPServer", *aServer, hrc));
    return hrc;
}

STDMETHODIMP VirtualBoxWrap::FindDHCPServerByNetworkName(IN_BSTR aName,
                                                         IDHCPServer **aServer)
{
    LogRelFlow(("{%p} %s:enter aName=%ls aServer=%p\n", this, "VirtualBox::findDHCPServerByNetworkName", aName, aServer));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aServer);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = findDHCPServerByNetworkName(BSTRInConverter(aName).str(),
                                          ComTypeOutConverter<IDHCPServer>(aServer).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aServer=%p hrc=%Rhrc\n", this, "VirtualBox::findDHCPServerByNetworkName", *aServer, hrc));
    return hrc;
}

STDMETHODIMP VirtualBoxWrap::RemoveDHCPServer(IDHCPServer *aServer)
{
    LogRelFlow(("{%p} %s:enter aServer=%p\n", this, "VirtualBox::removeDHCPServer", aServer));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = removeDHCPServer(ComTypeInConverter<IDHCPServer>(aServer).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "VirtualBox::removeDHCPServer", hrc));
    return hrc;
}

STDMETHODIMP VirtualBoxWrap::CreateNATNetwork(IN_BSTR aNetworkName,
                                              INATNetwork **aNetwork)
{
    LogRelFlow(("{%p} %s:enter aNetworkName=%ls aNetwork=%p\n", this, "VirtualBox::createNATNetwork", aNetworkName, aNetwork));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aNetwork);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = createNATNetwork(BSTRInConverter(aNetworkName).str(),
                               ComTypeOutConverter<INATNetwork>(aNetwork).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aNetwork=%p hrc=%Rhrc\n", this, "VirtualBox::createNATNetwork", *aNetwork, hrc));
    return hrc;
}

STDMETHODIMP VirtualBoxWrap::FindNATNetworkByName(IN_BSTR aNetworkName,
                                                  INATNetwork **aNetwork)
{
    LogRelFlow(("{%p} %s:enter aNetworkName=%ls aNetwork=%p\n", this, "VirtualBox::findNATNetworkByName", aNetworkName, aNetwork));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aNetwork);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = findNATNetworkByName(BSTRInConverter(aNetworkName).str(),
                                   ComTypeOutConverter<INATNetwork>(aNetwork).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aNetwork=%p hrc=%Rhrc\n", this, "VirtualBox::findNATNetworkByName", *aNetwork, hrc));
    return hrc;
}

STDMETHODIMP VirtualBoxWrap::RemoveNATNetwork(INATNetwork *aNetwork)
{
    LogRelFlow(("{%p} %s:enter aNetwork=%p\n", this, "VirtualBox::removeNATNetwork", aNetwork));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = removeNATNetwork(ComTypeInConverter<INATNetwork>(aNetwork).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "VirtualBox::removeNATNetwork", hrc));
    return hrc;
}

STDMETHODIMP VirtualBoxWrap::CheckFirmwarePresent(FirmwareType_T aFirmwareType,
                                                  IN_BSTR aVersion,
                                                  BSTR *aUrl,
                                                  BSTR *aFile,
                                                  BOOL *aResult)
{
    LogRelFlow(("{%p} %s:enter aFirmwareType=%RU32 aVersion=%ls aUrl=%p aFile=%p aResult=%p\n", this, "VirtualBox::checkFirmwarePresent", aFirmwareType, aVersion, aUrl, aFile, aResult));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aUrl);
        CheckComArgOutPointerValidThrow(aFile);
        CheckComArgOutPointerValidThrow(aResult);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = checkFirmwarePresent(aFirmwareType,
                                   BSTRInConverter(aVersion).str(),
                                   BSTROutConverter(aUrl).str(),
                                   BSTROutConverter(aFile).str(),
                                   aResult);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aUrl=%ls *aFile=%ls aResult=%RTbool hrc=%Rhrc\n", this, "VirtualBox::checkFirmwarePresent", *aUrl, *aFile, *aResult, hrc));
    return hrc;
}

#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(VirtualBoxWrap)
NS_IMPL_THREADSAFE_ISUPPORTS1_CI(VirtualBoxWrap, IVirtualBox)
#endif // VBOX_WITH_XPCOM
