/** @file
 *
 * VirtualBox API class wrapper code for IAudioAdapter.
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

#define LOG_GROUP_MAIN_OVERRIDE LOG_GROUP_MAIN_AUDIOADAPTER

#include "AudioAdapterWrap.h"
#include "Logging.h"

DEFINE_EMPTY_CTOR_DTOR(AudioAdapterWrap)

//
// IAudioAdapter properties
//

STDMETHODIMP AudioAdapterWrap::COMGETTER(Enabled)(BOOL *aEnabled)
{
    LogRelFlow(("{%p} %s: enter aEnabled=%p\n", this, "AudioAdapter::getEnabled", aEnabled));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aEnabled);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getEnabled(aEnabled);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aEnabled=%RTbool hrc=%Rhrc\n", this, "AudioAdapter::getEnabled", *aEnabled, hrc));
    return hrc;
}

STDMETHODIMP AudioAdapterWrap::COMSETTER(Enabled)(BOOL aEnabled)
{
    LogRelFlow(("{%p} %s: enter aEnabled=%RTbool\n", this, "AudioAdapter::setEnabled", aEnabled));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setEnabled(aEnabled);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "AudioAdapter::setEnabled", hrc));
    return hrc;
}

STDMETHODIMP AudioAdapterWrap::COMGETTER(AudioController)(AudioControllerType_T *aAudioController)
{
    LogRelFlow(("{%p} %s: enter aAudioController=%p\n", this, "AudioAdapter::getAudioController", aAudioController));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aAudioController);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getAudioController(aAudioController);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aAudioController=%RU32 hrc=%Rhrc\n", this, "AudioAdapter::getAudioController", *aAudioController, hrc));
    return hrc;
}

STDMETHODIMP AudioAdapterWrap::COMSETTER(AudioController)(AudioControllerType_T aAudioController)
{
    LogRelFlow(("{%p} %s: enter aAudioController=%RU32\n", this, "AudioAdapter::setAudioController", aAudioController));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setAudioController(aAudioController);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "AudioAdapter::setAudioController", hrc));
    return hrc;
}

STDMETHODIMP AudioAdapterWrap::COMGETTER(AudioDriver)(AudioDriverType_T *aAudioDriver)
{
    LogRelFlow(("{%p} %s: enter aAudioDriver=%p\n", this, "AudioAdapter::getAudioDriver", aAudioDriver));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        CheckComArgOutPointerValidThrow(aAudioDriver);

        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = getAudioDriver(aAudioDriver);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave *aAudioDriver=%RU32 hrc=%Rhrc\n", this, "AudioAdapter::getAudioDriver", *aAudioDriver, hrc));
    return hrc;
}

STDMETHODIMP AudioAdapterWrap::COMSETTER(AudioDriver)(AudioDriverType_T aAudioDriver)
{
    LogRelFlow(("{%p} %s: enter aAudioDriver=%RU32\n", this, "AudioAdapter::setAudioDriver", aAudioDriver));

    VirtualBoxBase::clearError();

    HRESULT hrc;

    try
    {
        AutoCaller autoCaller(this);
        if (FAILED(autoCaller.rc()))
            throw autoCaller.rc();

        hrc = setAudioDriver(aAudioDriver);
    }
    catch (HRESULT hrc2)
    {
        hrc = hrc2;
    }
    catch (...)
    {
        hrc = VirtualBoxBase::handleUnexpectedExceptions(this, RT_SRC_POS);
    }

    LogRelFlow(("{%p} %s: leave hrc=%Rhrc\n", this, "AudioAdapter::setAudioDriver", hrc));
    return hrc;
}

//
// IAudioAdapter methods
//

#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(AudioAdapterWrap)
NS_IMPL_THREADSAFE_ISUPPORTS1_CI(AudioAdapterWrap, IAudioAdapter)
#endif // VBOX_WITH_XPCOM
