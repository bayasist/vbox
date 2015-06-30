/** @file
 *
 * VirtualBox API class wrapper code for IDirectory.
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

#define LOG_GROUP_MAIN_OVERRIDE LOG_GROUP_MAIN_DIRECTORY

#include "DirectoryWrap.h"
#include "Logging.h"

DEFINE_EMPTY_CTOR_DTOR(DirectoryWrap)

//
// IDirectory properties
//

STDMETHODIMP DirectoryWrap::COMGETTER(DirectoryName)(BSTR *aDirectoryName)
{
    LogRelFlow(("{%p} %s: enter aDirectoryName=%p\n", this, "Directory::getDirectoryName", aDirectoryName));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aDirectoryName);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getDirectoryName(BSTROutConverter(aDirectoryName).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aDirectoryName=%ls hrc=%Rhrc\n", this, "Directory::getDirectoryName", *aDirectoryName, hrc));
    return hrc;
}

STDMETHODIMP DirectoryWrap::COMGETTER(Filter)(BSTR *aFilter)
{
    LogRelFlow(("{%p} %s: enter aFilter=%p\n", this, "Directory::getFilter", aFilter));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aFilter);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getFilter(BSTROutConverter(aFilter).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aFilter=%ls hrc=%Rhrc\n", this, "Directory::getFilter", *aFilter, hrc));
    return hrc;
}

//
// IDirectory methods
//

STDMETHODIMP DirectoryWrap::Close()
{
    LogRelFlow(("{%p} %s:enter\n", this, "Directory::close"));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = close();
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Directory::close", hrc));
    return hrc;
}

STDMETHODIMP DirectoryWrap::Read(IFsObjInfo **aObjInfo)
{
    LogRelFlow(("{%p} %s:enter aObjInfo=%p\n", this, "Directory::read", aObjInfo));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aObjInfo);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = read(ComTypeOutConverter<IFsObjInfo>(aObjInfo).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aObjInfo=%p hrc=%Rhrc\n", this, "Directory::read", *aObjInfo, hrc));
    return hrc;
}

#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(DirectoryWrap)
NS_IMPL_THREADSAFE_ISUPPORTS1_CI(DirectoryWrap, IDirectory)
#endif // VBOX_WITH_XPCOM
