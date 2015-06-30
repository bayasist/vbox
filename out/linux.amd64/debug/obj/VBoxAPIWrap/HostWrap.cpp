/** @file
 *
 * VirtualBox API class wrapper code for IHost.
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

#define LOG_GROUP_MAIN_OVERRIDE LOG_GROUP_MAIN_HOST

#include "HostWrap.h"
#include "Logging.h"

DEFINE_EMPTY_CTOR_DTOR(HostWrap)

//
// IHost properties
//

STDMETHODIMP HostWrap::COMGETTER(DVDDrives)(ComSafeArrayOut(IMedium *, aDVDDrives))
{
    LogRelFlow(("{%p} %s: enter aDVDDrives=%p\n", this, "Host::getDVDDrives", aDVDDrives));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aDVDDrives);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getDVDDrives(ArrayComTypeOutConverter<IMedium>(ComSafeArrayOutArg(aDVDDrives)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aDVDDrives=%zu hrc=%Rhrc\n", this, "Host::getDVDDrives", ComSafeArraySize(*aDVDDrives), hrc));
    return hrc;
}

STDMETHODIMP HostWrap::COMGETTER(FloppyDrives)(ComSafeArrayOut(IMedium *, aFloppyDrives))
{
    LogRelFlow(("{%p} %s: enter aFloppyDrives=%p\n", this, "Host::getFloppyDrives", aFloppyDrives));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aFloppyDrives);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getFloppyDrives(ArrayComTypeOutConverter<IMedium>(ComSafeArrayOutArg(aFloppyDrives)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aFloppyDrives=%zu hrc=%Rhrc\n", this, "Host::getFloppyDrives", ComSafeArraySize(*aFloppyDrives), hrc));
    return hrc;
}

STDMETHODIMP HostWrap::COMGETTER(USBDevices)(ComSafeArrayOut(IHostUSBDevice *, aUSBDevices))
{
    LogRelFlow(("{%p} %s: enter aUSBDevices=%p\n", this, "Host::getUSBDevices", aUSBDevices));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aUSBDevices);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getUSBDevices(ArrayComTypeOutConverter<IHostUSBDevice>(ComSafeArrayOutArg(aUSBDevices)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aUSBDevices=%zu hrc=%Rhrc\n", this, "Host::getUSBDevices", ComSafeArraySize(*aUSBDevices), hrc));
    return hrc;
}

STDMETHODIMP HostWrap::COMGETTER(USBDeviceFilters)(ComSafeArrayOut(IHostUSBDeviceFilter *, aUSBDeviceFilters))
{
    LogRelFlow(("{%p} %s: enter aUSBDeviceFilters=%p\n", this, "Host::getUSBDeviceFilters", aUSBDeviceFilters));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aUSBDeviceFilters);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getUSBDeviceFilters(ArrayComTypeOutConverter<IHostUSBDeviceFilter>(ComSafeArrayOutArg(aUSBDeviceFilters)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aUSBDeviceFilters=%zu hrc=%Rhrc\n", this, "Host::getUSBDeviceFilters", ComSafeArraySize(*aUSBDeviceFilters), hrc));
    return hrc;
}

STDMETHODIMP HostWrap::COMGETTER(NetworkInterfaces)(ComSafeArrayOut(IHostNetworkInterface *, aNetworkInterfaces))
{
    LogRelFlow(("{%p} %s: enter aNetworkInterfaces=%p\n", this, "Host::getNetworkInterfaces", aNetworkInterfaces));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aNetworkInterfaces);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getNetworkInterfaces(ArrayComTypeOutConverter<IHostNetworkInterface>(ComSafeArrayOutArg(aNetworkInterfaces)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aNetworkInterfaces=%zu hrc=%Rhrc\n", this, "Host::getNetworkInterfaces", ComSafeArraySize(*aNetworkInterfaces), hrc));
    return hrc;
}

STDMETHODIMP HostWrap::COMGETTER(NameServers)(ComSafeArrayOut(BSTR, aNameServers))
{
    LogRelFlow(("{%p} %s: enter aNameServers=%p\n", this, "Host::getNameServers", aNameServers));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aNameServers);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getNameServers(ArrayBSTROutConverter(ComSafeArrayOutArg(aNameServers)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aNameServers=%zu hrc=%Rhrc\n", this, "Host::getNameServers", ComSafeArraySize(*aNameServers), hrc));
    return hrc;
}

STDMETHODIMP HostWrap::COMGETTER(DomainName)(BSTR *aDomainName)
{
    LogRelFlow(("{%p} %s: enter aDomainName=%p\n", this, "Host::getDomainName", aDomainName));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aDomainName);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getDomainName(BSTROutConverter(aDomainName).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aDomainName=%ls hrc=%Rhrc\n", this, "Host::getDomainName", *aDomainName, hrc));
    return hrc;
}

STDMETHODIMP HostWrap::COMGETTER(SearchStrings)(ComSafeArrayOut(BSTR, aSearchStrings))
{
    LogRelFlow(("{%p} %s: enter aSearchStrings=%p\n", this, "Host::getSearchStrings", aSearchStrings));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aSearchStrings);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getSearchStrings(ArrayBSTROutConverter(ComSafeArrayOutArg(aSearchStrings)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aSearchStrings=%zu hrc=%Rhrc\n", this, "Host::getSearchStrings", ComSafeArraySize(*aSearchStrings), hrc));
    return hrc;
}

STDMETHODIMP HostWrap::COMGETTER(ProcessorCount)(ULONG *aProcessorCount)
{
    LogRelFlow(("{%p} %s: enter aProcessorCount=%p\n", this, "Host::getProcessorCount", aProcessorCount));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aProcessorCount);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getProcessorCount(aProcessorCount);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aProcessorCount=%RU32 hrc=%Rhrc\n", this, "Host::getProcessorCount", *aProcessorCount, hrc));
    return hrc;
}

STDMETHODIMP HostWrap::COMGETTER(ProcessorOnlineCount)(ULONG *aProcessorOnlineCount)
{
    LogRelFlow(("{%p} %s: enter aProcessorOnlineCount=%p\n", this, "Host::getProcessorOnlineCount", aProcessorOnlineCount));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aProcessorOnlineCount);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getProcessorOnlineCount(aProcessorOnlineCount);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aProcessorOnlineCount=%RU32 hrc=%Rhrc\n", this, "Host::getProcessorOnlineCount", *aProcessorOnlineCount, hrc));
    return hrc;
}

STDMETHODIMP HostWrap::COMGETTER(ProcessorCoreCount)(ULONG *aProcessorCoreCount)
{
    LogRelFlow(("{%p} %s: enter aProcessorCoreCount=%p\n", this, "Host::getProcessorCoreCount", aProcessorCoreCount));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aProcessorCoreCount);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getProcessorCoreCount(aProcessorCoreCount);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aProcessorCoreCount=%RU32 hrc=%Rhrc\n", this, "Host::getProcessorCoreCount", *aProcessorCoreCount, hrc));
    return hrc;
}

STDMETHODIMP HostWrap::COMGETTER(ProcessorOnlineCoreCount)(ULONG *aProcessorOnlineCoreCount)
{
    LogRelFlow(("{%p} %s: enter aProcessorOnlineCoreCount=%p\n", this, "Host::getProcessorOnlineCoreCount", aProcessorOnlineCoreCount));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aProcessorOnlineCoreCount);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getProcessorOnlineCoreCount(aProcessorOnlineCoreCount);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aProcessorOnlineCoreCount=%RU32 hrc=%Rhrc\n", this, "Host::getProcessorOnlineCoreCount", *aProcessorOnlineCoreCount, hrc));
    return hrc;
}

STDMETHODIMP HostWrap::COMGETTER(MemorySize)(ULONG *aMemorySize)
{
    LogRelFlow(("{%p} %s: enter aMemorySize=%p\n", this, "Host::getMemorySize", aMemorySize));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aMemorySize);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getMemorySize(aMemorySize);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aMemorySize=%RU32 hrc=%Rhrc\n", this, "Host::getMemorySize", *aMemorySize, hrc));
    return hrc;
}

STDMETHODIMP HostWrap::COMGETTER(MemoryAvailable)(ULONG *aMemoryAvailable)
{
    LogRelFlow(("{%p} %s: enter aMemoryAvailable=%p\n", this, "Host::getMemoryAvailable", aMemoryAvailable));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aMemoryAvailable);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getMemoryAvailable(aMemoryAvailable);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aMemoryAvailable=%RU32 hrc=%Rhrc\n", this, "Host::getMemoryAvailable", *aMemoryAvailable, hrc));
    return hrc;
}

STDMETHODIMP HostWrap::COMGETTER(OperatingSystem)(BSTR *aOperatingSystem)
{
    LogRelFlow(("{%p} %s: enter aOperatingSystem=%p\n", this, "Host::getOperatingSystem", aOperatingSystem));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aOperatingSystem);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getOperatingSystem(BSTROutConverter(aOperatingSystem).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aOperatingSystem=%ls hrc=%Rhrc\n", this, "Host::getOperatingSystem", *aOperatingSystem, hrc));
    return hrc;
}

STDMETHODIMP HostWrap::COMGETTER(OSVersion)(BSTR *aOSVersion)
{
    LogRelFlow(("{%p} %s: enter aOSVersion=%p\n", this, "Host::getOSVersion", aOSVersion));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aOSVersion);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getOSVersion(BSTROutConverter(aOSVersion).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aOSVersion=%ls hrc=%Rhrc\n", this, "Host::getOSVersion", *aOSVersion, hrc));
    return hrc;
}

STDMETHODIMP HostWrap::COMGETTER(UTCTime)(LONG64 *aUTCTime)
{
    LogRelFlow(("{%p} %s: enter aUTCTime=%p\n", this, "Host::getUTCTime", aUTCTime));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aUTCTime);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getUTCTime(aUTCTime);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aUTCTime=%RI64 hrc=%Rhrc\n", this, "Host::getUTCTime", *aUTCTime, hrc));
    return hrc;
}

STDMETHODIMP HostWrap::COMGETTER(Acceleration3DAvailable)(BOOL *aAcceleration3DAvailable)
{
    LogRelFlow(("{%p} %s: enter aAcceleration3DAvailable=%p\n", this, "Host::getAcceleration3DAvailable", aAcceleration3DAvailable));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aAcceleration3DAvailable);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getAcceleration3DAvailable(aAcceleration3DAvailable);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aAcceleration3DAvailable=%RTbool hrc=%Rhrc\n", this, "Host::getAcceleration3DAvailable", *aAcceleration3DAvailable, hrc));
    return hrc;
}

STDMETHODIMP HostWrap::COMGETTER(VideoInputDevices)(ComSafeArrayOut(IHostVideoInputDevice *, aVideoInputDevices))
{
    LogRelFlow(("{%p} %s: enter aVideoInputDevices=%p\n", this, "Host::getVideoInputDevices", aVideoInputDevices));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aVideoInputDevices);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getVideoInputDevices(ArrayComTypeOutConverter<IHostVideoInputDevice>(ComSafeArrayOutArg(aVideoInputDevices)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aVideoInputDevices=%zu hrc=%Rhrc\n", this, "Host::getVideoInputDevices", ComSafeArraySize(*aVideoInputDevices), hrc));
    return hrc;
}

//
// IHost methods
//

STDMETHODIMP HostWrap::GetProcessorSpeed(ULONG aCpuId,
                                         ULONG *aSpeed)
{
    LogRelFlow(("{%p} %s:enter aCpuId=%RU32 aSpeed=%p\n", this, "Host::getProcessorSpeed", aCpuId, aSpeed));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aSpeed);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getProcessorSpeed(aCpuId,
                                aSpeed);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aSpeed=%RU32 hrc=%Rhrc\n", this, "Host::getProcessorSpeed", *aSpeed, hrc));
    return hrc;
}

STDMETHODIMP HostWrap::GetProcessorFeature(ProcessorFeature_T aFeature,
                                           BOOL *aSupported)
{
    LogRelFlow(("{%p} %s:enter aFeature=%RU32 aSupported=%p\n", this, "Host::getProcessorFeature", aFeature, aSupported));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aSupported);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getProcessorFeature(aFeature,
                                  aSupported);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aSupported=%RTbool hrc=%Rhrc\n", this, "Host::getProcessorFeature", *aSupported, hrc));
    return hrc;
}

STDMETHODIMP HostWrap::GetProcessorDescription(ULONG aCpuId,
                                               BSTR *aDescription)
{
    LogRelFlow(("{%p} %s:enter aCpuId=%RU32 aDescription=%p\n", this, "Host::getProcessorDescription", aCpuId, aDescription));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aDescription);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getProcessorDescription(aCpuId,
                                      BSTROutConverter(aDescription).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aDescription=%ls hrc=%Rhrc\n", this, "Host::getProcessorDescription", *aDescription, hrc));
    return hrc;
}

STDMETHODIMP HostWrap::GetProcessorCPUIDLeaf(ULONG aCpuId,
                                             ULONG aLeaf,
                                             ULONG aSubLeaf,
                                             ULONG *aValEax,
                                             ULONG *aValEbx,
                                             ULONG *aValEcx,
                                             ULONG *aValEdx)
{
    LogRelFlow(("{%p} %s:enter aCpuId=%RU32 aLeaf=%RU32 aSubLeaf=%RU32 aValEax=%p aValEbx=%p aValEcx=%p aValEdx=%p\n", this, "Host::getProcessorCPUIDLeaf", aCpuId, aLeaf, aSubLeaf, aValEax, aValEbx, aValEcx, aValEdx));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aValEax);
        CheckComArgOutPointerValidThrow(aValEbx);
        CheckComArgOutPointerValidThrow(aValEcx);
        CheckComArgOutPointerValidThrow(aValEdx);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getProcessorCPUIDLeaf(aCpuId,
                                    aLeaf,
                                    aSubLeaf,
                                    aValEax,
                                    aValEbx,
                                    aValEcx,
                                    aValEdx);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aValEax=%RU32 *aValEbx=%RU32 *aValEcx=%RU32 *aValEdx=%RU32 hrc=%Rhrc\n", this, "Host::getProcessorCPUIDLeaf", *aValEax, *aValEbx, *aValEcx, *aValEdx, hrc));
    return hrc;
}

STDMETHODIMP HostWrap::CreateHostOnlyNetworkInterface(IHostNetworkInterface **aHostInterface,
                                                      IProgress **aProgress)
{
    LogRelFlow(("{%p} %s:enter aHostInterface=%p aProgress=%p\n", this, "Host::createHostOnlyNetworkInterface", aHostInterface, aProgress));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aHostInterface);
        CheckComArgOutPointerValidThrow(aProgress);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = createHostOnlyNetworkInterface(ComTypeOutConverter<IHostNetworkInterface>(aHostInterface).ptr(),
                                             ComTypeOutConverter<IProgress>(aProgress).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aHostInterface=%p aProgress=%p hrc=%Rhrc\n", this, "Host::createHostOnlyNetworkInterface", *aHostInterface, *aProgress, hrc));
    return hrc;
}

STDMETHODIMP HostWrap::RemoveHostOnlyNetworkInterface(IN_BSTR aId,
                                                      IProgress **aProgress)
{
    LogRelFlow(("{%p} %s:enter aId=%ls aProgress=%p\n", this, "Host::removeHostOnlyNetworkInterface", aId, aProgress));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aProgress);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = removeHostOnlyNetworkInterface(UuidInConverter(aId).uuid(),
                                             ComTypeOutConverter<IProgress>(aProgress).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aProgress=%p hrc=%Rhrc\n", this, "Host::removeHostOnlyNetworkInterface", *aProgress, hrc));
    return hrc;
}

STDMETHODIMP HostWrap::CreateUSBDeviceFilter(IN_BSTR aName,
                                             IHostUSBDeviceFilter **aFilter)
{
    LogRelFlow(("{%p} %s:enter aName=%ls aFilter=%p\n", this, "Host::createUSBDeviceFilter", aName, aFilter));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aFilter);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = createUSBDeviceFilter(BSTRInConverter(aName).str(),
                                    ComTypeOutConverter<IHostUSBDeviceFilter>(aFilter).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aFilter=%p hrc=%Rhrc\n", this, "Host::createUSBDeviceFilter", *aFilter, hrc));
    return hrc;
}

STDMETHODIMP HostWrap::InsertUSBDeviceFilter(ULONG aPosition,
                                             IHostUSBDeviceFilter *aFilter)
{
    LogRelFlow(("{%p} %s:enter aPosition=%RU32 aFilter=%p\n", this, "Host::insertUSBDeviceFilter", aPosition, aFilter));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = insertUSBDeviceFilter(aPosition,
                                    ComTypeInConverter<IHostUSBDeviceFilter>(aFilter).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Host::insertUSBDeviceFilter", hrc));
    return hrc;
}

STDMETHODIMP HostWrap::RemoveUSBDeviceFilter(ULONG aPosition)
{
    LogRelFlow(("{%p} %s:enter aPosition=%RU32\n", this, "Host::removeUSBDeviceFilter", aPosition));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = removeUSBDeviceFilter(aPosition);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Host::removeUSBDeviceFilter", hrc));
    return hrc;
}

STDMETHODIMP HostWrap::FindHostDVDDrive(IN_BSTR aName,
                                        IMedium **aDrive)
{
    LogRelFlow(("{%p} %s:enter aName=%ls aDrive=%p\n", this, "Host::findHostDVDDrive", aName, aDrive));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aDrive);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = findHostDVDDrive(BSTRInConverter(aName).str(),
                               ComTypeOutConverter<IMedium>(aDrive).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aDrive=%p hrc=%Rhrc\n", this, "Host::findHostDVDDrive", *aDrive, hrc));
    return hrc;
}

STDMETHODIMP HostWrap::FindHostFloppyDrive(IN_BSTR aName,
                                           IMedium **aDrive)
{
    LogRelFlow(("{%p} %s:enter aName=%ls aDrive=%p\n", this, "Host::findHostFloppyDrive", aName, aDrive));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aDrive);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = findHostFloppyDrive(BSTRInConverter(aName).str(),
                                  ComTypeOutConverter<IMedium>(aDrive).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aDrive=%p hrc=%Rhrc\n", this, "Host::findHostFloppyDrive", *aDrive, hrc));
    return hrc;
}

STDMETHODIMP HostWrap::FindHostNetworkInterfaceByName(IN_BSTR aName,
                                                      IHostNetworkInterface **aNetworkInterface)
{
    LogRelFlow(("{%p} %s:enter aName=%ls aNetworkInterface=%p\n", this, "Host::findHostNetworkInterfaceByName", aName, aNetworkInterface));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aNetworkInterface);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = findHostNetworkInterfaceByName(BSTRInConverter(aName).str(),
                                             ComTypeOutConverter<IHostNetworkInterface>(aNetworkInterface).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aNetworkInterface=%p hrc=%Rhrc\n", this, "Host::findHostNetworkInterfaceByName", *aNetworkInterface, hrc));
    return hrc;
}

STDMETHODIMP HostWrap::FindHostNetworkInterfaceById(IN_BSTR aId,
                                                    IHostNetworkInterface **aNetworkInterface)
{
    LogRelFlow(("{%p} %s:enter aId=%ls aNetworkInterface=%p\n", this, "Host::findHostNetworkInterfaceById", aId, aNetworkInterface));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aNetworkInterface);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = findHostNetworkInterfaceById(UuidInConverter(aId).uuid(),
                                           ComTypeOutConverter<IHostNetworkInterface>(aNetworkInterface).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aNetworkInterface=%p hrc=%Rhrc\n", this, "Host::findHostNetworkInterfaceById", *aNetworkInterface, hrc));
    return hrc;
}

STDMETHODIMP HostWrap::FindHostNetworkInterfacesOfType(HostNetworkInterfaceType_T aType,
                                                       ComSafeArrayOut(IHostNetworkInterface *, aNetworkInterfaces))
{
    LogRelFlow(("{%p} %s:enter aType=%RU32 aNetworkInterfaces=%p\n", this, "Host::findHostNetworkInterfacesOfType", aType, aNetworkInterfaces));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aNetworkInterfaces);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = findHostNetworkInterfacesOfType(aType,
                                              ArrayComTypeOutConverter<IHostNetworkInterface>(ComSafeArrayOutArg(aNetworkInterfaces)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aNetworkInterfaces=%zu hrc=%Rhrc\n", this, "Host::findHostNetworkInterfacesOfType", ComSafeArraySize(*aNetworkInterfaces), hrc));
    return hrc;
}

STDMETHODIMP HostWrap::FindUSBDeviceById(IN_BSTR aId,
                                         IHostUSBDevice **aDevice)
{
    LogRelFlow(("{%p} %s:enter aId=%ls aDevice=%p\n", this, "Host::findUSBDeviceById", aId, aDevice));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aDevice);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = findUSBDeviceById(UuidInConverter(aId).uuid(),
                                ComTypeOutConverter<IHostUSBDevice>(aDevice).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aDevice=%p hrc=%Rhrc\n", this, "Host::findUSBDeviceById", *aDevice, hrc));
    return hrc;
}

STDMETHODIMP HostWrap::FindUSBDeviceByAddress(IN_BSTR aName,
                                              IHostUSBDevice **aDevice)
{
    LogRelFlow(("{%p} %s:enter aName=%ls aDevice=%p\n", this, "Host::findUSBDeviceByAddress", aName, aDevice));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aDevice);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = findUSBDeviceByAddress(BSTRInConverter(aName).str(),
                                     ComTypeOutConverter<IHostUSBDevice>(aDevice).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aDevice=%p hrc=%Rhrc\n", this, "Host::findUSBDeviceByAddress", *aDevice, hrc));
    return hrc;
}

STDMETHODIMP HostWrap::GenerateMACAddress(BSTR *aAddress)
{
    LogRelFlow(("{%p} %s:enter aAddress=%p\n", this, "Host::generateMACAddress", aAddress));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aAddress);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = generateMACAddress(BSTROutConverter(aAddress).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aAddress=%ls hrc=%Rhrc\n", this, "Host::generateMACAddress", *aAddress, hrc));
    return hrc;
}

#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(HostWrap)
NS_IMPL_THREADSAFE_ISUPPORTS1_CI(HostWrap, IHost)
#endif // VBOX_WITH_XPCOM
