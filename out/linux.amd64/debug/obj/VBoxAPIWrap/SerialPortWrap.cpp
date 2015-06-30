/** @file
 *
 * VirtualBox API class wrapper code for ISerialPort.
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

#define LOG_GROUP_MAIN_OVERRIDE LOG_GROUP_MAIN_SERIALPORT

#include "SerialPortWrap.h"
#include "Logging.h"

DEFINE_EMPTY_CTOR_DTOR(SerialPortWrap)

//
// ISerialPort properties
//

STDMETHODIMP SerialPortWrap::COMGETTER(Slot)(ULONG *aSlot)
{
    LogRelFlow(("{%p} %s: enter aSlot=%p\n", this, "SerialPort::getSlot", aSlot));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aSlot);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getSlot(aSlot);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aSlot=%RU32 hrc=%Rhrc\n", this, "SerialPort::getSlot", *aSlot, hrc));
    return hrc;
}

STDMETHODIMP SerialPortWrap::COMGETTER(Enabled)(BOOL *aEnabled)
{
    LogRelFlow(("{%p} %s: enter aEnabled=%p\n", this, "SerialPort::getEnabled", aEnabled));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aEnabled);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getEnabled(aEnabled);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aEnabled=%RTbool hrc=%Rhrc\n", this, "SerialPort::getEnabled", *aEnabled, hrc));
    return hrc;
}

STDMETHODIMP SerialPortWrap::COMSETTER(Enabled)(BOOL aEnabled)
{
    LogRelFlow(("{%p} %s: enter aEnabled=%RTbool\n", this, "SerialPort::setEnabled", aEnabled));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setEnabled(aEnabled);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "SerialPort::setEnabled", hrc));
    return hrc;
}

STDMETHODIMP SerialPortWrap::COMGETTER(IOBase)(ULONG *aIOBase)
{
    LogRelFlow(("{%p} %s: enter aIOBase=%p\n", this, "SerialPort::getIOBase", aIOBase));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aIOBase);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getIOBase(aIOBase);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aIOBase=%RU32 hrc=%Rhrc\n", this, "SerialPort::getIOBase", *aIOBase, hrc));
    return hrc;
}

STDMETHODIMP SerialPortWrap::COMSETTER(IOBase)(ULONG aIOBase)
{
    LogRelFlow(("{%p} %s: enter aIOBase=%RU32\n", this, "SerialPort::setIOBase", aIOBase));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setIOBase(aIOBase);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "SerialPort::setIOBase", hrc));
    return hrc;
}

STDMETHODIMP SerialPortWrap::COMGETTER(IRQ)(ULONG *aIRQ)
{
    LogRelFlow(("{%p} %s: enter aIRQ=%p\n", this, "SerialPort::getIRQ", aIRQ));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aIRQ);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getIRQ(aIRQ);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aIRQ=%RU32 hrc=%Rhrc\n", this, "SerialPort::getIRQ", *aIRQ, hrc));
    return hrc;
}

STDMETHODIMP SerialPortWrap::COMSETTER(IRQ)(ULONG aIRQ)
{
    LogRelFlow(("{%p} %s: enter aIRQ=%RU32\n", this, "SerialPort::setIRQ", aIRQ));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setIRQ(aIRQ);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "SerialPort::setIRQ", hrc));
    return hrc;
}

STDMETHODIMP SerialPortWrap::COMGETTER(HostMode)(PortMode_T *aHostMode)
{
    LogRelFlow(("{%p} %s: enter aHostMode=%p\n", this, "SerialPort::getHostMode", aHostMode));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aHostMode);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getHostMode(aHostMode);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aHostMode=%RU32 hrc=%Rhrc\n", this, "SerialPort::getHostMode", *aHostMode, hrc));
    return hrc;
}

STDMETHODIMP SerialPortWrap::COMSETTER(HostMode)(PortMode_T aHostMode)
{
    LogRelFlow(("{%p} %s: enter aHostMode=%RU32\n", this, "SerialPort::setHostMode", aHostMode));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setHostMode(aHostMode);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "SerialPort::setHostMode", hrc));
    return hrc;
}

STDMETHODIMP SerialPortWrap::COMGETTER(Server)(BOOL *aServer)
{
    LogRelFlow(("{%p} %s: enter aServer=%p\n", this, "SerialPort::getServer", aServer));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aServer);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getServer(aServer);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aServer=%RTbool hrc=%Rhrc\n", this, "SerialPort::getServer", *aServer, hrc));
    return hrc;
}

STDMETHODIMP SerialPortWrap::COMSETTER(Server)(BOOL aServer)
{
    LogRelFlow(("{%p} %s: enter aServer=%RTbool\n", this, "SerialPort::setServer", aServer));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setServer(aServer);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "SerialPort::setServer", hrc));
    return hrc;
}

STDMETHODIMP SerialPortWrap::COMGETTER(Path)(BSTR *aPath)
{
    LogRelFlow(("{%p} %s: enter aPath=%p\n", this, "SerialPort::getPath", aPath));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aPath);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getPath(BSTROutConverter(aPath).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aPath=%ls hrc=%Rhrc\n", this, "SerialPort::getPath", *aPath, hrc));
    return hrc;
}

STDMETHODIMP SerialPortWrap::COMSETTER(Path)(IN_BSTR aPath)
{
    LogRelFlow(("{%p} %s: enter aPath=%ls\n", this, "SerialPort::setPath", aPath));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setPath(BSTRInConverter(aPath).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "SerialPort::setPath", hrc));
    return hrc;
}

//
// ISerialPort methods
//

#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(SerialPortWrap)
NS_IMPL_THREADSAFE_ISUPPORTS1_CI(SerialPortWrap, ISerialPort)
#endif // VBOX_WITH_XPCOM
