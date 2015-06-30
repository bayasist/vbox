/** @file
 *
 * VirtualBox API class wrapper code for IParallelPort.
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

#define LOG_GROUP_MAIN_OVERRIDE LOG_GROUP_MAIN_PARALLELPORT

#include "ParallelPortWrap.h"
#include "Logging.h"

DEFINE_EMPTY_CTOR_DTOR(ParallelPortWrap)

//
// IParallelPort properties
//

STDMETHODIMP ParallelPortWrap::COMGETTER(Slot)(ULONG *aSlot)
{
    LogRelFlow(("{%p} %s: enter aSlot=%p\n", this, "ParallelPort::getSlot", aSlot));

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

    LogRelFlow(("{%p} %s: leave *aSlot=%RU32 hrc=%Rhrc\n", this, "ParallelPort::getSlot", *aSlot, hrc));
    return hrc;
}

STDMETHODIMP ParallelPortWrap::COMGETTER(Enabled)(BOOL *aEnabled)
{
    LogRelFlow(("{%p} %s: enter aEnabled=%p\n", this, "ParallelPort::getEnabled", aEnabled));

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

    LogRelFlow(("{%p} %s: leave *aEnabled=%RTbool hrc=%Rhrc\n", this, "ParallelPort::getEnabled", *aEnabled, hrc));
    return hrc;
}

STDMETHODIMP ParallelPortWrap::COMSETTER(Enabled)(BOOL aEnabled)
{
    LogRelFlow(("{%p} %s: enter aEnabled=%RTbool\n", this, "ParallelPort::setEnabled", aEnabled));

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

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "ParallelPort::setEnabled", hrc));
    return hrc;
}

STDMETHODIMP ParallelPortWrap::COMGETTER(IOBase)(ULONG *aIOBase)
{
    LogRelFlow(("{%p} %s: enter aIOBase=%p\n", this, "ParallelPort::getIOBase", aIOBase));

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

    LogRelFlow(("{%p} %s: leave *aIOBase=%RU32 hrc=%Rhrc\n", this, "ParallelPort::getIOBase", *aIOBase, hrc));
    return hrc;
}

STDMETHODIMP ParallelPortWrap::COMSETTER(IOBase)(ULONG aIOBase)
{
    LogRelFlow(("{%p} %s: enter aIOBase=%RU32\n", this, "ParallelPort::setIOBase", aIOBase));

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

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "ParallelPort::setIOBase", hrc));
    return hrc;
}

STDMETHODIMP ParallelPortWrap::COMGETTER(IRQ)(ULONG *aIRQ)
{
    LogRelFlow(("{%p} %s: enter aIRQ=%p\n", this, "ParallelPort::getIRQ", aIRQ));

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

    LogRelFlow(("{%p} %s: leave *aIRQ=%RU32 hrc=%Rhrc\n", this, "ParallelPort::getIRQ", *aIRQ, hrc));
    return hrc;
}

STDMETHODIMP ParallelPortWrap::COMSETTER(IRQ)(ULONG aIRQ)
{
    LogRelFlow(("{%p} %s: enter aIRQ=%RU32\n", this, "ParallelPort::setIRQ", aIRQ));

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

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "ParallelPort::setIRQ", hrc));
    return hrc;
}

STDMETHODIMP ParallelPortWrap::COMGETTER(Path)(BSTR *aPath)
{
    LogRelFlow(("{%p} %s: enter aPath=%p\n", this, "ParallelPort::getPath", aPath));

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

    LogRelFlow(("{%p} %s: leave *aPath=%ls hrc=%Rhrc\n", this, "ParallelPort::getPath", *aPath, hrc));
    return hrc;
}

STDMETHODIMP ParallelPortWrap::COMSETTER(Path)(IN_BSTR aPath)
{
    LogRelFlow(("{%p} %s: enter aPath=%ls\n", this, "ParallelPort::setPath", aPath));

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

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "ParallelPort::setPath", hrc));
    return hrc;
}

//
// IParallelPort methods
//

#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(ParallelPortWrap)
NS_IMPL_THREADSAFE_ISUPPORTS1_CI(ParallelPortWrap, IParallelPort)
#endif // VBOX_WITH_XPCOM
