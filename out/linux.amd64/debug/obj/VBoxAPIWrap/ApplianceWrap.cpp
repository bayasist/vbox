/** @file
 *
 * VirtualBox API class wrapper code for IAppliance.
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

#define LOG_GROUP_MAIN_OVERRIDE LOG_GROUP_MAIN_APPLIANCE

#include "ApplianceWrap.h"
#include "Logging.h"

DEFINE_EMPTY_CTOR_DTOR(ApplianceWrap)

//
// IAppliance properties
//

STDMETHODIMP ApplianceWrap::COMGETTER(Path)(BSTR *aPath)
{
    LogRelFlow(("{%p} %s: enter aPath=%p\n", this, "Appliance::getPath", aPath));

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

    LogRelFlow(("{%p} %s: leave *aPath=%ls hrc=%Rhrc\n", this, "Appliance::getPath", *aPath, hrc));
    return hrc;
}

STDMETHODIMP ApplianceWrap::COMGETTER(Disks)(ComSafeArrayOut(BSTR, aDisks))
{
    LogRelFlow(("{%p} %s: enter aDisks=%p\n", this, "Appliance::getDisks", aDisks));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aDisks);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getDisks(ArrayBSTROutConverter(ComSafeArrayOutArg(aDisks)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aDisks=%zu hrc=%Rhrc\n", this, "Appliance::getDisks", ComSafeArraySize(*aDisks), hrc));
    return hrc;
}

STDMETHODIMP ApplianceWrap::COMGETTER(VirtualSystemDescriptions)(ComSafeArrayOut(IVirtualSystemDescription *, aVirtualSystemDescriptions))
{
    LogRelFlow(("{%p} %s: enter aVirtualSystemDescriptions=%p\n", this, "Appliance::getVirtualSystemDescriptions", aVirtualSystemDescriptions));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aVirtualSystemDescriptions);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getVirtualSystemDescriptions(ArrayComTypeOutConverter<IVirtualSystemDescription>(ComSafeArrayOutArg(aVirtualSystemDescriptions)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aVirtualSystemDescriptions=%zu hrc=%Rhrc\n", this, "Appliance::getVirtualSystemDescriptions", ComSafeArraySize(*aVirtualSystemDescriptions), hrc));
    return hrc;
}

STDMETHODIMP ApplianceWrap::COMGETTER(Machines)(ComSafeArrayOut(BSTR, aMachines))
{
    LogRelFlow(("{%p} %s: enter aMachines=%p\n", this, "Appliance::getMachines", aMachines));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aMachines);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getMachines(ArrayBSTROutConverter(ComSafeArrayOutArg(aMachines)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aMachines=%zu hrc=%Rhrc\n", this, "Appliance::getMachines", ComSafeArraySize(*aMachines), hrc));
    return hrc;
}

//
// IAppliance methods
//

STDMETHODIMP ApplianceWrap::Read(IN_BSTR aFile,
                                 IProgress **aProgress)
{
    LogRelFlow(("{%p} %s:enter aFile=%ls aProgress=%p\n", this, "Appliance::read", aFile, aProgress));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aProgress);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = read(BSTRInConverter(aFile).str(),
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

    LogRelFlow(("{%p} %s: leave aProgress=%p hrc=%Rhrc\n", this, "Appliance::read", *aProgress, hrc));
    return hrc;
}

STDMETHODIMP ApplianceWrap::Interpret()
{
    LogRelFlow(("{%p} %s:enter\n", this, "Appliance::interpret"));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = interpret();
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "Appliance::interpret", hrc));
    return hrc;
}

STDMETHODIMP ApplianceWrap::ImportMachines(ComSafeArrayIn(ImportOptions_T, aOptions),
                                           IProgress **aProgress)
{
    LogRelFlow(("{%p} %s:enter aOptions=%zu aProgress=%p\n", this, "Appliance::importMachines", aOptions, aProgress));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aProgress);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = importMachines(ArrayInConverter<ImportOptions_T>(ComSafeArrayInArg(aOptions)).array(),
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

    LogRelFlow(("{%p} %s: leave aProgress=%p hrc=%Rhrc\n", this, "Appliance::importMachines", *aProgress, hrc));
    return hrc;
}

STDMETHODIMP ApplianceWrap::CreateVFSExplorer(IN_BSTR aURI,
                                              IVFSExplorer **aExplorer)
{
    LogRelFlow(("{%p} %s:enter aURI=%ls aExplorer=%p\n", this, "Appliance::createVFSExplorer", aURI, aExplorer));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aExplorer);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = createVFSExplorer(BSTRInConverter(aURI).str(),
                                ComTypeOutConverter<IVFSExplorer>(aExplorer).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aExplorer=%p hrc=%Rhrc\n", this, "Appliance::createVFSExplorer", *aExplorer, hrc));
    return hrc;
}

STDMETHODIMP ApplianceWrap::Write(IN_BSTR aFormat,
                                  ComSafeArrayIn(ExportOptions_T, aOptions),
                                  IN_BSTR aPath,
                                  IProgress **aProgress)
{
    LogRelFlow(("{%p} %s:enter aFormat=%ls aOptions=%zu aPath=%ls aProgress=%p\n", this, "Appliance::write", aFormat, aOptions, aPath, aProgress));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aProgress);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = write(BSTRInConverter(aFormat).str(),
                    ArrayInConverter<ExportOptions_T>(ComSafeArrayInArg(aOptions)).array(),
                    BSTRInConverter(aPath).str(),
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

    LogRelFlow(("{%p} %s: leave aProgress=%p hrc=%Rhrc\n", this, "Appliance::write", *aProgress, hrc));
    return hrc;
}

STDMETHODIMP ApplianceWrap::GetWarnings(ComSafeArrayOut(BSTR, aWarnings))
{
    LogRelFlow(("{%p} %s:enter aWarnings=%p\n", this, "Appliance::getWarnings", aWarnings));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aWarnings);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getWarnings(ArrayBSTROutConverter(ComSafeArrayOutArg(aWarnings)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aWarnings=%zu hrc=%Rhrc\n", this, "Appliance::getWarnings", ComSafeArraySize(*aWarnings), hrc));
    return hrc;
}

#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(ApplianceWrap)
NS_IMPL_THREADSAFE_ISUPPORTS1_CI(ApplianceWrap, IAppliance)
#endif // VBOX_WITH_XPCOM
