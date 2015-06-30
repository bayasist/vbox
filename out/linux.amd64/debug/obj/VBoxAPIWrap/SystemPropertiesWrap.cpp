/** @file
 *
 * VirtualBox API class wrapper code for ISystemProperties.
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

#define LOG_GROUP_MAIN_OVERRIDE LOG_GROUP_MAIN_SYSTEMPROPERTIES

#include "SystemPropertiesWrap.h"
#include "Logging.h"

DEFINE_EMPTY_CTOR_DTOR(SystemPropertiesWrap)

//
// ISystemProperties properties
//

STDMETHODIMP SystemPropertiesWrap::COMGETTER(MinGuestRAM)(ULONG *aMinGuestRAM)
{
    LogRelFlow(("{%p} %s: enter aMinGuestRAM=%p\n", this, "SystemProperties::getMinGuestRAM", aMinGuestRAM));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aMinGuestRAM);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getMinGuestRAM(aMinGuestRAM);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aMinGuestRAM=%RU32 hrc=%Rhrc\n", this, "SystemProperties::getMinGuestRAM", *aMinGuestRAM, hrc));
    return hrc;
}

STDMETHODIMP SystemPropertiesWrap::COMGETTER(MaxGuestRAM)(ULONG *aMaxGuestRAM)
{
    LogRelFlow(("{%p} %s: enter aMaxGuestRAM=%p\n", this, "SystemProperties::getMaxGuestRAM", aMaxGuestRAM));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aMaxGuestRAM);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getMaxGuestRAM(aMaxGuestRAM);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aMaxGuestRAM=%RU32 hrc=%Rhrc\n", this, "SystemProperties::getMaxGuestRAM", *aMaxGuestRAM, hrc));
    return hrc;
}

STDMETHODIMP SystemPropertiesWrap::COMGETTER(MinGuestVRAM)(ULONG *aMinGuestVRAM)
{
    LogRelFlow(("{%p} %s: enter aMinGuestVRAM=%p\n", this, "SystemProperties::getMinGuestVRAM", aMinGuestVRAM));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aMinGuestVRAM);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getMinGuestVRAM(aMinGuestVRAM);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aMinGuestVRAM=%RU32 hrc=%Rhrc\n", this, "SystemProperties::getMinGuestVRAM", *aMinGuestVRAM, hrc));
    return hrc;
}

STDMETHODIMP SystemPropertiesWrap::COMGETTER(MaxGuestVRAM)(ULONG *aMaxGuestVRAM)
{
    LogRelFlow(("{%p} %s: enter aMaxGuestVRAM=%p\n", this, "SystemProperties::getMaxGuestVRAM", aMaxGuestVRAM));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aMaxGuestVRAM);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getMaxGuestVRAM(aMaxGuestVRAM);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aMaxGuestVRAM=%RU32 hrc=%Rhrc\n", this, "SystemProperties::getMaxGuestVRAM", *aMaxGuestVRAM, hrc));
    return hrc;
}

STDMETHODIMP SystemPropertiesWrap::COMGETTER(MinGuestCPUCount)(ULONG *aMinGuestCPUCount)
{
    LogRelFlow(("{%p} %s: enter aMinGuestCPUCount=%p\n", this, "SystemProperties::getMinGuestCPUCount", aMinGuestCPUCount));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aMinGuestCPUCount);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getMinGuestCPUCount(aMinGuestCPUCount);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aMinGuestCPUCount=%RU32 hrc=%Rhrc\n", this, "SystemProperties::getMinGuestCPUCount", *aMinGuestCPUCount, hrc));
    return hrc;
}

STDMETHODIMP SystemPropertiesWrap::COMGETTER(MaxGuestCPUCount)(ULONG *aMaxGuestCPUCount)
{
    LogRelFlow(("{%p} %s: enter aMaxGuestCPUCount=%p\n", this, "SystemProperties::getMaxGuestCPUCount", aMaxGuestCPUCount));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aMaxGuestCPUCount);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getMaxGuestCPUCount(aMaxGuestCPUCount);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aMaxGuestCPUCount=%RU32 hrc=%Rhrc\n", this, "SystemProperties::getMaxGuestCPUCount", *aMaxGuestCPUCount, hrc));
    return hrc;
}

STDMETHODIMP SystemPropertiesWrap::COMGETTER(MaxGuestMonitors)(ULONG *aMaxGuestMonitors)
{
    LogRelFlow(("{%p} %s: enter aMaxGuestMonitors=%p\n", this, "SystemProperties::getMaxGuestMonitors", aMaxGuestMonitors));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aMaxGuestMonitors);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getMaxGuestMonitors(aMaxGuestMonitors);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aMaxGuestMonitors=%RU32 hrc=%Rhrc\n", this, "SystemProperties::getMaxGuestMonitors", *aMaxGuestMonitors, hrc));
    return hrc;
}

STDMETHODIMP SystemPropertiesWrap::COMGETTER(InfoVDSize)(LONG64 *aInfoVDSize)
{
    LogRelFlow(("{%p} %s: enter aInfoVDSize=%p\n", this, "SystemProperties::getInfoVDSize", aInfoVDSize));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aInfoVDSize);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getInfoVDSize(aInfoVDSize);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aInfoVDSize=%RI64 hrc=%Rhrc\n", this, "SystemProperties::getInfoVDSize", *aInfoVDSize, hrc));
    return hrc;
}

STDMETHODIMP SystemPropertiesWrap::COMGETTER(SerialPortCount)(ULONG *aSerialPortCount)
{
    LogRelFlow(("{%p} %s: enter aSerialPortCount=%p\n", this, "SystemProperties::getSerialPortCount", aSerialPortCount));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aSerialPortCount);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getSerialPortCount(aSerialPortCount);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aSerialPortCount=%RU32 hrc=%Rhrc\n", this, "SystemProperties::getSerialPortCount", *aSerialPortCount, hrc));
    return hrc;
}

STDMETHODIMP SystemPropertiesWrap::COMGETTER(ParallelPortCount)(ULONG *aParallelPortCount)
{
    LogRelFlow(("{%p} %s: enter aParallelPortCount=%p\n", this, "SystemProperties::getParallelPortCount", aParallelPortCount));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aParallelPortCount);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getParallelPortCount(aParallelPortCount);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aParallelPortCount=%RU32 hrc=%Rhrc\n", this, "SystemProperties::getParallelPortCount", *aParallelPortCount, hrc));
    return hrc;
}

STDMETHODIMP SystemPropertiesWrap::COMGETTER(MaxBootPosition)(ULONG *aMaxBootPosition)
{
    LogRelFlow(("{%p} %s: enter aMaxBootPosition=%p\n", this, "SystemProperties::getMaxBootPosition", aMaxBootPosition));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aMaxBootPosition);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getMaxBootPosition(aMaxBootPosition);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aMaxBootPosition=%RU32 hrc=%Rhrc\n", this, "SystemProperties::getMaxBootPosition", *aMaxBootPosition, hrc));
    return hrc;
}

STDMETHODIMP SystemPropertiesWrap::COMGETTER(ExclusiveHwVirt)(BOOL *aExclusiveHwVirt)
{
    LogRelFlow(("{%p} %s: enter aExclusiveHwVirt=%p\n", this, "SystemProperties::getExclusiveHwVirt", aExclusiveHwVirt));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aExclusiveHwVirt);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getExclusiveHwVirt(aExclusiveHwVirt);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aExclusiveHwVirt=%RTbool hrc=%Rhrc\n", this, "SystemProperties::getExclusiveHwVirt", *aExclusiveHwVirt, hrc));
    return hrc;
}

STDMETHODIMP SystemPropertiesWrap::COMSETTER(ExclusiveHwVirt)(BOOL aExclusiveHwVirt)
{
    LogRelFlow(("{%p} %s: enter aExclusiveHwVirt=%RTbool\n", this, "SystemProperties::setExclusiveHwVirt", aExclusiveHwVirt));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setExclusiveHwVirt(aExclusiveHwVirt);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "SystemProperties::setExclusiveHwVirt", hrc));
    return hrc;
}

STDMETHODIMP SystemPropertiesWrap::COMGETTER(DefaultMachineFolder)(BSTR *aDefaultMachineFolder)
{
    LogRelFlow(("{%p} %s: enter aDefaultMachineFolder=%p\n", this, "SystemProperties::getDefaultMachineFolder", aDefaultMachineFolder));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aDefaultMachineFolder);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getDefaultMachineFolder(BSTROutConverter(aDefaultMachineFolder).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aDefaultMachineFolder=%ls hrc=%Rhrc\n", this, "SystemProperties::getDefaultMachineFolder", *aDefaultMachineFolder, hrc));
    return hrc;
}

STDMETHODIMP SystemPropertiesWrap::COMSETTER(DefaultMachineFolder)(IN_BSTR aDefaultMachineFolder)
{
    LogRelFlow(("{%p} %s: enter aDefaultMachineFolder=%ls\n", this, "SystemProperties::setDefaultMachineFolder", aDefaultMachineFolder));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setDefaultMachineFolder(BSTRInConverter(aDefaultMachineFolder).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "SystemProperties::setDefaultMachineFolder", hrc));
    return hrc;
}

STDMETHODIMP SystemPropertiesWrap::COMGETTER(LoggingLevel)(BSTR *aLoggingLevel)
{
    LogRelFlow(("{%p} %s: enter aLoggingLevel=%p\n", this, "SystemProperties::getLoggingLevel", aLoggingLevel));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aLoggingLevel);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getLoggingLevel(BSTROutConverter(aLoggingLevel).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aLoggingLevel=%ls hrc=%Rhrc\n", this, "SystemProperties::getLoggingLevel", *aLoggingLevel, hrc));
    return hrc;
}

STDMETHODIMP SystemPropertiesWrap::COMSETTER(LoggingLevel)(IN_BSTR aLoggingLevel)
{
    LogRelFlow(("{%p} %s: enter aLoggingLevel=%ls\n", this, "SystemProperties::setLoggingLevel", aLoggingLevel));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setLoggingLevel(BSTRInConverter(aLoggingLevel).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "SystemProperties::setLoggingLevel", hrc));
    return hrc;
}

STDMETHODIMP SystemPropertiesWrap::COMGETTER(MediumFormats)(ComSafeArrayOut(IMediumFormat *, aMediumFormats))
{
    LogRelFlow(("{%p} %s: enter aMediumFormats=%p\n", this, "SystemProperties::getMediumFormats", aMediumFormats));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aMediumFormats);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getMediumFormats(ArrayComTypeOutConverter<IMediumFormat>(ComSafeArrayOutArg(aMediumFormats)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aMediumFormats=%zu hrc=%Rhrc\n", this, "SystemProperties::getMediumFormats", ComSafeArraySize(*aMediumFormats), hrc));
    return hrc;
}

STDMETHODIMP SystemPropertiesWrap::COMGETTER(DefaultHardDiskFormat)(BSTR *aDefaultHardDiskFormat)
{
    LogRelFlow(("{%p} %s: enter aDefaultHardDiskFormat=%p\n", this, "SystemProperties::getDefaultHardDiskFormat", aDefaultHardDiskFormat));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aDefaultHardDiskFormat);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getDefaultHardDiskFormat(BSTROutConverter(aDefaultHardDiskFormat).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aDefaultHardDiskFormat=%ls hrc=%Rhrc\n", this, "SystemProperties::getDefaultHardDiskFormat", *aDefaultHardDiskFormat, hrc));
    return hrc;
}

STDMETHODIMP SystemPropertiesWrap::COMSETTER(DefaultHardDiskFormat)(IN_BSTR aDefaultHardDiskFormat)
{
    LogRelFlow(("{%p} %s: enter aDefaultHardDiskFormat=%ls\n", this, "SystemProperties::setDefaultHardDiskFormat", aDefaultHardDiskFormat));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setDefaultHardDiskFormat(BSTRInConverter(aDefaultHardDiskFormat).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "SystemProperties::setDefaultHardDiskFormat", hrc));
    return hrc;
}

STDMETHODIMP SystemPropertiesWrap::COMGETTER(FreeDiskSpaceWarning)(LONG64 *aFreeDiskSpaceWarning)
{
    LogRelFlow(("{%p} %s: enter aFreeDiskSpaceWarning=%p\n", this, "SystemProperties::getFreeDiskSpaceWarning", aFreeDiskSpaceWarning));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aFreeDiskSpaceWarning);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getFreeDiskSpaceWarning(aFreeDiskSpaceWarning);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aFreeDiskSpaceWarning=%RI64 hrc=%Rhrc\n", this, "SystemProperties::getFreeDiskSpaceWarning", *aFreeDiskSpaceWarning, hrc));
    return hrc;
}

STDMETHODIMP SystemPropertiesWrap::COMSETTER(FreeDiskSpaceWarning)(LONG64 aFreeDiskSpaceWarning)
{
    LogRelFlow(("{%p} %s: enter aFreeDiskSpaceWarning=%RI64\n", this, "SystemProperties::setFreeDiskSpaceWarning", aFreeDiskSpaceWarning));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setFreeDiskSpaceWarning(aFreeDiskSpaceWarning);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "SystemProperties::setFreeDiskSpaceWarning", hrc));
    return hrc;
}

STDMETHODIMP SystemPropertiesWrap::COMGETTER(FreeDiskSpacePercentWarning)(ULONG *aFreeDiskSpacePercentWarning)
{
    LogRelFlow(("{%p} %s: enter aFreeDiskSpacePercentWarning=%p\n", this, "SystemProperties::getFreeDiskSpacePercentWarning", aFreeDiskSpacePercentWarning));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aFreeDiskSpacePercentWarning);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getFreeDiskSpacePercentWarning(aFreeDiskSpacePercentWarning);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aFreeDiskSpacePercentWarning=%RU32 hrc=%Rhrc\n", this, "SystemProperties::getFreeDiskSpacePercentWarning", *aFreeDiskSpacePercentWarning, hrc));
    return hrc;
}

STDMETHODIMP SystemPropertiesWrap::COMSETTER(FreeDiskSpacePercentWarning)(ULONG aFreeDiskSpacePercentWarning)
{
    LogRelFlow(("{%p} %s: enter aFreeDiskSpacePercentWarning=%RU32\n", this, "SystemProperties::setFreeDiskSpacePercentWarning", aFreeDiskSpacePercentWarning));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setFreeDiskSpacePercentWarning(aFreeDiskSpacePercentWarning);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "SystemProperties::setFreeDiskSpacePercentWarning", hrc));
    return hrc;
}

STDMETHODIMP SystemPropertiesWrap::COMGETTER(FreeDiskSpaceError)(LONG64 *aFreeDiskSpaceError)
{
    LogRelFlow(("{%p} %s: enter aFreeDiskSpaceError=%p\n", this, "SystemProperties::getFreeDiskSpaceError", aFreeDiskSpaceError));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aFreeDiskSpaceError);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getFreeDiskSpaceError(aFreeDiskSpaceError);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aFreeDiskSpaceError=%RI64 hrc=%Rhrc\n", this, "SystemProperties::getFreeDiskSpaceError", *aFreeDiskSpaceError, hrc));
    return hrc;
}

STDMETHODIMP SystemPropertiesWrap::COMSETTER(FreeDiskSpaceError)(LONG64 aFreeDiskSpaceError)
{
    LogRelFlow(("{%p} %s: enter aFreeDiskSpaceError=%RI64\n", this, "SystemProperties::setFreeDiskSpaceError", aFreeDiskSpaceError));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setFreeDiskSpaceError(aFreeDiskSpaceError);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "SystemProperties::setFreeDiskSpaceError", hrc));
    return hrc;
}

STDMETHODIMP SystemPropertiesWrap::COMGETTER(FreeDiskSpacePercentError)(ULONG *aFreeDiskSpacePercentError)
{
    LogRelFlow(("{%p} %s: enter aFreeDiskSpacePercentError=%p\n", this, "SystemProperties::getFreeDiskSpacePercentError", aFreeDiskSpacePercentError));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aFreeDiskSpacePercentError);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getFreeDiskSpacePercentError(aFreeDiskSpacePercentError);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aFreeDiskSpacePercentError=%RU32 hrc=%Rhrc\n", this, "SystemProperties::getFreeDiskSpacePercentError", *aFreeDiskSpacePercentError, hrc));
    return hrc;
}

STDMETHODIMP SystemPropertiesWrap::COMSETTER(FreeDiskSpacePercentError)(ULONG aFreeDiskSpacePercentError)
{
    LogRelFlow(("{%p} %s: enter aFreeDiskSpacePercentError=%RU32\n", this, "SystemProperties::setFreeDiskSpacePercentError", aFreeDiskSpacePercentError));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setFreeDiskSpacePercentError(aFreeDiskSpacePercentError);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "SystemProperties::setFreeDiskSpacePercentError", hrc));
    return hrc;
}

STDMETHODIMP SystemPropertiesWrap::COMGETTER(VRDEAuthLibrary)(BSTR *aVRDEAuthLibrary)
{
    LogRelFlow(("{%p} %s: enter aVRDEAuthLibrary=%p\n", this, "SystemProperties::getVRDEAuthLibrary", aVRDEAuthLibrary));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aVRDEAuthLibrary);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getVRDEAuthLibrary(BSTROutConverter(aVRDEAuthLibrary).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aVRDEAuthLibrary=%ls hrc=%Rhrc\n", this, "SystemProperties::getVRDEAuthLibrary", *aVRDEAuthLibrary, hrc));
    return hrc;
}

STDMETHODIMP SystemPropertiesWrap::COMSETTER(VRDEAuthLibrary)(IN_BSTR aVRDEAuthLibrary)
{
    LogRelFlow(("{%p} %s: enter aVRDEAuthLibrary=%ls\n", this, "SystemProperties::setVRDEAuthLibrary", aVRDEAuthLibrary));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setVRDEAuthLibrary(BSTRInConverter(aVRDEAuthLibrary).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "SystemProperties::setVRDEAuthLibrary", hrc));
    return hrc;
}

STDMETHODIMP SystemPropertiesWrap::COMGETTER(WebServiceAuthLibrary)(BSTR *aWebServiceAuthLibrary)
{
    LogRelFlow(("{%p} %s: enter aWebServiceAuthLibrary=%p\n", this, "SystemProperties::getWebServiceAuthLibrary", aWebServiceAuthLibrary));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aWebServiceAuthLibrary);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getWebServiceAuthLibrary(BSTROutConverter(aWebServiceAuthLibrary).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aWebServiceAuthLibrary=%ls hrc=%Rhrc\n", this, "SystemProperties::getWebServiceAuthLibrary", *aWebServiceAuthLibrary, hrc));
    return hrc;
}

STDMETHODIMP SystemPropertiesWrap::COMSETTER(WebServiceAuthLibrary)(IN_BSTR aWebServiceAuthLibrary)
{
    LogRelFlow(("{%p} %s: enter aWebServiceAuthLibrary=%ls\n", this, "SystemProperties::setWebServiceAuthLibrary", aWebServiceAuthLibrary));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setWebServiceAuthLibrary(BSTRInConverter(aWebServiceAuthLibrary).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "SystemProperties::setWebServiceAuthLibrary", hrc));
    return hrc;
}

STDMETHODIMP SystemPropertiesWrap::COMGETTER(DefaultVRDEExtPack)(BSTR *aDefaultVRDEExtPack)
{
    LogRelFlow(("{%p} %s: enter aDefaultVRDEExtPack=%p\n", this, "SystemProperties::getDefaultVRDEExtPack", aDefaultVRDEExtPack));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aDefaultVRDEExtPack);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getDefaultVRDEExtPack(BSTROutConverter(aDefaultVRDEExtPack).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aDefaultVRDEExtPack=%ls hrc=%Rhrc\n", this, "SystemProperties::getDefaultVRDEExtPack", *aDefaultVRDEExtPack, hrc));
    return hrc;
}

STDMETHODIMP SystemPropertiesWrap::COMSETTER(DefaultVRDEExtPack)(IN_BSTR aDefaultVRDEExtPack)
{
    LogRelFlow(("{%p} %s: enter aDefaultVRDEExtPack=%ls\n", this, "SystemProperties::setDefaultVRDEExtPack", aDefaultVRDEExtPack));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setDefaultVRDEExtPack(BSTRInConverter(aDefaultVRDEExtPack).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "SystemProperties::setDefaultVRDEExtPack", hrc));
    return hrc;
}

STDMETHODIMP SystemPropertiesWrap::COMGETTER(LogHistoryCount)(ULONG *aLogHistoryCount)
{
    LogRelFlow(("{%p} %s: enter aLogHistoryCount=%p\n", this, "SystemProperties::getLogHistoryCount", aLogHistoryCount));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aLogHistoryCount);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getLogHistoryCount(aLogHistoryCount);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aLogHistoryCount=%RU32 hrc=%Rhrc\n", this, "SystemProperties::getLogHistoryCount", *aLogHistoryCount, hrc));
    return hrc;
}

STDMETHODIMP SystemPropertiesWrap::COMSETTER(LogHistoryCount)(ULONG aLogHistoryCount)
{
    LogRelFlow(("{%p} %s: enter aLogHistoryCount=%RU32\n", this, "SystemProperties::setLogHistoryCount", aLogHistoryCount));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setLogHistoryCount(aLogHistoryCount);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "SystemProperties::setLogHistoryCount", hrc));
    return hrc;
}

STDMETHODIMP SystemPropertiesWrap::COMGETTER(DefaultAudioDriver)(AudioDriverType_T *aDefaultAudioDriver)
{
    LogRelFlow(("{%p} %s: enter aDefaultAudioDriver=%p\n", this, "SystemProperties::getDefaultAudioDriver", aDefaultAudioDriver));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aDefaultAudioDriver);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getDefaultAudioDriver(aDefaultAudioDriver);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aDefaultAudioDriver=%RU32 hrc=%Rhrc\n", this, "SystemProperties::getDefaultAudioDriver", *aDefaultAudioDriver, hrc));
    return hrc;
}

STDMETHODIMP SystemPropertiesWrap::COMGETTER(AutostartDatabasePath)(BSTR *aAutostartDatabasePath)
{
    LogRelFlow(("{%p} %s: enter aAutostartDatabasePath=%p\n", this, "SystemProperties::getAutostartDatabasePath", aAutostartDatabasePath));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aAutostartDatabasePath);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getAutostartDatabasePath(BSTROutConverter(aAutostartDatabasePath).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aAutostartDatabasePath=%ls hrc=%Rhrc\n", this, "SystemProperties::getAutostartDatabasePath", *aAutostartDatabasePath, hrc));
    return hrc;
}

STDMETHODIMP SystemPropertiesWrap::COMSETTER(AutostartDatabasePath)(IN_BSTR aAutostartDatabasePath)
{
    LogRelFlow(("{%p} %s: enter aAutostartDatabasePath=%ls\n", this, "SystemProperties::setAutostartDatabasePath", aAutostartDatabasePath));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setAutostartDatabasePath(BSTRInConverter(aAutostartDatabasePath).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "SystemProperties::setAutostartDatabasePath", hrc));
    return hrc;
}

STDMETHODIMP SystemPropertiesWrap::COMGETTER(DefaultAdditionsISO)(BSTR *aDefaultAdditionsISO)
{
    LogRelFlow(("{%p} %s: enter aDefaultAdditionsISO=%p\n", this, "SystemProperties::getDefaultAdditionsISO", aDefaultAdditionsISO));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aDefaultAdditionsISO);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getDefaultAdditionsISO(BSTROutConverter(aDefaultAdditionsISO).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aDefaultAdditionsISO=%ls hrc=%Rhrc\n", this, "SystemProperties::getDefaultAdditionsISO", *aDefaultAdditionsISO, hrc));
    return hrc;
}

STDMETHODIMP SystemPropertiesWrap::COMSETTER(DefaultAdditionsISO)(IN_BSTR aDefaultAdditionsISO)
{
    LogRelFlow(("{%p} %s: enter aDefaultAdditionsISO=%ls\n", this, "SystemProperties::setDefaultAdditionsISO", aDefaultAdditionsISO));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setDefaultAdditionsISO(BSTRInConverter(aDefaultAdditionsISO).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "SystemProperties::setDefaultAdditionsISO", hrc));
    return hrc;
}

STDMETHODIMP SystemPropertiesWrap::COMGETTER(DefaultFrontend)(BSTR *aDefaultFrontend)
{
    LogRelFlow(("{%p} %s: enter aDefaultFrontend=%p\n", this, "SystemProperties::getDefaultFrontend", aDefaultFrontend));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aDefaultFrontend);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getDefaultFrontend(BSTROutConverter(aDefaultFrontend).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aDefaultFrontend=%ls hrc=%Rhrc\n", this, "SystemProperties::getDefaultFrontend", *aDefaultFrontend, hrc));
    return hrc;
}

STDMETHODIMP SystemPropertiesWrap::COMSETTER(DefaultFrontend)(IN_BSTR aDefaultFrontend)
{
    LogRelFlow(("{%p} %s: enter aDefaultFrontend=%ls\n", this, "SystemProperties::setDefaultFrontend", aDefaultFrontend));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setDefaultFrontend(BSTRInConverter(aDefaultFrontend).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "SystemProperties::setDefaultFrontend", hrc));
    return hrc;
}

//
// ISystemProperties methods
//

STDMETHODIMP SystemPropertiesWrap::GetMaxNetworkAdapters(ChipsetType_T aChipset,
                                                         ULONG *aMaxNetworkAdapters)
{
    LogRelFlow(("{%p} %s:enter aChipset=%RU32 aMaxNetworkAdapters=%p\n", this, "SystemProperties::getMaxNetworkAdapters", aChipset, aMaxNetworkAdapters));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aMaxNetworkAdapters);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getMaxNetworkAdapters(aChipset,
                                    aMaxNetworkAdapters);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aMaxNetworkAdapters=%RU32 hrc=%Rhrc\n", this, "SystemProperties::getMaxNetworkAdapters", *aMaxNetworkAdapters, hrc));
    return hrc;
}

STDMETHODIMP SystemPropertiesWrap::GetMaxNetworkAdaptersOfType(ChipsetType_T aChipset,
                                                               NetworkAttachmentType_T aType,
                                                               ULONG *aMaxNetworkAdapters)
{
    LogRelFlow(("{%p} %s:enter aChipset=%RU32 aType=%RU32 aMaxNetworkAdapters=%p\n", this, "SystemProperties::getMaxNetworkAdaptersOfType", aChipset, aType, aMaxNetworkAdapters));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aMaxNetworkAdapters);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getMaxNetworkAdaptersOfType(aChipset,
                                          aType,
                                          aMaxNetworkAdapters);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aMaxNetworkAdapters=%RU32 hrc=%Rhrc\n", this, "SystemProperties::getMaxNetworkAdaptersOfType", *aMaxNetworkAdapters, hrc));
    return hrc;
}

STDMETHODIMP SystemPropertiesWrap::GetMaxDevicesPerPortForStorageBus(StorageBus_T aBus,
                                                                     ULONG *aMaxDevicesPerPort)
{
    LogRelFlow(("{%p} %s:enter aBus=%RU32 aMaxDevicesPerPort=%p\n", this, "SystemProperties::getMaxDevicesPerPortForStorageBus", aBus, aMaxDevicesPerPort));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aMaxDevicesPerPort);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getMaxDevicesPerPortForStorageBus(aBus,
                                                aMaxDevicesPerPort);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aMaxDevicesPerPort=%RU32 hrc=%Rhrc\n", this, "SystemProperties::getMaxDevicesPerPortForStorageBus", *aMaxDevicesPerPort, hrc));
    return hrc;
}

STDMETHODIMP SystemPropertiesWrap::GetMinPortCountForStorageBus(StorageBus_T aBus,
                                                                ULONG *aMinPortCount)
{
    LogRelFlow(("{%p} %s:enter aBus=%RU32 aMinPortCount=%p\n", this, "SystemProperties::getMinPortCountForStorageBus", aBus, aMinPortCount));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aMinPortCount);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getMinPortCountForStorageBus(aBus,
                                           aMinPortCount);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aMinPortCount=%RU32 hrc=%Rhrc\n", this, "SystemProperties::getMinPortCountForStorageBus", *aMinPortCount, hrc));
    return hrc;
}

STDMETHODIMP SystemPropertiesWrap::GetMaxPortCountForStorageBus(StorageBus_T aBus,
                                                                ULONG *aMaxPortCount)
{
    LogRelFlow(("{%p} %s:enter aBus=%RU32 aMaxPortCount=%p\n", this, "SystemProperties::getMaxPortCountForStorageBus", aBus, aMaxPortCount));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aMaxPortCount);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getMaxPortCountForStorageBus(aBus,
                                           aMaxPortCount);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aMaxPortCount=%RU32 hrc=%Rhrc\n", this, "SystemProperties::getMaxPortCountForStorageBus", *aMaxPortCount, hrc));
    return hrc;
}

STDMETHODIMP SystemPropertiesWrap::GetMaxInstancesOfStorageBus(ChipsetType_T aChipset,
                                                               StorageBus_T aBus,
                                                               ULONG *aMaxInstances)
{
    LogRelFlow(("{%p} %s:enter aChipset=%RU32 aBus=%RU32 aMaxInstances=%p\n", this, "SystemProperties::getMaxInstancesOfStorageBus", aChipset, aBus, aMaxInstances));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aMaxInstances);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getMaxInstancesOfStorageBus(aChipset,
                                          aBus,
                                          aMaxInstances);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aMaxInstances=%RU32 hrc=%Rhrc\n", this, "SystemProperties::getMaxInstancesOfStorageBus", *aMaxInstances, hrc));
    return hrc;
}

STDMETHODIMP SystemPropertiesWrap::GetDeviceTypesForStorageBus(StorageBus_T aBus,
                                                               ComSafeArrayOut(DeviceType_T, aDeviceTypes))
{
    LogRelFlow(("{%p} %s:enter aBus=%RU32 aDeviceTypes=%p\n", this, "SystemProperties::getDeviceTypesForStorageBus", aBus, aDeviceTypes));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aDeviceTypes);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getDeviceTypesForStorageBus(aBus,
                                          ArrayOutConverter<DeviceType_T>(ComSafeArrayOutArg(aDeviceTypes)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aDeviceTypes=%zu hrc=%Rhrc\n", this, "SystemProperties::getDeviceTypesForStorageBus", ComSafeArraySize(*aDeviceTypes), hrc));
    return hrc;
}

STDMETHODIMP SystemPropertiesWrap::GetDefaultIoCacheSettingForStorageController(StorageControllerType_T aControllerType,
                                                                                BOOL *aEnabled)
{
    LogRelFlow(("{%p} %s:enter aControllerType=%RU32 aEnabled=%p\n", this, "SystemProperties::getDefaultIoCacheSettingForStorageController", aControllerType, aEnabled));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aEnabled);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getDefaultIoCacheSettingForStorageController(aControllerType,
                                                           aEnabled);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aEnabled=%RTbool hrc=%Rhrc\n", this, "SystemProperties::getDefaultIoCacheSettingForStorageController", *aEnabled, hrc));
    return hrc;
}

STDMETHODIMP SystemPropertiesWrap::GetMaxInstancesOfUSBControllerType(ChipsetType_T aChipset,
                                                                      USBControllerType_T aType,
                                                                      ULONG *aMaxInstances)
{
    LogRelFlow(("{%p} %s:enter aChipset=%RU32 aType=%RU32 aMaxInstances=%p\n", this, "SystemProperties::getMaxInstancesOfUSBControllerType", aChipset, aType, aMaxInstances));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aMaxInstances);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getMaxInstancesOfUSBControllerType(aChipset,
                                                 aType,
                                                 aMaxInstances);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aMaxInstances=%RU32 hrc=%Rhrc\n", this, "SystemProperties::getMaxInstancesOfUSBControllerType", *aMaxInstances, hrc));
    return hrc;
}

#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(SystemPropertiesWrap)
NS_IMPL_THREADSAFE_ISUPPORTS1_CI(SystemPropertiesWrap, ISystemProperties)
#endif // VBOX_WITH_XPCOM
