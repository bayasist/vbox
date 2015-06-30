/** @file
 *
 * VirtualBox API class wrapper code for ISnapshot.
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

#define LOG_GROUP_MAIN_OVERRIDE LOG_GROUP_MAIN_SNAPSHOT

#include "SnapshotWrap.h"
#include "Logging.h"

DEFINE_EMPTY_CTOR_DTOR(SnapshotWrap)

//
// ISnapshot properties
//

STDMETHODIMP SnapshotWrap::COMGETTER(Id)(BSTR *aId)
{
    LogRelFlow(("{%p} %s: enter aId=%p\n", this, "Snapshot::getId", aId));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aId);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getId(UuidOutConverter(aId).uuid());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aId=%ls hrc=%Rhrc\n", this, "Snapshot::getId", *aId, hrc));
    return hrc;
}

STDMETHODIMP SnapshotWrap::COMGETTER(Name)(BSTR *aName)
{
    LogRelFlow(("{%p} %s: enter aName=%p\n", this, "Snapshot::getName", aName));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aName);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getName(BSTROutConverter(aName).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aName=%ls hrc=%Rhrc\n", this, "Snapshot::getName", *aName, hrc));
    return hrc;
}

STDMETHODIMP SnapshotWrap::COMSETTER(Name)(IN_BSTR aName)
{
    LogRelFlow(("{%p} %s: enter aName=%ls\n", this, "Snapshot::setName", aName));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setName(BSTRInConverter(aName).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Snapshot::setName", hrc));
    return hrc;
}

STDMETHODIMP SnapshotWrap::COMGETTER(Description)(BSTR *aDescription)
{
    LogRelFlow(("{%p} %s: enter aDescription=%p\n", this, "Snapshot::getDescription", aDescription));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aDescription);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getDescription(BSTROutConverter(aDescription).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aDescription=%ls hrc=%Rhrc\n", this, "Snapshot::getDescription", *aDescription, hrc));
    return hrc;
}

STDMETHODIMP SnapshotWrap::COMSETTER(Description)(IN_BSTR aDescription)
{
    LogRelFlow(("{%p} %s: enter aDescription=%ls\n", this, "Snapshot::setDescription", aDescription));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setDescription(BSTRInConverter(aDescription).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Snapshot::setDescription", hrc));
    return hrc;
}

STDMETHODIMP SnapshotWrap::COMGETTER(TimeStamp)(LONG64 *aTimeStamp)
{
    LogRelFlow(("{%p} %s: enter aTimeStamp=%p\n", this, "Snapshot::getTimeStamp", aTimeStamp));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aTimeStamp);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getTimeStamp(aTimeStamp);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aTimeStamp=%RI64 hrc=%Rhrc\n", this, "Snapshot::getTimeStamp", *aTimeStamp, hrc));
    return hrc;
}

STDMETHODIMP SnapshotWrap::COMGETTER(Online)(BOOL *aOnline)
{
    LogRelFlow(("{%p} %s: enter aOnline=%p\n", this, "Snapshot::getOnline", aOnline));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aOnline);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getOnline(aOnline);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aOnline=%RTbool hrc=%Rhrc\n", this, "Snapshot::getOnline", *aOnline, hrc));
    return hrc;
}

STDMETHODIMP SnapshotWrap::COMGETTER(Machine)(IMachine **aMachine)
{
    LogRelFlow(("{%p} %s: enter aMachine=%p\n", this, "Snapshot::getMachine", aMachine));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aMachine);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getMachine(ComTypeOutConverter<IMachine>(aMachine).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aMachine=%p hrc=%Rhrc\n", this, "Snapshot::getMachine", *aMachine, hrc));
    return hrc;
}

STDMETHODIMP SnapshotWrap::COMGETTER(Parent)(ISnapshot **aParent)
{
    LogRelFlow(("{%p} %s: enter aParent=%p\n", this, "Snapshot::getParent", aParent));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aParent);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getParent(ComTypeOutConverter<ISnapshot>(aParent).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aParent=%p hrc=%Rhrc\n", this, "Snapshot::getParent", *aParent, hrc));
    return hrc;
}

STDMETHODIMP SnapshotWrap::COMGETTER(Children)(ComSafeArrayOut(ISnapshot *, aChildren))
{
    LogRelFlow(("{%p} %s: enter aChildren=%p\n", this, "Snapshot::getChildren", aChildren));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aChildren);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getChildren(ArrayComTypeOutConverter<ISnapshot>(ComSafeArrayOutArg(aChildren)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aChildren=%zu hrc=%Rhrc\n", this, "Snapshot::getChildren", ComSafeArraySize(*aChildren), hrc));
    return hrc;
}

//
// ISnapshot methods
//

STDMETHODIMP SnapshotWrap::GetChildrenCount(ULONG *aChildrenCount)
{
    LogRelFlow(("{%p} %s:enter aChildrenCount=%p\n", this, "Snapshot::getChildrenCount", aChildrenCount));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aChildrenCount);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getChildrenCount(aChildrenCount);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aChildrenCount=%RU32 hrc=%Rhrc\n", this, "Snapshot::getChildrenCount", *aChildrenCount, hrc));
    return hrc;
}

#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(SnapshotWrap)
NS_IMPL_THREADSAFE_ISUPPORTS1_CI(SnapshotWrap, ISnapshot)
#endif // VBOX_WITH_XPCOM
