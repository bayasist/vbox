/** @file
 *
 * VirtualBox API class wrapper code for IGuestSession.
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

#define LOG_GROUP_MAIN_OVERRIDE LOG_GROUP_MAIN_GUESTSESSION

#include "GuestSessionWrap.h"
#include "Logging.h"

DEFINE_EMPTY_CTOR_DTOR(GuestSessionWrap)

//
// IGuestSession properties
//

STDMETHODIMP GuestSessionWrap::COMGETTER(User)(BSTR *aUser)
{
    LogRelFlow(("{%p} %s: enter aUser=%p\n", this, "GuestSession::getUser", aUser));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aUser);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getUser(BSTROutConverter(aUser).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aUser=%ls hrc=%Rhrc\n", this, "GuestSession::getUser", *aUser, hrc));
    return hrc;
}

STDMETHODIMP GuestSessionWrap::COMGETTER(Domain)(BSTR *aDomain)
{
    LogRelFlow(("{%p} %s: enter aDomain=%p\n", this, "GuestSession::getDomain", aDomain));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aDomain);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getDomain(BSTROutConverter(aDomain).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aDomain=%ls hrc=%Rhrc\n", this, "GuestSession::getDomain", *aDomain, hrc));
    return hrc;
}

STDMETHODIMP GuestSessionWrap::COMGETTER(Name)(BSTR *aName)
{
    LogRelFlow(("{%p} %s: enter aName=%p\n", this, "GuestSession::getName", aName));

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

    LogRelFlow(("{%p} %s: leave *aName=%ls hrc=%Rhrc\n", this, "GuestSession::getName", *aName, hrc));
    return hrc;
}

STDMETHODIMP GuestSessionWrap::COMGETTER(Id)(ULONG *aId)
{
    LogRelFlow(("{%p} %s: enter aId=%p\n", this, "GuestSession::getId", aId));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aId);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getId(aId);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aId=%RU32 hrc=%Rhrc\n", this, "GuestSession::getId", *aId, hrc));
    return hrc;
}

STDMETHODIMP GuestSessionWrap::COMGETTER(Timeout)(ULONG *aTimeout)
{
    LogRelFlow(("{%p} %s: enter aTimeout=%p\n", this, "GuestSession::getTimeout", aTimeout));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aTimeout);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getTimeout(aTimeout);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aTimeout=%RU32 hrc=%Rhrc\n", this, "GuestSession::getTimeout", *aTimeout, hrc));
    return hrc;
}

STDMETHODIMP GuestSessionWrap::COMSETTER(Timeout)(ULONG aTimeout)
{
    LogRelFlow(("{%p} %s: enter aTimeout=%RU32\n", this, "GuestSession::setTimeout", aTimeout));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setTimeout(aTimeout);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "GuestSession::setTimeout", hrc));
    return hrc;
}

STDMETHODIMP GuestSessionWrap::COMGETTER(ProtocolVersion)(ULONG *aProtocolVersion)
{
    LogRelFlow(("{%p} %s: enter aProtocolVersion=%p\n", this, "GuestSession::getProtocolVersion", aProtocolVersion));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aProtocolVersion);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getProtocolVersion(aProtocolVersion);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aProtocolVersion=%RU32 hrc=%Rhrc\n", this, "GuestSession::getProtocolVersion", *aProtocolVersion, hrc));
    return hrc;
}

STDMETHODIMP GuestSessionWrap::COMGETTER(Status)(GuestSessionStatus_T *aStatus)
{
    LogRelFlow(("{%p} %s: enter aStatus=%p\n", this, "GuestSession::getStatus", aStatus));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aStatus);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getStatus(aStatus);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aStatus=%RU32 hrc=%Rhrc\n", this, "GuestSession::getStatus", *aStatus, hrc));
    return hrc;
}

STDMETHODIMP GuestSessionWrap::COMGETTER(Environment)(ComSafeArrayOut(BSTR, aEnvironment))
{
    LogRelFlow(("{%p} %s: enter aEnvironment=%p\n", this, "GuestSession::getEnvironment", aEnvironment));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aEnvironment);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getEnvironment(ArrayBSTROutConverter(ComSafeArrayOutArg(aEnvironment)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aEnvironment=%zu hrc=%Rhrc\n", this, "GuestSession::getEnvironment", ComSafeArraySize(*aEnvironment), hrc));
    return hrc;
}

STDMETHODIMP GuestSessionWrap::COMSETTER(Environment)(ComSafeArrayIn(IN_BSTR, aEnvironment))
{
    LogRelFlow(("{%p} %s: enter aEnvironment=%zu\n", this, "GuestSession::setEnvironment", ComSafeArraySize(aEnvironment)));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setEnvironment(ArrayBSTRInConverter(ComSafeArrayInArg(aEnvironment)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "GuestSession::setEnvironment", hrc));
    return hrc;
}

STDMETHODIMP GuestSessionWrap::COMGETTER(Processes)(ComSafeArrayOut(IGuestProcess *, aProcesses))
{
    LogRelFlow(("{%p} %s: enter aProcesses=%p\n", this, "GuestSession::getProcesses", aProcesses));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aProcesses);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getProcesses(ArrayComTypeOutConverter<IGuestProcess>(ComSafeArrayOutArg(aProcesses)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aProcesses=%zu hrc=%Rhrc\n", this, "GuestSession::getProcesses", ComSafeArraySize(*aProcesses), hrc));
    return hrc;
}

STDMETHODIMP GuestSessionWrap::COMGETTER(Directories)(ComSafeArrayOut(IGuestDirectory *, aDirectories))
{
    LogRelFlow(("{%p} %s: enter aDirectories=%p\n", this, "GuestSession::getDirectories", aDirectories));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aDirectories);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getDirectories(ArrayComTypeOutConverter<IGuestDirectory>(ComSafeArrayOutArg(aDirectories)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aDirectories=%zu hrc=%Rhrc\n", this, "GuestSession::getDirectories", ComSafeArraySize(*aDirectories), hrc));
    return hrc;
}

STDMETHODIMP GuestSessionWrap::COMGETTER(Files)(ComSafeArrayOut(IGuestFile *, aFiles))
{
    LogRelFlow(("{%p} %s: enter aFiles=%p\n", this, "GuestSession::getFiles", aFiles));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aFiles);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getFiles(ArrayComTypeOutConverter<IGuestFile>(ComSafeArrayOutArg(aFiles)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aFiles=%zu hrc=%Rhrc\n", this, "GuestSession::getFiles", ComSafeArraySize(*aFiles), hrc));
    return hrc;
}

STDMETHODIMP GuestSessionWrap::COMGETTER(EventSource)(IEventSource **aEventSource)
{
    LogRelFlow(("{%p} %s: enter aEventSource=%p\n", this, "GuestSession::getEventSource", aEventSource));

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

    LogRelFlow(("{%p} %s: leave *aEventSource=%p hrc=%Rhrc\n", this, "GuestSession::getEventSource", *aEventSource, hrc));
    return hrc;
}

//
// IGuestSession methods
//

STDMETHODIMP GuestSessionWrap::Close()
{
    LogRelFlow(("{%p} %s:enter\n", this, "GuestSession::close"));

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

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "GuestSession::close", hrc));
    return hrc;
}

STDMETHODIMP GuestSessionWrap::CopyFrom(IN_BSTR aSource,
                                        IN_BSTR aDest,
                                        ComSafeArrayIn(CopyFileFlag_T, aFlags),
                                        IProgress **aProgress)
{
    LogRelFlow(("{%p} %s:enter aSource=%ls aDest=%ls aFlags=%zu aProgress=%p\n", this, "GuestSession::copyFrom", aSource, aDest, aFlags, aProgress));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aProgress);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = copyFrom(BSTRInConverter(aSource).str(),
                       BSTRInConverter(aDest).str(),
                       ArrayInConverter<CopyFileFlag_T>(ComSafeArrayInArg(aFlags)).array(),
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

    LogRelFlow(("{%p} %s: leave aProgress=%p hrc=%Rhrc\n", this, "GuestSession::copyFrom", *aProgress, hrc));
    return hrc;
}

STDMETHODIMP GuestSessionWrap::CopyTo(IN_BSTR aSource,
                                      IN_BSTR aDest,
                                      ComSafeArrayIn(CopyFileFlag_T, aFlags),
                                      IProgress **aProgress)
{
    LogRelFlow(("{%p} %s:enter aSource=%ls aDest=%ls aFlags=%zu aProgress=%p\n", this, "GuestSession::copyTo", aSource, aDest, aFlags, aProgress));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aProgress);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = copyTo(BSTRInConverter(aSource).str(),
                     BSTRInConverter(aDest).str(),
                     ArrayInConverter<CopyFileFlag_T>(ComSafeArrayInArg(aFlags)).array(),
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

    LogRelFlow(("{%p} %s: leave aProgress=%p hrc=%Rhrc\n", this, "GuestSession::copyTo", *aProgress, hrc));
    return hrc;
}

STDMETHODIMP GuestSessionWrap::DirectoryCreate(IN_BSTR aPath,
                                               ULONG aMode,
                                               ComSafeArrayIn(DirectoryCreateFlag_T, aFlags))
{
    LogRelFlow(("{%p} %s:enter aPath=%ls aMode=%RU32 aFlags=%zu\n", this, "GuestSession::directoryCreate", aPath, aMode, aFlags));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = directoryCreate(BSTRInConverter(aPath).str(),
                              aMode,
                              ArrayInConverter<DirectoryCreateFlag_T>(ComSafeArrayInArg(aFlags)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "GuestSession::directoryCreate", hrc));
    return hrc;
}

STDMETHODIMP GuestSessionWrap::DirectoryCreateTemp(IN_BSTR aTemplateName,
                                                   ULONG aMode,
                                                   IN_BSTR aPath,
                                                   BOOL aSecure,
                                                   BSTR *aDirectory)
{
    LogRelFlow(("{%p} %s:enter aTemplateName=%ls aMode=%RU32 aPath=%ls aSecure=%RTbool aDirectory=%p\n", this, "GuestSession::directoryCreateTemp", aTemplateName, aMode, aPath, aSecure, aDirectory));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aDirectory);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = directoryCreateTemp(BSTRInConverter(aTemplateName).str(),
                                  aMode,
                                  BSTRInConverter(aPath).str(),
                                  aSecure,
                                  BSTROutConverter(aDirectory).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aDirectory=%ls hrc=%Rhrc\n", this, "GuestSession::directoryCreateTemp", *aDirectory, hrc));
    return hrc;
}

STDMETHODIMP GuestSessionWrap::DirectoryExists(IN_BSTR aPath,
                                               BOOL *aExists)
{
    LogRelFlow(("{%p} %s:enter aPath=%ls aExists=%p\n", this, "GuestSession::directoryExists", aPath, aExists));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aExists);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = directoryExists(BSTRInConverter(aPath).str(),
                              aExists);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aExists=%RTbool hrc=%Rhrc\n", this, "GuestSession::directoryExists", *aExists, hrc));
    return hrc;
}

STDMETHODIMP GuestSessionWrap::DirectoryOpen(IN_BSTR aPath,
                                             IN_BSTR aFilter,
                                             ComSafeArrayIn(DirectoryOpenFlag_T, aFlags),
                                             IGuestDirectory **aDirectory)
{
    LogRelFlow(("{%p} %s:enter aPath=%ls aFilter=%ls aFlags=%zu aDirectory=%p\n", this, "GuestSession::directoryOpen", aPath, aFilter, aFlags, aDirectory));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aDirectory);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = directoryOpen(BSTRInConverter(aPath).str(),
                            BSTRInConverter(aFilter).str(),
                            ArrayInConverter<DirectoryOpenFlag_T>(ComSafeArrayInArg(aFlags)).array(),
                            ComTypeOutConverter<IGuestDirectory>(aDirectory).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aDirectory=%p hrc=%Rhrc\n", this, "GuestSession::directoryOpen", *aDirectory, hrc));
    return hrc;
}

STDMETHODIMP GuestSessionWrap::DirectoryQueryInfo(IN_BSTR aPath,
                                                  IGuestFsObjInfo **aInfo)
{
    LogRelFlow(("{%p} %s:enter aPath=%ls aInfo=%p\n", this, "GuestSession::directoryQueryInfo", aPath, aInfo));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aInfo);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = directoryQueryInfo(BSTRInConverter(aPath).str(),
                                 ComTypeOutConverter<IGuestFsObjInfo>(aInfo).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aInfo=%p hrc=%Rhrc\n", this, "GuestSession::directoryQueryInfo", *aInfo, hrc));
    return hrc;
}

STDMETHODIMP GuestSessionWrap::DirectoryRemove(IN_BSTR aPath)
{
    LogRelFlow(("{%p} %s:enter aPath=%ls\n", this, "GuestSession::directoryRemove", aPath));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = directoryRemove(BSTRInConverter(aPath).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "GuestSession::directoryRemove", hrc));
    return hrc;
}

STDMETHODIMP GuestSessionWrap::DirectoryRemoveRecursive(IN_BSTR aPath,
                                                        ComSafeArrayIn(DirectoryRemoveRecFlag_T, aFlags),
                                                        IProgress **aProgress)
{
    LogRelFlow(("{%p} %s:enter aPath=%ls aFlags=%zu aProgress=%p\n", this, "GuestSession::directoryRemoveRecursive", aPath, aFlags, aProgress));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aProgress);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = directoryRemoveRecursive(BSTRInConverter(aPath).str(),
                                       ArrayInConverter<DirectoryRemoveRecFlag_T>(ComSafeArrayInArg(aFlags)).array(),
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

    LogRelFlow(("{%p} %s: leave aProgress=%p hrc=%Rhrc\n", this, "GuestSession::directoryRemoveRecursive", *aProgress, hrc));
    return hrc;
}

STDMETHODIMP GuestSessionWrap::DirectoryRename(IN_BSTR aSource,
                                               IN_BSTR aDest,
                                               ComSafeArrayIn(PathRenameFlag_T, aFlags))
{
    LogRelFlow(("{%p} %s:enter aSource=%ls aDest=%ls aFlags=%zu\n", this, "GuestSession::directoryRename", aSource, aDest, aFlags));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = directoryRename(BSTRInConverter(aSource).str(),
                              BSTRInConverter(aDest).str(),
                              ArrayInConverter<PathRenameFlag_T>(ComSafeArrayInArg(aFlags)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "GuestSession::directoryRename", hrc));
    return hrc;
}

STDMETHODIMP GuestSessionWrap::DirectorySetACL(IN_BSTR aPath,
                                               IN_BSTR aAcl)
{
    LogRelFlow(("{%p} %s:enter aPath=%ls aAcl=%ls\n", this, "GuestSession::directorySetACL", aPath, aAcl));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = directorySetACL(BSTRInConverter(aPath).str(),
                              BSTRInConverter(aAcl).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "GuestSession::directorySetACL", hrc));
    return hrc;
}

STDMETHODIMP GuestSessionWrap::EnvironmentClear()
{
    LogRelFlow(("{%p} %s:enter\n", this, "GuestSession::environmentClear"));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = environmentClear();
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "GuestSession::environmentClear", hrc));
    return hrc;
}

STDMETHODIMP GuestSessionWrap::EnvironmentGet(IN_BSTR aName,
                                              BSTR *aValue)
{
    LogRelFlow(("{%p} %s:enter aName=%ls aValue=%p\n", this, "GuestSession::environmentGet", aName, aValue));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aValue);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = environmentGet(BSTRInConverter(aName).str(),
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

    LogRelFlow(("{%p} %s: leave aValue=%ls hrc=%Rhrc\n", this, "GuestSession::environmentGet", *aValue, hrc));
    return hrc;
}

STDMETHODIMP GuestSessionWrap::EnvironmentSet(IN_BSTR aName,
                                              IN_BSTR aValue)
{
    LogRelFlow(("{%p} %s:enter aName=%ls aValue=%ls\n", this, "GuestSession::environmentSet", aName, aValue));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = environmentSet(BSTRInConverter(aName).str(),
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

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "GuestSession::environmentSet", hrc));
    return hrc;
}

STDMETHODIMP GuestSessionWrap::EnvironmentUnset(IN_BSTR aName)
{
    LogRelFlow(("{%p} %s:enter aName=%ls\n", this, "GuestSession::environmentUnset", aName));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = environmentUnset(BSTRInConverter(aName).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "GuestSession::environmentUnset", hrc));
    return hrc;
}

STDMETHODIMP GuestSessionWrap::FileCreateTemp(IN_BSTR aTemplateName,
                                              ULONG aMode,
                                              IN_BSTR aPath,
                                              BOOL aSecure,
                                              IGuestFile **aFile)
{
    LogRelFlow(("{%p} %s:enter aTemplateName=%ls aMode=%RU32 aPath=%ls aSecure=%RTbool aFile=%p\n", this, "GuestSession::fileCreateTemp", aTemplateName, aMode, aPath, aSecure, aFile));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aFile);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = fileCreateTemp(BSTRInConverter(aTemplateName).str(),
                             aMode,
                             BSTRInConverter(aPath).str(),
                             aSecure,
                             ComTypeOutConverter<IGuestFile>(aFile).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aFile=%p hrc=%Rhrc\n", this, "GuestSession::fileCreateTemp", *aFile, hrc));
    return hrc;
}

STDMETHODIMP GuestSessionWrap::FileExists(IN_BSTR aPath,
                                          BOOL *aExists)
{
    LogRelFlow(("{%p} %s:enter aPath=%ls aExists=%p\n", this, "GuestSession::fileExists", aPath, aExists));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aExists);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = fileExists(BSTRInConverter(aPath).str(),
                         aExists);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aExists=%RTbool hrc=%Rhrc\n", this, "GuestSession::fileExists", *aExists, hrc));
    return hrc;
}

STDMETHODIMP GuestSessionWrap::FileRemove(IN_BSTR aPath)
{
    LogRelFlow(("{%p} %s:enter aPath=%ls\n", this, "GuestSession::fileRemove", aPath));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = fileRemove(BSTRInConverter(aPath).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "GuestSession::fileRemove", hrc));
    return hrc;
}

STDMETHODIMP GuestSessionWrap::FileOpen(IN_BSTR aPath,
                                        IN_BSTR aOpenMode,
                                        IN_BSTR aDisposition,
                                        ULONG aCreationMode,
                                        IGuestFile **aFile)
{
    LogRelFlow(("{%p} %s:enter aPath=%ls aOpenMode=%ls aDisposition=%ls aCreationMode=%RU32 aFile=%p\n", this, "GuestSession::fileOpen", aPath, aOpenMode, aDisposition, aCreationMode, aFile));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aFile);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = fileOpen(BSTRInConverter(aPath).str(),
                       BSTRInConverter(aOpenMode).str(),
                       BSTRInConverter(aDisposition).str(),
                       aCreationMode,
                       ComTypeOutConverter<IGuestFile>(aFile).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aFile=%p hrc=%Rhrc\n", this, "GuestSession::fileOpen", *aFile, hrc));
    return hrc;
}

STDMETHODIMP GuestSessionWrap::FileOpenEx(IN_BSTR aPath,
                                          IN_BSTR aOpenMode,
                                          IN_BSTR aDisposition,
                                          IN_BSTR aSharingMode,
                                          ULONG aCreationMode,
                                          LONG64 aOffset,
                                          IGuestFile **aFile)
{
    LogRelFlow(("{%p} %s:enter aPath=%ls aOpenMode=%ls aDisposition=%ls aSharingMode=%ls aCreationMode=%RU32 aOffset=%RI64 aFile=%p\n", this, "GuestSession::fileOpenEx", aPath, aOpenMode, aDisposition, aSharingMode, aCreationMode, aOffset, aFile));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aFile);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = fileOpenEx(BSTRInConverter(aPath).str(),
                         BSTRInConverter(aOpenMode).str(),
                         BSTRInConverter(aDisposition).str(),
                         BSTRInConverter(aSharingMode).str(),
                         aCreationMode,
                         aOffset,
                         ComTypeOutConverter<IGuestFile>(aFile).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aFile=%p hrc=%Rhrc\n", this, "GuestSession::fileOpenEx", *aFile, hrc));
    return hrc;
}

STDMETHODIMP GuestSessionWrap::FileQueryInfo(IN_BSTR aPath,
                                             IGuestFsObjInfo **aInfo)
{
    LogRelFlow(("{%p} %s:enter aPath=%ls aInfo=%p\n", this, "GuestSession::fileQueryInfo", aPath, aInfo));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aInfo);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = fileQueryInfo(BSTRInConverter(aPath).str(),
                            ComTypeOutConverter<IGuestFsObjInfo>(aInfo).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aInfo=%p hrc=%Rhrc\n", this, "GuestSession::fileQueryInfo", *aInfo, hrc));
    return hrc;
}

STDMETHODIMP GuestSessionWrap::FileQuerySize(IN_BSTR aPath,
                                             LONG64 *aSize)
{
    LogRelFlow(("{%p} %s:enter aPath=%ls aSize=%p\n", this, "GuestSession::fileQuerySize", aPath, aSize));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aSize);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = fileQuerySize(BSTRInConverter(aPath).str(),
                            aSize);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aSize=%RI64 hrc=%Rhrc\n", this, "GuestSession::fileQuerySize", *aSize, hrc));
    return hrc;
}

STDMETHODIMP GuestSessionWrap::FileRename(IN_BSTR aSource,
                                          IN_BSTR aDest,
                                          ComSafeArrayIn(PathRenameFlag_T, aFlags))
{
    LogRelFlow(("{%p} %s:enter aSource=%ls aDest=%ls aFlags=%zu\n", this, "GuestSession::fileRename", aSource, aDest, aFlags));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = fileRename(BSTRInConverter(aSource).str(),
                         BSTRInConverter(aDest).str(),
                         ArrayInConverter<PathRenameFlag_T>(ComSafeArrayInArg(aFlags)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "GuestSession::fileRename", hrc));
    return hrc;
}

STDMETHODIMP GuestSessionWrap::FileSetACL(IN_BSTR aFile,
                                          IN_BSTR aAcl)
{
    LogRelFlow(("{%p} %s:enter aFile=%ls aAcl=%ls\n", this, "GuestSession::fileSetACL", aFile, aAcl));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = fileSetACL(BSTRInConverter(aFile).str(),
                         BSTRInConverter(aAcl).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "GuestSession::fileSetACL", hrc));
    return hrc;
}

STDMETHODIMP GuestSessionWrap::ProcessCreate(IN_BSTR aCommand,
                                             ComSafeArrayIn(IN_BSTR, aArguments),
                                             ComSafeArrayIn(IN_BSTR, aEnvironment),
                                             ComSafeArrayIn(ProcessCreateFlag_T, aFlags),
                                             ULONG aTimeoutMS,
                                             IGuestProcess **aGuestProcess)
{
    LogRelFlow(("{%p} %s:enter aCommand=%ls aArguments=%zu aEnvironment=%zu aFlags=%zu aTimeoutMS=%RU32 aGuestProcess=%p\n", this, "GuestSession::processCreate", aCommand, aArguments, aEnvironment, aFlags, aTimeoutMS, aGuestProcess));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aGuestProcess);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = processCreate(BSTRInConverter(aCommand).str(),
                            ArrayBSTRInConverter(ComSafeArrayInArg(aArguments)).array(),
                            ArrayBSTRInConverter(ComSafeArrayInArg(aEnvironment)).array(),
                            ArrayInConverter<ProcessCreateFlag_T>(ComSafeArrayInArg(aFlags)).array(),
                            aTimeoutMS,
                            ComTypeOutConverter<IGuestProcess>(aGuestProcess).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aGuestProcess=%p hrc=%Rhrc\n", this, "GuestSession::processCreate", *aGuestProcess, hrc));
    return hrc;
}

STDMETHODIMP GuestSessionWrap::ProcessCreateEx(IN_BSTR aCommand,
                                               ComSafeArrayIn(IN_BSTR, aArguments),
                                               ComSafeArrayIn(IN_BSTR, aEnvironment),
                                               ComSafeArrayIn(ProcessCreateFlag_T, aFlags),
                                               ULONG aTimeoutMS,
                                               ProcessPriority_T aPriority,
                                               ComSafeArrayIn(LONG, aAffinity),
                                               IGuestProcess **aGuestProcess)
{
    LogRelFlow(("{%p} %s:enter aCommand=%ls aArguments=%zu aEnvironment=%zu aFlags=%zu aTimeoutMS=%RU32 aPriority=%RU32 aAffinity=%zu aGuestProcess=%p\n", this, "GuestSession::processCreateEx", aCommand, aArguments, aEnvironment, aFlags, aTimeoutMS, aPriority, aAffinity, aGuestProcess));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aGuestProcess);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = processCreateEx(BSTRInConverter(aCommand).str(),
                              ArrayBSTRInConverter(ComSafeArrayInArg(aArguments)).array(),
                              ArrayBSTRInConverter(ComSafeArrayInArg(aEnvironment)).array(),
                              ArrayInConverter<ProcessCreateFlag_T>(ComSafeArrayInArg(aFlags)).array(),
                              aTimeoutMS,
                              aPriority,
                              ArrayInConverter<LONG>(ComSafeArrayInArg(aAffinity)).array(),
                              ComTypeOutConverter<IGuestProcess>(aGuestProcess).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aGuestProcess=%p hrc=%Rhrc\n", this, "GuestSession::processCreateEx", *aGuestProcess, hrc));
    return hrc;
}

STDMETHODIMP GuestSessionWrap::ProcessGet(ULONG aPid,
                                          IGuestProcess **aGuestProcess)
{
    LogRelFlow(("{%p} %s:enter aPid=%RU32 aGuestProcess=%p\n", this, "GuestSession::processGet", aPid, aGuestProcess));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aGuestProcess);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = processGet(aPid,
                         ComTypeOutConverter<IGuestProcess>(aGuestProcess).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aGuestProcess=%p hrc=%Rhrc\n", this, "GuestSession::processGet", *aGuestProcess, hrc));
    return hrc;
}

STDMETHODIMP GuestSessionWrap::SymlinkCreate(IN_BSTR aSource,
                                             IN_BSTR aTarget,
                                             SymlinkType_T aType)
{
    LogRelFlow(("{%p} %s:enter aSource=%ls aTarget=%ls aType=%RU32\n", this, "GuestSession::symlinkCreate", aSource, aTarget, aType));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = symlinkCreate(BSTRInConverter(aSource).str(),
                            BSTRInConverter(aTarget).str(),
                            aType);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "GuestSession::symlinkCreate", hrc));
    return hrc;
}

STDMETHODIMP GuestSessionWrap::SymlinkExists(IN_BSTR aSymlink,
                                             BOOL *aExists)
{
    LogRelFlow(("{%p} %s:enter aSymlink=%ls aExists=%p\n", this, "GuestSession::symlinkExists", aSymlink, aExists));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aExists);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = symlinkExists(BSTRInConverter(aSymlink).str(),
                            aExists);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aExists=%RTbool hrc=%Rhrc\n", this, "GuestSession::symlinkExists", *aExists, hrc));
    return hrc;
}

STDMETHODIMP GuestSessionWrap::SymlinkRead(IN_BSTR aSymlink,
                                           ComSafeArrayIn(SymlinkReadFlag_T, aFlags),
                                           BSTR *aTarget)
{
    LogRelFlow(("{%p} %s:enter aSymlink=%ls aFlags=%zu aTarget=%p\n", this, "GuestSession::symlinkRead", aSymlink, aFlags, aTarget));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aTarget);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = symlinkRead(BSTRInConverter(aSymlink).str(),
                          ArrayInConverter<SymlinkReadFlag_T>(ComSafeArrayInArg(aFlags)).array(),
                          BSTROutConverter(aTarget).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aTarget=%ls hrc=%Rhrc\n", this, "GuestSession::symlinkRead", *aTarget, hrc));
    return hrc;
}

STDMETHODIMP GuestSessionWrap::SymlinkRemoveDirectory(IN_BSTR aPath)
{
    LogRelFlow(("{%p} %s:enter aPath=%ls\n", this, "GuestSession::symlinkRemoveDirectory", aPath));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = symlinkRemoveDirectory(BSTRInConverter(aPath).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "GuestSession::symlinkRemoveDirectory", hrc));
    return hrc;
}

STDMETHODIMP GuestSessionWrap::SymlinkRemoveFile(IN_BSTR aFile)
{
    LogRelFlow(("{%p} %s:enter aFile=%ls\n", this, "GuestSession::symlinkRemoveFile", aFile));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = symlinkRemoveFile(BSTRInConverter(aFile).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "GuestSession::symlinkRemoveFile", hrc));
    return hrc;
}

STDMETHODIMP GuestSessionWrap::WaitFor(ULONG aWaitFor,
                                       ULONG aTimeoutMS,
                                       GuestSessionWaitResult_T *aReason)
{
    LogRelFlow(("{%p} %s:enter aWaitFor=%RU32 aTimeoutMS=%RU32 aReason=%p\n", this, "GuestSession::waitFor", aWaitFor, aTimeoutMS, aReason));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aReason);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = waitFor(aWaitFor,
                      aTimeoutMS,
                      aReason);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aReason=%RU32 hrc=%Rhrc\n", this, "GuestSession::waitFor", *aReason, hrc));
    return hrc;
}

STDMETHODIMP GuestSessionWrap::WaitForArray(ComSafeArrayIn(GuestSessionWaitForFlag_T, aWaitFor),
                                            ULONG aTimeoutMS,
                                            GuestSessionWaitResult_T *aReason)
{
    LogRelFlow(("{%p} %s:enter aWaitFor=%zu aTimeoutMS=%RU32 aReason=%p\n", this, "GuestSession::waitForArray", aWaitFor, aTimeoutMS, aReason));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aReason);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = waitForArray(ArrayInConverter<GuestSessionWaitForFlag_T>(ComSafeArrayInArg(aWaitFor)).array(),
                           aTimeoutMS,
                           aReason);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aReason=%RU32 hrc=%Rhrc\n", this, "GuestSession::waitForArray", *aReason, hrc));
    return hrc;
}

#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(GuestSessionWrap)
NS_IMPL_THREADSAFE_ISUPPORTS1_CI(GuestSessionWrap, IGuestSession)
#endif // VBOX_WITH_XPCOM
