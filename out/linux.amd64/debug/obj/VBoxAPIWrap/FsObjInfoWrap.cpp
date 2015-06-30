/** @file
 *
 * VirtualBox API class wrapper code for IFsObjInfo.
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

#define LOG_GROUP_MAIN_OVERRIDE LOG_GROUP_MAIN_FSOBJINFO

#include "FsObjInfoWrap.h"
#include "Logging.h"

DEFINE_EMPTY_CTOR_DTOR(FsObjInfoWrap)

//
// IFsObjInfo properties
//

STDMETHODIMP FsObjInfoWrap::COMGETTER(AccessTime)(LONG64 *aAccessTime)
{
    LogRelFlow(("{%p} %s: enter aAccessTime=%p\n", this, "FsObjInfo::getAccessTime", aAccessTime));

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

    LogRelFlow(("{%p} %s: leave *aAccessTime=%RI64 hrc=%Rhrc\n", this, "FsObjInfo::getAccessTime", *aAccessTime, hrc));
    return hrc;
}

STDMETHODIMP FsObjInfoWrap::COMGETTER(AllocatedSize)(LONG64 *aAllocatedSize)
{
    LogRelFlow(("{%p} %s: enter aAllocatedSize=%p\n", this, "FsObjInfo::getAllocatedSize", aAllocatedSize));

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

    LogRelFlow(("{%p} %s: leave *aAllocatedSize=%RI64 hrc=%Rhrc\n", this, "FsObjInfo::getAllocatedSize", *aAllocatedSize, hrc));
    return hrc;
}

STDMETHODIMP FsObjInfoWrap::COMGETTER(BirthTime)(LONG64 *aBirthTime)
{
    LogRelFlow(("{%p} %s: enter aBirthTime=%p\n", this, "FsObjInfo::getBirthTime", aBirthTime));

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

    LogRelFlow(("{%p} %s: leave *aBirthTime=%RI64 hrc=%Rhrc\n", this, "FsObjInfo::getBirthTime", *aBirthTime, hrc));
    return hrc;
}

STDMETHODIMP FsObjInfoWrap::COMGETTER(ChangeTime)(LONG64 *aChangeTime)
{
    LogRelFlow(("{%p} %s: enter aChangeTime=%p\n", this, "FsObjInfo::getChangeTime", aChangeTime));

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

    LogRelFlow(("{%p} %s: leave *aChangeTime=%RI64 hrc=%Rhrc\n", this, "FsObjInfo::getChangeTime", *aChangeTime, hrc));
    return hrc;
}

STDMETHODIMP FsObjInfoWrap::COMGETTER(DeviceNumber)(ULONG *aDeviceNumber)
{
    LogRelFlow(("{%p} %s: enter aDeviceNumber=%p\n", this, "FsObjInfo::getDeviceNumber", aDeviceNumber));

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

    LogRelFlow(("{%p} %s: leave *aDeviceNumber=%RU32 hrc=%Rhrc\n", this, "FsObjInfo::getDeviceNumber", *aDeviceNumber, hrc));
    return hrc;
}

STDMETHODIMP FsObjInfoWrap::COMGETTER(FileAttributes)(BSTR *aFileAttributes)
{
    LogRelFlow(("{%p} %s: enter aFileAttributes=%p\n", this, "FsObjInfo::getFileAttributes", aFileAttributes));

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

    LogRelFlow(("{%p} %s: leave *aFileAttributes=%ls hrc=%Rhrc\n", this, "FsObjInfo::getFileAttributes", *aFileAttributes, hrc));
    return hrc;
}

STDMETHODIMP FsObjInfoWrap::COMGETTER(GenerationId)(ULONG *aGenerationId)
{
    LogRelFlow(("{%p} %s: enter aGenerationId=%p\n", this, "FsObjInfo::getGenerationId", aGenerationId));

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

    LogRelFlow(("{%p} %s: leave *aGenerationId=%RU32 hrc=%Rhrc\n", this, "FsObjInfo::getGenerationId", *aGenerationId, hrc));
    return hrc;
}

STDMETHODIMP FsObjInfoWrap::COMGETTER(GID)(ULONG *aGID)
{
    LogRelFlow(("{%p} %s: enter aGID=%p\n", this, "FsObjInfo::getGID", aGID));

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

    LogRelFlow(("{%p} %s: leave *aGID=%RU32 hrc=%Rhrc\n", this, "FsObjInfo::getGID", *aGID, hrc));
    return hrc;
}

STDMETHODIMP FsObjInfoWrap::COMGETTER(GroupName)(BSTR *aGroupName)
{
    LogRelFlow(("{%p} %s: enter aGroupName=%p\n", this, "FsObjInfo::getGroupName", aGroupName));

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

    LogRelFlow(("{%p} %s: leave *aGroupName=%ls hrc=%Rhrc\n", this, "FsObjInfo::getGroupName", *aGroupName, hrc));
    return hrc;
}

STDMETHODIMP FsObjInfoWrap::COMGETTER(HardLinks)(ULONG *aHardLinks)
{
    LogRelFlow(("{%p} %s: enter aHardLinks=%p\n", this, "FsObjInfo::getHardLinks", aHardLinks));

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

    LogRelFlow(("{%p} %s: leave *aHardLinks=%RU32 hrc=%Rhrc\n", this, "FsObjInfo::getHardLinks", *aHardLinks, hrc));
    return hrc;
}

STDMETHODIMP FsObjInfoWrap::COMGETTER(ModificationTime)(LONG64 *aModificationTime)
{
    LogRelFlow(("{%p} %s: enter aModificationTime=%p\n", this, "FsObjInfo::getModificationTime", aModificationTime));

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

    LogRelFlow(("{%p} %s: leave *aModificationTime=%RI64 hrc=%Rhrc\n", this, "FsObjInfo::getModificationTime", *aModificationTime, hrc));
    return hrc;
}

STDMETHODIMP FsObjInfoWrap::COMGETTER(Name)(BSTR *aName)
{
    LogRelFlow(("{%p} %s: enter aName=%p\n", this, "FsObjInfo::getName", aName));

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

    LogRelFlow(("{%p} %s: leave *aName=%ls hrc=%Rhrc\n", this, "FsObjInfo::getName", *aName, hrc));
    return hrc;
}

STDMETHODIMP FsObjInfoWrap::COMGETTER(NodeId)(LONG64 *aNodeId)
{
    LogRelFlow(("{%p} %s: enter aNodeId=%p\n", this, "FsObjInfo::getNodeId", aNodeId));

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

    LogRelFlow(("{%p} %s: leave *aNodeId=%RI64 hrc=%Rhrc\n", this, "FsObjInfo::getNodeId", *aNodeId, hrc));
    return hrc;
}

STDMETHODIMP FsObjInfoWrap::COMGETTER(NodeIdDevice)(ULONG *aNodeIdDevice)
{
    LogRelFlow(("{%p} %s: enter aNodeIdDevice=%p\n", this, "FsObjInfo::getNodeIdDevice", aNodeIdDevice));

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

    LogRelFlow(("{%p} %s: leave *aNodeIdDevice=%RU32 hrc=%Rhrc\n", this, "FsObjInfo::getNodeIdDevice", *aNodeIdDevice, hrc));
    return hrc;
}

STDMETHODIMP FsObjInfoWrap::COMGETTER(ObjectSize)(LONG64 *aObjectSize)
{
    LogRelFlow(("{%p} %s: enter aObjectSize=%p\n", this, "FsObjInfo::getObjectSize", aObjectSize));

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

    LogRelFlow(("{%p} %s: leave *aObjectSize=%RI64 hrc=%Rhrc\n", this, "FsObjInfo::getObjectSize", *aObjectSize, hrc));
    return hrc;
}

STDMETHODIMP FsObjInfoWrap::COMGETTER(Type)(FsObjType_T *aType)
{
    LogRelFlow(("{%p} %s: enter aType=%p\n", this, "FsObjInfo::getType", aType));

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

    LogRelFlow(("{%p} %s: leave *aType=%RU32 hrc=%Rhrc\n", this, "FsObjInfo::getType", *aType, hrc));
    return hrc;
}

STDMETHODIMP FsObjInfoWrap::COMGETTER(UID)(ULONG *aUID)
{
    LogRelFlow(("{%p} %s: enter aUID=%p\n", this, "FsObjInfo::getUID", aUID));

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

    LogRelFlow(("{%p} %s: leave *aUID=%RU32 hrc=%Rhrc\n", this, "FsObjInfo::getUID", *aUID, hrc));
    return hrc;
}

STDMETHODIMP FsObjInfoWrap::COMGETTER(UserFlags)(ULONG *aUserFlags)
{
    LogRelFlow(("{%p} %s: enter aUserFlags=%p\n", this, "FsObjInfo::getUserFlags", aUserFlags));

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

    LogRelFlow(("{%p} %s: leave *aUserFlags=%RU32 hrc=%Rhrc\n", this, "FsObjInfo::getUserFlags", *aUserFlags, hrc));
    return hrc;
}

STDMETHODIMP FsObjInfoWrap::COMGETTER(UserName)(BSTR *aUserName)
{
    LogRelFlow(("{%p} %s: enter aUserName=%p\n", this, "FsObjInfo::getUserName", aUserName));

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

    LogRelFlow(("{%p} %s: leave *aUserName=%ls hrc=%Rhrc\n", this, "FsObjInfo::getUserName", *aUserName, hrc));
    return hrc;
}

//
// IFsObjInfo methods
//

#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(FsObjInfoWrap)
NS_IMPL_THREADSAFE_ISUPPORTS1_CI(FsObjInfoWrap, IFsObjInfo)
#endif // VBOX_WITH_XPCOM
