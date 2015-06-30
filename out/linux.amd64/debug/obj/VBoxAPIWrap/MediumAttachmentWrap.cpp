/** @file
 *
 * VirtualBox API class wrapper code for IMediumAttachment.
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

#define LOG_GROUP_MAIN_OVERRIDE LOG_GROUP_MAIN_MEDIUMATTACHMENT

#include "MediumAttachmentWrap.h"
#include "Logging.h"

DEFINE_EMPTY_CTOR_DTOR(MediumAttachmentWrap)

//
// IMediumAttachment properties
//

STDMETHODIMP MediumAttachmentWrap::COMGETTER(Medium)(IMedium **aMedium)
{
    LogRelFlow(("{%p} %s: enter aMedium=%p\n", this, "MediumAttachment::getMedium", aMedium));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aMedium);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getMedium(ComTypeOutConverter<IMedium>(aMedium).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aMedium=%p hrc=%Rhrc\n", this, "MediumAttachment::getMedium", *aMedium, hrc));
    return hrc;
}

STDMETHODIMP MediumAttachmentWrap::COMGETTER(Controller)(BSTR *aController)
{
    LogRelFlow(("{%p} %s: enter aController=%p\n", this, "MediumAttachment::getController", aController));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aController);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getController(BSTROutConverter(aController).str());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aController=%ls hrc=%Rhrc\n", this, "MediumAttachment::getController", *aController, hrc));
    return hrc;
}

STDMETHODIMP MediumAttachmentWrap::COMGETTER(Port)(LONG *aPort)
{
    LogRelFlow(("{%p} %s: enter aPort=%p\n", this, "MediumAttachment::getPort", aPort));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aPort);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getPort(aPort);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aPort=%RI32 hrc=%Rhrc\n", this, "MediumAttachment::getPort", *aPort, hrc));
    return hrc;
}

STDMETHODIMP MediumAttachmentWrap::COMGETTER(Device)(LONG *aDevice)
{
    LogRelFlow(("{%p} %s: enter aDevice=%p\n", this, "MediumAttachment::getDevice", aDevice));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aDevice);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getDevice(aDevice);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aDevice=%RI32 hrc=%Rhrc\n", this, "MediumAttachment::getDevice", *aDevice, hrc));
    return hrc;
}

STDMETHODIMP MediumAttachmentWrap::COMGETTER(Type)(DeviceType_T *aType)
{
    LogRelFlow(("{%p} %s: enter aType=%p\n", this, "MediumAttachment::getType", aType));

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

    LogRelFlow(("{%p} %s: leave *aType=%RU32 hrc=%Rhrc\n", this, "MediumAttachment::getType", *aType, hrc));
    return hrc;
}

STDMETHODIMP MediumAttachmentWrap::COMGETTER(Passthrough)(BOOL *aPassthrough)
{
    LogRelFlow(("{%p} %s: enter aPassthrough=%p\n", this, "MediumAttachment::getPassthrough", aPassthrough));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aPassthrough);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getPassthrough(aPassthrough);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aPassthrough=%RTbool hrc=%Rhrc\n", this, "MediumAttachment::getPassthrough", *aPassthrough, hrc));
    return hrc;
}

STDMETHODIMP MediumAttachmentWrap::COMGETTER(TemporaryEject)(BOOL *aTemporaryEject)
{
    LogRelFlow(("{%p} %s: enter aTemporaryEject=%p\n", this, "MediumAttachment::getTemporaryEject", aTemporaryEject));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aTemporaryEject);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getTemporaryEject(aTemporaryEject);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aTemporaryEject=%RTbool hrc=%Rhrc\n", this, "MediumAttachment::getTemporaryEject", *aTemporaryEject, hrc));
    return hrc;
}

STDMETHODIMP MediumAttachmentWrap::COMGETTER(IsEjected)(BOOL *aIsEjected)
{
    LogRelFlow(("{%p} %s: enter aIsEjected=%p\n", this, "MediumAttachment::getIsEjected", aIsEjected));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aIsEjected);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getIsEjected(aIsEjected);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aIsEjected=%RTbool hrc=%Rhrc\n", this, "MediumAttachment::getIsEjected", *aIsEjected, hrc));
    return hrc;
}

STDMETHODIMP MediumAttachmentWrap::COMGETTER(NonRotational)(BOOL *aNonRotational)
{
    LogRelFlow(("{%p} %s: enter aNonRotational=%p\n", this, "MediumAttachment::getNonRotational", aNonRotational));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aNonRotational);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getNonRotational(aNonRotational);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aNonRotational=%RTbool hrc=%Rhrc\n", this, "MediumAttachment::getNonRotational", *aNonRotational, hrc));
    return hrc;
}

STDMETHODIMP MediumAttachmentWrap::COMGETTER(Discard)(BOOL *aDiscard)
{
    LogRelFlow(("{%p} %s: enter aDiscard=%p\n", this, "MediumAttachment::getDiscard", aDiscard));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aDiscard);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getDiscard(aDiscard);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aDiscard=%RTbool hrc=%Rhrc\n", this, "MediumAttachment::getDiscard", *aDiscard, hrc));
    return hrc;
}

STDMETHODIMP MediumAttachmentWrap::COMGETTER(HotPluggable)(BOOL *aHotPluggable)
{
    LogRelFlow(("{%p} %s: enter aHotPluggable=%p\n", this, "MediumAttachment::getHotPluggable", aHotPluggable));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aHotPluggable);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getHotPluggable(aHotPluggable);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aHotPluggable=%RTbool hrc=%Rhrc\n", this, "MediumAttachment::getHotPluggable", *aHotPluggable, hrc));
    return hrc;
}

STDMETHODIMP MediumAttachmentWrap::COMGETTER(BandwidthGroup)(IBandwidthGroup **aBandwidthGroup)
{
    LogRelFlow(("{%p} %s: enter aBandwidthGroup=%p\n", this, "MediumAttachment::getBandwidthGroup", aBandwidthGroup));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aBandwidthGroup);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getBandwidthGroup(ComTypeOutConverter<IBandwidthGroup>(aBandwidthGroup).ptr());
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aBandwidthGroup=%p hrc=%Rhrc\n", this, "MediumAttachment::getBandwidthGroup", *aBandwidthGroup, hrc));
    return hrc;
}

//
// IMediumAttachment methods
//

#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(MediumAttachmentWrap)
NS_IMPL_THREADSAFE_ISUPPORTS1_CI(MediumAttachmentWrap, IMediumAttachment)
#endif // VBOX_WITH_XPCOM
