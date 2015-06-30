/** @file
 *
 * VirtualBox API class wrapper code for IGuestFsObjInfo.
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

#define LOG_GROUP_MAIN_OVERRIDE LOG_GROUP_MAIN_GUESTFSOBJINFO

#include "GuestFsObjInfoWrap.h"
#include "Logging.h"

DEFINE_EMPTY_CTOR_DTOR(GuestFsObjInfoWrap)

//
// IFsObjInfo properties
//

STDMETHODIMP GuestFsObjInfoWrap::COMGETTER(AccessTime)(LONG64 *aAccessTime)
{
    LogRelFlow(("{%p} %s: enter aAccessTime=%p\n", this, "GuestFsObjInfo::getAccessTime", aAccessTime));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aAccessTime);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getAccessTime(aAccessTime);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aAccessTime=%RI64 hrc=%Rhrc\n", this, "GuestFsObjInfo::getAccessTime", *aAccessTime, hrc));
    return hrc;
}

STDMETHODIMP GuestFsObjInfoWrap::COMGETTER(AllocatedSize)(LONG64 *aAllocatedSize)
{
    LogRelFlow(("{%p} %s: enter aAllocatedSize=%p\n", this, "GuestFsObjInfo::getAllocatedSize", aAllocatedSize));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aAllocatedSize);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getAllocatedSize(aAllocatedSize);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aAllocatedSize=%RI64 hrc=%Rhrc\n", this, "GuestFsObjInfo::getAllocatedSize", *aAllocatedSize, hrc));
    return hrc;
}

STDMETHODIMP GuestFsObjInfoWrap::COMGETTER(BirthTime)(LONG64 *aBirthTime)
{
    LogRelFlow(("{%p} %s: enter aBirthTime=%p\n", this, "GuestFsObjInfo::getBirthTime", aBirthTime));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aBirthTime);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getBirthTime(aBirthTime);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aBirthTime=%RI64 hrc=%Rhrc\n", this, "GuestFsObjInfo::getBirthTime", *aBirthTime, hrc));
    return hrc;
}

STDMETHODIMP GuestFsObjInfoWrap::COMGETTER(ChangeTime)(LONG64 *aChangeTime)
{
    LogRelFlow(("{%p} %s: enter aChangeTime=%p\n", this, "GuestFsObjInfo::getChangeTime", aChangeTime));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aChangeTime);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getChangeTime(aChangeTime);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aChangeTime=%RI64 hrc=%Rhrc\n", this, "GuestFsObjInfo::getChangeTime", *aChangeTime, hrc));
    return hrc;
}

STDMETHODIMP GuestFsObjInfoWrap::COMGETTER(DeviceNumber)(ULONG *aDeviceNumber)
{
    LogRelFlow(("{%p} %s: enter aDeviceNumber=%p\n", this, "GuestFsObjInfo::getDeviceNumber", aDeviceNumber));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aDeviceNumber);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getDeviceNumber(aDeviceNumber);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aDeviceNumber=%RU32 hrc=%Rhrc\n", this, "GuestFsObjInfo::getDeviceNumber", *aDeviceNumber, hrc));
    return hrc;
}

STDMETHODIMP GuestFsObjInfoWrap::COMGETTER(FileAttributes)(BSTR *aFileAttributes)
{
    LogRelFlow(("{%p} %s: enter aFileAttributes=%p\n", this, "GuestFsObjInfo::getFileAttributes", aFileAttributes));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aFileAttributes);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getFileAttributes(BSTROutConverter(aFileAttributes).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aFileAttributes=%ls hrc=%Rhrc\n", this, "GuestFsObjInfo::getFileAttributes", *aFileAttributes, hrc));
    return hrc;
}

STDMETHODIMP GuestFsObjInfoWrap::COMGETTER(GenerationId)(ULONG *aGenerationId)
{
    LogRelFlow(("{%p} %s: enter aGenerationId=%p\n", this, "GuestFsObjInfo::getGenerationId", aGenerationId));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aGenerationId);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getGenerationId(aGenerationId);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aGenerationId=%RU32 hrc=%Rhrc\n", this, "GuestFsObjInfo::getGenerationId", *aGenerationId, hrc));
    return hrc;
}

STDMETHODIMP GuestFsObjInfoWrap::COMGETTER(GID)(ULONG *aGID)
{
    LogRelFlow(("{%p} %s: enter aGID=%p\n", this, "GuestFsObjInfo::getGID", aGID));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aGID);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getGID(aGID);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aGID=%RU32 hrc=%Rhrc\n", this, "GuestFsObjInfo::getGID", *aGID, hrc));
    return hrc;
}

STDMETHODIMP GuestFsObjInfoWrap::COMGETTER(GroupName)(BSTR *aGroupName)
{
    LogRelFlow(("{%p} %s: enter aGroupName=%p\n", this, "GuestFsObjInfo::getGroupName", aGroupName));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aGroupName);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getGroupName(BSTROutConverter(aGroupName).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aGroupName=%ls hrc=%Rhrc\n", this, "GuestFsObjInfo::getGroupName", *aGroupName, hrc));
    return hrc;
}

STDMETHODIMP GuestFsObjInfoWrap::COMGETTER(HardLinks)(ULONG *aHardLinks)
{
    LogRelFlow(("{%p} %s: enter aHardLinks=%p\n", this, "GuestFsObjInfo::getHardLinks", aHardLinks));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aHardLinks);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getHardLinks(aHardLinks);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aHardLinks=%RU32 hrc=%Rhrc\n", this, "GuestFsObjInfo::getHardLinks", *aHardLinks, hrc));
    return hrc;
}

STDMETHODIMP GuestFsObjInfoWrap::COMGETTER(ModificationTime)(LONG64 *aModificationTime)
{
    LogRelFlow(("{%p} %s: enter aModificationTime=%p\n", this, "GuestFsObjInfo::getModificationTime", aModificationTime));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aModificationTime);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getModificationTime(aModificationTime);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aModificationTime=%RI64 hrc=%Rhrc\n", this, "GuestFsObjInfo::getModificationTime", *aModificationTime, hrc));
    return hrc;
}

STDMETHODIMP GuestFsObjInfoWrap::COMGETTER(Name)(BSTR *aName)
{
    LogRelFlow(("{%p} %s: enter aName=%p\n", this, "GuestFsObjInfo::getName", aName));

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

    LogRelFlow(("{%p} %s: leave *aName=%ls hrc=%Rhrc\n", this, "GuestFsObjInfo::getName", *aName, hrc));
    return hrc;
}

STDMETHODIMP GuestFsObjInfoWrap::COMGETTER(NodeId)(LONG64 *aNodeId)
{
    LogRelFlow(("{%p} %s: enter aNodeId=%p\n", this, "GuestFsObjInfo::getNodeId", aNodeId));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aNodeId);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getNodeId(aNodeId);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aNodeId=%RI64 hrc=%Rhrc\n", this, "GuestFsObjInfo::getNodeId", *aNodeId, hrc));
    return hrc;
}

STDMETHODIMP GuestFsObjInfoWrap::COMGETTER(NodeIdDevice)(ULONG *aNodeIdDevice)
{
    LogRelFlow(("{%p} %s: enter aNodeIdDevice=%p\n", this, "GuestFsObjInfo::getNodeIdDevice", aNodeIdDevice));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aNodeIdDevice);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getNodeIdDevice(aNodeIdDevice);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aNodeIdDevice=%RU32 hrc=%Rhrc\n", this, "GuestFsObjInfo::getNodeIdDevice", *aNodeIdDevice, hrc));
    return hrc;
}

STDMETHODIMP GuestFsObjInfoWrap::COMGETTER(ObjectSize)(LONG64 *aObjectSize)
{
    LogRelFlow(("{%p} %s: enter aObjectSize=%p\n", this, "GuestFsObjInfo::getObjectSize", aObjectSize));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aObjectSize);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getObjectSize(aObjectSize);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aObjectSize=%RI64 hrc=%Rhrc\n", this, "GuestFsObjInfo::getObjectSize", *aObjectSize, hrc));
    return hrc;
}

STDMETHODIMP GuestFsObjInfoWrap::COMGETTER(Type)(FsObjType_T *aType)
{
    LogRelFlow(("{%p} %s: enter aType=%p\n", this, "GuestFsObjInfo::getType", aType));

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

    LogRelFlow(("{%p} %s: leave *aType=%RU32 hrc=%Rhrc\n", this, "GuestFsObjInfo::getType", *aType, hrc));
    return hrc;
}

STDMETHODIMP GuestFsObjInfoWrap::COMGETTER(UID)(ULONG *aUID)
{
    LogRelFlow(("{%p} %s: enter aUID=%p\n", this, "GuestFsObjInfo::getUID", aUID));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aUID);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getUID(aUID);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aUID=%RU32 hrc=%Rhrc\n", this, "GuestFsObjInfo::getUID", *aUID, hrc));
    return hrc;
}

STDMETHODIMP GuestFsObjInfoWrap::COMGETTER(UserFlags)(ULONG *aUserFlags)
{
    LogRelFlow(("{%p} %s: enter aUserFlags=%p\n", this, "GuestFsObjInfo::getUserFlags", aUserFlags));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aUserFlags);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getUserFlags(aUserFlags);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aUserFlags=%RU32 hrc=%Rhrc\n", this, "GuestFsObjInfo::getUserFlags", *aUserFlags, hrc));
    return hrc;
}

STDMETHODIMP GuestFsObjInfoWrap::COMGETTER(UserName)(BSTR *aUserName)
{
    LogRelFlow(("{%p} %s: enter aUserName=%p\n", this, "GuestFsObjInfo::getUserName", aUserName));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aUserName);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getUserName(BSTROutConverter(aUserName).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aUserName=%ls hrc=%Rhrc\n", this, "GuestFsObjInfo::getUserName", *aUserName, hrc));
    return hrc;
}

//
// IGuestFsObjInfo properties
//

//
// IFsObjInfo methods
//

//
// IGuestFsObjInfo methods
//

#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(GuestFsObjInfoWrap)
NS_IMPL_THREADSAFE_ISUPPORTS2_CI(GuestFsObjInfoWrap, IGuestFsObjInfo, IFsObjInfo)
#endif // VBOX_WITH_XPCOM
