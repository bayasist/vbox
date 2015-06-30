/** @file
 *
 * VirtualBox API class wrapper code for IVFSExplorer.
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

#define LOG_GROUP_MAIN_OVERRIDE LOG_GROUP_MAIN_VFSEXPLORER

#include "VFSExplorerWrap.h"
#include "Logging.h"

DEFINE_EMPTY_CTOR_DTOR(VFSExplorerWrap)

//
// IVFSExplorer properties
//

STDMETHODIMP VFSExplorerWrap::COMGETTER(Path)(BSTR *aPath)
{
    LogRelFlow(("{%p} %s: enter aPath=%p\n", this, "VFSExplorer::getPath", aPath));

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

    LogRelFlow(("{%p} %s: leave *aPath=%ls hrc=%Rhrc\n", this, "VFSExplorer::getPath", *aPath, hrc));
    return hrc;
}

STDMETHODIMP VFSExplorerWrap::COMGETTER(Type)(VFSType_T *aType)
{
    LogRelFlow(("{%p} %s: enter aType=%p\n", this, "VFSExplorer::getType", aType));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aType);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getType(aType);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aType=%RU32 hrc=%Rhrc\n", this, "VFSExplorer::getType", *aType, hrc));
    return hrc;
}

//
// IVFSExplorer methods
//

STDMETHODIMP VFSExplorerWrap::Update(IProgress **aProgress)
{
    LogRelFlow(("{%p} %s:enter aProgress=%p\n", this, "VFSExplorer::update", aProgress));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aProgress);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = update(ComTypeOutConverter<IProgress>(aProgress).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aProgress=%p hrc=%Rhrc\n", this, "VFSExplorer::update", *aProgress, hrc));
    return hrc;
}

STDMETHODIMP VFSExplorerWrap::Cd(IN_BSTR aDir,
                                 IProgress **aProgress)
{
    LogRelFlow(("{%p} %s:enter aDir=%ls aProgress=%p\n", this, "VFSExplorer::cd", aDir, aProgress));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aProgress);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = cd(BSTRInConverter(aDir).str(),
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

    LogRelFlow(("{%p} %s: leave aProgress=%p hrc=%Rhrc\n", this, "VFSExplorer::cd", *aProgress, hrc));
    return hrc;
}

STDMETHODIMP VFSExplorerWrap::CdUp(IProgress **aProgress)
{
    LogRelFlow(("{%p} %s:enter aProgress=%p\n", this, "VFSExplorer::cdUp", aProgress));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aProgress);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = cdUp(ComTypeOutConverter<IProgress>(aProgress).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aProgress=%p hrc=%Rhrc\n", this, "VFSExplorer::cdUp", *aProgress, hrc));
    return hrc;
}

STDMETHODIMP VFSExplorerWrap::EntryList(ComSafeArrayOut(BSTR, aNames),
                                        ComSafeArrayOut(ULONG, aTypes),
                                        ComSafeArrayOut(LONG64, aSizes),
                                        ComSafeArrayOut(ULONG, aModes))
{
    LogRelFlow(("{%p} %s:enter aNames=%p aTypes=%p aSizes=%p aModes=%p\n", this, "VFSExplorer::entryList", aNames, aTypes, aSizes, aModes));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aNames);
        CheckComArgOutPointerValidThrow(aTypes);
        CheckComArgOutPointerValidThrow(aSizes);
        CheckComArgOutPointerValidThrow(aModes);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = entryList(ArrayBSTROutConverter(ComSafeArrayOutArg(aNames)).array(),
                        ArrayOutConverter<ULONG>(ComSafeArrayOutArg(aTypes)).array(),
                        ArrayOutConverter<LONG64>(ComSafeArrayOutArg(aSizes)).array(),
                        ArrayOutConverter<ULONG>(ComSafeArrayOutArg(aModes)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aNames=%zu *aTypes=%zu *aSizes=%zu *aModes=%zu hrc=%Rhrc\n", this, "VFSExplorer::entryList", ComSafeArraySize(*aNames), ComSafeArraySize(*aTypes), ComSafeArraySize(*aSizes), ComSafeArraySize(*aModes), hrc));
    return hrc;
}

STDMETHODIMP VFSExplorerWrap::Exists(ComSafeArrayIn(IN_BSTR, aNames),
                                     ComSafeArrayOut(BSTR, aExists))
{
    LogRelFlow(("{%p} %s:enter aNames=%zu aExists=%p\n", this, "VFSExplorer::exists", aNames, aExists));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aExists);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = exists(ArrayBSTRInConverter(ComSafeArrayInArg(aNames)).array(),
                     ArrayBSTROutConverter(ComSafeArrayOutArg(aExists)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aExists=%zu hrc=%Rhrc\n", this, "VFSExplorer::exists", ComSafeArraySize(*aExists), hrc));
    return hrc;
}

STDMETHODIMP VFSExplorerWrap::Remove(ComSafeArrayIn(IN_BSTR, aNames),
                                     IProgress **aProgress)
{
    LogRelFlow(("{%p} %s:enter aNames=%zu aProgress=%p\n", this, "VFSExplorer::remove", aNames, aProgress));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aProgress);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = remove(ArrayBSTRInConverter(ComSafeArrayInArg(aNames)).array(),
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

    LogRelFlow(("{%p} %s: leave aProgress=%p hrc=%Rhrc\n", this, "VFSExplorer::remove", *aProgress, hrc));
    return hrc;
}

#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(VFSExplorerWrap)
NS_IMPL_THREADSAFE_ISUPPORTS1_CI(VFSExplorerWrap, IVFSExplorer)
#endif // VBOX_WITH_XPCOM
