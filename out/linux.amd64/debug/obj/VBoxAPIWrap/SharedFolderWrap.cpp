/** @file
 *
 * VirtualBox API class wrapper code for ISharedFolder.
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

#define LOG_GROUP_MAIN_OVERRIDE LOG_GROUP_MAIN_SHAREDFOLDER

#include "SharedFolderWrap.h"
#include "Logging.h"

DEFINE_EMPTY_CTOR_DTOR(SharedFolderWrap)

//
// ISharedFolder properties
//

STDMETHODIMP SharedFolderWrap::COMGETTER(Name)(BSTR *aName)
{
    LogRelFlow(("{%p} %s: enter aName=%p\n", this, "SharedFolder::getName", aName));

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

    LogRelFlow(("{%p} %s: leave *aName=%ls hrc=%Rhrc\n", this, "SharedFolder::getName", *aName, hrc));
    return hrc;
}

STDMETHODIMP SharedFolderWrap::COMGETTER(HostPath)(BSTR *aHostPath)
{
    LogRelFlow(("{%p} %s: enter aHostPath=%p\n", this, "SharedFolder::getHostPath", aHostPath));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aHostPath);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getHostPath(BSTROutConverter(aHostPath).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aHostPath=%ls hrc=%Rhrc\n", this, "SharedFolder::getHostPath", *aHostPath, hrc));
    return hrc;
}

STDMETHODIMP SharedFolderWrap::COMGETTER(Accessible)(BOOL *aAccessible)
{
    LogRelFlow(("{%p} %s: enter aAccessible=%p\n", this, "SharedFolder::getAccessible", aAccessible));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aAccessible);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getAccessible(aAccessible);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aAccessible=%RTbool hrc=%Rhrc\n", this, "SharedFolder::getAccessible", *aAccessible, hrc));
    return hrc;
}

STDMETHODIMP SharedFolderWrap::COMGETTER(Writable)(BOOL *aWritable)
{
    LogRelFlow(("{%p} %s: enter aWritable=%p\n", this, "SharedFolder::getWritable", aWritable));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aWritable);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getWritable(aWritable);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aWritable=%RTbool hrc=%Rhrc\n", this, "SharedFolder::getWritable", *aWritable, hrc));
    return hrc;
}

STDMETHODIMP SharedFolderWrap::COMGETTER(AutoMount)(BOOL *aAutoMount)
{
    LogRelFlow(("{%p} %s: enter aAutoMount=%p\n", this, "SharedFolder::getAutoMount", aAutoMount));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aAutoMount);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getAutoMount(aAutoMount);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aAutoMount=%RTbool hrc=%Rhrc\n", this, "SharedFolder::getAutoMount", *aAutoMount, hrc));
    return hrc;
}

STDMETHODIMP SharedFolderWrap::COMGETTER(LastAccessError)(BSTR *aLastAccessError)
{
    LogRelFlow(("{%p} %s: enter aLastAccessError=%p\n", this, "SharedFolder::getLastAccessError", aLastAccessError));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aLastAccessError);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getLastAccessError(BSTROutConverter(aLastAccessError).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aLastAccessError=%ls hrc=%Rhrc\n", this, "SharedFolder::getLastAccessError", *aLastAccessError, hrc));
    return hrc;
}

//
// ISharedFolder methods
//

#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(SharedFolderWrap)
NS_IMPL_THREADSAFE_ISUPPORTS1_CI(SharedFolderWrap, ISharedFolder)
#endif // VBOX_WITH_XPCOM
