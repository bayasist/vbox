/** @file
 *
 * VirtualBox API class wrapper code for IGuestFile.
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

#define LOG_GROUP_MAIN_OVERRIDE LOG_GROUP_MAIN_GUESTFILE

#include "GuestFileWrap.h"
#include "Logging.h"

DEFINE_EMPTY_CTOR_DTOR(GuestFileWrap)

//
// IFile properties
//

STDMETHODIMP GuestFileWrap::COMGETTER(CreationMode)(ULONG *aCreationMode)
{
    LogRelFlow(("{%p} %s: enter aCreationMode=%p\n", this, "GuestFile::getCreationMode", aCreationMode));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aCreationMode);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getCreationMode(aCreationMode);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aCreationMode=%RU32 hrc=%Rhrc\n", this, "GuestFile::getCreationMode", *aCreationMode, hrc));
    return hrc;
}

STDMETHODIMP GuestFileWrap::COMGETTER(Disposition)(BSTR *aDisposition)
{
    LogRelFlow(("{%p} %s: enter aDisposition=%p\n", this, "GuestFile::getDisposition", aDisposition));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aDisposition);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getDisposition(BSTROutConverter(aDisposition).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aDisposition=%ls hrc=%Rhrc\n", this, "GuestFile::getDisposition", *aDisposition, hrc));
    return hrc;
}

STDMETHODIMP GuestFileWrap::COMGETTER(EventSource)(IEventSource **aEventSource)
{
    LogRelFlow(("{%p} %s: enter aEventSource=%p\n", this, "GuestFile::getEventSource", aEventSource));

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

    LogRelFlow(("{%p} %s: leave *aEventSource=%p hrc=%Rhrc\n", this, "GuestFile::getEventSource", *aEventSource, hrc));
    return hrc;
}

STDMETHODIMP GuestFileWrap::COMGETTER(FileName)(BSTR *aFileName)
{
    LogRelFlow(("{%p} %s: enter aFileName=%p\n", this, "GuestFile::getFileName", aFileName));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aFileName);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getFileName(BSTROutConverter(aFileName).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aFileName=%ls hrc=%Rhrc\n", this, "GuestFile::getFileName", *aFileName, hrc));
    return hrc;
}

STDMETHODIMP GuestFileWrap::COMGETTER(Id)(ULONG *aId)
{
    LogRelFlow(("{%p} %s: enter aId=%p\n", this, "GuestFile::getId", aId));

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

    LogRelFlow(("{%p} %s: leave *aId=%RU32 hrc=%Rhrc\n", this, "GuestFile::getId", *aId, hrc));
    return hrc;
}

STDMETHODIMP GuestFileWrap::COMGETTER(InitialSize)(LONG64 *aInitialSize)
{
    LogRelFlow(("{%p} %s: enter aInitialSize=%p\n", this, "GuestFile::getInitialSize", aInitialSize));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aInitialSize);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getInitialSize(aInitialSize);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aInitialSize=%RI64 hrc=%Rhrc\n", this, "GuestFile::getInitialSize", *aInitialSize, hrc));
    return hrc;
}

STDMETHODIMP GuestFileWrap::COMGETTER(OpenMode)(BSTR *aOpenMode)
{
    LogRelFlow(("{%p} %s: enter aOpenMode=%p\n", this, "GuestFile::getOpenMode", aOpenMode));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aOpenMode);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getOpenMode(BSTROutConverter(aOpenMode).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aOpenMode=%ls hrc=%Rhrc\n", this, "GuestFile::getOpenMode", *aOpenMode, hrc));
    return hrc;
}

STDMETHODIMP GuestFileWrap::COMGETTER(Offset)(LONG64 *aOffset)
{
    LogRelFlow(("{%p} %s: enter aOffset=%p\n", this, "GuestFile::getOffset", aOffset));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aOffset);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getOffset(aOffset);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aOffset=%RI64 hrc=%Rhrc\n", this, "GuestFile::getOffset", *aOffset, hrc));
    return hrc;
}

STDMETHODIMP GuestFileWrap::COMGETTER(Status)(FileStatus_T *aStatus)
{
    LogRelFlow(("{%p} %s: enter aStatus=%p\n", this, "GuestFile::getStatus", aStatus));

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

    LogRelFlow(("{%p} %s: leave *aStatus=%RU32 hrc=%Rhrc\n", this, "GuestFile::getStatus", *aStatus, hrc));
    return hrc;
}

//
// IGuestFile properties
//

//
// IFile methods
//

STDMETHODIMP GuestFileWrap::Close()
{
    LogRelFlow(("{%p} %s:enter\n", this, "GuestFile::close"));

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

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "GuestFile::close", hrc));
    return hrc;
}

STDMETHODIMP GuestFileWrap::QueryInfo(IFsObjInfo **aObjInfo)
{
    LogRelFlow(("{%p} %s:enter aObjInfo=%p\n", this, "GuestFile::queryInfo", aObjInfo));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aObjInfo);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = queryInfo(ComTypeOutConverter<IFsObjInfo>(aObjInfo).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aObjInfo=%p hrc=%Rhrc\n", this, "GuestFile::queryInfo", *aObjInfo, hrc));
    return hrc;
}

STDMETHODIMP GuestFileWrap::Read(ULONG aToRead,
                                 ULONG aTimeoutMS,
                                 ComSafeArrayOut(BYTE, aData))
{
    LogRelFlow(("{%p} %s:enter aToRead=%RU32 aTimeoutMS=%RU32 aData=%p\n", this, "GuestFile::read", aToRead, aTimeoutMS, aData));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aData);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = read(aToRead,
                   aTimeoutMS,
                   ArrayOutConverter<BYTE>(ComSafeArrayOutArg(aData)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aData=%zu hrc=%Rhrc\n", this, "GuestFile::read", ComSafeArraySize(*aData), hrc));
    return hrc;
}

STDMETHODIMP GuestFileWrap::ReadAt(LONG64 aOffset,
                                   ULONG aToRead,
                                   ULONG aTimeoutMS,
                                   ComSafeArrayOut(BYTE, aData))
{
    LogRelFlow(("{%p} %s:enter aOffset=%RI64 aToRead=%RU32 aTimeoutMS=%RU32 aData=%p\n", this, "GuestFile::readAt", aOffset, aToRead, aTimeoutMS, aData));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aData);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = readAt(aOffset,
                     aToRead,
                     aTimeoutMS,
                     ArrayOutConverter<BYTE>(ComSafeArrayOutArg(aData)).array());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aData=%zu hrc=%Rhrc\n", this, "GuestFile::readAt", ComSafeArraySize(*aData), hrc));
    return hrc;
}

STDMETHODIMP GuestFileWrap::Seek(LONG64 aOffset,
                                 FileSeekType_T aWhence)
{
    LogRelFlow(("{%p} %s:enter aOffset=%RI64 aWhence=%RU32\n", this, "GuestFile::seek", aOffset, aWhence));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = seek(aOffset,
                   aWhence);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "GuestFile::seek", hrc));
    return hrc;
}

STDMETHODIMP GuestFileWrap::SetACL(IN_BSTR aAcl)
{
    LogRelFlow(("{%p} %s:enter aAcl=%ls\n", this, "GuestFile::setACL", aAcl));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setACL(BSTRInConverter(aAcl).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "GuestFile::setACL", hrc));
    return hrc;
}

STDMETHODIMP GuestFileWrap::Write(ComSafeArrayIn(BYTE, aData),
                                  ULONG aTimeoutMS,
                                  ULONG *aWritten)
{
    LogRelFlow(("{%p} %s:enter aData=%zu aTimeoutMS=%RU32 aWritten=%p\n", this, "GuestFile::write", aData, aTimeoutMS, aWritten));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aWritten);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = write(ArrayInConverter<BYTE>(ComSafeArrayInArg(aData)).array(),
                    aTimeoutMS,
                    aWritten);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aWritten=%RU32 hrc=%Rhrc\n", this, "GuestFile::write", *aWritten, hrc));
    return hrc;
}

STDMETHODIMP GuestFileWrap::WriteAt(LONG64 aOffset,
                                    ComSafeArrayIn(BYTE, aData),
                                    ULONG aTimeoutMS,
                                    ULONG *aWritten)
{
    LogRelFlow(("{%p} %s:enter aOffset=%RI64 aData=%zu aTimeoutMS=%RU32 aWritten=%p\n", this, "GuestFile::writeAt", aOffset, aData, aTimeoutMS, aWritten));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aWritten);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = writeAt(aOffset,
                      ArrayInConverter<BYTE>(ComSafeArrayInArg(aData)).array(),
                      aTimeoutMS,
                      aWritten);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave aWritten=%RU32 hrc=%Rhrc\n", this, "GuestFile::writeAt", *aWritten, hrc));
    return hrc;
}

//
// IGuestFile methods
//

#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(GuestFileWrap)
NS_IMPL_THREADSAFE_ISUPPORTS2_CI(GuestFileWrap, IGuestFile, IFile)
#endif // VBOX_WITH_XPCOM
