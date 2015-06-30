/** @file VBoxEvents.cpp
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/Main/idl/comimpl.xsl
 */

/*
 * Copyright (C) 2010-2013 Oracle Corporation
 *
 * This file is part of VirtualBox Open Source Edition (OSE), as
 * available from http://www.virtualbox.org. This file is free software;
 * you can redistribute it and/or modify it under the terms of the GNU
 * General Public License (GPL) as published by the Free Software
 * Foundation, in version 2 as it comes in the "COPYING" file of the
 * VirtualBox OSE distribution. VirtualBox OSE is distributed in the
 * hope that it will be useful, but WITHOUT ANY WARRANTY of any kind.
 */


#include <VBox/com/array.h>
#include <iprt/asm.h>
#include "EventImpl.h"
// IMachineStateChangedEvent implementation code 
class ATL_NO_VTABLE MachineStateChangedEvent
    : public VirtualBoxBase,
      VBOX_SCRIPTABLE_IMPL(IMachineStateChangedEvent)
{
public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(MachineStateChangedEvent, IMachineStateChangedEvent)
    DECLARE_NOT_AGGREGATABLE(MachineStateChangedEvent)
    DECLARE_PROTECT_FINAL_CONSTRUCT()
    BEGIN_COM_MAP(MachineStateChangedEvent)
        VBOX_DEFAULT_INTERFACE_ENTRIES(IMachineStateChangedEvent)
        COM_INTERFACE_ENTRY(IMachineStateChangedEvent)
        COM_INTERFACE_ENTRY(IMachineEvent)
        COM_INTERFACE_ENTRY(IEvent)
    END_COM_MAP()
    MachineStateChangedEvent() { /*printf("MachineStateChangedEvent\n")*/;}
    virtual ~MachineStateChangedEvent() { /*printf("~MachineStateChangedEvent\n")*/; uninit(); }

    HRESULT FinalConstruct()
    {
        BaseFinalConstruct();
        return mEvent.createObject();
    }
    void FinalRelease()
    {
        mEvent->FinalRelease();
        BaseFinalRelease();
    }
    STDMETHOD(COMGETTER(Type)) (VBoxEventType_T *aType)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Type) (aType);
    }
    STDMETHOD(COMGETTER(Source)) (IEventSource * *aSource)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Source) (aSource);
    }
    STDMETHOD(COMGETTER(Waitable)) (BOOL *aWaitable)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Waitable) (aWaitable);
    }
    STDMETHOD(SetProcessed)()
    {
       return ((VBoxEvent*)mEvent)->SetProcessed();
    }
    STDMETHOD(WaitProcessed)(LONG aTimeout, BOOL *aResult)
    {
        return ((VBoxEvent*)mEvent)->WaitProcessed(aTimeout, aResult);
    }
    void uninit()
    {
        if (!mEvent.isNull())
        {
           mEvent->uninit();
           mEvent.setNull();
        }
    }

    HRESULT init(IEventSource* aSource, VBoxEventType_T aType, BOOL aWaitable)
    {
        return mEvent->init(aSource, aType, aWaitable);
    }
private:
    ComObjPtr<VBoxEvent>      mEvent;

    // attribute state
private:
    MachineState_T    m_state;
public:
    STDMETHOD(COMGETTER(State))(MachineState_T* a_state)
    {
         *a_state = m_state;
         return S_OK;
    }
    // purely internal setter
    HRESULT set_state(MachineState_T a_state)
    {
         m_state = a_state;
         return S_OK;
    }

    // attribute machineId
private:
    Bstr    m_machineId;
public:
    STDMETHOD(COMGETTER(MachineId))(BSTR* a_machineId)
    {
         m_machineId.cloneTo(a_machineId);
         return S_OK;
    }
    // purely internal setter
    HRESULT set_machineId(CBSTR a_machineId)
    {
         m_machineId = a_machineId;
         return S_OK;
    }
    // skipping IEvent attributes 
};
#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(MachineStateChangedEvent)
NS_IMPL_THREADSAFE_ISUPPORTS3_CI(MachineStateChangedEvent, IMachineStateChangedEvent, IMachineEvent, IEvent)
#endif

// IMachineDataChangedEvent implementation code 
class ATL_NO_VTABLE MachineDataChangedEvent
    : public VirtualBoxBase,
      VBOX_SCRIPTABLE_IMPL(IMachineDataChangedEvent)
{
public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(MachineDataChangedEvent, IMachineDataChangedEvent)
    DECLARE_NOT_AGGREGATABLE(MachineDataChangedEvent)
    DECLARE_PROTECT_FINAL_CONSTRUCT()
    BEGIN_COM_MAP(MachineDataChangedEvent)
        VBOX_DEFAULT_INTERFACE_ENTRIES(IMachineDataChangedEvent)
        COM_INTERFACE_ENTRY(IMachineDataChangedEvent)
        COM_INTERFACE_ENTRY(IMachineEvent)
        COM_INTERFACE_ENTRY(IEvent)
    END_COM_MAP()
    MachineDataChangedEvent() { /*printf("MachineDataChangedEvent\n")*/;}
    virtual ~MachineDataChangedEvent() { /*printf("~MachineDataChangedEvent\n")*/; uninit(); }

    HRESULT FinalConstruct()
    {
        BaseFinalConstruct();
        return mEvent.createObject();
    }
    void FinalRelease()
    {
        mEvent->FinalRelease();
        BaseFinalRelease();
    }
    STDMETHOD(COMGETTER(Type)) (VBoxEventType_T *aType)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Type) (aType);
    }
    STDMETHOD(COMGETTER(Source)) (IEventSource * *aSource)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Source) (aSource);
    }
    STDMETHOD(COMGETTER(Waitable)) (BOOL *aWaitable)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Waitable) (aWaitable);
    }
    STDMETHOD(SetProcessed)()
    {
       return ((VBoxEvent*)mEvent)->SetProcessed();
    }
    STDMETHOD(WaitProcessed)(LONG aTimeout, BOOL *aResult)
    {
        return ((VBoxEvent*)mEvent)->WaitProcessed(aTimeout, aResult);
    }
    void uninit()
    {
        if (!mEvent.isNull())
        {
           mEvent->uninit();
           mEvent.setNull();
        }
    }

    HRESULT init(IEventSource* aSource, VBoxEventType_T aType, BOOL aWaitable)
    {
        return mEvent->init(aSource, aType, aWaitable);
    }
private:
    ComObjPtr<VBoxEvent>      mEvent;

    // attribute temporary
private:
    BOOL    m_temporary;
public:
    STDMETHOD(COMGETTER(Temporary))(BOOL* a_temporary)
    {
         *a_temporary = m_temporary;
         return S_OK;
    }
    // purely internal setter
    HRESULT set_temporary(BOOL a_temporary)
    {
         m_temporary = a_temporary;
         return S_OK;
    }

    // attribute machineId
private:
    Bstr    m_machineId;
public:
    STDMETHOD(COMGETTER(MachineId))(BSTR* a_machineId)
    {
         m_machineId.cloneTo(a_machineId);
         return S_OK;
    }
    // purely internal setter
    HRESULT set_machineId(CBSTR a_machineId)
    {
         m_machineId = a_machineId;
         return S_OK;
    }
    // skipping IEvent attributes 
};
#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(MachineDataChangedEvent)
NS_IMPL_THREADSAFE_ISUPPORTS3_CI(MachineDataChangedEvent, IMachineDataChangedEvent, IMachineEvent, IEvent)
#endif

// IMediumRegisteredEvent implementation code 
class ATL_NO_VTABLE MediumRegisteredEvent
    : public VirtualBoxBase,
      VBOX_SCRIPTABLE_IMPL(IMediumRegisteredEvent)
{
public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(MediumRegisteredEvent, IMediumRegisteredEvent)
    DECLARE_NOT_AGGREGATABLE(MediumRegisteredEvent)
    DECLARE_PROTECT_FINAL_CONSTRUCT()
    BEGIN_COM_MAP(MediumRegisteredEvent)
        VBOX_DEFAULT_INTERFACE_ENTRIES(IMediumRegisteredEvent)
        COM_INTERFACE_ENTRY(IMediumRegisteredEvent)
        COM_INTERFACE_ENTRY(IEvent)
    END_COM_MAP()
    MediumRegisteredEvent() { /*printf("MediumRegisteredEvent\n")*/;}
    virtual ~MediumRegisteredEvent() { /*printf("~MediumRegisteredEvent\n")*/; uninit(); }

    HRESULT FinalConstruct()
    {
        BaseFinalConstruct();
        return mEvent.createObject();
    }
    void FinalRelease()
    {
        mEvent->FinalRelease();
        BaseFinalRelease();
    }
    STDMETHOD(COMGETTER(Type)) (VBoxEventType_T *aType)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Type) (aType);
    }
    STDMETHOD(COMGETTER(Source)) (IEventSource * *aSource)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Source) (aSource);
    }
    STDMETHOD(COMGETTER(Waitable)) (BOOL *aWaitable)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Waitable) (aWaitable);
    }
    STDMETHOD(SetProcessed)()
    {
       return ((VBoxEvent*)mEvent)->SetProcessed();
    }
    STDMETHOD(WaitProcessed)(LONG aTimeout, BOOL *aResult)
    {
        return ((VBoxEvent*)mEvent)->WaitProcessed(aTimeout, aResult);
    }
    void uninit()
    {
        if (!mEvent.isNull())
        {
           mEvent->uninit();
           mEvent.setNull();
        }
    }

    HRESULT init(IEventSource* aSource, VBoxEventType_T aType, BOOL aWaitable)
    {
        return mEvent->init(aSource, aType, aWaitable);
    }
private:
    ComObjPtr<VBoxEvent>      mEvent;

    // attribute mediumId
private:
    Bstr    m_mediumId;
public:
    STDMETHOD(COMGETTER(MediumId))(BSTR* a_mediumId)
    {
         m_mediumId.cloneTo(a_mediumId);
         return S_OK;
    }
    // purely internal setter
    HRESULT set_mediumId(CBSTR a_mediumId)
    {
         m_mediumId = a_mediumId;
         return S_OK;
    }

    // attribute mediumType
private:
    DeviceType_T    m_mediumType;
public:
    STDMETHOD(COMGETTER(MediumType))(DeviceType_T* a_mediumType)
    {
         *a_mediumType = m_mediumType;
         return S_OK;
    }
    // purely internal setter
    HRESULT set_mediumType(DeviceType_T a_mediumType)
    {
         m_mediumType = a_mediumType;
         return S_OK;
    }

    // attribute registered
private:
    BOOL    m_registered;
public:
    STDMETHOD(COMGETTER(Registered))(BOOL* a_registered)
    {
         *a_registered = m_registered;
         return S_OK;
    }
    // purely internal setter
    HRESULT set_registered(BOOL a_registered)
    {
         m_registered = a_registered;
         return S_OK;
    }
    // skipping IEvent attributes 
};
#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(MediumRegisteredEvent)
NS_IMPL_THREADSAFE_ISUPPORTS2_CI(MediumRegisteredEvent, IMediumRegisteredEvent, IEvent)
#endif

// IMachineRegisteredEvent implementation code 
class ATL_NO_VTABLE MachineRegisteredEvent
    : public VirtualBoxBase,
      VBOX_SCRIPTABLE_IMPL(IMachineRegisteredEvent)
{
public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(MachineRegisteredEvent, IMachineRegisteredEvent)
    DECLARE_NOT_AGGREGATABLE(MachineRegisteredEvent)
    DECLARE_PROTECT_FINAL_CONSTRUCT()
    BEGIN_COM_MAP(MachineRegisteredEvent)
        VBOX_DEFAULT_INTERFACE_ENTRIES(IMachineRegisteredEvent)
        COM_INTERFACE_ENTRY(IMachineRegisteredEvent)
        COM_INTERFACE_ENTRY(IMachineEvent)
        COM_INTERFACE_ENTRY(IEvent)
    END_COM_MAP()
    MachineRegisteredEvent() { /*printf("MachineRegisteredEvent\n")*/;}
    virtual ~MachineRegisteredEvent() { /*printf("~MachineRegisteredEvent\n")*/; uninit(); }

    HRESULT FinalConstruct()
    {
        BaseFinalConstruct();
        return mEvent.createObject();
    }
    void FinalRelease()
    {
        mEvent->FinalRelease();
        BaseFinalRelease();
    }
    STDMETHOD(COMGETTER(Type)) (VBoxEventType_T *aType)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Type) (aType);
    }
    STDMETHOD(COMGETTER(Source)) (IEventSource * *aSource)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Source) (aSource);
    }
    STDMETHOD(COMGETTER(Waitable)) (BOOL *aWaitable)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Waitable) (aWaitable);
    }
    STDMETHOD(SetProcessed)()
    {
       return ((VBoxEvent*)mEvent)->SetProcessed();
    }
    STDMETHOD(WaitProcessed)(LONG aTimeout, BOOL *aResult)
    {
        return ((VBoxEvent*)mEvent)->WaitProcessed(aTimeout, aResult);
    }
    void uninit()
    {
        if (!mEvent.isNull())
        {
           mEvent->uninit();
           mEvent.setNull();
        }
    }

    HRESULT init(IEventSource* aSource, VBoxEventType_T aType, BOOL aWaitable)
    {
        return mEvent->init(aSource, aType, aWaitable);
    }
private:
    ComObjPtr<VBoxEvent>      mEvent;

    // attribute registered
private:
    BOOL    m_registered;
public:
    STDMETHOD(COMGETTER(Registered))(BOOL* a_registered)
    {
         *a_registered = m_registered;
         return S_OK;
    }
    // purely internal setter
    HRESULT set_registered(BOOL a_registered)
    {
         m_registered = a_registered;
         return S_OK;
    }

    // attribute machineId
private:
    Bstr    m_machineId;
public:
    STDMETHOD(COMGETTER(MachineId))(BSTR* a_machineId)
    {
         m_machineId.cloneTo(a_machineId);
         return S_OK;
    }
    // purely internal setter
    HRESULT set_machineId(CBSTR a_machineId)
    {
         m_machineId = a_machineId;
         return S_OK;
    }
    // skipping IEvent attributes 
};
#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(MachineRegisteredEvent)
NS_IMPL_THREADSAFE_ISUPPORTS3_CI(MachineRegisteredEvent, IMachineRegisteredEvent, IMachineEvent, IEvent)
#endif

// ISessionStateChangedEvent implementation code 
class ATL_NO_VTABLE SessionStateChangedEvent
    : public VirtualBoxBase,
      VBOX_SCRIPTABLE_IMPL(ISessionStateChangedEvent)
{
public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(SessionStateChangedEvent, ISessionStateChangedEvent)
    DECLARE_NOT_AGGREGATABLE(SessionStateChangedEvent)
    DECLARE_PROTECT_FINAL_CONSTRUCT()
    BEGIN_COM_MAP(SessionStateChangedEvent)
        VBOX_DEFAULT_INTERFACE_ENTRIES(ISessionStateChangedEvent)
        COM_INTERFACE_ENTRY(ISessionStateChangedEvent)
        COM_INTERFACE_ENTRY(IMachineEvent)
        COM_INTERFACE_ENTRY(IEvent)
    END_COM_MAP()
    SessionStateChangedEvent() { /*printf("SessionStateChangedEvent\n")*/;}
    virtual ~SessionStateChangedEvent() { /*printf("~SessionStateChangedEvent\n")*/; uninit(); }

    HRESULT FinalConstruct()
    {
        BaseFinalConstruct();
        return mEvent.createObject();
    }
    void FinalRelease()
    {
        mEvent->FinalRelease();
        BaseFinalRelease();
    }
    STDMETHOD(COMGETTER(Type)) (VBoxEventType_T *aType)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Type) (aType);
    }
    STDMETHOD(COMGETTER(Source)) (IEventSource * *aSource)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Source) (aSource);
    }
    STDMETHOD(COMGETTER(Waitable)) (BOOL *aWaitable)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Waitable) (aWaitable);
    }
    STDMETHOD(SetProcessed)()
    {
       return ((VBoxEvent*)mEvent)->SetProcessed();
    }
    STDMETHOD(WaitProcessed)(LONG aTimeout, BOOL *aResult)
    {
        return ((VBoxEvent*)mEvent)->WaitProcessed(aTimeout, aResult);
    }
    void uninit()
    {
        if (!mEvent.isNull())
        {
           mEvent->uninit();
           mEvent.setNull();
        }
    }

    HRESULT init(IEventSource* aSource, VBoxEventType_T aType, BOOL aWaitable)
    {
        return mEvent->init(aSource, aType, aWaitable);
    }
private:
    ComObjPtr<VBoxEvent>      mEvent;

    // attribute state
private:
    SessionState_T    m_state;
public:
    STDMETHOD(COMGETTER(State))(SessionState_T* a_state)
    {
         *a_state = m_state;
         return S_OK;
    }
    // purely internal setter
    HRESULT set_state(SessionState_T a_state)
    {
         m_state = a_state;
         return S_OK;
    }

    // attribute machineId
private:
    Bstr    m_machineId;
public:
    STDMETHOD(COMGETTER(MachineId))(BSTR* a_machineId)
    {
         m_machineId.cloneTo(a_machineId);
         return S_OK;
    }
    // purely internal setter
    HRESULT set_machineId(CBSTR a_machineId)
    {
         m_machineId = a_machineId;
         return S_OK;
    }
    // skipping IEvent attributes 
};
#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(SessionStateChangedEvent)
NS_IMPL_THREADSAFE_ISUPPORTS3_CI(SessionStateChangedEvent, ISessionStateChangedEvent, IMachineEvent, IEvent)
#endif

// IGuestPropertyChangedEvent implementation code 
class ATL_NO_VTABLE GuestPropertyChangedEvent
    : public VirtualBoxBase,
      VBOX_SCRIPTABLE_IMPL(IGuestPropertyChangedEvent)
{
public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(GuestPropertyChangedEvent, IGuestPropertyChangedEvent)
    DECLARE_NOT_AGGREGATABLE(GuestPropertyChangedEvent)
    DECLARE_PROTECT_FINAL_CONSTRUCT()
    BEGIN_COM_MAP(GuestPropertyChangedEvent)
        VBOX_DEFAULT_INTERFACE_ENTRIES(IGuestPropertyChangedEvent)
        COM_INTERFACE_ENTRY(IGuestPropertyChangedEvent)
        COM_INTERFACE_ENTRY(IMachineEvent)
        COM_INTERFACE_ENTRY(IEvent)
    END_COM_MAP()
    GuestPropertyChangedEvent() { /*printf("GuestPropertyChangedEvent\n")*/;}
    virtual ~GuestPropertyChangedEvent() { /*printf("~GuestPropertyChangedEvent\n")*/; uninit(); }

    HRESULT FinalConstruct()
    {
        BaseFinalConstruct();
        return mEvent.createObject();
    }
    void FinalRelease()
    {
        mEvent->FinalRelease();
        BaseFinalRelease();
    }
    STDMETHOD(COMGETTER(Type)) (VBoxEventType_T *aType)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Type) (aType);
    }
    STDMETHOD(COMGETTER(Source)) (IEventSource * *aSource)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Source) (aSource);
    }
    STDMETHOD(COMGETTER(Waitable)) (BOOL *aWaitable)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Waitable) (aWaitable);
    }
    STDMETHOD(SetProcessed)()
    {
       return ((VBoxEvent*)mEvent)->SetProcessed();
    }
    STDMETHOD(WaitProcessed)(LONG aTimeout, BOOL *aResult)
    {
        return ((VBoxEvent*)mEvent)->WaitProcessed(aTimeout, aResult);
    }
    void uninit()
    {
        if (!mEvent.isNull())
        {
           mEvent->uninit();
           mEvent.setNull();
        }
    }

    HRESULT init(IEventSource* aSource, VBoxEventType_T aType, BOOL aWaitable)
    {
        return mEvent->init(aSource, aType, aWaitable);
    }
private:
    ComObjPtr<VBoxEvent>      mEvent;

    // attribute name
private:
    Bstr    m_name;
public:
    STDMETHOD(COMGETTER(Name))(BSTR* a_name)
    {
         m_name.cloneTo(a_name);
         return S_OK;
    }
    // purely internal setter
    HRESULT set_name(CBSTR a_name)
    {
         m_name = a_name;
         return S_OK;
    }

    // attribute value
private:
    Bstr    m_value;
public:
    STDMETHOD(COMGETTER(Value))(BSTR* a_value)
    {
         m_value.cloneTo(a_value);
         return S_OK;
    }
    // purely internal setter
    HRESULT set_value(CBSTR a_value)
    {
         m_value = a_value;
         return S_OK;
    }

    // attribute flags
private:
    Bstr    m_flags;
public:
    STDMETHOD(COMGETTER(Flags))(BSTR* a_flags)
    {
         m_flags.cloneTo(a_flags);
         return S_OK;
    }
    // purely internal setter
    HRESULT set_flags(CBSTR a_flags)
    {
         m_flags = a_flags;
         return S_OK;
    }

    // attribute machineId
private:
    Bstr    m_machineId;
public:
    STDMETHOD(COMGETTER(MachineId))(BSTR* a_machineId)
    {
         m_machineId.cloneTo(a_machineId);
         return S_OK;
    }
    // purely internal setter
    HRESULT set_machineId(CBSTR a_machineId)
    {
         m_machineId = a_machineId;
         return S_OK;
    }
    // skipping IEvent attributes 
};
#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(GuestPropertyChangedEvent)
NS_IMPL_THREADSAFE_ISUPPORTS3_CI(GuestPropertyChangedEvent, IGuestPropertyChangedEvent, IMachineEvent, IEvent)
#endif

// ISnapshotTakenEvent implementation code 
class ATL_NO_VTABLE SnapshotTakenEvent
    : public VirtualBoxBase,
      VBOX_SCRIPTABLE_IMPL(ISnapshotTakenEvent)
{
public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(SnapshotTakenEvent, ISnapshotTakenEvent)
    DECLARE_NOT_AGGREGATABLE(SnapshotTakenEvent)
    DECLARE_PROTECT_FINAL_CONSTRUCT()
    BEGIN_COM_MAP(SnapshotTakenEvent)
        VBOX_DEFAULT_INTERFACE_ENTRIES(ISnapshotTakenEvent)
        COM_INTERFACE_ENTRY(ISnapshotTakenEvent)
        COM_INTERFACE_ENTRY(ISnapshotEvent)
        COM_INTERFACE_ENTRY(IMachineEvent)
        COM_INTERFACE_ENTRY(IEvent)
    END_COM_MAP()
    SnapshotTakenEvent() { /*printf("SnapshotTakenEvent\n")*/;}
    virtual ~SnapshotTakenEvent() { /*printf("~SnapshotTakenEvent\n")*/; uninit(); }

    HRESULT FinalConstruct()
    {
        BaseFinalConstruct();
        return mEvent.createObject();
    }
    void FinalRelease()
    {
        mEvent->FinalRelease();
        BaseFinalRelease();
    }
    STDMETHOD(COMGETTER(Type)) (VBoxEventType_T *aType)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Type) (aType);
    }
    STDMETHOD(COMGETTER(Source)) (IEventSource * *aSource)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Source) (aSource);
    }
    STDMETHOD(COMGETTER(Waitable)) (BOOL *aWaitable)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Waitable) (aWaitable);
    }
    STDMETHOD(SetProcessed)()
    {
       return ((VBoxEvent*)mEvent)->SetProcessed();
    }
    STDMETHOD(WaitProcessed)(LONG aTimeout, BOOL *aResult)
    {
        return ((VBoxEvent*)mEvent)->WaitProcessed(aTimeout, aResult);
    }
    void uninit()
    {
        if (!mEvent.isNull())
        {
           mEvent->uninit();
           mEvent.setNull();
        }
    }

    HRESULT init(IEventSource* aSource, VBoxEventType_T aType, BOOL aWaitable)
    {
        return mEvent->init(aSource, aType, aWaitable);
    }
private:
    ComObjPtr<VBoxEvent>      mEvent;

    // attribute snapshotId
private:
    Bstr    m_snapshotId;
public:
    STDMETHOD(COMGETTER(SnapshotId))(BSTR* a_snapshotId)
    {
         m_snapshotId.cloneTo(a_snapshotId);
         return S_OK;
    }
    // purely internal setter
    HRESULT set_snapshotId(CBSTR a_snapshotId)
    {
         m_snapshotId = a_snapshotId;
         return S_OK;
    }

    // attribute machineId
private:
    Bstr    m_machineId;
public:
    STDMETHOD(COMGETTER(MachineId))(BSTR* a_machineId)
    {
         m_machineId.cloneTo(a_machineId);
         return S_OK;
    }
    // purely internal setter
    HRESULT set_machineId(CBSTR a_machineId)
    {
         m_machineId = a_machineId;
         return S_OK;
    }
    // skipping IEvent attributes 
};
#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(SnapshotTakenEvent)
NS_IMPL_THREADSAFE_ISUPPORTS4_CI(SnapshotTakenEvent, ISnapshotTakenEvent, ISnapshotEvent, IMachineEvent, IEvent)
#endif

// ISnapshotDeletedEvent implementation code 
class ATL_NO_VTABLE SnapshotDeletedEvent
    : public VirtualBoxBase,
      VBOX_SCRIPTABLE_IMPL(ISnapshotDeletedEvent)
{
public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(SnapshotDeletedEvent, ISnapshotDeletedEvent)
    DECLARE_NOT_AGGREGATABLE(SnapshotDeletedEvent)
    DECLARE_PROTECT_FINAL_CONSTRUCT()
    BEGIN_COM_MAP(SnapshotDeletedEvent)
        VBOX_DEFAULT_INTERFACE_ENTRIES(ISnapshotDeletedEvent)
        COM_INTERFACE_ENTRY(ISnapshotDeletedEvent)
        COM_INTERFACE_ENTRY(ISnapshotEvent)
        COM_INTERFACE_ENTRY(IMachineEvent)
        COM_INTERFACE_ENTRY(IEvent)
    END_COM_MAP()
    SnapshotDeletedEvent() { /*printf("SnapshotDeletedEvent\n")*/;}
    virtual ~SnapshotDeletedEvent() { /*printf("~SnapshotDeletedEvent\n")*/; uninit(); }

    HRESULT FinalConstruct()
    {
        BaseFinalConstruct();
        return mEvent.createObject();
    }
    void FinalRelease()
    {
        mEvent->FinalRelease();
        BaseFinalRelease();
    }
    STDMETHOD(COMGETTER(Type)) (VBoxEventType_T *aType)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Type) (aType);
    }
    STDMETHOD(COMGETTER(Source)) (IEventSource * *aSource)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Source) (aSource);
    }
    STDMETHOD(COMGETTER(Waitable)) (BOOL *aWaitable)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Waitable) (aWaitable);
    }
    STDMETHOD(SetProcessed)()
    {
       return ((VBoxEvent*)mEvent)->SetProcessed();
    }
    STDMETHOD(WaitProcessed)(LONG aTimeout, BOOL *aResult)
    {
        return ((VBoxEvent*)mEvent)->WaitProcessed(aTimeout, aResult);
    }
    void uninit()
    {
        if (!mEvent.isNull())
        {
           mEvent->uninit();
           mEvent.setNull();
        }
    }

    HRESULT init(IEventSource* aSource, VBoxEventType_T aType, BOOL aWaitable)
    {
        return mEvent->init(aSource, aType, aWaitable);
    }
private:
    ComObjPtr<VBoxEvent>      mEvent;

    // attribute snapshotId
private:
    Bstr    m_snapshotId;
public:
    STDMETHOD(COMGETTER(SnapshotId))(BSTR* a_snapshotId)
    {
         m_snapshotId.cloneTo(a_snapshotId);
         return S_OK;
    }
    // purely internal setter
    HRESULT set_snapshotId(CBSTR a_snapshotId)
    {
         m_snapshotId = a_snapshotId;
         return S_OK;
    }

    // attribute machineId
private:
    Bstr    m_machineId;
public:
    STDMETHOD(COMGETTER(MachineId))(BSTR* a_machineId)
    {
         m_machineId.cloneTo(a_machineId);
         return S_OK;
    }
    // purely internal setter
    HRESULT set_machineId(CBSTR a_machineId)
    {
         m_machineId = a_machineId;
         return S_OK;
    }
    // skipping IEvent attributes 
};
#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(SnapshotDeletedEvent)
NS_IMPL_THREADSAFE_ISUPPORTS4_CI(SnapshotDeletedEvent, ISnapshotDeletedEvent, ISnapshotEvent, IMachineEvent, IEvent)
#endif

// ISnapshotChangedEvent implementation code 
class ATL_NO_VTABLE SnapshotChangedEvent
    : public VirtualBoxBase,
      VBOX_SCRIPTABLE_IMPL(ISnapshotChangedEvent)
{
public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(SnapshotChangedEvent, ISnapshotChangedEvent)
    DECLARE_NOT_AGGREGATABLE(SnapshotChangedEvent)
    DECLARE_PROTECT_FINAL_CONSTRUCT()
    BEGIN_COM_MAP(SnapshotChangedEvent)
        VBOX_DEFAULT_INTERFACE_ENTRIES(ISnapshotChangedEvent)
        COM_INTERFACE_ENTRY(ISnapshotChangedEvent)
        COM_INTERFACE_ENTRY(ISnapshotEvent)
        COM_INTERFACE_ENTRY(IMachineEvent)
        COM_INTERFACE_ENTRY(IEvent)
    END_COM_MAP()
    SnapshotChangedEvent() { /*printf("SnapshotChangedEvent\n")*/;}
    virtual ~SnapshotChangedEvent() { /*printf("~SnapshotChangedEvent\n")*/; uninit(); }

    HRESULT FinalConstruct()
    {
        BaseFinalConstruct();
        return mEvent.createObject();
    }
    void FinalRelease()
    {
        mEvent->FinalRelease();
        BaseFinalRelease();
    }
    STDMETHOD(COMGETTER(Type)) (VBoxEventType_T *aType)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Type) (aType);
    }
    STDMETHOD(COMGETTER(Source)) (IEventSource * *aSource)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Source) (aSource);
    }
    STDMETHOD(COMGETTER(Waitable)) (BOOL *aWaitable)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Waitable) (aWaitable);
    }
    STDMETHOD(SetProcessed)()
    {
       return ((VBoxEvent*)mEvent)->SetProcessed();
    }
    STDMETHOD(WaitProcessed)(LONG aTimeout, BOOL *aResult)
    {
        return ((VBoxEvent*)mEvent)->WaitProcessed(aTimeout, aResult);
    }
    void uninit()
    {
        if (!mEvent.isNull())
        {
           mEvent->uninit();
           mEvent.setNull();
        }
    }

    HRESULT init(IEventSource* aSource, VBoxEventType_T aType, BOOL aWaitable)
    {
        return mEvent->init(aSource, aType, aWaitable);
    }
private:
    ComObjPtr<VBoxEvent>      mEvent;

    // attribute snapshotId
private:
    Bstr    m_snapshotId;
public:
    STDMETHOD(COMGETTER(SnapshotId))(BSTR* a_snapshotId)
    {
         m_snapshotId.cloneTo(a_snapshotId);
         return S_OK;
    }
    // purely internal setter
    HRESULT set_snapshotId(CBSTR a_snapshotId)
    {
         m_snapshotId = a_snapshotId;
         return S_OK;
    }

    // attribute machineId
private:
    Bstr    m_machineId;
public:
    STDMETHOD(COMGETTER(MachineId))(BSTR* a_machineId)
    {
         m_machineId.cloneTo(a_machineId);
         return S_OK;
    }
    // purely internal setter
    HRESULT set_machineId(CBSTR a_machineId)
    {
         m_machineId = a_machineId;
         return S_OK;
    }
    // skipping IEvent attributes 
};
#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(SnapshotChangedEvent)
NS_IMPL_THREADSAFE_ISUPPORTS4_CI(SnapshotChangedEvent, ISnapshotChangedEvent, ISnapshotEvent, IMachineEvent, IEvent)
#endif

// IMousePointerShapeChangedEvent implementation code 
class ATL_NO_VTABLE MousePointerShapeChangedEvent
    : public VirtualBoxBase,
      VBOX_SCRIPTABLE_IMPL(IMousePointerShapeChangedEvent)
{
public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(MousePointerShapeChangedEvent, IMousePointerShapeChangedEvent)
    DECLARE_NOT_AGGREGATABLE(MousePointerShapeChangedEvent)
    DECLARE_PROTECT_FINAL_CONSTRUCT()
    BEGIN_COM_MAP(MousePointerShapeChangedEvent)
        VBOX_DEFAULT_INTERFACE_ENTRIES(IMousePointerShapeChangedEvent)
        COM_INTERFACE_ENTRY(IMousePointerShapeChangedEvent)
        COM_INTERFACE_ENTRY(IEvent)
    END_COM_MAP()
    MousePointerShapeChangedEvent() { /*printf("MousePointerShapeChangedEvent\n")*/;}
    virtual ~MousePointerShapeChangedEvent() { /*printf("~MousePointerShapeChangedEvent\n")*/; uninit(); }

    HRESULT FinalConstruct()
    {
        BaseFinalConstruct();
        return mEvent.createObject();
    }
    void FinalRelease()
    {
        mEvent->FinalRelease();
        BaseFinalRelease();
    }
    STDMETHOD(COMGETTER(Type)) (VBoxEventType_T *aType)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Type) (aType);
    }
    STDMETHOD(COMGETTER(Source)) (IEventSource * *aSource)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Source) (aSource);
    }
    STDMETHOD(COMGETTER(Waitable)) (BOOL *aWaitable)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Waitable) (aWaitable);
    }
    STDMETHOD(SetProcessed)()
    {
       return ((VBoxEvent*)mEvent)->SetProcessed();
    }
    STDMETHOD(WaitProcessed)(LONG aTimeout, BOOL *aResult)
    {
        return ((VBoxEvent*)mEvent)->WaitProcessed(aTimeout, aResult);
    }
    void uninit()
    {
        if (!mEvent.isNull())
        {
           mEvent->uninit();
           mEvent.setNull();
        }
    }

    HRESULT init(IEventSource* aSource, VBoxEventType_T aType, BOOL aWaitable)
    {
        return mEvent->init(aSource, aType, aWaitable);
    }
private:
    ComObjPtr<VBoxEvent>      mEvent;

    // attribute visible
private:
    BOOL    m_visible;
public:
    STDMETHOD(COMGETTER(Visible))(BOOL* a_visible)
    {
         *a_visible = m_visible;
         return S_OK;
    }
    // purely internal setter
    HRESULT set_visible(BOOL a_visible)
    {
         m_visible = a_visible;
         return S_OK;
    }

    // attribute alpha
private:
    BOOL    m_alpha;
public:
    STDMETHOD(COMGETTER(Alpha))(BOOL* a_alpha)
    {
         *a_alpha = m_alpha;
         return S_OK;
    }
    // purely internal setter
    HRESULT set_alpha(BOOL a_alpha)
    {
         m_alpha = a_alpha;
         return S_OK;
    }

    // attribute xhot
private:
    ULONG    m_xhot;
public:
    STDMETHOD(COMGETTER(Xhot))(ULONG* a_xhot)
    {
         *a_xhot = m_xhot;
         return S_OK;
    }
    // purely internal setter
    HRESULT set_xhot(ULONG a_xhot)
    {
         m_xhot = a_xhot;
         return S_OK;
    }

    // attribute yhot
private:
    ULONG    m_yhot;
public:
    STDMETHOD(COMGETTER(Yhot))(ULONG* a_yhot)
    {
         *a_yhot = m_yhot;
         return S_OK;
    }
    // purely internal setter
    HRESULT set_yhot(ULONG a_yhot)
    {
         m_yhot = a_yhot;
         return S_OK;
    }

    // attribute width
private:
    ULONG    m_width;
public:
    STDMETHOD(COMGETTER(Width))(ULONG* a_width)
    {
         *a_width = m_width;
         return S_OK;
    }
    // purely internal setter
    HRESULT set_width(ULONG a_width)
    {
         m_width = a_width;
         return S_OK;
    }

    // attribute height
private:
    ULONG    m_height;
public:
    STDMETHOD(COMGETTER(Height))(ULONG* a_height)
    {
         *a_height = m_height;
         return S_OK;
    }
    // purely internal setter
    HRESULT set_height(ULONG a_height)
    {
         m_height = a_height;
         return S_OK;
    }

    // attribute shape
private:
    com::SafeArray<BYTE>    m_shape;
public:
    STDMETHOD(COMGETTER(Shape))(ComSafeArrayOut(BYTE, a_shape))
    {
         SafeArray<BYTE> result;
         m_shape.cloneTo(result);
         result.detachTo(ComSafeArrayOutArg(a_shape));
         return S_OK;
    }
    // purely internal setter
    HRESULT set_shape(ComSafeArrayIn(BYTE,a_shape))
    {
         SafeArray<BYTE> aArr(ComSafeArrayInArg(a_shape));
         m_shape.initFrom(aArr);
         return S_OK;
    }
    // skipping IEvent attributes 
};
#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(MousePointerShapeChangedEvent)
NS_IMPL_THREADSAFE_ISUPPORTS2_CI(MousePointerShapeChangedEvent, IMousePointerShapeChangedEvent, IEvent)
#endif

// IMouseCapabilityChangedEvent implementation code 
class ATL_NO_VTABLE MouseCapabilityChangedEvent
    : public VirtualBoxBase,
      VBOX_SCRIPTABLE_IMPL(IMouseCapabilityChangedEvent)
{
public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(MouseCapabilityChangedEvent, IMouseCapabilityChangedEvent)
    DECLARE_NOT_AGGREGATABLE(MouseCapabilityChangedEvent)
    DECLARE_PROTECT_FINAL_CONSTRUCT()
    BEGIN_COM_MAP(MouseCapabilityChangedEvent)
        VBOX_DEFAULT_INTERFACE_ENTRIES(IMouseCapabilityChangedEvent)
        COM_INTERFACE_ENTRY(IMouseCapabilityChangedEvent)
        COM_INTERFACE_ENTRY(IEvent)
    END_COM_MAP()
    MouseCapabilityChangedEvent() { /*printf("MouseCapabilityChangedEvent\n")*/;}
    virtual ~MouseCapabilityChangedEvent() { /*printf("~MouseCapabilityChangedEvent\n")*/; uninit(); }

    HRESULT FinalConstruct()
    {
        BaseFinalConstruct();
        return mEvent.createObject();
    }
    void FinalRelease()
    {
        mEvent->FinalRelease();
        BaseFinalRelease();
    }
    STDMETHOD(COMGETTER(Type)) (VBoxEventType_T *aType)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Type) (aType);
    }
    STDMETHOD(COMGETTER(Source)) (IEventSource * *aSource)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Source) (aSource);
    }
    STDMETHOD(COMGETTER(Waitable)) (BOOL *aWaitable)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Waitable) (aWaitable);
    }
    STDMETHOD(SetProcessed)()
    {
       return ((VBoxEvent*)mEvent)->SetProcessed();
    }
    STDMETHOD(WaitProcessed)(LONG aTimeout, BOOL *aResult)
    {
        return ((VBoxEvent*)mEvent)->WaitProcessed(aTimeout, aResult);
    }
    void uninit()
    {
        if (!mEvent.isNull())
        {
           mEvent->uninit();
           mEvent.setNull();
        }
    }

    HRESULT init(IEventSource* aSource, VBoxEventType_T aType, BOOL aWaitable)
    {
        return mEvent->init(aSource, aType, aWaitable);
    }
private:
    ComObjPtr<VBoxEvent>      mEvent;

    // attribute supportsAbsolute
private:
    BOOL    m_supportsAbsolute;
public:
    STDMETHOD(COMGETTER(SupportsAbsolute))(BOOL* a_supportsAbsolute)
    {
         *a_supportsAbsolute = m_supportsAbsolute;
         return S_OK;
    }
    // purely internal setter
    HRESULT set_supportsAbsolute(BOOL a_supportsAbsolute)
    {
         m_supportsAbsolute = a_supportsAbsolute;
         return S_OK;
    }

    // attribute supportsRelative
private:
    BOOL    m_supportsRelative;
public:
    STDMETHOD(COMGETTER(SupportsRelative))(BOOL* a_supportsRelative)
    {
         *a_supportsRelative = m_supportsRelative;
         return S_OK;
    }
    // purely internal setter
    HRESULT set_supportsRelative(BOOL a_supportsRelative)
    {
         m_supportsRelative = a_supportsRelative;
         return S_OK;
    }

    // attribute supportsMultiTouch
private:
    BOOL    m_supportsMultiTouch;
public:
    STDMETHOD(COMGETTER(SupportsMultiTouch))(BOOL* a_supportsMultiTouch)
    {
         *a_supportsMultiTouch = m_supportsMultiTouch;
         return S_OK;
    }
    // purely internal setter
    HRESULT set_supportsMultiTouch(BOOL a_supportsMultiTouch)
    {
         m_supportsMultiTouch = a_supportsMultiTouch;
         return S_OK;
    }

    // attribute needsHostCursor
private:
    BOOL    m_needsHostCursor;
public:
    STDMETHOD(COMGETTER(NeedsHostCursor))(BOOL* a_needsHostCursor)
    {
         *a_needsHostCursor = m_needsHostCursor;
         return S_OK;
    }
    // purely internal setter
    HRESULT set_needsHostCursor(BOOL a_needsHostCursor)
    {
         m_needsHostCursor = a_needsHostCursor;
         return S_OK;
    }
    // skipping IEvent attributes 
};
#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(MouseCapabilityChangedEvent)
NS_IMPL_THREADSAFE_ISUPPORTS2_CI(MouseCapabilityChangedEvent, IMouseCapabilityChangedEvent, IEvent)
#endif

// IKeyboardLedsChangedEvent implementation code 
class ATL_NO_VTABLE KeyboardLedsChangedEvent
    : public VirtualBoxBase,
      VBOX_SCRIPTABLE_IMPL(IKeyboardLedsChangedEvent)
{
public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(KeyboardLedsChangedEvent, IKeyboardLedsChangedEvent)
    DECLARE_NOT_AGGREGATABLE(KeyboardLedsChangedEvent)
    DECLARE_PROTECT_FINAL_CONSTRUCT()
    BEGIN_COM_MAP(KeyboardLedsChangedEvent)
        VBOX_DEFAULT_INTERFACE_ENTRIES(IKeyboardLedsChangedEvent)
        COM_INTERFACE_ENTRY(IKeyboardLedsChangedEvent)
        COM_INTERFACE_ENTRY(IEvent)
    END_COM_MAP()
    KeyboardLedsChangedEvent() { /*printf("KeyboardLedsChangedEvent\n")*/;}
    virtual ~KeyboardLedsChangedEvent() { /*printf("~KeyboardLedsChangedEvent\n")*/; uninit(); }

    HRESULT FinalConstruct()
    {
        BaseFinalConstruct();
        return mEvent.createObject();
    }
    void FinalRelease()
    {
        mEvent->FinalRelease();
        BaseFinalRelease();
    }
    STDMETHOD(COMGETTER(Type)) (VBoxEventType_T *aType)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Type) (aType);
    }
    STDMETHOD(COMGETTER(Source)) (IEventSource * *aSource)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Source) (aSource);
    }
    STDMETHOD(COMGETTER(Waitable)) (BOOL *aWaitable)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Waitable) (aWaitable);
    }
    STDMETHOD(SetProcessed)()
    {
       return ((VBoxEvent*)mEvent)->SetProcessed();
    }
    STDMETHOD(WaitProcessed)(LONG aTimeout, BOOL *aResult)
    {
        return ((VBoxEvent*)mEvent)->WaitProcessed(aTimeout, aResult);
    }
    void uninit()
    {
        if (!mEvent.isNull())
        {
           mEvent->uninit();
           mEvent.setNull();
        }
    }

    HRESULT init(IEventSource* aSource, VBoxEventType_T aType, BOOL aWaitable)
    {
        return mEvent->init(aSource, aType, aWaitable);
    }
private:
    ComObjPtr<VBoxEvent>      mEvent;

    // attribute numLock
private:
    BOOL    m_numLock;
public:
    STDMETHOD(COMGETTER(NumLock))(BOOL* a_numLock)
    {
         *a_numLock = m_numLock;
         return S_OK;
    }
    // purely internal setter
    HRESULT set_numLock(BOOL a_numLock)
    {
         m_numLock = a_numLock;
         return S_OK;
    }

    // attribute capsLock
private:
    BOOL    m_capsLock;
public:
    STDMETHOD(COMGETTER(CapsLock))(BOOL* a_capsLock)
    {
         *a_capsLock = m_capsLock;
         return S_OK;
    }
    // purely internal setter
    HRESULT set_capsLock(BOOL a_capsLock)
    {
         m_capsLock = a_capsLock;
         return S_OK;
    }

    // attribute scrollLock
private:
    BOOL    m_scrollLock;
public:
    STDMETHOD(COMGETTER(ScrollLock))(BOOL* a_scrollLock)
    {
         *a_scrollLock = m_scrollLock;
         return S_OK;
    }
    // purely internal setter
    HRESULT set_scrollLock(BOOL a_scrollLock)
    {
         m_scrollLock = a_scrollLock;
         return S_OK;
    }
    // skipping IEvent attributes 
};
#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(KeyboardLedsChangedEvent)
NS_IMPL_THREADSAFE_ISUPPORTS2_CI(KeyboardLedsChangedEvent, IKeyboardLedsChangedEvent, IEvent)
#endif

// IStateChangedEvent implementation code 
class ATL_NO_VTABLE StateChangedEvent
    : public VirtualBoxBase,
      VBOX_SCRIPTABLE_IMPL(IStateChangedEvent)
{
public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(StateChangedEvent, IStateChangedEvent)
    DECLARE_NOT_AGGREGATABLE(StateChangedEvent)
    DECLARE_PROTECT_FINAL_CONSTRUCT()
    BEGIN_COM_MAP(StateChangedEvent)
        VBOX_DEFAULT_INTERFACE_ENTRIES(IStateChangedEvent)
        COM_INTERFACE_ENTRY(IStateChangedEvent)
        COM_INTERFACE_ENTRY(IEvent)
    END_COM_MAP()
    StateChangedEvent() { /*printf("StateChangedEvent\n")*/;}
    virtual ~StateChangedEvent() { /*printf("~StateChangedEvent\n")*/; uninit(); }

    HRESULT FinalConstruct()
    {
        BaseFinalConstruct();
        return mEvent.createObject();
    }
    void FinalRelease()
    {
        mEvent->FinalRelease();
        BaseFinalRelease();
    }
    STDMETHOD(COMGETTER(Type)) (VBoxEventType_T *aType)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Type) (aType);
    }
    STDMETHOD(COMGETTER(Source)) (IEventSource * *aSource)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Source) (aSource);
    }
    STDMETHOD(COMGETTER(Waitable)) (BOOL *aWaitable)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Waitable) (aWaitable);
    }
    STDMETHOD(SetProcessed)()
    {
       return ((VBoxEvent*)mEvent)->SetProcessed();
    }
    STDMETHOD(WaitProcessed)(LONG aTimeout, BOOL *aResult)
    {
        return ((VBoxEvent*)mEvent)->WaitProcessed(aTimeout, aResult);
    }
    void uninit()
    {
        if (!mEvent.isNull())
        {
           mEvent->uninit();
           mEvent.setNull();
        }
    }

    HRESULT init(IEventSource* aSource, VBoxEventType_T aType, BOOL aWaitable)
    {
        return mEvent->init(aSource, aType, aWaitable);
    }
private:
    ComObjPtr<VBoxEvent>      mEvent;

    // attribute state
private:
    MachineState_T    m_state;
public:
    STDMETHOD(COMGETTER(State))(MachineState_T* a_state)
    {
         *a_state = m_state;
         return S_OK;
    }
    // purely internal setter
    HRESULT set_state(MachineState_T a_state)
    {
         m_state = a_state;
         return S_OK;
    }
    // skipping IEvent attributes 
};
#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(StateChangedEvent)
NS_IMPL_THREADSAFE_ISUPPORTS2_CI(StateChangedEvent, IStateChangedEvent, IEvent)
#endif

// IAdditionsStateChangedEvent implementation code 
class ATL_NO_VTABLE AdditionsStateChangedEvent
    : public VirtualBoxBase,
      VBOX_SCRIPTABLE_IMPL(IAdditionsStateChangedEvent)
{
public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(AdditionsStateChangedEvent, IAdditionsStateChangedEvent)
    DECLARE_NOT_AGGREGATABLE(AdditionsStateChangedEvent)
    DECLARE_PROTECT_FINAL_CONSTRUCT()
    BEGIN_COM_MAP(AdditionsStateChangedEvent)
        VBOX_DEFAULT_INTERFACE_ENTRIES(IAdditionsStateChangedEvent)
        COM_INTERFACE_ENTRY(IAdditionsStateChangedEvent)
        COM_INTERFACE_ENTRY(IEvent)
    END_COM_MAP()
    AdditionsStateChangedEvent() { /*printf("AdditionsStateChangedEvent\n")*/;}
    virtual ~AdditionsStateChangedEvent() { /*printf("~AdditionsStateChangedEvent\n")*/; uninit(); }

    HRESULT FinalConstruct()
    {
        BaseFinalConstruct();
        return mEvent.createObject();
    }
    void FinalRelease()
    {
        mEvent->FinalRelease();
        BaseFinalRelease();
    }
    STDMETHOD(COMGETTER(Type)) (VBoxEventType_T *aType)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Type) (aType);
    }
    STDMETHOD(COMGETTER(Source)) (IEventSource * *aSource)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Source) (aSource);
    }
    STDMETHOD(COMGETTER(Waitable)) (BOOL *aWaitable)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Waitable) (aWaitable);
    }
    STDMETHOD(SetProcessed)()
    {
       return ((VBoxEvent*)mEvent)->SetProcessed();
    }
    STDMETHOD(WaitProcessed)(LONG aTimeout, BOOL *aResult)
    {
        return ((VBoxEvent*)mEvent)->WaitProcessed(aTimeout, aResult);
    }
    void uninit()
    {
        if (!mEvent.isNull())
        {
           mEvent->uninit();
           mEvent.setNull();
        }
    }

    HRESULT init(IEventSource* aSource, VBoxEventType_T aType, BOOL aWaitable)
    {
        return mEvent->init(aSource, aType, aWaitable);
    }
private:
    ComObjPtr<VBoxEvent>      mEvent;
    // skipping IEvent attributes 
};
#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(AdditionsStateChangedEvent)
NS_IMPL_THREADSAFE_ISUPPORTS2_CI(AdditionsStateChangedEvent, IAdditionsStateChangedEvent, IEvent)
#endif

// INetworkAdapterChangedEvent implementation code 
class ATL_NO_VTABLE NetworkAdapterChangedEvent
    : public VirtualBoxBase,
      VBOX_SCRIPTABLE_IMPL(INetworkAdapterChangedEvent)
{
public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(NetworkAdapterChangedEvent, INetworkAdapterChangedEvent)
    DECLARE_NOT_AGGREGATABLE(NetworkAdapterChangedEvent)
    DECLARE_PROTECT_FINAL_CONSTRUCT()
    BEGIN_COM_MAP(NetworkAdapterChangedEvent)
        VBOX_DEFAULT_INTERFACE_ENTRIES(INetworkAdapterChangedEvent)
        COM_INTERFACE_ENTRY(INetworkAdapterChangedEvent)
        COM_INTERFACE_ENTRY(IEvent)
    END_COM_MAP()
    NetworkAdapterChangedEvent() { /*printf("NetworkAdapterChangedEvent\n")*/;}
    virtual ~NetworkAdapterChangedEvent() { /*printf("~NetworkAdapterChangedEvent\n")*/; uninit(); }

    HRESULT FinalConstruct()
    {
        BaseFinalConstruct();
        return mEvent.createObject();
    }
    void FinalRelease()
    {
        mEvent->FinalRelease();
        BaseFinalRelease();
    }
    STDMETHOD(COMGETTER(Type)) (VBoxEventType_T *aType)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Type) (aType);
    }
    STDMETHOD(COMGETTER(Source)) (IEventSource * *aSource)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Source) (aSource);
    }
    STDMETHOD(COMGETTER(Waitable)) (BOOL *aWaitable)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Waitable) (aWaitable);
    }
    STDMETHOD(SetProcessed)()
    {
       return ((VBoxEvent*)mEvent)->SetProcessed();
    }
    STDMETHOD(WaitProcessed)(LONG aTimeout, BOOL *aResult)
    {
        return ((VBoxEvent*)mEvent)->WaitProcessed(aTimeout, aResult);
    }
    void uninit()
    {
        if (!mEvent.isNull())
        {
           mEvent->uninit();
           mEvent.setNull();
        }
    }

    HRESULT init(IEventSource* aSource, VBoxEventType_T aType, BOOL aWaitable)
    {
        return mEvent->init(aSource, aType, aWaitable);
    }
private:
    ComObjPtr<VBoxEvent>      mEvent;

    // attribute networkAdapter
private:
    ComPtr<INetworkAdapter>    m_networkAdapter;
public:
    STDMETHOD(COMGETTER(NetworkAdapter))(INetworkAdapter** a_networkAdapter)
    {
         m_networkAdapter.queryInterfaceTo(a_networkAdapter);
         return S_OK;
    }
    // purely internal setter
    HRESULT set_networkAdapter(INetworkAdapter* a_networkAdapter)
    {
         m_networkAdapter = a_networkAdapter;
         return S_OK;
    }
    // skipping IEvent attributes 
};
#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(NetworkAdapterChangedEvent)
NS_IMPL_THREADSAFE_ISUPPORTS2_CI(NetworkAdapterChangedEvent, INetworkAdapterChangedEvent, IEvent)
#endif

// ISerialPortChangedEvent implementation code 
class ATL_NO_VTABLE SerialPortChangedEvent
    : public VirtualBoxBase,
      VBOX_SCRIPTABLE_IMPL(ISerialPortChangedEvent)
{
public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(SerialPortChangedEvent, ISerialPortChangedEvent)
    DECLARE_NOT_AGGREGATABLE(SerialPortChangedEvent)
    DECLARE_PROTECT_FINAL_CONSTRUCT()
    BEGIN_COM_MAP(SerialPortChangedEvent)
        VBOX_DEFAULT_INTERFACE_ENTRIES(ISerialPortChangedEvent)
        COM_INTERFACE_ENTRY(ISerialPortChangedEvent)
        COM_INTERFACE_ENTRY(IEvent)
    END_COM_MAP()
    SerialPortChangedEvent() { /*printf("SerialPortChangedEvent\n")*/;}
    virtual ~SerialPortChangedEvent() { /*printf("~SerialPortChangedEvent\n")*/; uninit(); }

    HRESULT FinalConstruct()
    {
        BaseFinalConstruct();
        return mEvent.createObject();
    }
    void FinalRelease()
    {
        mEvent->FinalRelease();
        BaseFinalRelease();
    }
    STDMETHOD(COMGETTER(Type)) (VBoxEventType_T *aType)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Type) (aType);
    }
    STDMETHOD(COMGETTER(Source)) (IEventSource * *aSource)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Source) (aSource);
    }
    STDMETHOD(COMGETTER(Waitable)) (BOOL *aWaitable)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Waitable) (aWaitable);
    }
    STDMETHOD(SetProcessed)()
    {
       return ((VBoxEvent*)mEvent)->SetProcessed();
    }
    STDMETHOD(WaitProcessed)(LONG aTimeout, BOOL *aResult)
    {
        return ((VBoxEvent*)mEvent)->WaitProcessed(aTimeout, aResult);
    }
    void uninit()
    {
        if (!mEvent.isNull())
        {
           mEvent->uninit();
           mEvent.setNull();
        }
    }

    HRESULT init(IEventSource* aSource, VBoxEventType_T aType, BOOL aWaitable)
    {
        return mEvent->init(aSource, aType, aWaitable);
    }
private:
    ComObjPtr<VBoxEvent>      mEvent;

    // attribute serialPort
private:
    ComPtr<ISerialPort>    m_serialPort;
public:
    STDMETHOD(COMGETTER(SerialPort))(ISerialPort** a_serialPort)
    {
         m_serialPort.queryInterfaceTo(a_serialPort);
         return S_OK;
    }
    // purely internal setter
    HRESULT set_serialPort(ISerialPort* a_serialPort)
    {
         m_serialPort = a_serialPort;
         return S_OK;
    }
    // skipping IEvent attributes 
};
#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(SerialPortChangedEvent)
NS_IMPL_THREADSAFE_ISUPPORTS2_CI(SerialPortChangedEvent, ISerialPortChangedEvent, IEvent)
#endif

// IParallelPortChangedEvent implementation code 
class ATL_NO_VTABLE ParallelPortChangedEvent
    : public VirtualBoxBase,
      VBOX_SCRIPTABLE_IMPL(IParallelPortChangedEvent)
{
public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(ParallelPortChangedEvent, IParallelPortChangedEvent)
    DECLARE_NOT_AGGREGATABLE(ParallelPortChangedEvent)
    DECLARE_PROTECT_FINAL_CONSTRUCT()
    BEGIN_COM_MAP(ParallelPortChangedEvent)
        VBOX_DEFAULT_INTERFACE_ENTRIES(IParallelPortChangedEvent)
        COM_INTERFACE_ENTRY(IParallelPortChangedEvent)
        COM_INTERFACE_ENTRY(IEvent)
    END_COM_MAP()
    ParallelPortChangedEvent() { /*printf("ParallelPortChangedEvent\n")*/;}
    virtual ~ParallelPortChangedEvent() { /*printf("~ParallelPortChangedEvent\n")*/; uninit(); }

    HRESULT FinalConstruct()
    {
        BaseFinalConstruct();
        return mEvent.createObject();
    }
    void FinalRelease()
    {
        mEvent->FinalRelease();
        BaseFinalRelease();
    }
    STDMETHOD(COMGETTER(Type)) (VBoxEventType_T *aType)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Type) (aType);
    }
    STDMETHOD(COMGETTER(Source)) (IEventSource * *aSource)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Source) (aSource);
    }
    STDMETHOD(COMGETTER(Waitable)) (BOOL *aWaitable)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Waitable) (aWaitable);
    }
    STDMETHOD(SetProcessed)()
    {
       return ((VBoxEvent*)mEvent)->SetProcessed();
    }
    STDMETHOD(WaitProcessed)(LONG aTimeout, BOOL *aResult)
    {
        return ((VBoxEvent*)mEvent)->WaitProcessed(aTimeout, aResult);
    }
    void uninit()
    {
        if (!mEvent.isNull())
        {
           mEvent->uninit();
           mEvent.setNull();
        }
    }

    HRESULT init(IEventSource* aSource, VBoxEventType_T aType, BOOL aWaitable)
    {
        return mEvent->init(aSource, aType, aWaitable);
    }
private:
    ComObjPtr<VBoxEvent>      mEvent;

    // attribute parallelPort
private:
    ComPtr<IParallelPort>    m_parallelPort;
public:
    STDMETHOD(COMGETTER(ParallelPort))(IParallelPort** a_parallelPort)
    {
         m_parallelPort.queryInterfaceTo(a_parallelPort);
         return S_OK;
    }
    // purely internal setter
    HRESULT set_parallelPort(IParallelPort* a_parallelPort)
    {
         m_parallelPort = a_parallelPort;
         return S_OK;
    }
    // skipping IEvent attributes 
};
#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(ParallelPortChangedEvent)
NS_IMPL_THREADSAFE_ISUPPORTS2_CI(ParallelPortChangedEvent, IParallelPortChangedEvent, IEvent)
#endif

// IStorageControllerChangedEvent implementation code 
class ATL_NO_VTABLE StorageControllerChangedEvent
    : public VirtualBoxBase,
      VBOX_SCRIPTABLE_IMPL(IStorageControllerChangedEvent)
{
public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(StorageControllerChangedEvent, IStorageControllerChangedEvent)
    DECLARE_NOT_AGGREGATABLE(StorageControllerChangedEvent)
    DECLARE_PROTECT_FINAL_CONSTRUCT()
    BEGIN_COM_MAP(StorageControllerChangedEvent)
        VBOX_DEFAULT_INTERFACE_ENTRIES(IStorageControllerChangedEvent)
        COM_INTERFACE_ENTRY(IStorageControllerChangedEvent)
        COM_INTERFACE_ENTRY(IEvent)
    END_COM_MAP()
    StorageControllerChangedEvent() { /*printf("StorageControllerChangedEvent\n")*/;}
    virtual ~StorageControllerChangedEvent() { /*printf("~StorageControllerChangedEvent\n")*/; uninit(); }

    HRESULT FinalConstruct()
    {
        BaseFinalConstruct();
        return mEvent.createObject();
    }
    void FinalRelease()
    {
        mEvent->FinalRelease();
        BaseFinalRelease();
    }
    STDMETHOD(COMGETTER(Type)) (VBoxEventType_T *aType)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Type) (aType);
    }
    STDMETHOD(COMGETTER(Source)) (IEventSource * *aSource)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Source) (aSource);
    }
    STDMETHOD(COMGETTER(Waitable)) (BOOL *aWaitable)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Waitable) (aWaitable);
    }
    STDMETHOD(SetProcessed)()
    {
       return ((VBoxEvent*)mEvent)->SetProcessed();
    }
    STDMETHOD(WaitProcessed)(LONG aTimeout, BOOL *aResult)
    {
        return ((VBoxEvent*)mEvent)->WaitProcessed(aTimeout, aResult);
    }
    void uninit()
    {
        if (!mEvent.isNull())
        {
           mEvent->uninit();
           mEvent.setNull();
        }
    }

    HRESULT init(IEventSource* aSource, VBoxEventType_T aType, BOOL aWaitable)
    {
        return mEvent->init(aSource, aType, aWaitable);
    }
private:
    ComObjPtr<VBoxEvent>      mEvent;
    // skipping IEvent attributes 
};
#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(StorageControllerChangedEvent)
NS_IMPL_THREADSAFE_ISUPPORTS2_CI(StorageControllerChangedEvent, IStorageControllerChangedEvent, IEvent)
#endif

// IMediumChangedEvent implementation code 
class ATL_NO_VTABLE MediumChangedEvent
    : public VirtualBoxBase,
      VBOX_SCRIPTABLE_IMPL(IMediumChangedEvent)
{
public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(MediumChangedEvent, IMediumChangedEvent)
    DECLARE_NOT_AGGREGATABLE(MediumChangedEvent)
    DECLARE_PROTECT_FINAL_CONSTRUCT()
    BEGIN_COM_MAP(MediumChangedEvent)
        VBOX_DEFAULT_INTERFACE_ENTRIES(IMediumChangedEvent)
        COM_INTERFACE_ENTRY(IMediumChangedEvent)
        COM_INTERFACE_ENTRY(IEvent)
    END_COM_MAP()
    MediumChangedEvent() { /*printf("MediumChangedEvent\n")*/;}
    virtual ~MediumChangedEvent() { /*printf("~MediumChangedEvent\n")*/; uninit(); }

    HRESULT FinalConstruct()
    {
        BaseFinalConstruct();
        return mEvent.createObject();
    }
    void FinalRelease()
    {
        mEvent->FinalRelease();
        BaseFinalRelease();
    }
    STDMETHOD(COMGETTER(Type)) (VBoxEventType_T *aType)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Type) (aType);
    }
    STDMETHOD(COMGETTER(Source)) (IEventSource * *aSource)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Source) (aSource);
    }
    STDMETHOD(COMGETTER(Waitable)) (BOOL *aWaitable)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Waitable) (aWaitable);
    }
    STDMETHOD(SetProcessed)()
    {
       return ((VBoxEvent*)mEvent)->SetProcessed();
    }
    STDMETHOD(WaitProcessed)(LONG aTimeout, BOOL *aResult)
    {
        return ((VBoxEvent*)mEvent)->WaitProcessed(aTimeout, aResult);
    }
    void uninit()
    {
        if (!mEvent.isNull())
        {
           mEvent->uninit();
           mEvent.setNull();
        }
    }

    HRESULT init(IEventSource* aSource, VBoxEventType_T aType, BOOL aWaitable)
    {
        return mEvent->init(aSource, aType, aWaitable);
    }
private:
    ComObjPtr<VBoxEvent>      mEvent;

    // attribute mediumAttachment
private:
    ComPtr<IMediumAttachment>    m_mediumAttachment;
public:
    STDMETHOD(COMGETTER(MediumAttachment))(IMediumAttachment** a_mediumAttachment)
    {
         m_mediumAttachment.queryInterfaceTo(a_mediumAttachment);
         return S_OK;
    }
    // purely internal setter
    HRESULT set_mediumAttachment(IMediumAttachment* a_mediumAttachment)
    {
         m_mediumAttachment = a_mediumAttachment;
         return S_OK;
    }
    // skipping IEvent attributes 
};
#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(MediumChangedEvent)
NS_IMPL_THREADSAFE_ISUPPORTS2_CI(MediumChangedEvent, IMediumChangedEvent, IEvent)
#endif

// IClipboardModeChangedEvent implementation code 
class ATL_NO_VTABLE ClipboardModeChangedEvent
    : public VirtualBoxBase,
      VBOX_SCRIPTABLE_IMPL(IClipboardModeChangedEvent)
{
public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(ClipboardModeChangedEvent, IClipboardModeChangedEvent)
    DECLARE_NOT_AGGREGATABLE(ClipboardModeChangedEvent)
    DECLARE_PROTECT_FINAL_CONSTRUCT()
    BEGIN_COM_MAP(ClipboardModeChangedEvent)
        VBOX_DEFAULT_INTERFACE_ENTRIES(IClipboardModeChangedEvent)
        COM_INTERFACE_ENTRY(IClipboardModeChangedEvent)
        COM_INTERFACE_ENTRY(IEvent)
    END_COM_MAP()
    ClipboardModeChangedEvent() { /*printf("ClipboardModeChangedEvent\n")*/;}
    virtual ~ClipboardModeChangedEvent() { /*printf("~ClipboardModeChangedEvent\n")*/; uninit(); }

    HRESULT FinalConstruct()
    {
        BaseFinalConstruct();
        return mEvent.createObject();
    }
    void FinalRelease()
    {
        mEvent->FinalRelease();
        BaseFinalRelease();
    }
    STDMETHOD(COMGETTER(Type)) (VBoxEventType_T *aType)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Type) (aType);
    }
    STDMETHOD(COMGETTER(Source)) (IEventSource * *aSource)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Source) (aSource);
    }
    STDMETHOD(COMGETTER(Waitable)) (BOOL *aWaitable)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Waitable) (aWaitable);
    }
    STDMETHOD(SetProcessed)()
    {
       return ((VBoxEvent*)mEvent)->SetProcessed();
    }
    STDMETHOD(WaitProcessed)(LONG aTimeout, BOOL *aResult)
    {
        return ((VBoxEvent*)mEvent)->WaitProcessed(aTimeout, aResult);
    }
    void uninit()
    {
        if (!mEvent.isNull())
        {
           mEvent->uninit();
           mEvent.setNull();
        }
    }

    HRESULT init(IEventSource* aSource, VBoxEventType_T aType, BOOL aWaitable)
    {
        return mEvent->init(aSource, aType, aWaitable);
    }
private:
    ComObjPtr<VBoxEvent>      mEvent;

    // attribute clipboardMode
private:
    ClipboardMode_T    m_clipboardMode;
public:
    STDMETHOD(COMGETTER(ClipboardMode))(ClipboardMode_T* a_clipboardMode)
    {
         *a_clipboardMode = m_clipboardMode;
         return S_OK;
    }
    // purely internal setter
    HRESULT set_clipboardMode(ClipboardMode_T a_clipboardMode)
    {
         m_clipboardMode = a_clipboardMode;
         return S_OK;
    }
    // skipping IEvent attributes 
};
#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(ClipboardModeChangedEvent)
NS_IMPL_THREADSAFE_ISUPPORTS2_CI(ClipboardModeChangedEvent, IClipboardModeChangedEvent, IEvent)
#endif

// IDragAndDropModeChangedEvent implementation code 
class ATL_NO_VTABLE DragAndDropModeChangedEvent
    : public VirtualBoxBase,
      VBOX_SCRIPTABLE_IMPL(IDragAndDropModeChangedEvent)
{
public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(DragAndDropModeChangedEvent, IDragAndDropModeChangedEvent)
    DECLARE_NOT_AGGREGATABLE(DragAndDropModeChangedEvent)
    DECLARE_PROTECT_FINAL_CONSTRUCT()
    BEGIN_COM_MAP(DragAndDropModeChangedEvent)
        VBOX_DEFAULT_INTERFACE_ENTRIES(IDragAndDropModeChangedEvent)
        COM_INTERFACE_ENTRY(IDragAndDropModeChangedEvent)
        COM_INTERFACE_ENTRY(IEvent)
    END_COM_MAP()
    DragAndDropModeChangedEvent() { /*printf("DragAndDropModeChangedEvent\n")*/;}
    virtual ~DragAndDropModeChangedEvent() { /*printf("~DragAndDropModeChangedEvent\n")*/; uninit(); }

    HRESULT FinalConstruct()
    {
        BaseFinalConstruct();
        return mEvent.createObject();
    }
    void FinalRelease()
    {
        mEvent->FinalRelease();
        BaseFinalRelease();
    }
    STDMETHOD(COMGETTER(Type)) (VBoxEventType_T *aType)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Type) (aType);
    }
    STDMETHOD(COMGETTER(Source)) (IEventSource * *aSource)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Source) (aSource);
    }
    STDMETHOD(COMGETTER(Waitable)) (BOOL *aWaitable)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Waitable) (aWaitable);
    }
    STDMETHOD(SetProcessed)()
    {
       return ((VBoxEvent*)mEvent)->SetProcessed();
    }
    STDMETHOD(WaitProcessed)(LONG aTimeout, BOOL *aResult)
    {
        return ((VBoxEvent*)mEvent)->WaitProcessed(aTimeout, aResult);
    }
    void uninit()
    {
        if (!mEvent.isNull())
        {
           mEvent->uninit();
           mEvent.setNull();
        }
    }

    HRESULT init(IEventSource* aSource, VBoxEventType_T aType, BOOL aWaitable)
    {
        return mEvent->init(aSource, aType, aWaitable);
    }
private:
    ComObjPtr<VBoxEvent>      mEvent;

    // attribute dragAndDropMode
private:
    DragAndDropMode_T    m_dragAndDropMode;
public:
    STDMETHOD(COMGETTER(DragAndDropMode))(DragAndDropMode_T* a_dragAndDropMode)
    {
         *a_dragAndDropMode = m_dragAndDropMode;
         return S_OK;
    }
    // purely internal setter
    HRESULT set_dragAndDropMode(DragAndDropMode_T a_dragAndDropMode)
    {
         m_dragAndDropMode = a_dragAndDropMode;
         return S_OK;
    }
    // skipping IEvent attributes 
};
#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(DragAndDropModeChangedEvent)
NS_IMPL_THREADSAFE_ISUPPORTS2_CI(DragAndDropModeChangedEvent, IDragAndDropModeChangedEvent, IEvent)
#endif

// ICPUChangedEvent implementation code 
class ATL_NO_VTABLE CPUChangedEvent
    : public VirtualBoxBase,
      VBOX_SCRIPTABLE_IMPL(ICPUChangedEvent)
{
public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(CPUChangedEvent, ICPUChangedEvent)
    DECLARE_NOT_AGGREGATABLE(CPUChangedEvent)
    DECLARE_PROTECT_FINAL_CONSTRUCT()
    BEGIN_COM_MAP(CPUChangedEvent)
        VBOX_DEFAULT_INTERFACE_ENTRIES(ICPUChangedEvent)
        COM_INTERFACE_ENTRY(ICPUChangedEvent)
        COM_INTERFACE_ENTRY(IEvent)
    END_COM_MAP()
    CPUChangedEvent() { /*printf("CPUChangedEvent\n")*/;}
    virtual ~CPUChangedEvent() { /*printf("~CPUChangedEvent\n")*/; uninit(); }

    HRESULT FinalConstruct()
    {
        BaseFinalConstruct();
        return mEvent.createObject();
    }
    void FinalRelease()
    {
        mEvent->FinalRelease();
        BaseFinalRelease();
    }
    STDMETHOD(COMGETTER(Type)) (VBoxEventType_T *aType)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Type) (aType);
    }
    STDMETHOD(COMGETTER(Source)) (IEventSource * *aSource)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Source) (aSource);
    }
    STDMETHOD(COMGETTER(Waitable)) (BOOL *aWaitable)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Waitable) (aWaitable);
    }
    STDMETHOD(SetProcessed)()
    {
       return ((VBoxEvent*)mEvent)->SetProcessed();
    }
    STDMETHOD(WaitProcessed)(LONG aTimeout, BOOL *aResult)
    {
        return ((VBoxEvent*)mEvent)->WaitProcessed(aTimeout, aResult);
    }
    void uninit()
    {
        if (!mEvent.isNull())
        {
           mEvent->uninit();
           mEvent.setNull();
        }
    }

    HRESULT init(IEventSource* aSource, VBoxEventType_T aType, BOOL aWaitable)
    {
        return mEvent->init(aSource, aType, aWaitable);
    }
private:
    ComObjPtr<VBoxEvent>      mEvent;

    // attribute CPU
private:
    ULONG    m_CPU;
public:
    STDMETHOD(COMGETTER(CPU))(ULONG* a_CPU)
    {
         *a_CPU = m_CPU;
         return S_OK;
    }
    // purely internal setter
    HRESULT set_CPU(ULONG a_CPU)
    {
         m_CPU = a_CPU;
         return S_OK;
    }

    // attribute add
private:
    BOOL    m_add;
public:
    STDMETHOD(COMGETTER(Add))(BOOL* a_add)
    {
         *a_add = m_add;
         return S_OK;
    }
    // purely internal setter
    HRESULT set_add(BOOL a_add)
    {
         m_add = a_add;
         return S_OK;
    }
    // skipping IEvent attributes 
};
#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(CPUChangedEvent)
NS_IMPL_THREADSAFE_ISUPPORTS2_CI(CPUChangedEvent, ICPUChangedEvent, IEvent)
#endif

// ICPUExecutionCapChangedEvent implementation code 
class ATL_NO_VTABLE CPUExecutionCapChangedEvent
    : public VirtualBoxBase,
      VBOX_SCRIPTABLE_IMPL(ICPUExecutionCapChangedEvent)
{
public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(CPUExecutionCapChangedEvent, ICPUExecutionCapChangedEvent)
    DECLARE_NOT_AGGREGATABLE(CPUExecutionCapChangedEvent)
    DECLARE_PROTECT_FINAL_CONSTRUCT()
    BEGIN_COM_MAP(CPUExecutionCapChangedEvent)
        VBOX_DEFAULT_INTERFACE_ENTRIES(ICPUExecutionCapChangedEvent)
        COM_INTERFACE_ENTRY(ICPUExecutionCapChangedEvent)
        COM_INTERFACE_ENTRY(IEvent)
    END_COM_MAP()
    CPUExecutionCapChangedEvent() { /*printf("CPUExecutionCapChangedEvent\n")*/;}
    virtual ~CPUExecutionCapChangedEvent() { /*printf("~CPUExecutionCapChangedEvent\n")*/; uninit(); }

    HRESULT FinalConstruct()
    {
        BaseFinalConstruct();
        return mEvent.createObject();
    }
    void FinalRelease()
    {
        mEvent->FinalRelease();
        BaseFinalRelease();
    }
    STDMETHOD(COMGETTER(Type)) (VBoxEventType_T *aType)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Type) (aType);
    }
    STDMETHOD(COMGETTER(Source)) (IEventSource * *aSource)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Source) (aSource);
    }
    STDMETHOD(COMGETTER(Waitable)) (BOOL *aWaitable)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Waitable) (aWaitable);
    }
    STDMETHOD(SetProcessed)()
    {
       return ((VBoxEvent*)mEvent)->SetProcessed();
    }
    STDMETHOD(WaitProcessed)(LONG aTimeout, BOOL *aResult)
    {
        return ((VBoxEvent*)mEvent)->WaitProcessed(aTimeout, aResult);
    }
    void uninit()
    {
        if (!mEvent.isNull())
        {
           mEvent->uninit();
           mEvent.setNull();
        }
    }

    HRESULT init(IEventSource* aSource, VBoxEventType_T aType, BOOL aWaitable)
    {
        return mEvent->init(aSource, aType, aWaitable);
    }
private:
    ComObjPtr<VBoxEvent>      mEvent;

    // attribute executionCap
private:
    ULONG    m_executionCap;
public:
    STDMETHOD(COMGETTER(ExecutionCap))(ULONG* a_executionCap)
    {
         *a_executionCap = m_executionCap;
         return S_OK;
    }
    // purely internal setter
    HRESULT set_executionCap(ULONG a_executionCap)
    {
         m_executionCap = a_executionCap;
         return S_OK;
    }
    // skipping IEvent attributes 
};
#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(CPUExecutionCapChangedEvent)
NS_IMPL_THREADSAFE_ISUPPORTS2_CI(CPUExecutionCapChangedEvent, ICPUExecutionCapChangedEvent, IEvent)
#endif

// IGuestKeyboardEvent implementation code 
class ATL_NO_VTABLE GuestKeyboardEvent
    : public VirtualBoxBase,
      VBOX_SCRIPTABLE_IMPL(IGuestKeyboardEvent)
{
public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(GuestKeyboardEvent, IGuestKeyboardEvent)
    DECLARE_NOT_AGGREGATABLE(GuestKeyboardEvent)
    DECLARE_PROTECT_FINAL_CONSTRUCT()
    BEGIN_COM_MAP(GuestKeyboardEvent)
        VBOX_DEFAULT_INTERFACE_ENTRIES(IGuestKeyboardEvent)
        COM_INTERFACE_ENTRY(IGuestKeyboardEvent)
        COM_INTERFACE_ENTRY(IEvent)
    END_COM_MAP()
    GuestKeyboardEvent() { /*printf("GuestKeyboardEvent\n")*/;}
    virtual ~GuestKeyboardEvent() { /*printf("~GuestKeyboardEvent\n")*/; uninit(); }

    HRESULT FinalConstruct()
    {
        BaseFinalConstruct();
        return mEvent.createObject();
    }
    void FinalRelease()
    {
        mEvent->FinalRelease();
        BaseFinalRelease();
    }
    STDMETHOD(COMGETTER(Type)) (VBoxEventType_T *aType)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Type) (aType);
    }
    STDMETHOD(COMGETTER(Source)) (IEventSource * *aSource)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Source) (aSource);
    }
    STDMETHOD(COMGETTER(Waitable)) (BOOL *aWaitable)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Waitable) (aWaitable);
    }
    STDMETHOD(SetProcessed)()
    {
       return ((VBoxEvent*)mEvent)->SetProcessed();
    }
    STDMETHOD(WaitProcessed)(LONG aTimeout, BOOL *aResult)
    {
        return ((VBoxEvent*)mEvent)->WaitProcessed(aTimeout, aResult);
    }
    void uninit()
    {
        if (!mEvent.isNull())
        {
           mEvent->uninit();
           mEvent.setNull();
        }
    }

    HRESULT init(IEventSource* aSource, VBoxEventType_T aType, BOOL aWaitable)
    {
        return mEvent->init(aSource, aType, aWaitable);
    }
private:
    ComObjPtr<VBoxEvent>      mEvent;

    // attribute scancodes
private:
    com::SafeArray<LONG>    m_scancodes;
public:
    STDMETHOD(COMGETTER(Scancodes))(ComSafeArrayOut(LONG, a_scancodes))
    {
         SafeArray<LONG> result;
         m_scancodes.cloneTo(result);
         result.detachTo(ComSafeArrayOutArg(a_scancodes));
         return S_OK;
    }
    // purely internal setter
    HRESULT set_scancodes(ComSafeArrayIn(LONG,a_scancodes))
    {
         SafeArray<LONG> aArr(ComSafeArrayInArg(a_scancodes));
         m_scancodes.initFrom(aArr);
         return S_OK;
    }
    // skipping IEvent attributes 
};
#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(GuestKeyboardEvent)
NS_IMPL_THREADSAFE_ISUPPORTS2_CI(GuestKeyboardEvent, IGuestKeyboardEvent, IEvent)
#endif

// IGuestMouseEvent implementation code 
class ATL_NO_VTABLE GuestMouseEvent
    : public VirtualBoxBase,
      VBOX_SCRIPTABLE_IMPL(IGuestMouseEvent)
{
public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(GuestMouseEvent, IGuestMouseEvent)
    DECLARE_NOT_AGGREGATABLE(GuestMouseEvent)
    DECLARE_PROTECT_FINAL_CONSTRUCT()
    BEGIN_COM_MAP(GuestMouseEvent)
        VBOX_DEFAULT_INTERFACE_ENTRIES(IGuestMouseEvent)
        COM_INTERFACE_ENTRY(IGuestMouseEvent)
        COM_INTERFACE_ENTRY(IReusableEvent)
        COM_INTERFACE_ENTRY(IEvent)
    END_COM_MAP()
    GuestMouseEvent() { /*printf("GuestMouseEvent\n")*/;}
    virtual ~GuestMouseEvent() { /*printf("~GuestMouseEvent\n")*/; uninit(); }

    HRESULT FinalConstruct()
    {
        BaseFinalConstruct();
        return mEvent.createObject();
    }
    void FinalRelease()
    {
        mEvent->FinalRelease();
        BaseFinalRelease();
    }
    STDMETHOD(COMGETTER(Type)) (VBoxEventType_T *aType)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Type) (aType);
    }
    STDMETHOD(COMGETTER(Source)) (IEventSource * *aSource)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Source) (aSource);
    }
    STDMETHOD(COMGETTER(Waitable)) (BOOL *aWaitable)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Waitable) (aWaitable);
    }
    STDMETHOD(SetProcessed)()
    {
       return ((VBoxEvent*)mEvent)->SetProcessed();
    }
    STDMETHOD(WaitProcessed)(LONG aTimeout, BOOL *aResult)
    {
        return ((VBoxEvent*)mEvent)->WaitProcessed(aTimeout, aResult);
    }
    void uninit()
    {
        if (!mEvent.isNull())
        {
           mEvent->uninit();
           mEvent.setNull();
        }
    }


    HRESULT init(IEventSource* aSource, VBoxEventType_T aType, BOOL aWaitable = FALSE)
    {
        mGeneration = 1;
        return mEvent->init(aSource, aType, aWaitable);
    }
    STDMETHOD(COMGETTER(Generation)) (ULONG *aGeneration)
    {
      *aGeneration = mGeneration;
      return S_OK;
    }
    STDMETHOD(Reuse) ()
    {
       ASMAtomicIncU32((volatile uint32_t*)&mGeneration);
       return S_OK;
    }
private:
    volatile ULONG              mGeneration;
    ComObjPtr<VBoxEvent>        mEvent;

    // attribute mode
private:
    GuestMouseEventMode_T    m_mode;
public:
    STDMETHOD(COMGETTER(Mode))(GuestMouseEventMode_T* a_mode)
    {
         *a_mode = m_mode;
         return S_OK;
    }
    // purely internal setter
    HRESULT set_mode(GuestMouseEventMode_T a_mode)
    {
         m_mode = a_mode;
         return S_OK;
    }

    // attribute x
private:
    LONG    m_x;
public:
    STDMETHOD(COMGETTER(X))(LONG* a_x)
    {
         *a_x = m_x;
         return S_OK;
    }
    // purely internal setter
    HRESULT set_x(LONG a_x)
    {
         m_x = a_x;
         return S_OK;
    }

    // attribute y
private:
    LONG    m_y;
public:
    STDMETHOD(COMGETTER(Y))(LONG* a_y)
    {
         *a_y = m_y;
         return S_OK;
    }
    // purely internal setter
    HRESULT set_y(LONG a_y)
    {
         m_y = a_y;
         return S_OK;
    }

    // attribute z
private:
    LONG    m_z;
public:
    STDMETHOD(COMGETTER(Z))(LONG* a_z)
    {
         *a_z = m_z;
         return S_OK;
    }
    // purely internal setter
    HRESULT set_z(LONG a_z)
    {
         m_z = a_z;
         return S_OK;
    }

    // attribute w
private:
    LONG    m_w;
public:
    STDMETHOD(COMGETTER(W))(LONG* a_w)
    {
         *a_w = m_w;
         return S_OK;
    }
    // purely internal setter
    HRESULT set_w(LONG a_w)
    {
         m_w = a_w;
         return S_OK;
    }

    // attribute buttons
private:
    LONG    m_buttons;
public:
    STDMETHOD(COMGETTER(Buttons))(LONG* a_buttons)
    {
         *a_buttons = m_buttons;
         return S_OK;
    }
    // purely internal setter
    HRESULT set_buttons(LONG a_buttons)
    {
         m_buttons = a_buttons;
         return S_OK;
    }
    // skipping IReusableEvent attributes 
};
#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(GuestMouseEvent)
NS_IMPL_THREADSAFE_ISUPPORTS3_CI(GuestMouseEvent, IGuestMouseEvent, IReusableEvent, IEvent)
#endif

// IGuestMultiTouchEvent implementation code 
class ATL_NO_VTABLE GuestMultiTouchEvent
    : public VirtualBoxBase,
      VBOX_SCRIPTABLE_IMPL(IGuestMultiTouchEvent)
{
public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(GuestMultiTouchEvent, IGuestMultiTouchEvent)
    DECLARE_NOT_AGGREGATABLE(GuestMultiTouchEvent)
    DECLARE_PROTECT_FINAL_CONSTRUCT()
    BEGIN_COM_MAP(GuestMultiTouchEvent)
        VBOX_DEFAULT_INTERFACE_ENTRIES(IGuestMultiTouchEvent)
        COM_INTERFACE_ENTRY(IGuestMultiTouchEvent)
        COM_INTERFACE_ENTRY(IEvent)
    END_COM_MAP()
    GuestMultiTouchEvent() { /*printf("GuestMultiTouchEvent\n")*/;}
    virtual ~GuestMultiTouchEvent() { /*printf("~GuestMultiTouchEvent\n")*/; uninit(); }

    HRESULT FinalConstruct()
    {
        BaseFinalConstruct();
        return mEvent.createObject();
    }
    void FinalRelease()
    {
        mEvent->FinalRelease();
        BaseFinalRelease();
    }
    STDMETHOD(COMGETTER(Type)) (VBoxEventType_T *aType)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Type) (aType);
    }
    STDMETHOD(COMGETTER(Source)) (IEventSource * *aSource)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Source) (aSource);
    }
    STDMETHOD(COMGETTER(Waitable)) (BOOL *aWaitable)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Waitable) (aWaitable);
    }
    STDMETHOD(SetProcessed)()
    {
       return ((VBoxEvent*)mEvent)->SetProcessed();
    }
    STDMETHOD(WaitProcessed)(LONG aTimeout, BOOL *aResult)
    {
        return ((VBoxEvent*)mEvent)->WaitProcessed(aTimeout, aResult);
    }
    void uninit()
    {
        if (!mEvent.isNull())
        {
           mEvent->uninit();
           mEvent.setNull();
        }
    }

    HRESULT init(IEventSource* aSource, VBoxEventType_T aType, BOOL aWaitable)
    {
        return mEvent->init(aSource, aType, aWaitable);
    }
private:
    ComObjPtr<VBoxEvent>      mEvent;

    // attribute contactCount
private:
    LONG    m_contactCount;
public:
    STDMETHOD(COMGETTER(ContactCount))(LONG* a_contactCount)
    {
         *a_contactCount = m_contactCount;
         return S_OK;
    }
    // purely internal setter
    HRESULT set_contactCount(LONG a_contactCount)
    {
         m_contactCount = a_contactCount;
         return S_OK;
    }

    // attribute xPositions
private:
    com::SafeArray<SHORT>    m_xPositions;
public:
    STDMETHOD(COMGETTER(XPositions))(ComSafeArrayOut(SHORT, a_xPositions))
    {
         SafeArray<SHORT> result;
         m_xPositions.cloneTo(result);
         result.detachTo(ComSafeArrayOutArg(a_xPositions));
         return S_OK;
    }
    // purely internal setter
    HRESULT set_xPositions(ComSafeArrayIn(SHORT,a_xPositions))
    {
         SafeArray<SHORT> aArr(ComSafeArrayInArg(a_xPositions));
         m_xPositions.initFrom(aArr);
         return S_OK;
    }

    // attribute yPositions
private:
    com::SafeArray<SHORT>    m_yPositions;
public:
    STDMETHOD(COMGETTER(YPositions))(ComSafeArrayOut(SHORT, a_yPositions))
    {
         SafeArray<SHORT> result;
         m_yPositions.cloneTo(result);
         result.detachTo(ComSafeArrayOutArg(a_yPositions));
         return S_OK;
    }
    // purely internal setter
    HRESULT set_yPositions(ComSafeArrayIn(SHORT,a_yPositions))
    {
         SafeArray<SHORT> aArr(ComSafeArrayInArg(a_yPositions));
         m_yPositions.initFrom(aArr);
         return S_OK;
    }

    // attribute contactIds
private:
    com::SafeArray<USHORT>    m_contactIds;
public:
    STDMETHOD(COMGETTER(ContactIds))(ComSafeArrayOut(USHORT, a_contactIds))
    {
         SafeArray<USHORT> result;
         m_contactIds.cloneTo(result);
         result.detachTo(ComSafeArrayOutArg(a_contactIds));
         return S_OK;
    }
    // purely internal setter
    HRESULT set_contactIds(ComSafeArrayIn(USHORT,a_contactIds))
    {
         SafeArray<USHORT> aArr(ComSafeArrayInArg(a_contactIds));
         m_contactIds.initFrom(aArr);
         return S_OK;
    }

    // attribute contactFlags
private:
    com::SafeArray<USHORT>    m_contactFlags;
public:
    STDMETHOD(COMGETTER(ContactFlags))(ComSafeArrayOut(USHORT, a_contactFlags))
    {
         SafeArray<USHORT> result;
         m_contactFlags.cloneTo(result);
         result.detachTo(ComSafeArrayOutArg(a_contactFlags));
         return S_OK;
    }
    // purely internal setter
    HRESULT set_contactFlags(ComSafeArrayIn(USHORT,a_contactFlags))
    {
         SafeArray<USHORT> aArr(ComSafeArrayInArg(a_contactFlags));
         m_contactFlags.initFrom(aArr);
         return S_OK;
    }

    // attribute scanTime
private:
    ULONG    m_scanTime;
public:
    STDMETHOD(COMGETTER(ScanTime))(ULONG* a_scanTime)
    {
         *a_scanTime = m_scanTime;
         return S_OK;
    }
    // purely internal setter
    HRESULT set_scanTime(ULONG a_scanTime)
    {
         m_scanTime = a_scanTime;
         return S_OK;
    }
    // skipping IEvent attributes 
};
#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(GuestMultiTouchEvent)
NS_IMPL_THREADSAFE_ISUPPORTS2_CI(GuestMultiTouchEvent, IGuestMultiTouchEvent, IEvent)
#endif

// IGuestSessionStateChangedEvent implementation code 
class ATL_NO_VTABLE GuestSessionStateChangedEvent
    : public VirtualBoxBase,
      VBOX_SCRIPTABLE_IMPL(IGuestSessionStateChangedEvent)
{
public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(GuestSessionStateChangedEvent, IGuestSessionStateChangedEvent)
    DECLARE_NOT_AGGREGATABLE(GuestSessionStateChangedEvent)
    DECLARE_PROTECT_FINAL_CONSTRUCT()
    BEGIN_COM_MAP(GuestSessionStateChangedEvent)
        VBOX_DEFAULT_INTERFACE_ENTRIES(IGuestSessionStateChangedEvent)
        COM_INTERFACE_ENTRY(IGuestSessionStateChangedEvent)
        COM_INTERFACE_ENTRY(IGuestSessionEvent)
        COM_INTERFACE_ENTRY(IEvent)
    END_COM_MAP()
    GuestSessionStateChangedEvent() { /*printf("GuestSessionStateChangedEvent\n")*/;}
    virtual ~GuestSessionStateChangedEvent() { /*printf("~GuestSessionStateChangedEvent\n")*/; uninit(); }

    HRESULT FinalConstruct()
    {
        BaseFinalConstruct();
        return mEvent.createObject();
    }
    void FinalRelease()
    {
        mEvent->FinalRelease();
        BaseFinalRelease();
    }
    STDMETHOD(COMGETTER(Type)) (VBoxEventType_T *aType)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Type) (aType);
    }
    STDMETHOD(COMGETTER(Source)) (IEventSource * *aSource)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Source) (aSource);
    }
    STDMETHOD(COMGETTER(Waitable)) (BOOL *aWaitable)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Waitable) (aWaitable);
    }
    STDMETHOD(SetProcessed)()
    {
       return ((VBoxEvent*)mEvent)->SetProcessed();
    }
    STDMETHOD(WaitProcessed)(LONG aTimeout, BOOL *aResult)
    {
        return ((VBoxEvent*)mEvent)->WaitProcessed(aTimeout, aResult);
    }
    void uninit()
    {
        if (!mEvent.isNull())
        {
           mEvent->uninit();
           mEvent.setNull();
        }
    }

    HRESULT init(IEventSource* aSource, VBoxEventType_T aType, BOOL aWaitable)
    {
        return mEvent->init(aSource, aType, aWaitable);
    }
private:
    ComObjPtr<VBoxEvent>      mEvent;

    // attribute id
private:
    ULONG    m_id;
public:
    STDMETHOD(COMGETTER(Id))(ULONG* a_id)
    {
         *a_id = m_id;
         return S_OK;
    }
    // purely internal setter
    HRESULT set_id(ULONG a_id)
    {
         m_id = a_id;
         return S_OK;
    }

    // attribute status
private:
    GuestSessionStatus_T    m_status;
public:
    STDMETHOD(COMGETTER(Status))(GuestSessionStatus_T* a_status)
    {
         *a_status = m_status;
         return S_OK;
    }
    // purely internal setter
    HRESULT set_status(GuestSessionStatus_T a_status)
    {
         m_status = a_status;
         return S_OK;
    }

    // attribute error
private:
    ComPtr<IVirtualBoxErrorInfo>    m_error;
public:
    STDMETHOD(COMGETTER(Error))(IVirtualBoxErrorInfo** a_error)
    {
         m_error.queryInterfaceTo(a_error);
         return S_OK;
    }
    // purely internal setter
    HRESULT set_error(IVirtualBoxErrorInfo* a_error)
    {
         m_error = a_error;
         return S_OK;
    }

    // attribute session
private:
    ComPtr<IGuestSession>    m_session;
public:
    STDMETHOD(COMGETTER(Session))(IGuestSession** a_session)
    {
         m_session.queryInterfaceTo(a_session);
         return S_OK;
    }
    // purely internal setter
    HRESULT set_session(IGuestSession* a_session)
    {
         m_session = a_session;
         return S_OK;
    }
    // skipping IEvent attributes 
};
#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(GuestSessionStateChangedEvent)
NS_IMPL_THREADSAFE_ISUPPORTS3_CI(GuestSessionStateChangedEvent, IGuestSessionStateChangedEvent, IGuestSessionEvent, IEvent)
#endif

// IGuestSessionRegisteredEvent implementation code 
class ATL_NO_VTABLE GuestSessionRegisteredEvent
    : public VirtualBoxBase,
      VBOX_SCRIPTABLE_IMPL(IGuestSessionRegisteredEvent)
{
public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(GuestSessionRegisteredEvent, IGuestSessionRegisteredEvent)
    DECLARE_NOT_AGGREGATABLE(GuestSessionRegisteredEvent)
    DECLARE_PROTECT_FINAL_CONSTRUCT()
    BEGIN_COM_MAP(GuestSessionRegisteredEvent)
        VBOX_DEFAULT_INTERFACE_ENTRIES(IGuestSessionRegisteredEvent)
        COM_INTERFACE_ENTRY(IGuestSessionRegisteredEvent)
        COM_INTERFACE_ENTRY(IGuestSessionEvent)
        COM_INTERFACE_ENTRY(IEvent)
    END_COM_MAP()
    GuestSessionRegisteredEvent() { /*printf("GuestSessionRegisteredEvent\n")*/;}
    virtual ~GuestSessionRegisteredEvent() { /*printf("~GuestSessionRegisteredEvent\n")*/; uninit(); }

    HRESULT FinalConstruct()
    {
        BaseFinalConstruct();
        return mEvent.createObject();
    }
    void FinalRelease()
    {
        mEvent->FinalRelease();
        BaseFinalRelease();
    }
    STDMETHOD(COMGETTER(Type)) (VBoxEventType_T *aType)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Type) (aType);
    }
    STDMETHOD(COMGETTER(Source)) (IEventSource * *aSource)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Source) (aSource);
    }
    STDMETHOD(COMGETTER(Waitable)) (BOOL *aWaitable)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Waitable) (aWaitable);
    }
    STDMETHOD(SetProcessed)()
    {
       return ((VBoxEvent*)mEvent)->SetProcessed();
    }
    STDMETHOD(WaitProcessed)(LONG aTimeout, BOOL *aResult)
    {
        return ((VBoxEvent*)mEvent)->WaitProcessed(aTimeout, aResult);
    }
    void uninit()
    {
        if (!mEvent.isNull())
        {
           mEvent->uninit();
           mEvent.setNull();
        }
    }

    HRESULT init(IEventSource* aSource, VBoxEventType_T aType, BOOL aWaitable)
    {
        return mEvent->init(aSource, aType, aWaitable);
    }
private:
    ComObjPtr<VBoxEvent>      mEvent;

    // attribute registered
private:
    BOOL    m_registered;
public:
    STDMETHOD(COMGETTER(Registered))(BOOL* a_registered)
    {
         *a_registered = m_registered;
         return S_OK;
    }
    // purely internal setter
    HRESULT set_registered(BOOL a_registered)
    {
         m_registered = a_registered;
         return S_OK;
    }

    // attribute session
private:
    ComPtr<IGuestSession>    m_session;
public:
    STDMETHOD(COMGETTER(Session))(IGuestSession** a_session)
    {
         m_session.queryInterfaceTo(a_session);
         return S_OK;
    }
    // purely internal setter
    HRESULT set_session(IGuestSession* a_session)
    {
         m_session = a_session;
         return S_OK;
    }
    // skipping IEvent attributes 
};
#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(GuestSessionRegisteredEvent)
NS_IMPL_THREADSAFE_ISUPPORTS3_CI(GuestSessionRegisteredEvent, IGuestSessionRegisteredEvent, IGuestSessionEvent, IEvent)
#endif

// IGuestProcessRegisteredEvent implementation code 
class ATL_NO_VTABLE GuestProcessRegisteredEvent
    : public VirtualBoxBase,
      VBOX_SCRIPTABLE_IMPL(IGuestProcessRegisteredEvent)
{
public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(GuestProcessRegisteredEvent, IGuestProcessRegisteredEvent)
    DECLARE_NOT_AGGREGATABLE(GuestProcessRegisteredEvent)
    DECLARE_PROTECT_FINAL_CONSTRUCT()
    BEGIN_COM_MAP(GuestProcessRegisteredEvent)
        VBOX_DEFAULT_INTERFACE_ENTRIES(IGuestProcessRegisteredEvent)
        COM_INTERFACE_ENTRY(IGuestProcessRegisteredEvent)
        COM_INTERFACE_ENTRY(IGuestProcessEvent)
        COM_INTERFACE_ENTRY(IGuestSessionEvent)
        COM_INTERFACE_ENTRY(IEvent)
    END_COM_MAP()
    GuestProcessRegisteredEvent() { /*printf("GuestProcessRegisteredEvent\n")*/;}
    virtual ~GuestProcessRegisteredEvent() { /*printf("~GuestProcessRegisteredEvent\n")*/; uninit(); }

    HRESULT FinalConstruct()
    {
        BaseFinalConstruct();
        return mEvent.createObject();
    }
    void FinalRelease()
    {
        mEvent->FinalRelease();
        BaseFinalRelease();
    }
    STDMETHOD(COMGETTER(Type)) (VBoxEventType_T *aType)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Type) (aType);
    }
    STDMETHOD(COMGETTER(Source)) (IEventSource * *aSource)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Source) (aSource);
    }
    STDMETHOD(COMGETTER(Waitable)) (BOOL *aWaitable)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Waitable) (aWaitable);
    }
    STDMETHOD(SetProcessed)()
    {
       return ((VBoxEvent*)mEvent)->SetProcessed();
    }
    STDMETHOD(WaitProcessed)(LONG aTimeout, BOOL *aResult)
    {
        return ((VBoxEvent*)mEvent)->WaitProcessed(aTimeout, aResult);
    }
    void uninit()
    {
        if (!mEvent.isNull())
        {
           mEvent->uninit();
           mEvent.setNull();
        }
    }

    HRESULT init(IEventSource* aSource, VBoxEventType_T aType, BOOL aWaitable)
    {
        return mEvent->init(aSource, aType, aWaitable);
    }
private:
    ComObjPtr<VBoxEvent>      mEvent;

    // attribute registered
private:
    BOOL    m_registered;
public:
    STDMETHOD(COMGETTER(Registered))(BOOL* a_registered)
    {
         *a_registered = m_registered;
         return S_OK;
    }
    // purely internal setter
    HRESULT set_registered(BOOL a_registered)
    {
         m_registered = a_registered;
         return S_OK;
    }

    // attribute process
private:
    ComPtr<IGuestProcess>    m_process;
public:
    STDMETHOD(COMGETTER(Process))(IGuestProcess** a_process)
    {
         m_process.queryInterfaceTo(a_process);
         return S_OK;
    }
    // purely internal setter
    HRESULT set_process(IGuestProcess* a_process)
    {
         m_process = a_process;
         return S_OK;
    }

    // attribute pid
private:
    ULONG    m_pid;
public:
    STDMETHOD(COMGETTER(Pid))(ULONG* a_pid)
    {
         *a_pid = m_pid;
         return S_OK;
    }
    // purely internal setter
    HRESULT set_pid(ULONG a_pid)
    {
         m_pid = a_pid;
         return S_OK;
    }

    // attribute session
private:
    ComPtr<IGuestSession>    m_session;
public:
    STDMETHOD(COMGETTER(Session))(IGuestSession** a_session)
    {
         m_session.queryInterfaceTo(a_session);
         return S_OK;
    }
    // purely internal setter
    HRESULT set_session(IGuestSession* a_session)
    {
         m_session = a_session;
         return S_OK;
    }
    // skipping IEvent attributes 
};
#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(GuestProcessRegisteredEvent)
NS_IMPL_THREADSAFE_ISUPPORTS4_CI(GuestProcessRegisteredEvent, IGuestProcessRegisteredEvent, IGuestProcessEvent, IGuestSessionEvent, IEvent)
#endif

// IGuestProcessStateChangedEvent implementation code 
class ATL_NO_VTABLE GuestProcessStateChangedEvent
    : public VirtualBoxBase,
      VBOX_SCRIPTABLE_IMPL(IGuestProcessStateChangedEvent)
{
public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(GuestProcessStateChangedEvent, IGuestProcessStateChangedEvent)
    DECLARE_NOT_AGGREGATABLE(GuestProcessStateChangedEvent)
    DECLARE_PROTECT_FINAL_CONSTRUCT()
    BEGIN_COM_MAP(GuestProcessStateChangedEvent)
        VBOX_DEFAULT_INTERFACE_ENTRIES(IGuestProcessStateChangedEvent)
        COM_INTERFACE_ENTRY(IGuestProcessStateChangedEvent)
        COM_INTERFACE_ENTRY(IGuestProcessEvent)
        COM_INTERFACE_ENTRY(IGuestSessionEvent)
        COM_INTERFACE_ENTRY(IEvent)
    END_COM_MAP()
    GuestProcessStateChangedEvent() { /*printf("GuestProcessStateChangedEvent\n")*/;}
    virtual ~GuestProcessStateChangedEvent() { /*printf("~GuestProcessStateChangedEvent\n")*/; uninit(); }

    HRESULT FinalConstruct()
    {
        BaseFinalConstruct();
        return mEvent.createObject();
    }
    void FinalRelease()
    {
        mEvent->FinalRelease();
        BaseFinalRelease();
    }
    STDMETHOD(COMGETTER(Type)) (VBoxEventType_T *aType)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Type) (aType);
    }
    STDMETHOD(COMGETTER(Source)) (IEventSource * *aSource)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Source) (aSource);
    }
    STDMETHOD(COMGETTER(Waitable)) (BOOL *aWaitable)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Waitable) (aWaitable);
    }
    STDMETHOD(SetProcessed)()
    {
       return ((VBoxEvent*)mEvent)->SetProcessed();
    }
    STDMETHOD(WaitProcessed)(LONG aTimeout, BOOL *aResult)
    {
        return ((VBoxEvent*)mEvent)->WaitProcessed(aTimeout, aResult);
    }
    void uninit()
    {
        if (!mEvent.isNull())
        {
           mEvent->uninit();
           mEvent.setNull();
        }
    }

    HRESULT init(IEventSource* aSource, VBoxEventType_T aType, BOOL aWaitable)
    {
        return mEvent->init(aSource, aType, aWaitable);
    }
private:
    ComObjPtr<VBoxEvent>      mEvent;

    // attribute status
private:
    ProcessStatus_T    m_status;
public:
    STDMETHOD(COMGETTER(Status))(ProcessStatus_T* a_status)
    {
         *a_status = m_status;
         return S_OK;
    }
    // purely internal setter
    HRESULT set_status(ProcessStatus_T a_status)
    {
         m_status = a_status;
         return S_OK;
    }

    // attribute error
private:
    ComPtr<IVirtualBoxErrorInfo>    m_error;
public:
    STDMETHOD(COMGETTER(Error))(IVirtualBoxErrorInfo** a_error)
    {
         m_error.queryInterfaceTo(a_error);
         return S_OK;
    }
    // purely internal setter
    HRESULT set_error(IVirtualBoxErrorInfo* a_error)
    {
         m_error = a_error;
         return S_OK;
    }

    // attribute process
private:
    ComPtr<IGuestProcess>    m_process;
public:
    STDMETHOD(COMGETTER(Process))(IGuestProcess** a_process)
    {
         m_process.queryInterfaceTo(a_process);
         return S_OK;
    }
    // purely internal setter
    HRESULT set_process(IGuestProcess* a_process)
    {
         m_process = a_process;
         return S_OK;
    }

    // attribute pid
private:
    ULONG    m_pid;
public:
    STDMETHOD(COMGETTER(Pid))(ULONG* a_pid)
    {
         *a_pid = m_pid;
         return S_OK;
    }
    // purely internal setter
    HRESULT set_pid(ULONG a_pid)
    {
         m_pid = a_pid;
         return S_OK;
    }

    // attribute session
private:
    ComPtr<IGuestSession>    m_session;
public:
    STDMETHOD(COMGETTER(Session))(IGuestSession** a_session)
    {
         m_session.queryInterfaceTo(a_session);
         return S_OK;
    }
    // purely internal setter
    HRESULT set_session(IGuestSession* a_session)
    {
         m_session = a_session;
         return S_OK;
    }
    // skipping IEvent attributes 
};
#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(GuestProcessStateChangedEvent)
NS_IMPL_THREADSAFE_ISUPPORTS4_CI(GuestProcessStateChangedEvent, IGuestProcessStateChangedEvent, IGuestProcessEvent, IGuestSessionEvent, IEvent)
#endif

// IGuestProcessInputNotifyEvent implementation code 
class ATL_NO_VTABLE GuestProcessInputNotifyEvent
    : public VirtualBoxBase,
      VBOX_SCRIPTABLE_IMPL(IGuestProcessInputNotifyEvent)
{
public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(GuestProcessInputNotifyEvent, IGuestProcessInputNotifyEvent)
    DECLARE_NOT_AGGREGATABLE(GuestProcessInputNotifyEvent)
    DECLARE_PROTECT_FINAL_CONSTRUCT()
    BEGIN_COM_MAP(GuestProcessInputNotifyEvent)
        VBOX_DEFAULT_INTERFACE_ENTRIES(IGuestProcessInputNotifyEvent)
        COM_INTERFACE_ENTRY(IGuestProcessInputNotifyEvent)
        COM_INTERFACE_ENTRY(IGuestProcessIOEvent)
        COM_INTERFACE_ENTRY(IGuestProcessEvent)
        COM_INTERFACE_ENTRY(IGuestSessionEvent)
        COM_INTERFACE_ENTRY(IEvent)
    END_COM_MAP()
    GuestProcessInputNotifyEvent() { /*printf("GuestProcessInputNotifyEvent\n")*/;}
    virtual ~GuestProcessInputNotifyEvent() { /*printf("~GuestProcessInputNotifyEvent\n")*/; uninit(); }

    HRESULT FinalConstruct()
    {
        BaseFinalConstruct();
        return mEvent.createObject();
    }
    void FinalRelease()
    {
        mEvent->FinalRelease();
        BaseFinalRelease();
    }
    STDMETHOD(COMGETTER(Type)) (VBoxEventType_T *aType)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Type) (aType);
    }
    STDMETHOD(COMGETTER(Source)) (IEventSource * *aSource)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Source) (aSource);
    }
    STDMETHOD(COMGETTER(Waitable)) (BOOL *aWaitable)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Waitable) (aWaitable);
    }
    STDMETHOD(SetProcessed)()
    {
       return ((VBoxEvent*)mEvent)->SetProcessed();
    }
    STDMETHOD(WaitProcessed)(LONG aTimeout, BOOL *aResult)
    {
        return ((VBoxEvent*)mEvent)->WaitProcessed(aTimeout, aResult);
    }
    void uninit()
    {
        if (!mEvent.isNull())
        {
           mEvent->uninit();
           mEvent.setNull();
        }
    }

    HRESULT init(IEventSource* aSource, VBoxEventType_T aType, BOOL aWaitable)
    {
        return mEvent->init(aSource, aType, aWaitable);
    }
private:
    ComObjPtr<VBoxEvent>      mEvent;

    // attribute status
private:
    ProcessInputStatus_T    m_status;
public:
    STDMETHOD(COMGETTER(Status))(ProcessInputStatus_T* a_status)
    {
         *a_status = m_status;
         return S_OK;
    }
    // purely internal setter
    HRESULT set_status(ProcessInputStatus_T a_status)
    {
         m_status = a_status;
         return S_OK;
    }

    // attribute handle
private:
    ULONG    m_handle;
public:
    STDMETHOD(COMGETTER(Handle))(ULONG* a_handle)
    {
         *a_handle = m_handle;
         return S_OK;
    }
    // purely internal setter
    HRESULT set_handle(ULONG a_handle)
    {
         m_handle = a_handle;
         return S_OK;
    }

    // attribute processed
private:
    ULONG    m_processed;
public:
    STDMETHOD(COMGETTER(Processed))(ULONG* a_processed)
    {
         *a_processed = m_processed;
         return S_OK;
    }
    // purely internal setter
    HRESULT set_processed(ULONG a_processed)
    {
         m_processed = a_processed;
         return S_OK;
    }

    // attribute process
private:
    ComPtr<IGuestProcess>    m_process;
public:
    STDMETHOD(COMGETTER(Process))(IGuestProcess** a_process)
    {
         m_process.queryInterfaceTo(a_process);
         return S_OK;
    }
    // purely internal setter
    HRESULT set_process(IGuestProcess* a_process)
    {
         m_process = a_process;
         return S_OK;
    }

    // attribute pid
private:
    ULONG    m_pid;
public:
    STDMETHOD(COMGETTER(Pid))(ULONG* a_pid)
    {
         *a_pid = m_pid;
         return S_OK;
    }
    // purely internal setter
    HRESULT set_pid(ULONG a_pid)
    {
         m_pid = a_pid;
         return S_OK;
    }

    // attribute session
private:
    ComPtr<IGuestSession>    m_session;
public:
    STDMETHOD(COMGETTER(Session))(IGuestSession** a_session)
    {
         m_session.queryInterfaceTo(a_session);
         return S_OK;
    }
    // purely internal setter
    HRESULT set_session(IGuestSession* a_session)
    {
         m_session = a_session;
         return S_OK;
    }
    // skipping IEvent attributes 
};
#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(GuestProcessInputNotifyEvent)
NS_IMPL_THREADSAFE_ISUPPORTS5_CI(GuestProcessInputNotifyEvent, IGuestProcessInputNotifyEvent, IGuestProcessIOEvent, IGuestProcessEvent, IGuestSessionEvent, IEvent)
#endif

// IGuestProcessOutputEvent implementation code 
class ATL_NO_VTABLE GuestProcessOutputEvent
    : public VirtualBoxBase,
      VBOX_SCRIPTABLE_IMPL(IGuestProcessOutputEvent)
{
public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(GuestProcessOutputEvent, IGuestProcessOutputEvent)
    DECLARE_NOT_AGGREGATABLE(GuestProcessOutputEvent)
    DECLARE_PROTECT_FINAL_CONSTRUCT()
    BEGIN_COM_MAP(GuestProcessOutputEvent)
        VBOX_DEFAULT_INTERFACE_ENTRIES(IGuestProcessOutputEvent)
        COM_INTERFACE_ENTRY(IGuestProcessOutputEvent)
        COM_INTERFACE_ENTRY(IGuestProcessIOEvent)
        COM_INTERFACE_ENTRY(IGuestProcessEvent)
        COM_INTERFACE_ENTRY(IGuestSessionEvent)
        COM_INTERFACE_ENTRY(IEvent)
    END_COM_MAP()
    GuestProcessOutputEvent() { /*printf("GuestProcessOutputEvent\n")*/;}
    virtual ~GuestProcessOutputEvent() { /*printf("~GuestProcessOutputEvent\n")*/; uninit(); }

    HRESULT FinalConstruct()
    {
        BaseFinalConstruct();
        return mEvent.createObject();
    }
    void FinalRelease()
    {
        mEvent->FinalRelease();
        BaseFinalRelease();
    }
    STDMETHOD(COMGETTER(Type)) (VBoxEventType_T *aType)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Type) (aType);
    }
    STDMETHOD(COMGETTER(Source)) (IEventSource * *aSource)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Source) (aSource);
    }
    STDMETHOD(COMGETTER(Waitable)) (BOOL *aWaitable)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Waitable) (aWaitable);
    }
    STDMETHOD(SetProcessed)()
    {
       return ((VBoxEvent*)mEvent)->SetProcessed();
    }
    STDMETHOD(WaitProcessed)(LONG aTimeout, BOOL *aResult)
    {
        return ((VBoxEvent*)mEvent)->WaitProcessed(aTimeout, aResult);
    }
    void uninit()
    {
        if (!mEvent.isNull())
        {
           mEvent->uninit();
           mEvent.setNull();
        }
    }

    HRESULT init(IEventSource* aSource, VBoxEventType_T aType, BOOL aWaitable)
    {
        return mEvent->init(aSource, aType, aWaitable);
    }
private:
    ComObjPtr<VBoxEvent>      mEvent;

    // attribute data
private:
    com::SafeArray<BYTE>    m_data;
public:
    STDMETHOD(COMGETTER(Data))(ComSafeArrayOut(BYTE, a_data))
    {
         SafeArray<BYTE> result;
         m_data.cloneTo(result);
         result.detachTo(ComSafeArrayOutArg(a_data));
         return S_OK;
    }
    // purely internal setter
    HRESULT set_data(ComSafeArrayIn(BYTE,a_data))
    {
         SafeArray<BYTE> aArr(ComSafeArrayInArg(a_data));
         m_data.initFrom(aArr);
         return S_OK;
    }

    // attribute handle
private:
    ULONG    m_handle;
public:
    STDMETHOD(COMGETTER(Handle))(ULONG* a_handle)
    {
         *a_handle = m_handle;
         return S_OK;
    }
    // purely internal setter
    HRESULT set_handle(ULONG a_handle)
    {
         m_handle = a_handle;
         return S_OK;
    }

    // attribute processed
private:
    ULONG    m_processed;
public:
    STDMETHOD(COMGETTER(Processed))(ULONG* a_processed)
    {
         *a_processed = m_processed;
         return S_OK;
    }
    // purely internal setter
    HRESULT set_processed(ULONG a_processed)
    {
         m_processed = a_processed;
         return S_OK;
    }

    // attribute process
private:
    ComPtr<IGuestProcess>    m_process;
public:
    STDMETHOD(COMGETTER(Process))(IGuestProcess** a_process)
    {
         m_process.queryInterfaceTo(a_process);
         return S_OK;
    }
    // purely internal setter
    HRESULT set_process(IGuestProcess* a_process)
    {
         m_process = a_process;
         return S_OK;
    }

    // attribute pid
private:
    ULONG    m_pid;
public:
    STDMETHOD(COMGETTER(Pid))(ULONG* a_pid)
    {
         *a_pid = m_pid;
         return S_OK;
    }
    // purely internal setter
    HRESULT set_pid(ULONG a_pid)
    {
         m_pid = a_pid;
         return S_OK;
    }

    // attribute session
private:
    ComPtr<IGuestSession>    m_session;
public:
    STDMETHOD(COMGETTER(Session))(IGuestSession** a_session)
    {
         m_session.queryInterfaceTo(a_session);
         return S_OK;
    }
    // purely internal setter
    HRESULT set_session(IGuestSession* a_session)
    {
         m_session = a_session;
         return S_OK;
    }
    // skipping IEvent attributes 
};
#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(GuestProcessOutputEvent)
NS_IMPL_THREADSAFE_ISUPPORTS5_CI(GuestProcessOutputEvent, IGuestProcessOutputEvent, IGuestProcessIOEvent, IGuestProcessEvent, IGuestSessionEvent, IEvent)
#endif

// IGuestFileRegisteredEvent implementation code 
class ATL_NO_VTABLE GuestFileRegisteredEvent
    : public VirtualBoxBase,
      VBOX_SCRIPTABLE_IMPL(IGuestFileRegisteredEvent)
{
public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(GuestFileRegisteredEvent, IGuestFileRegisteredEvent)
    DECLARE_NOT_AGGREGATABLE(GuestFileRegisteredEvent)
    DECLARE_PROTECT_FINAL_CONSTRUCT()
    BEGIN_COM_MAP(GuestFileRegisteredEvent)
        VBOX_DEFAULT_INTERFACE_ENTRIES(IGuestFileRegisteredEvent)
        COM_INTERFACE_ENTRY(IGuestFileRegisteredEvent)
        COM_INTERFACE_ENTRY(IGuestFileEvent)
        COM_INTERFACE_ENTRY(IGuestSessionEvent)
        COM_INTERFACE_ENTRY(IEvent)
    END_COM_MAP()
    GuestFileRegisteredEvent() { /*printf("GuestFileRegisteredEvent\n")*/;}
    virtual ~GuestFileRegisteredEvent() { /*printf("~GuestFileRegisteredEvent\n")*/; uninit(); }

    HRESULT FinalConstruct()
    {
        BaseFinalConstruct();
        return mEvent.createObject();
    }
    void FinalRelease()
    {
        mEvent->FinalRelease();
        BaseFinalRelease();
    }
    STDMETHOD(COMGETTER(Type)) (VBoxEventType_T *aType)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Type) (aType);
    }
    STDMETHOD(COMGETTER(Source)) (IEventSource * *aSource)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Source) (aSource);
    }
    STDMETHOD(COMGETTER(Waitable)) (BOOL *aWaitable)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Waitable) (aWaitable);
    }
    STDMETHOD(SetProcessed)()
    {
       return ((VBoxEvent*)mEvent)->SetProcessed();
    }
    STDMETHOD(WaitProcessed)(LONG aTimeout, BOOL *aResult)
    {
        return ((VBoxEvent*)mEvent)->WaitProcessed(aTimeout, aResult);
    }
    void uninit()
    {
        if (!mEvent.isNull())
        {
           mEvent->uninit();
           mEvent.setNull();
        }
    }

    HRESULT init(IEventSource* aSource, VBoxEventType_T aType, BOOL aWaitable)
    {
        return mEvent->init(aSource, aType, aWaitable);
    }
private:
    ComObjPtr<VBoxEvent>      mEvent;

    // attribute registered
private:
    BOOL    m_registered;
public:
    STDMETHOD(COMGETTER(Registered))(BOOL* a_registered)
    {
         *a_registered = m_registered;
         return S_OK;
    }
    // purely internal setter
    HRESULT set_registered(BOOL a_registered)
    {
         m_registered = a_registered;
         return S_OK;
    }

    // attribute file
private:
    ComPtr<IGuestFile>    m_file;
public:
    STDMETHOD(COMGETTER(File))(IGuestFile** a_file)
    {
         m_file.queryInterfaceTo(a_file);
         return S_OK;
    }
    // purely internal setter
    HRESULT set_file(IGuestFile* a_file)
    {
         m_file = a_file;
         return S_OK;
    }

    // attribute session
private:
    ComPtr<IGuestSession>    m_session;
public:
    STDMETHOD(COMGETTER(Session))(IGuestSession** a_session)
    {
         m_session.queryInterfaceTo(a_session);
         return S_OK;
    }
    // purely internal setter
    HRESULT set_session(IGuestSession* a_session)
    {
         m_session = a_session;
         return S_OK;
    }
    // skipping IEvent attributes 
};
#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(GuestFileRegisteredEvent)
NS_IMPL_THREADSAFE_ISUPPORTS4_CI(GuestFileRegisteredEvent, IGuestFileRegisteredEvent, IGuestFileEvent, IGuestSessionEvent, IEvent)
#endif

// IGuestFileStateChangedEvent implementation code 
class ATL_NO_VTABLE GuestFileStateChangedEvent
    : public VirtualBoxBase,
      VBOX_SCRIPTABLE_IMPL(IGuestFileStateChangedEvent)
{
public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(GuestFileStateChangedEvent, IGuestFileStateChangedEvent)
    DECLARE_NOT_AGGREGATABLE(GuestFileStateChangedEvent)
    DECLARE_PROTECT_FINAL_CONSTRUCT()
    BEGIN_COM_MAP(GuestFileStateChangedEvent)
        VBOX_DEFAULT_INTERFACE_ENTRIES(IGuestFileStateChangedEvent)
        COM_INTERFACE_ENTRY(IGuestFileStateChangedEvent)
        COM_INTERFACE_ENTRY(IGuestFileEvent)
        COM_INTERFACE_ENTRY(IGuestSessionEvent)
        COM_INTERFACE_ENTRY(IEvent)
    END_COM_MAP()
    GuestFileStateChangedEvent() { /*printf("GuestFileStateChangedEvent\n")*/;}
    virtual ~GuestFileStateChangedEvent() { /*printf("~GuestFileStateChangedEvent\n")*/; uninit(); }

    HRESULT FinalConstruct()
    {
        BaseFinalConstruct();
        return mEvent.createObject();
    }
    void FinalRelease()
    {
        mEvent->FinalRelease();
        BaseFinalRelease();
    }
    STDMETHOD(COMGETTER(Type)) (VBoxEventType_T *aType)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Type) (aType);
    }
    STDMETHOD(COMGETTER(Source)) (IEventSource * *aSource)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Source) (aSource);
    }
    STDMETHOD(COMGETTER(Waitable)) (BOOL *aWaitable)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Waitable) (aWaitable);
    }
    STDMETHOD(SetProcessed)()
    {
       return ((VBoxEvent*)mEvent)->SetProcessed();
    }
    STDMETHOD(WaitProcessed)(LONG aTimeout, BOOL *aResult)
    {
        return ((VBoxEvent*)mEvent)->WaitProcessed(aTimeout, aResult);
    }
    void uninit()
    {
        if (!mEvent.isNull())
        {
           mEvent->uninit();
           mEvent.setNull();
        }
    }

    HRESULT init(IEventSource* aSource, VBoxEventType_T aType, BOOL aWaitable)
    {
        return mEvent->init(aSource, aType, aWaitable);
    }
private:
    ComObjPtr<VBoxEvent>      mEvent;

    // attribute status
private:
    FileStatus_T    m_status;
public:
    STDMETHOD(COMGETTER(Status))(FileStatus_T* a_status)
    {
         *a_status = m_status;
         return S_OK;
    }
    // purely internal setter
    HRESULT set_status(FileStatus_T a_status)
    {
         m_status = a_status;
         return S_OK;
    }

    // attribute error
private:
    ComPtr<IVirtualBoxErrorInfo>    m_error;
public:
    STDMETHOD(COMGETTER(Error))(IVirtualBoxErrorInfo** a_error)
    {
         m_error.queryInterfaceTo(a_error);
         return S_OK;
    }
    // purely internal setter
    HRESULT set_error(IVirtualBoxErrorInfo* a_error)
    {
         m_error = a_error;
         return S_OK;
    }

    // attribute file
private:
    ComPtr<IGuestFile>    m_file;
public:
    STDMETHOD(COMGETTER(File))(IGuestFile** a_file)
    {
         m_file.queryInterfaceTo(a_file);
         return S_OK;
    }
    // purely internal setter
    HRESULT set_file(IGuestFile* a_file)
    {
         m_file = a_file;
         return S_OK;
    }

    // attribute session
private:
    ComPtr<IGuestSession>    m_session;
public:
    STDMETHOD(COMGETTER(Session))(IGuestSession** a_session)
    {
         m_session.queryInterfaceTo(a_session);
         return S_OK;
    }
    // purely internal setter
    HRESULT set_session(IGuestSession* a_session)
    {
         m_session = a_session;
         return S_OK;
    }
    // skipping IEvent attributes 
};
#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(GuestFileStateChangedEvent)
NS_IMPL_THREADSAFE_ISUPPORTS4_CI(GuestFileStateChangedEvent, IGuestFileStateChangedEvent, IGuestFileEvent, IGuestSessionEvent, IEvent)
#endif

// IGuestFileOffsetChangedEvent implementation code 
class ATL_NO_VTABLE GuestFileOffsetChangedEvent
    : public VirtualBoxBase,
      VBOX_SCRIPTABLE_IMPL(IGuestFileOffsetChangedEvent)
{
public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(GuestFileOffsetChangedEvent, IGuestFileOffsetChangedEvent)
    DECLARE_NOT_AGGREGATABLE(GuestFileOffsetChangedEvent)
    DECLARE_PROTECT_FINAL_CONSTRUCT()
    BEGIN_COM_MAP(GuestFileOffsetChangedEvent)
        VBOX_DEFAULT_INTERFACE_ENTRIES(IGuestFileOffsetChangedEvent)
        COM_INTERFACE_ENTRY(IGuestFileOffsetChangedEvent)
        COM_INTERFACE_ENTRY(IGuestFileIOEvent)
        COM_INTERFACE_ENTRY(IGuestFileEvent)
        COM_INTERFACE_ENTRY(IGuestSessionEvent)
        COM_INTERFACE_ENTRY(IEvent)
    END_COM_MAP()
    GuestFileOffsetChangedEvent() { /*printf("GuestFileOffsetChangedEvent\n")*/;}
    virtual ~GuestFileOffsetChangedEvent() { /*printf("~GuestFileOffsetChangedEvent\n")*/; uninit(); }

    HRESULT FinalConstruct()
    {
        BaseFinalConstruct();
        return mEvent.createObject();
    }
    void FinalRelease()
    {
        mEvent->FinalRelease();
        BaseFinalRelease();
    }
    STDMETHOD(COMGETTER(Type)) (VBoxEventType_T *aType)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Type) (aType);
    }
    STDMETHOD(COMGETTER(Source)) (IEventSource * *aSource)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Source) (aSource);
    }
    STDMETHOD(COMGETTER(Waitable)) (BOOL *aWaitable)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Waitable) (aWaitable);
    }
    STDMETHOD(SetProcessed)()
    {
       return ((VBoxEvent*)mEvent)->SetProcessed();
    }
    STDMETHOD(WaitProcessed)(LONG aTimeout, BOOL *aResult)
    {
        return ((VBoxEvent*)mEvent)->WaitProcessed(aTimeout, aResult);
    }
    void uninit()
    {
        if (!mEvent.isNull())
        {
           mEvent->uninit();
           mEvent.setNull();
        }
    }

    HRESULT init(IEventSource* aSource, VBoxEventType_T aType, BOOL aWaitable)
    {
        return mEvent->init(aSource, aType, aWaitable);
    }
private:
    ComObjPtr<VBoxEvent>      mEvent;

    // attribute offset
private:
    LONG64    m_offset;
public:
    STDMETHOD(COMGETTER(Offset))(LONG64* a_offset)
    {
         *a_offset = m_offset;
         return S_OK;
    }
    // purely internal setter
    HRESULT set_offset(LONG64 a_offset)
    {
         m_offset = a_offset;
         return S_OK;
    }

    // attribute processed
private:
    ULONG    m_processed;
public:
    STDMETHOD(COMGETTER(Processed))(ULONG* a_processed)
    {
         *a_processed = m_processed;
         return S_OK;
    }
    // purely internal setter
    HRESULT set_processed(ULONG a_processed)
    {
         m_processed = a_processed;
         return S_OK;
    }

    // attribute file
private:
    ComPtr<IGuestFile>    m_file;
public:
    STDMETHOD(COMGETTER(File))(IGuestFile** a_file)
    {
         m_file.queryInterfaceTo(a_file);
         return S_OK;
    }
    // purely internal setter
    HRESULT set_file(IGuestFile* a_file)
    {
         m_file = a_file;
         return S_OK;
    }

    // attribute session
private:
    ComPtr<IGuestSession>    m_session;
public:
    STDMETHOD(COMGETTER(Session))(IGuestSession** a_session)
    {
         m_session.queryInterfaceTo(a_session);
         return S_OK;
    }
    // purely internal setter
    HRESULT set_session(IGuestSession* a_session)
    {
         m_session = a_session;
         return S_OK;
    }
    // skipping IEvent attributes 
};
#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(GuestFileOffsetChangedEvent)
NS_IMPL_THREADSAFE_ISUPPORTS5_CI(GuestFileOffsetChangedEvent, IGuestFileOffsetChangedEvent, IGuestFileIOEvent, IGuestFileEvent, IGuestSessionEvent, IEvent)
#endif

// IGuestFileReadEvent implementation code 
class ATL_NO_VTABLE GuestFileReadEvent
    : public VirtualBoxBase,
      VBOX_SCRIPTABLE_IMPL(IGuestFileReadEvent)
{
public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(GuestFileReadEvent, IGuestFileReadEvent)
    DECLARE_NOT_AGGREGATABLE(GuestFileReadEvent)
    DECLARE_PROTECT_FINAL_CONSTRUCT()
    BEGIN_COM_MAP(GuestFileReadEvent)
        VBOX_DEFAULT_INTERFACE_ENTRIES(IGuestFileReadEvent)
        COM_INTERFACE_ENTRY(IGuestFileReadEvent)
        COM_INTERFACE_ENTRY(IGuestFileIOEvent)
        COM_INTERFACE_ENTRY(IGuestFileEvent)
        COM_INTERFACE_ENTRY(IGuestSessionEvent)
        COM_INTERFACE_ENTRY(IEvent)
    END_COM_MAP()
    GuestFileReadEvent() { /*printf("GuestFileReadEvent\n")*/;}
    virtual ~GuestFileReadEvent() { /*printf("~GuestFileReadEvent\n")*/; uninit(); }

    HRESULT FinalConstruct()
    {
        BaseFinalConstruct();
        return mEvent.createObject();
    }
    void FinalRelease()
    {
        mEvent->FinalRelease();
        BaseFinalRelease();
    }
    STDMETHOD(COMGETTER(Type)) (VBoxEventType_T *aType)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Type) (aType);
    }
    STDMETHOD(COMGETTER(Source)) (IEventSource * *aSource)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Source) (aSource);
    }
    STDMETHOD(COMGETTER(Waitable)) (BOOL *aWaitable)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Waitable) (aWaitable);
    }
    STDMETHOD(SetProcessed)()
    {
       return ((VBoxEvent*)mEvent)->SetProcessed();
    }
    STDMETHOD(WaitProcessed)(LONG aTimeout, BOOL *aResult)
    {
        return ((VBoxEvent*)mEvent)->WaitProcessed(aTimeout, aResult);
    }
    void uninit()
    {
        if (!mEvent.isNull())
        {
           mEvent->uninit();
           mEvent.setNull();
        }
    }

    HRESULT init(IEventSource* aSource, VBoxEventType_T aType, BOOL aWaitable)
    {
        return mEvent->init(aSource, aType, aWaitable);
    }
private:
    ComObjPtr<VBoxEvent>      mEvent;

    // attribute data
private:
    com::SafeArray<BYTE>    m_data;
public:
    STDMETHOD(COMGETTER(Data))(ComSafeArrayOut(BYTE, a_data))
    {
         SafeArray<BYTE> result;
         m_data.cloneTo(result);
         result.detachTo(ComSafeArrayOutArg(a_data));
         return S_OK;
    }
    // purely internal setter
    HRESULT set_data(ComSafeArrayIn(BYTE,a_data))
    {
         SafeArray<BYTE> aArr(ComSafeArrayInArg(a_data));
         m_data.initFrom(aArr);
         return S_OK;
    }

    // attribute offset
private:
    LONG64    m_offset;
public:
    STDMETHOD(COMGETTER(Offset))(LONG64* a_offset)
    {
         *a_offset = m_offset;
         return S_OK;
    }
    // purely internal setter
    HRESULT set_offset(LONG64 a_offset)
    {
         m_offset = a_offset;
         return S_OK;
    }

    // attribute processed
private:
    ULONG    m_processed;
public:
    STDMETHOD(COMGETTER(Processed))(ULONG* a_processed)
    {
         *a_processed = m_processed;
         return S_OK;
    }
    // purely internal setter
    HRESULT set_processed(ULONG a_processed)
    {
         m_processed = a_processed;
         return S_OK;
    }

    // attribute file
private:
    ComPtr<IGuestFile>    m_file;
public:
    STDMETHOD(COMGETTER(File))(IGuestFile** a_file)
    {
         m_file.queryInterfaceTo(a_file);
         return S_OK;
    }
    // purely internal setter
    HRESULT set_file(IGuestFile* a_file)
    {
         m_file = a_file;
         return S_OK;
    }

    // attribute session
private:
    ComPtr<IGuestSession>    m_session;
public:
    STDMETHOD(COMGETTER(Session))(IGuestSession** a_session)
    {
         m_session.queryInterfaceTo(a_session);
         return S_OK;
    }
    // purely internal setter
    HRESULT set_session(IGuestSession* a_session)
    {
         m_session = a_session;
         return S_OK;
    }
    // skipping IEvent attributes 
};
#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(GuestFileReadEvent)
NS_IMPL_THREADSAFE_ISUPPORTS5_CI(GuestFileReadEvent, IGuestFileReadEvent, IGuestFileIOEvent, IGuestFileEvent, IGuestSessionEvent, IEvent)
#endif

// IGuestFileWriteEvent implementation code 
class ATL_NO_VTABLE GuestFileWriteEvent
    : public VirtualBoxBase,
      VBOX_SCRIPTABLE_IMPL(IGuestFileWriteEvent)
{
public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(GuestFileWriteEvent, IGuestFileWriteEvent)
    DECLARE_NOT_AGGREGATABLE(GuestFileWriteEvent)
    DECLARE_PROTECT_FINAL_CONSTRUCT()
    BEGIN_COM_MAP(GuestFileWriteEvent)
        VBOX_DEFAULT_INTERFACE_ENTRIES(IGuestFileWriteEvent)
        COM_INTERFACE_ENTRY(IGuestFileWriteEvent)
        COM_INTERFACE_ENTRY(IGuestFileIOEvent)
        COM_INTERFACE_ENTRY(IGuestFileEvent)
        COM_INTERFACE_ENTRY(IGuestSessionEvent)
        COM_INTERFACE_ENTRY(IEvent)
    END_COM_MAP()
    GuestFileWriteEvent() { /*printf("GuestFileWriteEvent\n")*/;}
    virtual ~GuestFileWriteEvent() { /*printf("~GuestFileWriteEvent\n")*/; uninit(); }

    HRESULT FinalConstruct()
    {
        BaseFinalConstruct();
        return mEvent.createObject();
    }
    void FinalRelease()
    {
        mEvent->FinalRelease();
        BaseFinalRelease();
    }
    STDMETHOD(COMGETTER(Type)) (VBoxEventType_T *aType)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Type) (aType);
    }
    STDMETHOD(COMGETTER(Source)) (IEventSource * *aSource)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Source) (aSource);
    }
    STDMETHOD(COMGETTER(Waitable)) (BOOL *aWaitable)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Waitable) (aWaitable);
    }
    STDMETHOD(SetProcessed)()
    {
       return ((VBoxEvent*)mEvent)->SetProcessed();
    }
    STDMETHOD(WaitProcessed)(LONG aTimeout, BOOL *aResult)
    {
        return ((VBoxEvent*)mEvent)->WaitProcessed(aTimeout, aResult);
    }
    void uninit()
    {
        if (!mEvent.isNull())
        {
           mEvent->uninit();
           mEvent.setNull();
        }
    }

    HRESULT init(IEventSource* aSource, VBoxEventType_T aType, BOOL aWaitable)
    {
        return mEvent->init(aSource, aType, aWaitable);
    }
private:
    ComObjPtr<VBoxEvent>      mEvent;

    // attribute offset
private:
    LONG64    m_offset;
public:
    STDMETHOD(COMGETTER(Offset))(LONG64* a_offset)
    {
         *a_offset = m_offset;
         return S_OK;
    }
    // purely internal setter
    HRESULT set_offset(LONG64 a_offset)
    {
         m_offset = a_offset;
         return S_OK;
    }

    // attribute processed
private:
    ULONG    m_processed;
public:
    STDMETHOD(COMGETTER(Processed))(ULONG* a_processed)
    {
         *a_processed = m_processed;
         return S_OK;
    }
    // purely internal setter
    HRESULT set_processed(ULONG a_processed)
    {
         m_processed = a_processed;
         return S_OK;
    }

    // attribute file
private:
    ComPtr<IGuestFile>    m_file;
public:
    STDMETHOD(COMGETTER(File))(IGuestFile** a_file)
    {
         m_file.queryInterfaceTo(a_file);
         return S_OK;
    }
    // purely internal setter
    HRESULT set_file(IGuestFile* a_file)
    {
         m_file = a_file;
         return S_OK;
    }

    // attribute session
private:
    ComPtr<IGuestSession>    m_session;
public:
    STDMETHOD(COMGETTER(Session))(IGuestSession** a_session)
    {
         m_session.queryInterfaceTo(a_session);
         return S_OK;
    }
    // purely internal setter
    HRESULT set_session(IGuestSession* a_session)
    {
         m_session = a_session;
         return S_OK;
    }
    // skipping IEvent attributes 
};
#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(GuestFileWriteEvent)
NS_IMPL_THREADSAFE_ISUPPORTS5_CI(GuestFileWriteEvent, IGuestFileWriteEvent, IGuestFileIOEvent, IGuestFileEvent, IGuestSessionEvent, IEvent)
#endif

// IVRDEServerChangedEvent implementation code 
class ATL_NO_VTABLE VRDEServerChangedEvent
    : public VirtualBoxBase,
      VBOX_SCRIPTABLE_IMPL(IVRDEServerChangedEvent)
{
public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(VRDEServerChangedEvent, IVRDEServerChangedEvent)
    DECLARE_NOT_AGGREGATABLE(VRDEServerChangedEvent)
    DECLARE_PROTECT_FINAL_CONSTRUCT()
    BEGIN_COM_MAP(VRDEServerChangedEvent)
        VBOX_DEFAULT_INTERFACE_ENTRIES(IVRDEServerChangedEvent)
        COM_INTERFACE_ENTRY(IVRDEServerChangedEvent)
        COM_INTERFACE_ENTRY(IEvent)
    END_COM_MAP()
    VRDEServerChangedEvent() { /*printf("VRDEServerChangedEvent\n")*/;}
    virtual ~VRDEServerChangedEvent() { /*printf("~VRDEServerChangedEvent\n")*/; uninit(); }

    HRESULT FinalConstruct()
    {
        BaseFinalConstruct();
        return mEvent.createObject();
    }
    void FinalRelease()
    {
        mEvent->FinalRelease();
        BaseFinalRelease();
    }
    STDMETHOD(COMGETTER(Type)) (VBoxEventType_T *aType)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Type) (aType);
    }
    STDMETHOD(COMGETTER(Source)) (IEventSource * *aSource)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Source) (aSource);
    }
    STDMETHOD(COMGETTER(Waitable)) (BOOL *aWaitable)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Waitable) (aWaitable);
    }
    STDMETHOD(SetProcessed)()
    {
       return ((VBoxEvent*)mEvent)->SetProcessed();
    }
    STDMETHOD(WaitProcessed)(LONG aTimeout, BOOL *aResult)
    {
        return ((VBoxEvent*)mEvent)->WaitProcessed(aTimeout, aResult);
    }
    void uninit()
    {
        if (!mEvent.isNull())
        {
           mEvent->uninit();
           mEvent.setNull();
        }
    }

    HRESULT init(IEventSource* aSource, VBoxEventType_T aType, BOOL aWaitable)
    {
        return mEvent->init(aSource, aType, aWaitable);
    }
private:
    ComObjPtr<VBoxEvent>      mEvent;
    // skipping IEvent attributes 
};
#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(VRDEServerChangedEvent)
NS_IMPL_THREADSAFE_ISUPPORTS2_CI(VRDEServerChangedEvent, IVRDEServerChangedEvent, IEvent)
#endif

// IVRDEServerInfoChangedEvent implementation code 
class ATL_NO_VTABLE VRDEServerInfoChangedEvent
    : public VirtualBoxBase,
      VBOX_SCRIPTABLE_IMPL(IVRDEServerInfoChangedEvent)
{
public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(VRDEServerInfoChangedEvent, IVRDEServerInfoChangedEvent)
    DECLARE_NOT_AGGREGATABLE(VRDEServerInfoChangedEvent)
    DECLARE_PROTECT_FINAL_CONSTRUCT()
    BEGIN_COM_MAP(VRDEServerInfoChangedEvent)
        VBOX_DEFAULT_INTERFACE_ENTRIES(IVRDEServerInfoChangedEvent)
        COM_INTERFACE_ENTRY(IVRDEServerInfoChangedEvent)
        COM_INTERFACE_ENTRY(IEvent)
    END_COM_MAP()
    VRDEServerInfoChangedEvent() { /*printf("VRDEServerInfoChangedEvent\n")*/;}
    virtual ~VRDEServerInfoChangedEvent() { /*printf("~VRDEServerInfoChangedEvent\n")*/; uninit(); }

    HRESULT FinalConstruct()
    {
        BaseFinalConstruct();
        return mEvent.createObject();
    }
    void FinalRelease()
    {
        mEvent->FinalRelease();
        BaseFinalRelease();
    }
    STDMETHOD(COMGETTER(Type)) (VBoxEventType_T *aType)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Type) (aType);
    }
    STDMETHOD(COMGETTER(Source)) (IEventSource * *aSource)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Source) (aSource);
    }
    STDMETHOD(COMGETTER(Waitable)) (BOOL *aWaitable)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Waitable) (aWaitable);
    }
    STDMETHOD(SetProcessed)()
    {
       return ((VBoxEvent*)mEvent)->SetProcessed();
    }
    STDMETHOD(WaitProcessed)(LONG aTimeout, BOOL *aResult)
    {
        return ((VBoxEvent*)mEvent)->WaitProcessed(aTimeout, aResult);
    }
    void uninit()
    {
        if (!mEvent.isNull())
        {
           mEvent->uninit();
           mEvent.setNull();
        }
    }

    HRESULT init(IEventSource* aSource, VBoxEventType_T aType, BOOL aWaitable)
    {
        return mEvent->init(aSource, aType, aWaitable);
    }
private:
    ComObjPtr<VBoxEvent>      mEvent;
    // skipping IEvent attributes 
};
#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(VRDEServerInfoChangedEvent)
NS_IMPL_THREADSAFE_ISUPPORTS2_CI(VRDEServerInfoChangedEvent, IVRDEServerInfoChangedEvent, IEvent)
#endif

// IVideoCaptureChangedEvent implementation code 
class ATL_NO_VTABLE VideoCaptureChangedEvent
    : public VirtualBoxBase,
      VBOX_SCRIPTABLE_IMPL(IVideoCaptureChangedEvent)
{
public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(VideoCaptureChangedEvent, IVideoCaptureChangedEvent)
    DECLARE_NOT_AGGREGATABLE(VideoCaptureChangedEvent)
    DECLARE_PROTECT_FINAL_CONSTRUCT()
    BEGIN_COM_MAP(VideoCaptureChangedEvent)
        VBOX_DEFAULT_INTERFACE_ENTRIES(IVideoCaptureChangedEvent)
        COM_INTERFACE_ENTRY(IVideoCaptureChangedEvent)
        COM_INTERFACE_ENTRY(IEvent)
    END_COM_MAP()
    VideoCaptureChangedEvent() { /*printf("VideoCaptureChangedEvent\n")*/;}
    virtual ~VideoCaptureChangedEvent() { /*printf("~VideoCaptureChangedEvent\n")*/; uninit(); }

    HRESULT FinalConstruct()
    {
        BaseFinalConstruct();
        return mEvent.createObject();
    }
    void FinalRelease()
    {
        mEvent->FinalRelease();
        BaseFinalRelease();
    }
    STDMETHOD(COMGETTER(Type)) (VBoxEventType_T *aType)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Type) (aType);
    }
    STDMETHOD(COMGETTER(Source)) (IEventSource * *aSource)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Source) (aSource);
    }
    STDMETHOD(COMGETTER(Waitable)) (BOOL *aWaitable)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Waitable) (aWaitable);
    }
    STDMETHOD(SetProcessed)()
    {
       return ((VBoxEvent*)mEvent)->SetProcessed();
    }
    STDMETHOD(WaitProcessed)(LONG aTimeout, BOOL *aResult)
    {
        return ((VBoxEvent*)mEvent)->WaitProcessed(aTimeout, aResult);
    }
    void uninit()
    {
        if (!mEvent.isNull())
        {
           mEvent->uninit();
           mEvent.setNull();
        }
    }

    HRESULT init(IEventSource* aSource, VBoxEventType_T aType, BOOL aWaitable)
    {
        return mEvent->init(aSource, aType, aWaitable);
    }
private:
    ComObjPtr<VBoxEvent>      mEvent;
    // skipping IEvent attributes 
};
#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(VideoCaptureChangedEvent)
NS_IMPL_THREADSAFE_ISUPPORTS2_CI(VideoCaptureChangedEvent, IVideoCaptureChangedEvent, IEvent)
#endif

// IUSBControllerChangedEvent implementation code 
class ATL_NO_VTABLE USBControllerChangedEvent
    : public VirtualBoxBase,
      VBOX_SCRIPTABLE_IMPL(IUSBControllerChangedEvent)
{
public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(USBControllerChangedEvent, IUSBControllerChangedEvent)
    DECLARE_NOT_AGGREGATABLE(USBControllerChangedEvent)
    DECLARE_PROTECT_FINAL_CONSTRUCT()
    BEGIN_COM_MAP(USBControllerChangedEvent)
        VBOX_DEFAULT_INTERFACE_ENTRIES(IUSBControllerChangedEvent)
        COM_INTERFACE_ENTRY(IUSBControllerChangedEvent)
        COM_INTERFACE_ENTRY(IEvent)
    END_COM_MAP()
    USBControllerChangedEvent() { /*printf("USBControllerChangedEvent\n")*/;}
    virtual ~USBControllerChangedEvent() { /*printf("~USBControllerChangedEvent\n")*/; uninit(); }

    HRESULT FinalConstruct()
    {
        BaseFinalConstruct();
        return mEvent.createObject();
    }
    void FinalRelease()
    {
        mEvent->FinalRelease();
        BaseFinalRelease();
    }
    STDMETHOD(COMGETTER(Type)) (VBoxEventType_T *aType)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Type) (aType);
    }
    STDMETHOD(COMGETTER(Source)) (IEventSource * *aSource)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Source) (aSource);
    }
    STDMETHOD(COMGETTER(Waitable)) (BOOL *aWaitable)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Waitable) (aWaitable);
    }
    STDMETHOD(SetProcessed)()
    {
       return ((VBoxEvent*)mEvent)->SetProcessed();
    }
    STDMETHOD(WaitProcessed)(LONG aTimeout, BOOL *aResult)
    {
        return ((VBoxEvent*)mEvent)->WaitProcessed(aTimeout, aResult);
    }
    void uninit()
    {
        if (!mEvent.isNull())
        {
           mEvent->uninit();
           mEvent.setNull();
        }
    }

    HRESULT init(IEventSource* aSource, VBoxEventType_T aType, BOOL aWaitable)
    {
        return mEvent->init(aSource, aType, aWaitable);
    }
private:
    ComObjPtr<VBoxEvent>      mEvent;
    // skipping IEvent attributes 
};
#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(USBControllerChangedEvent)
NS_IMPL_THREADSAFE_ISUPPORTS2_CI(USBControllerChangedEvent, IUSBControllerChangedEvent, IEvent)
#endif

// IUSBDeviceStateChangedEvent implementation code 
class ATL_NO_VTABLE USBDeviceStateChangedEvent
    : public VirtualBoxBase,
      VBOX_SCRIPTABLE_IMPL(IUSBDeviceStateChangedEvent)
{
public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(USBDeviceStateChangedEvent, IUSBDeviceStateChangedEvent)
    DECLARE_NOT_AGGREGATABLE(USBDeviceStateChangedEvent)
    DECLARE_PROTECT_FINAL_CONSTRUCT()
    BEGIN_COM_MAP(USBDeviceStateChangedEvent)
        VBOX_DEFAULT_INTERFACE_ENTRIES(IUSBDeviceStateChangedEvent)
        COM_INTERFACE_ENTRY(IUSBDeviceStateChangedEvent)
        COM_INTERFACE_ENTRY(IEvent)
    END_COM_MAP()
    USBDeviceStateChangedEvent() { /*printf("USBDeviceStateChangedEvent\n")*/;}
    virtual ~USBDeviceStateChangedEvent() { /*printf("~USBDeviceStateChangedEvent\n")*/; uninit(); }

    HRESULT FinalConstruct()
    {
        BaseFinalConstruct();
        return mEvent.createObject();
    }
    void FinalRelease()
    {
        mEvent->FinalRelease();
        BaseFinalRelease();
    }
    STDMETHOD(COMGETTER(Type)) (VBoxEventType_T *aType)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Type) (aType);
    }
    STDMETHOD(COMGETTER(Source)) (IEventSource * *aSource)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Source) (aSource);
    }
    STDMETHOD(COMGETTER(Waitable)) (BOOL *aWaitable)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Waitable) (aWaitable);
    }
    STDMETHOD(SetProcessed)()
    {
       return ((VBoxEvent*)mEvent)->SetProcessed();
    }
    STDMETHOD(WaitProcessed)(LONG aTimeout, BOOL *aResult)
    {
        return ((VBoxEvent*)mEvent)->WaitProcessed(aTimeout, aResult);
    }
    void uninit()
    {
        if (!mEvent.isNull())
        {
           mEvent->uninit();
           mEvent.setNull();
        }
    }

    HRESULT init(IEventSource* aSource, VBoxEventType_T aType, BOOL aWaitable)
    {
        return mEvent->init(aSource, aType, aWaitable);
    }
private:
    ComObjPtr<VBoxEvent>      mEvent;

    // attribute device
private:
    ComPtr<IUSBDevice>    m_device;
public:
    STDMETHOD(COMGETTER(Device))(IUSBDevice** a_device)
    {
         m_device.queryInterfaceTo(a_device);
         return S_OK;
    }
    // purely internal setter
    HRESULT set_device(IUSBDevice* a_device)
    {
         m_device = a_device;
         return S_OK;
    }

    // attribute attached
private:
    BOOL    m_attached;
public:
    STDMETHOD(COMGETTER(Attached))(BOOL* a_attached)
    {
         *a_attached = m_attached;
         return S_OK;
    }
    // purely internal setter
    HRESULT set_attached(BOOL a_attached)
    {
         m_attached = a_attached;
         return S_OK;
    }

    // attribute error
private:
    ComPtr<IVirtualBoxErrorInfo>    m_error;
public:
    STDMETHOD(COMGETTER(Error))(IVirtualBoxErrorInfo** a_error)
    {
         m_error.queryInterfaceTo(a_error);
         return S_OK;
    }
    // purely internal setter
    HRESULT set_error(IVirtualBoxErrorInfo* a_error)
    {
         m_error = a_error;
         return S_OK;
    }
    // skipping IEvent attributes 
};
#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(USBDeviceStateChangedEvent)
NS_IMPL_THREADSAFE_ISUPPORTS2_CI(USBDeviceStateChangedEvent, IUSBDeviceStateChangedEvent, IEvent)
#endif

// ISharedFolderChangedEvent implementation code 
class ATL_NO_VTABLE SharedFolderChangedEvent
    : public VirtualBoxBase,
      VBOX_SCRIPTABLE_IMPL(ISharedFolderChangedEvent)
{
public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(SharedFolderChangedEvent, ISharedFolderChangedEvent)
    DECLARE_NOT_AGGREGATABLE(SharedFolderChangedEvent)
    DECLARE_PROTECT_FINAL_CONSTRUCT()
    BEGIN_COM_MAP(SharedFolderChangedEvent)
        VBOX_DEFAULT_INTERFACE_ENTRIES(ISharedFolderChangedEvent)
        COM_INTERFACE_ENTRY(ISharedFolderChangedEvent)
        COM_INTERFACE_ENTRY(IEvent)
    END_COM_MAP()
    SharedFolderChangedEvent() { /*printf("SharedFolderChangedEvent\n")*/;}
    virtual ~SharedFolderChangedEvent() { /*printf("~SharedFolderChangedEvent\n")*/; uninit(); }

    HRESULT FinalConstruct()
    {
        BaseFinalConstruct();
        return mEvent.createObject();
    }
    void FinalRelease()
    {
        mEvent->FinalRelease();
        BaseFinalRelease();
    }
    STDMETHOD(COMGETTER(Type)) (VBoxEventType_T *aType)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Type) (aType);
    }
    STDMETHOD(COMGETTER(Source)) (IEventSource * *aSource)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Source) (aSource);
    }
    STDMETHOD(COMGETTER(Waitable)) (BOOL *aWaitable)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Waitable) (aWaitable);
    }
    STDMETHOD(SetProcessed)()
    {
       return ((VBoxEvent*)mEvent)->SetProcessed();
    }
    STDMETHOD(WaitProcessed)(LONG aTimeout, BOOL *aResult)
    {
        return ((VBoxEvent*)mEvent)->WaitProcessed(aTimeout, aResult);
    }
    void uninit()
    {
        if (!mEvent.isNull())
        {
           mEvent->uninit();
           mEvent.setNull();
        }
    }

    HRESULT init(IEventSource* aSource, VBoxEventType_T aType, BOOL aWaitable)
    {
        return mEvent->init(aSource, aType, aWaitable);
    }
private:
    ComObjPtr<VBoxEvent>      mEvent;

    // attribute scope
private:
    Scope_T    m_scope;
public:
    STDMETHOD(COMGETTER(Scope))(Scope_T* a_scope)
    {
         *a_scope = m_scope;
         return S_OK;
    }
    // purely internal setter
    HRESULT set_scope(Scope_T a_scope)
    {
         m_scope = a_scope;
         return S_OK;
    }
    // skipping IEvent attributes 
};
#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(SharedFolderChangedEvent)
NS_IMPL_THREADSAFE_ISUPPORTS2_CI(SharedFolderChangedEvent, ISharedFolderChangedEvent, IEvent)
#endif

// IRuntimeErrorEvent implementation code 
class ATL_NO_VTABLE RuntimeErrorEvent
    : public VirtualBoxBase,
      VBOX_SCRIPTABLE_IMPL(IRuntimeErrorEvent)
{
public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(RuntimeErrorEvent, IRuntimeErrorEvent)
    DECLARE_NOT_AGGREGATABLE(RuntimeErrorEvent)
    DECLARE_PROTECT_FINAL_CONSTRUCT()
    BEGIN_COM_MAP(RuntimeErrorEvent)
        VBOX_DEFAULT_INTERFACE_ENTRIES(IRuntimeErrorEvent)
        COM_INTERFACE_ENTRY(IRuntimeErrorEvent)
        COM_INTERFACE_ENTRY(IEvent)
    END_COM_MAP()
    RuntimeErrorEvent() { /*printf("RuntimeErrorEvent\n")*/;}
    virtual ~RuntimeErrorEvent() { /*printf("~RuntimeErrorEvent\n")*/; uninit(); }

    HRESULT FinalConstruct()
    {
        BaseFinalConstruct();
        return mEvent.createObject();
    }
    void FinalRelease()
    {
        mEvent->FinalRelease();
        BaseFinalRelease();
    }
    STDMETHOD(COMGETTER(Type)) (VBoxEventType_T *aType)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Type) (aType);
    }
    STDMETHOD(COMGETTER(Source)) (IEventSource * *aSource)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Source) (aSource);
    }
    STDMETHOD(COMGETTER(Waitable)) (BOOL *aWaitable)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Waitable) (aWaitable);
    }
    STDMETHOD(SetProcessed)()
    {
       return ((VBoxEvent*)mEvent)->SetProcessed();
    }
    STDMETHOD(WaitProcessed)(LONG aTimeout, BOOL *aResult)
    {
        return ((VBoxEvent*)mEvent)->WaitProcessed(aTimeout, aResult);
    }
    void uninit()
    {
        if (!mEvent.isNull())
        {
           mEvent->uninit();
           mEvent.setNull();
        }
    }

    HRESULT init(IEventSource* aSource, VBoxEventType_T aType, BOOL aWaitable)
    {
        return mEvent->init(aSource, aType, aWaitable);
    }
private:
    ComObjPtr<VBoxEvent>      mEvent;

    // attribute fatal
private:
    BOOL    m_fatal;
public:
    STDMETHOD(COMGETTER(Fatal))(BOOL* a_fatal)
    {
         *a_fatal = m_fatal;
         return S_OK;
    }
    // purely internal setter
    HRESULT set_fatal(BOOL a_fatal)
    {
         m_fatal = a_fatal;
         return S_OK;
    }

    // attribute id
private:
    Bstr    m_id;
public:
    STDMETHOD(COMGETTER(Id))(BSTR* a_id)
    {
         m_id.cloneTo(a_id);
         return S_OK;
    }
    // purely internal setter
    HRESULT set_id(CBSTR a_id)
    {
         m_id = a_id;
         return S_OK;
    }

    // attribute message
private:
    Bstr    m_message;
public:
    STDMETHOD(COMGETTER(Message))(BSTR* a_message)
    {
         m_message.cloneTo(a_message);
         return S_OK;
    }
    // purely internal setter
    HRESULT set_message(CBSTR a_message)
    {
         m_message = a_message;
         return S_OK;
    }
    // skipping IEvent attributes 
};
#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(RuntimeErrorEvent)
NS_IMPL_THREADSAFE_ISUPPORTS2_CI(RuntimeErrorEvent, IRuntimeErrorEvent, IEvent)
#endif

// IEventSourceChangedEvent implementation code 
class ATL_NO_VTABLE EventSourceChangedEvent
    : public VirtualBoxBase,
      VBOX_SCRIPTABLE_IMPL(IEventSourceChangedEvent)
{
public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(EventSourceChangedEvent, IEventSourceChangedEvent)
    DECLARE_NOT_AGGREGATABLE(EventSourceChangedEvent)
    DECLARE_PROTECT_FINAL_CONSTRUCT()
    BEGIN_COM_MAP(EventSourceChangedEvent)
        VBOX_DEFAULT_INTERFACE_ENTRIES(IEventSourceChangedEvent)
        COM_INTERFACE_ENTRY(IEventSourceChangedEvent)
        COM_INTERFACE_ENTRY(IEvent)
    END_COM_MAP()
    EventSourceChangedEvent() { /*printf("EventSourceChangedEvent\n")*/;}
    virtual ~EventSourceChangedEvent() { /*printf("~EventSourceChangedEvent\n")*/; uninit(); }

    HRESULT FinalConstruct()
    {
        BaseFinalConstruct();
        return mEvent.createObject();
    }
    void FinalRelease()
    {
        mEvent->FinalRelease();
        BaseFinalRelease();
    }
    STDMETHOD(COMGETTER(Type)) (VBoxEventType_T *aType)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Type) (aType);
    }
    STDMETHOD(COMGETTER(Source)) (IEventSource * *aSource)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Source) (aSource);
    }
    STDMETHOD(COMGETTER(Waitable)) (BOOL *aWaitable)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Waitable) (aWaitable);
    }
    STDMETHOD(SetProcessed)()
    {
       return ((VBoxEvent*)mEvent)->SetProcessed();
    }
    STDMETHOD(WaitProcessed)(LONG aTimeout, BOOL *aResult)
    {
        return ((VBoxEvent*)mEvent)->WaitProcessed(aTimeout, aResult);
    }
    void uninit()
    {
        if (!mEvent.isNull())
        {
           mEvent->uninit();
           mEvent.setNull();
        }
    }

    HRESULT init(IEventSource* aSource, VBoxEventType_T aType, BOOL aWaitable)
    {
        return mEvent->init(aSource, aType, aWaitable);
    }
private:
    ComObjPtr<VBoxEvent>      mEvent;

    // attribute listener
private:
    ComPtr<IEventListener>    m_listener;
public:
    STDMETHOD(COMGETTER(Listener))(IEventListener** a_listener)
    {
         m_listener.queryInterfaceTo(a_listener);
         return S_OK;
    }
    // purely internal setter
    HRESULT set_listener(IEventListener* a_listener)
    {
         m_listener = a_listener;
         return S_OK;
    }

    // attribute add
private:
    BOOL    m_add;
public:
    STDMETHOD(COMGETTER(Add))(BOOL* a_add)
    {
         *a_add = m_add;
         return S_OK;
    }
    // purely internal setter
    HRESULT set_add(BOOL a_add)
    {
         m_add = a_add;
         return S_OK;
    }
    // skipping IEvent attributes 
};
#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(EventSourceChangedEvent)
NS_IMPL_THREADSAFE_ISUPPORTS2_CI(EventSourceChangedEvent, IEventSourceChangedEvent, IEvent)
#endif

// IExtraDataChangedEvent implementation code 
class ATL_NO_VTABLE ExtraDataChangedEvent
    : public VirtualBoxBase,
      VBOX_SCRIPTABLE_IMPL(IExtraDataChangedEvent)
{
public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(ExtraDataChangedEvent, IExtraDataChangedEvent)
    DECLARE_NOT_AGGREGATABLE(ExtraDataChangedEvent)
    DECLARE_PROTECT_FINAL_CONSTRUCT()
    BEGIN_COM_MAP(ExtraDataChangedEvent)
        VBOX_DEFAULT_INTERFACE_ENTRIES(IExtraDataChangedEvent)
        COM_INTERFACE_ENTRY(IExtraDataChangedEvent)
        COM_INTERFACE_ENTRY(IEvent)
    END_COM_MAP()
    ExtraDataChangedEvent() { /*printf("ExtraDataChangedEvent\n")*/;}
    virtual ~ExtraDataChangedEvent() { /*printf("~ExtraDataChangedEvent\n")*/; uninit(); }

    HRESULT FinalConstruct()
    {
        BaseFinalConstruct();
        return mEvent.createObject();
    }
    void FinalRelease()
    {
        mEvent->FinalRelease();
        BaseFinalRelease();
    }
    STDMETHOD(COMGETTER(Type)) (VBoxEventType_T *aType)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Type) (aType);
    }
    STDMETHOD(COMGETTER(Source)) (IEventSource * *aSource)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Source) (aSource);
    }
    STDMETHOD(COMGETTER(Waitable)) (BOOL *aWaitable)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Waitable) (aWaitable);
    }
    STDMETHOD(SetProcessed)()
    {
       return ((VBoxEvent*)mEvent)->SetProcessed();
    }
    STDMETHOD(WaitProcessed)(LONG aTimeout, BOOL *aResult)
    {
        return ((VBoxEvent*)mEvent)->WaitProcessed(aTimeout, aResult);
    }
    void uninit()
    {
        if (!mEvent.isNull())
        {
           mEvent->uninit();
           mEvent.setNull();
        }
    }

    HRESULT init(IEventSource* aSource, VBoxEventType_T aType, BOOL aWaitable)
    {
        return mEvent->init(aSource, aType, aWaitable);
    }
private:
    ComObjPtr<VBoxEvent>      mEvent;

    // attribute machineId
private:
    Bstr    m_machineId;
public:
    STDMETHOD(COMGETTER(MachineId))(BSTR* a_machineId)
    {
         m_machineId.cloneTo(a_machineId);
         return S_OK;
    }
    // purely internal setter
    HRESULT set_machineId(CBSTR a_machineId)
    {
         m_machineId = a_machineId;
         return S_OK;
    }

    // attribute key
private:
    Bstr    m_key;
public:
    STDMETHOD(COMGETTER(Key))(BSTR* a_key)
    {
         m_key.cloneTo(a_key);
         return S_OK;
    }
    // purely internal setter
    HRESULT set_key(CBSTR a_key)
    {
         m_key = a_key;
         return S_OK;
    }

    // attribute value
private:
    Bstr    m_value;
public:
    STDMETHOD(COMGETTER(Value))(BSTR* a_value)
    {
         m_value.cloneTo(a_value);
         return S_OK;
    }
    // purely internal setter
    HRESULT set_value(CBSTR a_value)
    {
         m_value = a_value;
         return S_OK;
    }
    // skipping IEvent attributes 
};
#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(ExtraDataChangedEvent)
NS_IMPL_THREADSAFE_ISUPPORTS2_CI(ExtraDataChangedEvent, IExtraDataChangedEvent, IEvent)
#endif

// IExtraDataCanChangeEvent implementation code 
class ATL_NO_VTABLE ExtraDataCanChangeEvent
    : public VirtualBoxBase,
      VBOX_SCRIPTABLE_IMPL(IExtraDataCanChangeEvent)
{
public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(ExtraDataCanChangeEvent, IExtraDataCanChangeEvent)
    DECLARE_NOT_AGGREGATABLE(ExtraDataCanChangeEvent)
    DECLARE_PROTECT_FINAL_CONSTRUCT()
    BEGIN_COM_MAP(ExtraDataCanChangeEvent)
        VBOX_DEFAULT_INTERFACE_ENTRIES(IExtraDataCanChangeEvent)
        COM_INTERFACE_ENTRY(IExtraDataCanChangeEvent)
        COM_INTERFACE_ENTRY(IVetoEvent)
        COM_INTERFACE_ENTRY(IEvent)
    END_COM_MAP()
    ExtraDataCanChangeEvent() { /*printf("ExtraDataCanChangeEvent\n")*/;}
    virtual ~ExtraDataCanChangeEvent() { /*printf("~ExtraDataCanChangeEvent\n")*/; uninit(); }

    HRESULT FinalConstruct()
    {
        BaseFinalConstruct();
        return mEvent.createObject();
    }
    void FinalRelease()
    {
        mEvent->FinalRelease();
        BaseFinalRelease();
    }
    STDMETHOD(COMGETTER(Type)) (VBoxEventType_T *aType)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Type) (aType);
    }
    STDMETHOD(COMGETTER(Source)) (IEventSource * *aSource)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Source) (aSource);
    }
    STDMETHOD(COMGETTER(Waitable)) (BOOL *aWaitable)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Waitable) (aWaitable);
    }
    STDMETHOD(SetProcessed)()
    {
       return ((VBoxEvent*)mEvent)->SetProcessed();
    }
    STDMETHOD(WaitProcessed)(LONG aTimeout, BOOL *aResult)
    {
        return ((VBoxEvent*)mEvent)->WaitProcessed(aTimeout, aResult);
    }
    void uninit()
    {
        if (!mEvent.isNull())
        {
           mEvent->uninit();
           mEvent.setNull();
        }
    }

    HRESULT init(IEventSource* aSource, VBoxEventType_T aType, BOOL aWaitable = TRUE)
    {
        NOREF(aWaitable);
        return mEvent->init(aSource, aType);
    }
    STDMETHOD(AddVeto)(IN_BSTR aVeto)
    {
        return mEvent->AddVeto(aVeto);
    }
    STDMETHOD(IsVetoed)(BOOL *aResult)
    {
       return mEvent->IsVetoed(aResult);
    }
    STDMETHOD(GetVetos)(ComSafeArrayOut(BSTR, aVetos))
    {
       return mEvent->GetVetos(ComSafeArrayOutArg(aVetos));
    }
private:
    ComObjPtr<VBoxVetoEvent>      mEvent;

    // attribute machineId
private:
    Bstr    m_machineId;
public:
    STDMETHOD(COMGETTER(MachineId))(BSTR* a_machineId)
    {
         m_machineId.cloneTo(a_machineId);
         return S_OK;
    }
    // purely internal setter
    HRESULT set_machineId(CBSTR a_machineId)
    {
         m_machineId = a_machineId;
         return S_OK;
    }

    // attribute key
private:
    Bstr    m_key;
public:
    STDMETHOD(COMGETTER(Key))(BSTR* a_key)
    {
         m_key.cloneTo(a_key);
         return S_OK;
    }
    // purely internal setter
    HRESULT set_key(CBSTR a_key)
    {
         m_key = a_key;
         return S_OK;
    }

    // attribute value
private:
    Bstr    m_value;
public:
    STDMETHOD(COMGETTER(Value))(BSTR* a_value)
    {
         m_value.cloneTo(a_value);
         return S_OK;
    }
    // purely internal setter
    HRESULT set_value(CBSTR a_value)
    {
         m_value = a_value;
         return S_OK;
    }
    // skipping IVetoEvent attributes 
};
#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(ExtraDataCanChangeEvent)
NS_IMPL_THREADSAFE_ISUPPORTS3_CI(ExtraDataCanChangeEvent, IExtraDataCanChangeEvent, IVetoEvent, IEvent)
#endif

// ICanShowWindowEvent implementation code 
class ATL_NO_VTABLE CanShowWindowEvent
    : public VirtualBoxBase,
      VBOX_SCRIPTABLE_IMPL(ICanShowWindowEvent)
{
public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(CanShowWindowEvent, ICanShowWindowEvent)
    DECLARE_NOT_AGGREGATABLE(CanShowWindowEvent)
    DECLARE_PROTECT_FINAL_CONSTRUCT()
    BEGIN_COM_MAP(CanShowWindowEvent)
        VBOX_DEFAULT_INTERFACE_ENTRIES(ICanShowWindowEvent)
        COM_INTERFACE_ENTRY(ICanShowWindowEvent)
        COM_INTERFACE_ENTRY(IVetoEvent)
        COM_INTERFACE_ENTRY(IEvent)
    END_COM_MAP()
    CanShowWindowEvent() { /*printf("CanShowWindowEvent\n")*/;}
    virtual ~CanShowWindowEvent() { /*printf("~CanShowWindowEvent\n")*/; uninit(); }

    HRESULT FinalConstruct()
    {
        BaseFinalConstruct();
        return mEvent.createObject();
    }
    void FinalRelease()
    {
        mEvent->FinalRelease();
        BaseFinalRelease();
    }
    STDMETHOD(COMGETTER(Type)) (VBoxEventType_T *aType)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Type) (aType);
    }
    STDMETHOD(COMGETTER(Source)) (IEventSource * *aSource)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Source) (aSource);
    }
    STDMETHOD(COMGETTER(Waitable)) (BOOL *aWaitable)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Waitable) (aWaitable);
    }
    STDMETHOD(SetProcessed)()
    {
       return ((VBoxEvent*)mEvent)->SetProcessed();
    }
    STDMETHOD(WaitProcessed)(LONG aTimeout, BOOL *aResult)
    {
        return ((VBoxEvent*)mEvent)->WaitProcessed(aTimeout, aResult);
    }
    void uninit()
    {
        if (!mEvent.isNull())
        {
           mEvent->uninit();
           mEvent.setNull();
        }
    }

    HRESULT init(IEventSource* aSource, VBoxEventType_T aType, BOOL aWaitable = TRUE)
    {
        NOREF(aWaitable);
        return mEvent->init(aSource, aType);
    }
    STDMETHOD(AddVeto)(IN_BSTR aVeto)
    {
        return mEvent->AddVeto(aVeto);
    }
    STDMETHOD(IsVetoed)(BOOL *aResult)
    {
       return mEvent->IsVetoed(aResult);
    }
    STDMETHOD(GetVetos)(ComSafeArrayOut(BSTR, aVetos))
    {
       return mEvent->GetVetos(ComSafeArrayOutArg(aVetos));
    }
private:
    ComObjPtr<VBoxVetoEvent>      mEvent;
    // skipping IVetoEvent attributes 
};
#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(CanShowWindowEvent)
NS_IMPL_THREADSAFE_ISUPPORTS3_CI(CanShowWindowEvent, ICanShowWindowEvent, IVetoEvent, IEvent)
#endif

// IShowWindowEvent implementation code 
class ATL_NO_VTABLE ShowWindowEvent
    : public VirtualBoxBase,
      VBOX_SCRIPTABLE_IMPL(IShowWindowEvent)
{
public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(ShowWindowEvent, IShowWindowEvent)
    DECLARE_NOT_AGGREGATABLE(ShowWindowEvent)
    DECLARE_PROTECT_FINAL_CONSTRUCT()
    BEGIN_COM_MAP(ShowWindowEvent)
        VBOX_DEFAULT_INTERFACE_ENTRIES(IShowWindowEvent)
        COM_INTERFACE_ENTRY(IShowWindowEvent)
        COM_INTERFACE_ENTRY(IEvent)
    END_COM_MAP()
    ShowWindowEvent() { /*printf("ShowWindowEvent\n")*/;}
    virtual ~ShowWindowEvent() { /*printf("~ShowWindowEvent\n")*/; uninit(); }

    HRESULT FinalConstruct()
    {
        BaseFinalConstruct();
        return mEvent.createObject();
    }
    void FinalRelease()
    {
        mEvent->FinalRelease();
        BaseFinalRelease();
    }
    STDMETHOD(COMGETTER(Type)) (VBoxEventType_T *aType)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Type) (aType);
    }
    STDMETHOD(COMGETTER(Source)) (IEventSource * *aSource)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Source) (aSource);
    }
    STDMETHOD(COMGETTER(Waitable)) (BOOL *aWaitable)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Waitable) (aWaitable);
    }
    STDMETHOD(SetProcessed)()
    {
       return ((VBoxEvent*)mEvent)->SetProcessed();
    }
    STDMETHOD(WaitProcessed)(LONG aTimeout, BOOL *aResult)
    {
        return ((VBoxEvent*)mEvent)->WaitProcessed(aTimeout, aResult);
    }
    void uninit()
    {
        if (!mEvent.isNull())
        {
           mEvent->uninit();
           mEvent.setNull();
        }
    }

    HRESULT init(IEventSource* aSource, VBoxEventType_T aType, BOOL aWaitable)
    {
        return mEvent->init(aSource, aType, aWaitable);
    }
private:
    ComObjPtr<VBoxEvent>      mEvent;

    // attribute winId
private:
    LONG64    m_winId;
public:
    STDMETHOD(COMGETTER(WinId))(LONG64* a_winId)
    {
         *a_winId = m_winId;
         return S_OK;
    }
    STDMETHOD(COMSETTER(WinId))(LONG64 a_winId)
    {
         m_winId = a_winId;
         return S_OK;
    }
    // purely internal setter
    HRESULT set_winId(LONG64 a_winId)
    {
         m_winId = a_winId;
         return S_OK;
    }
    // skipping IEvent attributes 
};
#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(ShowWindowEvent)
NS_IMPL_THREADSAFE_ISUPPORTS2_CI(ShowWindowEvent, IShowWindowEvent, IEvent)
#endif

// INATRedirectEvent implementation code 
class ATL_NO_VTABLE NATRedirectEvent
    : public VirtualBoxBase,
      VBOX_SCRIPTABLE_IMPL(INATRedirectEvent)
{
public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(NATRedirectEvent, INATRedirectEvent)
    DECLARE_NOT_AGGREGATABLE(NATRedirectEvent)
    DECLARE_PROTECT_FINAL_CONSTRUCT()
    BEGIN_COM_MAP(NATRedirectEvent)
        VBOX_DEFAULT_INTERFACE_ENTRIES(INATRedirectEvent)
        COM_INTERFACE_ENTRY(INATRedirectEvent)
        COM_INTERFACE_ENTRY(IMachineEvent)
        COM_INTERFACE_ENTRY(IEvent)
    END_COM_MAP()
    NATRedirectEvent() { /*printf("NATRedirectEvent\n")*/;}
    virtual ~NATRedirectEvent() { /*printf("~NATRedirectEvent\n")*/; uninit(); }

    HRESULT FinalConstruct()
    {
        BaseFinalConstruct();
        return mEvent.createObject();
    }
    void FinalRelease()
    {
        mEvent->FinalRelease();
        BaseFinalRelease();
    }
    STDMETHOD(COMGETTER(Type)) (VBoxEventType_T *aType)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Type) (aType);
    }
    STDMETHOD(COMGETTER(Source)) (IEventSource * *aSource)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Source) (aSource);
    }
    STDMETHOD(COMGETTER(Waitable)) (BOOL *aWaitable)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Waitable) (aWaitable);
    }
    STDMETHOD(SetProcessed)()
    {
       return ((VBoxEvent*)mEvent)->SetProcessed();
    }
    STDMETHOD(WaitProcessed)(LONG aTimeout, BOOL *aResult)
    {
        return ((VBoxEvent*)mEvent)->WaitProcessed(aTimeout, aResult);
    }
    void uninit()
    {
        if (!mEvent.isNull())
        {
           mEvent->uninit();
           mEvent.setNull();
        }
    }

    HRESULT init(IEventSource* aSource, VBoxEventType_T aType, BOOL aWaitable)
    {
        return mEvent->init(aSource, aType, aWaitable);
    }
private:
    ComObjPtr<VBoxEvent>      mEvent;

    // attribute slot
private:
    ULONG    m_slot;
public:
    STDMETHOD(COMGETTER(Slot))(ULONG* a_slot)
    {
         *a_slot = m_slot;
         return S_OK;
    }
    // purely internal setter
    HRESULT set_slot(ULONG a_slot)
    {
         m_slot = a_slot;
         return S_OK;
    }

    // attribute remove
private:
    BOOL    m_remove;
public:
    STDMETHOD(COMGETTER(Remove))(BOOL* a_remove)
    {
         *a_remove = m_remove;
         return S_OK;
    }
    // purely internal setter
    HRESULT set_remove(BOOL a_remove)
    {
         m_remove = a_remove;
         return S_OK;
    }

    // attribute name
private:
    Bstr    m_name;
public:
    STDMETHOD(COMGETTER(Name))(BSTR* a_name)
    {
         m_name.cloneTo(a_name);
         return S_OK;
    }
    // purely internal setter
    HRESULT set_name(CBSTR a_name)
    {
         m_name = a_name;
         return S_OK;
    }

    // attribute proto
private:
    NATProtocol_T    m_proto;
public:
    STDMETHOD(COMGETTER(Proto))(NATProtocol_T* a_proto)
    {
         *a_proto = m_proto;
         return S_OK;
    }
    // purely internal setter
    HRESULT set_proto(NATProtocol_T a_proto)
    {
         m_proto = a_proto;
         return S_OK;
    }

    // attribute hostIP
private:
    Bstr    m_hostIP;
public:
    STDMETHOD(COMGETTER(HostIP))(BSTR* a_hostIP)
    {
         m_hostIP.cloneTo(a_hostIP);
         return S_OK;
    }
    // purely internal setter
    HRESULT set_hostIP(CBSTR a_hostIP)
    {
         m_hostIP = a_hostIP;
         return S_OK;
    }

    // attribute hostPort
private:
    LONG    m_hostPort;
public:
    STDMETHOD(COMGETTER(HostPort))(LONG* a_hostPort)
    {
         *a_hostPort = m_hostPort;
         return S_OK;
    }
    // purely internal setter
    HRESULT set_hostPort(LONG a_hostPort)
    {
         m_hostPort = a_hostPort;
         return S_OK;
    }

    // attribute guestIP
private:
    Bstr    m_guestIP;
public:
    STDMETHOD(COMGETTER(GuestIP))(BSTR* a_guestIP)
    {
         m_guestIP.cloneTo(a_guestIP);
         return S_OK;
    }
    // purely internal setter
    HRESULT set_guestIP(CBSTR a_guestIP)
    {
         m_guestIP = a_guestIP;
         return S_OK;
    }

    // attribute guestPort
private:
    LONG    m_guestPort;
public:
    STDMETHOD(COMGETTER(GuestPort))(LONG* a_guestPort)
    {
         *a_guestPort = m_guestPort;
         return S_OK;
    }
    // purely internal setter
    HRESULT set_guestPort(LONG a_guestPort)
    {
         m_guestPort = a_guestPort;
         return S_OK;
    }

    // attribute machineId
private:
    Bstr    m_machineId;
public:
    STDMETHOD(COMGETTER(MachineId))(BSTR* a_machineId)
    {
         m_machineId.cloneTo(a_machineId);
         return S_OK;
    }
    // purely internal setter
    HRESULT set_machineId(CBSTR a_machineId)
    {
         m_machineId = a_machineId;
         return S_OK;
    }
    // skipping IEvent attributes 
};
#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(NATRedirectEvent)
NS_IMPL_THREADSAFE_ISUPPORTS3_CI(NATRedirectEvent, INATRedirectEvent, IMachineEvent, IEvent)
#endif

// IHostPCIDevicePlugEvent implementation code 
class ATL_NO_VTABLE HostPCIDevicePlugEvent
    : public VirtualBoxBase,
      VBOX_SCRIPTABLE_IMPL(IHostPCIDevicePlugEvent)
{
public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(HostPCIDevicePlugEvent, IHostPCIDevicePlugEvent)
    DECLARE_NOT_AGGREGATABLE(HostPCIDevicePlugEvent)
    DECLARE_PROTECT_FINAL_CONSTRUCT()
    BEGIN_COM_MAP(HostPCIDevicePlugEvent)
        VBOX_DEFAULT_INTERFACE_ENTRIES(IHostPCIDevicePlugEvent)
        COM_INTERFACE_ENTRY(IHostPCIDevicePlugEvent)
        COM_INTERFACE_ENTRY(IMachineEvent)
        COM_INTERFACE_ENTRY(IEvent)
    END_COM_MAP()
    HostPCIDevicePlugEvent() { /*printf("HostPCIDevicePlugEvent\n")*/;}
    virtual ~HostPCIDevicePlugEvent() { /*printf("~HostPCIDevicePlugEvent\n")*/; uninit(); }

    HRESULT FinalConstruct()
    {
        BaseFinalConstruct();
        return mEvent.createObject();
    }
    void FinalRelease()
    {
        mEvent->FinalRelease();
        BaseFinalRelease();
    }
    STDMETHOD(COMGETTER(Type)) (VBoxEventType_T *aType)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Type) (aType);
    }
    STDMETHOD(COMGETTER(Source)) (IEventSource * *aSource)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Source) (aSource);
    }
    STDMETHOD(COMGETTER(Waitable)) (BOOL *aWaitable)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Waitable) (aWaitable);
    }
    STDMETHOD(SetProcessed)()
    {
       return ((VBoxEvent*)mEvent)->SetProcessed();
    }
    STDMETHOD(WaitProcessed)(LONG aTimeout, BOOL *aResult)
    {
        return ((VBoxEvent*)mEvent)->WaitProcessed(aTimeout, aResult);
    }
    void uninit()
    {
        if (!mEvent.isNull())
        {
           mEvent->uninit();
           mEvent.setNull();
        }
    }

    HRESULT init(IEventSource* aSource, VBoxEventType_T aType, BOOL aWaitable)
    {
        return mEvent->init(aSource, aType, aWaitable);
    }
private:
    ComObjPtr<VBoxEvent>      mEvent;

    // attribute plugged
private:
    BOOL    m_plugged;
public:
    STDMETHOD(COMGETTER(Plugged))(BOOL* a_plugged)
    {
         *a_plugged = m_plugged;
         return S_OK;
    }
    // purely internal setter
    HRESULT set_plugged(BOOL a_plugged)
    {
         m_plugged = a_plugged;
         return S_OK;
    }

    // attribute success
private:
    BOOL    m_success;
public:
    STDMETHOD(COMGETTER(Success))(BOOL* a_success)
    {
         *a_success = m_success;
         return S_OK;
    }
    // purely internal setter
    HRESULT set_success(BOOL a_success)
    {
         m_success = a_success;
         return S_OK;
    }

    // attribute attachment
private:
    ComPtr<IPCIDeviceAttachment>    m_attachment;
public:
    STDMETHOD(COMGETTER(Attachment))(IPCIDeviceAttachment** a_attachment)
    {
         m_attachment.queryInterfaceTo(a_attachment);
         return S_OK;
    }
    // purely internal setter
    HRESULT set_attachment(IPCIDeviceAttachment* a_attachment)
    {
         m_attachment = a_attachment;
         return S_OK;
    }

    // attribute message
private:
    Bstr    m_message;
public:
    STDMETHOD(COMGETTER(Message))(BSTR* a_message)
    {
         m_message.cloneTo(a_message);
         return S_OK;
    }
    // purely internal setter
    HRESULT set_message(CBSTR a_message)
    {
         m_message = a_message;
         return S_OK;
    }

    // attribute machineId
private:
    Bstr    m_machineId;
public:
    STDMETHOD(COMGETTER(MachineId))(BSTR* a_machineId)
    {
         m_machineId.cloneTo(a_machineId);
         return S_OK;
    }
    // purely internal setter
    HRESULT set_machineId(CBSTR a_machineId)
    {
         m_machineId = a_machineId;
         return S_OK;
    }
    // skipping IEvent attributes 
};
#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(HostPCIDevicePlugEvent)
NS_IMPL_THREADSAFE_ISUPPORTS3_CI(HostPCIDevicePlugEvent, IHostPCIDevicePlugEvent, IMachineEvent, IEvent)
#endif

// IVBoxSVCAvailabilityChangedEvent implementation code 
class ATL_NO_VTABLE VBoxSVCAvailabilityChangedEvent
    : public VirtualBoxBase,
      VBOX_SCRIPTABLE_IMPL(IVBoxSVCAvailabilityChangedEvent)
{
public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(VBoxSVCAvailabilityChangedEvent, IVBoxSVCAvailabilityChangedEvent)
    DECLARE_NOT_AGGREGATABLE(VBoxSVCAvailabilityChangedEvent)
    DECLARE_PROTECT_FINAL_CONSTRUCT()
    BEGIN_COM_MAP(VBoxSVCAvailabilityChangedEvent)
        VBOX_DEFAULT_INTERFACE_ENTRIES(IVBoxSVCAvailabilityChangedEvent)
        COM_INTERFACE_ENTRY(IVBoxSVCAvailabilityChangedEvent)
        COM_INTERFACE_ENTRY(IEvent)
    END_COM_MAP()
    VBoxSVCAvailabilityChangedEvent() { /*printf("VBoxSVCAvailabilityChangedEvent\n")*/;}
    virtual ~VBoxSVCAvailabilityChangedEvent() { /*printf("~VBoxSVCAvailabilityChangedEvent\n")*/; uninit(); }

    HRESULT FinalConstruct()
    {
        BaseFinalConstruct();
        return mEvent.createObject();
    }
    void FinalRelease()
    {
        mEvent->FinalRelease();
        BaseFinalRelease();
    }
    STDMETHOD(COMGETTER(Type)) (VBoxEventType_T *aType)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Type) (aType);
    }
    STDMETHOD(COMGETTER(Source)) (IEventSource * *aSource)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Source) (aSource);
    }
    STDMETHOD(COMGETTER(Waitable)) (BOOL *aWaitable)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Waitable) (aWaitable);
    }
    STDMETHOD(SetProcessed)()
    {
       return ((VBoxEvent*)mEvent)->SetProcessed();
    }
    STDMETHOD(WaitProcessed)(LONG aTimeout, BOOL *aResult)
    {
        return ((VBoxEvent*)mEvent)->WaitProcessed(aTimeout, aResult);
    }
    void uninit()
    {
        if (!mEvent.isNull())
        {
           mEvent->uninit();
           mEvent.setNull();
        }
    }

    HRESULT init(IEventSource* aSource, VBoxEventType_T aType, BOOL aWaitable)
    {
        return mEvent->init(aSource, aType, aWaitable);
    }
private:
    ComObjPtr<VBoxEvent>      mEvent;

    // attribute available
private:
    BOOL    m_available;
public:
    STDMETHOD(COMGETTER(Available))(BOOL* a_available)
    {
         *a_available = m_available;
         return S_OK;
    }
    // purely internal setter
    HRESULT set_available(BOOL a_available)
    {
         m_available = a_available;
         return S_OK;
    }
    // skipping IEvent attributes 
};
#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(VBoxSVCAvailabilityChangedEvent)
NS_IMPL_THREADSAFE_ISUPPORTS2_CI(VBoxSVCAvailabilityChangedEvent, IVBoxSVCAvailabilityChangedEvent, IEvent)
#endif

// IBandwidthGroupChangedEvent implementation code 
class ATL_NO_VTABLE BandwidthGroupChangedEvent
    : public VirtualBoxBase,
      VBOX_SCRIPTABLE_IMPL(IBandwidthGroupChangedEvent)
{
public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(BandwidthGroupChangedEvent, IBandwidthGroupChangedEvent)
    DECLARE_NOT_AGGREGATABLE(BandwidthGroupChangedEvent)
    DECLARE_PROTECT_FINAL_CONSTRUCT()
    BEGIN_COM_MAP(BandwidthGroupChangedEvent)
        VBOX_DEFAULT_INTERFACE_ENTRIES(IBandwidthGroupChangedEvent)
        COM_INTERFACE_ENTRY(IBandwidthGroupChangedEvent)
        COM_INTERFACE_ENTRY(IEvent)
    END_COM_MAP()
    BandwidthGroupChangedEvent() { /*printf("BandwidthGroupChangedEvent\n")*/;}
    virtual ~BandwidthGroupChangedEvent() { /*printf("~BandwidthGroupChangedEvent\n")*/; uninit(); }

    HRESULT FinalConstruct()
    {
        BaseFinalConstruct();
        return mEvent.createObject();
    }
    void FinalRelease()
    {
        mEvent->FinalRelease();
        BaseFinalRelease();
    }
    STDMETHOD(COMGETTER(Type)) (VBoxEventType_T *aType)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Type) (aType);
    }
    STDMETHOD(COMGETTER(Source)) (IEventSource * *aSource)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Source) (aSource);
    }
    STDMETHOD(COMGETTER(Waitable)) (BOOL *aWaitable)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Waitable) (aWaitable);
    }
    STDMETHOD(SetProcessed)()
    {
       return ((VBoxEvent*)mEvent)->SetProcessed();
    }
    STDMETHOD(WaitProcessed)(LONG aTimeout, BOOL *aResult)
    {
        return ((VBoxEvent*)mEvent)->WaitProcessed(aTimeout, aResult);
    }
    void uninit()
    {
        if (!mEvent.isNull())
        {
           mEvent->uninit();
           mEvent.setNull();
        }
    }

    HRESULT init(IEventSource* aSource, VBoxEventType_T aType, BOOL aWaitable)
    {
        return mEvent->init(aSource, aType, aWaitable);
    }
private:
    ComObjPtr<VBoxEvent>      mEvent;

    // attribute bandwidthGroup
private:
    ComPtr<IBandwidthGroup>    m_bandwidthGroup;
public:
    STDMETHOD(COMGETTER(BandwidthGroup))(IBandwidthGroup** a_bandwidthGroup)
    {
         m_bandwidthGroup.queryInterfaceTo(a_bandwidthGroup);
         return S_OK;
    }
    // purely internal setter
    HRESULT set_bandwidthGroup(IBandwidthGroup* a_bandwidthGroup)
    {
         m_bandwidthGroup = a_bandwidthGroup;
         return S_OK;
    }
    // skipping IEvent attributes 
};
#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(BandwidthGroupChangedEvent)
NS_IMPL_THREADSAFE_ISUPPORTS2_CI(BandwidthGroupChangedEvent, IBandwidthGroupChangedEvent, IEvent)
#endif

// IGuestMonitorChangedEvent implementation code 
class ATL_NO_VTABLE GuestMonitorChangedEvent
    : public VirtualBoxBase,
      VBOX_SCRIPTABLE_IMPL(IGuestMonitorChangedEvent)
{
public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(GuestMonitorChangedEvent, IGuestMonitorChangedEvent)
    DECLARE_NOT_AGGREGATABLE(GuestMonitorChangedEvent)
    DECLARE_PROTECT_FINAL_CONSTRUCT()
    BEGIN_COM_MAP(GuestMonitorChangedEvent)
        VBOX_DEFAULT_INTERFACE_ENTRIES(IGuestMonitorChangedEvent)
        COM_INTERFACE_ENTRY(IGuestMonitorChangedEvent)
        COM_INTERFACE_ENTRY(IEvent)
    END_COM_MAP()
    GuestMonitorChangedEvent() { /*printf("GuestMonitorChangedEvent\n")*/;}
    virtual ~GuestMonitorChangedEvent() { /*printf("~GuestMonitorChangedEvent\n")*/; uninit(); }

    HRESULT FinalConstruct()
    {
        BaseFinalConstruct();
        return mEvent.createObject();
    }
    void FinalRelease()
    {
        mEvent->FinalRelease();
        BaseFinalRelease();
    }
    STDMETHOD(COMGETTER(Type)) (VBoxEventType_T *aType)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Type) (aType);
    }
    STDMETHOD(COMGETTER(Source)) (IEventSource * *aSource)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Source) (aSource);
    }
    STDMETHOD(COMGETTER(Waitable)) (BOOL *aWaitable)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Waitable) (aWaitable);
    }
    STDMETHOD(SetProcessed)()
    {
       return ((VBoxEvent*)mEvent)->SetProcessed();
    }
    STDMETHOD(WaitProcessed)(LONG aTimeout, BOOL *aResult)
    {
        return ((VBoxEvent*)mEvent)->WaitProcessed(aTimeout, aResult);
    }
    void uninit()
    {
        if (!mEvent.isNull())
        {
           mEvent->uninit();
           mEvent.setNull();
        }
    }

    HRESULT init(IEventSource* aSource, VBoxEventType_T aType, BOOL aWaitable)
    {
        return mEvent->init(aSource, aType, aWaitable);
    }
private:
    ComObjPtr<VBoxEvent>      mEvent;

    // attribute changeType
private:
    GuestMonitorChangedEventType_T    m_changeType;
public:
    STDMETHOD(COMGETTER(ChangeType))(GuestMonitorChangedEventType_T* a_changeType)
    {
         *a_changeType = m_changeType;
         return S_OK;
    }
    // purely internal setter
    HRESULT set_changeType(GuestMonitorChangedEventType_T a_changeType)
    {
         m_changeType = a_changeType;
         return S_OK;
    }

    // attribute screenId
private:
    ULONG    m_screenId;
public:
    STDMETHOD(COMGETTER(ScreenId))(ULONG* a_screenId)
    {
         *a_screenId = m_screenId;
         return S_OK;
    }
    // purely internal setter
    HRESULT set_screenId(ULONG a_screenId)
    {
         m_screenId = a_screenId;
         return S_OK;
    }

    // attribute originX
private:
    ULONG    m_originX;
public:
    STDMETHOD(COMGETTER(OriginX))(ULONG* a_originX)
    {
         *a_originX = m_originX;
         return S_OK;
    }
    // purely internal setter
    HRESULT set_originX(ULONG a_originX)
    {
         m_originX = a_originX;
         return S_OK;
    }

    // attribute originY
private:
    ULONG    m_originY;
public:
    STDMETHOD(COMGETTER(OriginY))(ULONG* a_originY)
    {
         *a_originY = m_originY;
         return S_OK;
    }
    // purely internal setter
    HRESULT set_originY(ULONG a_originY)
    {
         m_originY = a_originY;
         return S_OK;
    }

    // attribute width
private:
    ULONG    m_width;
public:
    STDMETHOD(COMGETTER(Width))(ULONG* a_width)
    {
         *a_width = m_width;
         return S_OK;
    }
    // purely internal setter
    HRESULT set_width(ULONG a_width)
    {
         m_width = a_width;
         return S_OK;
    }

    // attribute height
private:
    ULONG    m_height;
public:
    STDMETHOD(COMGETTER(Height))(ULONG* a_height)
    {
         *a_height = m_height;
         return S_OK;
    }
    // purely internal setter
    HRESULT set_height(ULONG a_height)
    {
         m_height = a_height;
         return S_OK;
    }
    // skipping IEvent attributes 
};
#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(GuestMonitorChangedEvent)
NS_IMPL_THREADSAFE_ISUPPORTS2_CI(GuestMonitorChangedEvent, IGuestMonitorChangedEvent, IEvent)
#endif

// IGuestUserStateChangedEvent implementation code 
class ATL_NO_VTABLE GuestUserStateChangedEvent
    : public VirtualBoxBase,
      VBOX_SCRIPTABLE_IMPL(IGuestUserStateChangedEvent)
{
public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(GuestUserStateChangedEvent, IGuestUserStateChangedEvent)
    DECLARE_NOT_AGGREGATABLE(GuestUserStateChangedEvent)
    DECLARE_PROTECT_FINAL_CONSTRUCT()
    BEGIN_COM_MAP(GuestUserStateChangedEvent)
        VBOX_DEFAULT_INTERFACE_ENTRIES(IGuestUserStateChangedEvent)
        COM_INTERFACE_ENTRY(IGuestUserStateChangedEvent)
        COM_INTERFACE_ENTRY(IEvent)
    END_COM_MAP()
    GuestUserStateChangedEvent() { /*printf("GuestUserStateChangedEvent\n")*/;}
    virtual ~GuestUserStateChangedEvent() { /*printf("~GuestUserStateChangedEvent\n")*/; uninit(); }

    HRESULT FinalConstruct()
    {
        BaseFinalConstruct();
        return mEvent.createObject();
    }
    void FinalRelease()
    {
        mEvent->FinalRelease();
        BaseFinalRelease();
    }
    STDMETHOD(COMGETTER(Type)) (VBoxEventType_T *aType)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Type) (aType);
    }
    STDMETHOD(COMGETTER(Source)) (IEventSource * *aSource)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Source) (aSource);
    }
    STDMETHOD(COMGETTER(Waitable)) (BOOL *aWaitable)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Waitable) (aWaitable);
    }
    STDMETHOD(SetProcessed)()
    {
       return ((VBoxEvent*)mEvent)->SetProcessed();
    }
    STDMETHOD(WaitProcessed)(LONG aTimeout, BOOL *aResult)
    {
        return ((VBoxEvent*)mEvent)->WaitProcessed(aTimeout, aResult);
    }
    void uninit()
    {
        if (!mEvent.isNull())
        {
           mEvent->uninit();
           mEvent.setNull();
        }
    }

    HRESULT init(IEventSource* aSource, VBoxEventType_T aType, BOOL aWaitable)
    {
        return mEvent->init(aSource, aType, aWaitable);
    }
private:
    ComObjPtr<VBoxEvent>      mEvent;

    // attribute name
private:
    Bstr    m_name;
public:
    STDMETHOD(COMGETTER(Name))(BSTR* a_name)
    {
         m_name.cloneTo(a_name);
         return S_OK;
    }
    // purely internal setter
    HRESULT set_name(CBSTR a_name)
    {
         m_name = a_name;
         return S_OK;
    }

    // attribute domain
private:
    Bstr    m_domain;
public:
    STDMETHOD(COMGETTER(Domain))(BSTR* a_domain)
    {
         m_domain.cloneTo(a_domain);
         return S_OK;
    }
    // purely internal setter
    HRESULT set_domain(CBSTR a_domain)
    {
         m_domain = a_domain;
         return S_OK;
    }

    // attribute state
private:
    GuestUserState_T    m_state;
public:
    STDMETHOD(COMGETTER(State))(GuestUserState_T* a_state)
    {
         *a_state = m_state;
         return S_OK;
    }
    // purely internal setter
    HRESULT set_state(GuestUserState_T a_state)
    {
         m_state = a_state;
         return S_OK;
    }

    // attribute stateDetails
private:
    Bstr    m_stateDetails;
public:
    STDMETHOD(COMGETTER(StateDetails))(BSTR* a_stateDetails)
    {
         m_stateDetails.cloneTo(a_stateDetails);
         return S_OK;
    }
    // purely internal setter
    HRESULT set_stateDetails(CBSTR a_stateDetails)
    {
         m_stateDetails = a_stateDetails;
         return S_OK;
    }
    // skipping IEvent attributes 
};
#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(GuestUserStateChangedEvent)
NS_IMPL_THREADSAFE_ISUPPORTS2_CI(GuestUserStateChangedEvent, IGuestUserStateChangedEvent, IEvent)
#endif

// IStorageDeviceChangedEvent implementation code 
class ATL_NO_VTABLE StorageDeviceChangedEvent
    : public VirtualBoxBase,
      VBOX_SCRIPTABLE_IMPL(IStorageDeviceChangedEvent)
{
public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(StorageDeviceChangedEvent, IStorageDeviceChangedEvent)
    DECLARE_NOT_AGGREGATABLE(StorageDeviceChangedEvent)
    DECLARE_PROTECT_FINAL_CONSTRUCT()
    BEGIN_COM_MAP(StorageDeviceChangedEvent)
        VBOX_DEFAULT_INTERFACE_ENTRIES(IStorageDeviceChangedEvent)
        COM_INTERFACE_ENTRY(IStorageDeviceChangedEvent)
        COM_INTERFACE_ENTRY(IEvent)
    END_COM_MAP()
    StorageDeviceChangedEvent() { /*printf("StorageDeviceChangedEvent\n")*/;}
    virtual ~StorageDeviceChangedEvent() { /*printf("~StorageDeviceChangedEvent\n")*/; uninit(); }

    HRESULT FinalConstruct()
    {
        BaseFinalConstruct();
        return mEvent.createObject();
    }
    void FinalRelease()
    {
        mEvent->FinalRelease();
        BaseFinalRelease();
    }
    STDMETHOD(COMGETTER(Type)) (VBoxEventType_T *aType)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Type) (aType);
    }
    STDMETHOD(COMGETTER(Source)) (IEventSource * *aSource)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Source) (aSource);
    }
    STDMETHOD(COMGETTER(Waitable)) (BOOL *aWaitable)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Waitable) (aWaitable);
    }
    STDMETHOD(SetProcessed)()
    {
       return ((VBoxEvent*)mEvent)->SetProcessed();
    }
    STDMETHOD(WaitProcessed)(LONG aTimeout, BOOL *aResult)
    {
        return ((VBoxEvent*)mEvent)->WaitProcessed(aTimeout, aResult);
    }
    void uninit()
    {
        if (!mEvent.isNull())
        {
           mEvent->uninit();
           mEvent.setNull();
        }
    }

    HRESULT init(IEventSource* aSource, VBoxEventType_T aType, BOOL aWaitable)
    {
        return mEvent->init(aSource, aType, aWaitable);
    }
private:
    ComObjPtr<VBoxEvent>      mEvent;

    // attribute storageDevice
private:
    ComPtr<IMediumAttachment>    m_storageDevice;
public:
    STDMETHOD(COMGETTER(StorageDevice))(IMediumAttachment** a_storageDevice)
    {
         m_storageDevice.queryInterfaceTo(a_storageDevice);
         return S_OK;
    }
    // purely internal setter
    HRESULT set_storageDevice(IMediumAttachment* a_storageDevice)
    {
         m_storageDevice = a_storageDevice;
         return S_OK;
    }

    // attribute removed
private:
    BOOL    m_removed;
public:
    STDMETHOD(COMGETTER(Removed))(BOOL* a_removed)
    {
         *a_removed = m_removed;
         return S_OK;
    }
    // purely internal setter
    HRESULT set_removed(BOOL a_removed)
    {
         m_removed = a_removed;
         return S_OK;
    }

    // attribute silent
private:
    BOOL    m_silent;
public:
    STDMETHOD(COMGETTER(Silent))(BOOL* a_silent)
    {
         *a_silent = m_silent;
         return S_OK;
    }
    // purely internal setter
    HRESULT set_silent(BOOL a_silent)
    {
         m_silent = a_silent;
         return S_OK;
    }
    // skipping IEvent attributes 
};
#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(StorageDeviceChangedEvent)
NS_IMPL_THREADSAFE_ISUPPORTS2_CI(StorageDeviceChangedEvent, IStorageDeviceChangedEvent, IEvent)
#endif

// INATNetworkChangedEvent implementation code 
class ATL_NO_VTABLE NATNetworkChangedEvent
    : public VirtualBoxBase,
      VBOX_SCRIPTABLE_IMPL(INATNetworkChangedEvent)
{
public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(NATNetworkChangedEvent, INATNetworkChangedEvent)
    DECLARE_NOT_AGGREGATABLE(NATNetworkChangedEvent)
    DECLARE_PROTECT_FINAL_CONSTRUCT()
    BEGIN_COM_MAP(NATNetworkChangedEvent)
        VBOX_DEFAULT_INTERFACE_ENTRIES(INATNetworkChangedEvent)
        COM_INTERFACE_ENTRY(INATNetworkChangedEvent)
        COM_INTERFACE_ENTRY(IEvent)
    END_COM_MAP()
    NATNetworkChangedEvent() { /*printf("NATNetworkChangedEvent\n")*/;}
    virtual ~NATNetworkChangedEvent() { /*printf("~NATNetworkChangedEvent\n")*/; uninit(); }

    HRESULT FinalConstruct()
    {
        BaseFinalConstruct();
        return mEvent.createObject();
    }
    void FinalRelease()
    {
        mEvent->FinalRelease();
        BaseFinalRelease();
    }
    STDMETHOD(COMGETTER(Type)) (VBoxEventType_T *aType)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Type) (aType);
    }
    STDMETHOD(COMGETTER(Source)) (IEventSource * *aSource)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Source) (aSource);
    }
    STDMETHOD(COMGETTER(Waitable)) (BOOL *aWaitable)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Waitable) (aWaitable);
    }
    STDMETHOD(SetProcessed)()
    {
       return ((VBoxEvent*)mEvent)->SetProcessed();
    }
    STDMETHOD(WaitProcessed)(LONG aTimeout, BOOL *aResult)
    {
        return ((VBoxEvent*)mEvent)->WaitProcessed(aTimeout, aResult);
    }
    void uninit()
    {
        if (!mEvent.isNull())
        {
           mEvent->uninit();
           mEvent.setNull();
        }
    }

    HRESULT init(IEventSource* aSource, VBoxEventType_T aType, BOOL aWaitable)
    {
        return mEvent->init(aSource, aType, aWaitable);
    }
private:
    ComObjPtr<VBoxEvent>      mEvent;

    // attribute networkName
private:
    Bstr    m_networkName;
public:
    STDMETHOD(COMGETTER(NetworkName))(BSTR* a_networkName)
    {
         m_networkName.cloneTo(a_networkName);
         return S_OK;
    }
    // purely internal setter
    HRESULT set_networkName(CBSTR a_networkName)
    {
         m_networkName = a_networkName;
         return S_OK;
    }
    // skipping IEvent attributes 
};
#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(NATNetworkChangedEvent)
NS_IMPL_THREADSAFE_ISUPPORTS2_CI(NATNetworkChangedEvent, INATNetworkChangedEvent, IEvent)
#endif

// INATNetworkStartStopEvent implementation code 
class ATL_NO_VTABLE NATNetworkStartStopEvent
    : public VirtualBoxBase,
      VBOX_SCRIPTABLE_IMPL(INATNetworkStartStopEvent)
{
public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(NATNetworkStartStopEvent, INATNetworkStartStopEvent)
    DECLARE_NOT_AGGREGATABLE(NATNetworkStartStopEvent)
    DECLARE_PROTECT_FINAL_CONSTRUCT()
    BEGIN_COM_MAP(NATNetworkStartStopEvent)
        VBOX_DEFAULT_INTERFACE_ENTRIES(INATNetworkStartStopEvent)
        COM_INTERFACE_ENTRY(INATNetworkStartStopEvent)
        COM_INTERFACE_ENTRY(INATNetworkChangedEvent)
        COM_INTERFACE_ENTRY(IEvent)
    END_COM_MAP()
    NATNetworkStartStopEvent() { /*printf("NATNetworkStartStopEvent\n")*/;}
    virtual ~NATNetworkStartStopEvent() { /*printf("~NATNetworkStartStopEvent\n")*/; uninit(); }

    HRESULT FinalConstruct()
    {
        BaseFinalConstruct();
        return mEvent.createObject();
    }
    void FinalRelease()
    {
        mEvent->FinalRelease();
        BaseFinalRelease();
    }
    STDMETHOD(COMGETTER(Type)) (VBoxEventType_T *aType)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Type) (aType);
    }
    STDMETHOD(COMGETTER(Source)) (IEventSource * *aSource)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Source) (aSource);
    }
    STDMETHOD(COMGETTER(Waitable)) (BOOL *aWaitable)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Waitable) (aWaitable);
    }
    STDMETHOD(SetProcessed)()
    {
       return ((VBoxEvent*)mEvent)->SetProcessed();
    }
    STDMETHOD(WaitProcessed)(LONG aTimeout, BOOL *aResult)
    {
        return ((VBoxEvent*)mEvent)->WaitProcessed(aTimeout, aResult);
    }
    void uninit()
    {
        if (!mEvent.isNull())
        {
           mEvent->uninit();
           mEvent.setNull();
        }
    }

    HRESULT init(IEventSource* aSource, VBoxEventType_T aType, BOOL aWaitable)
    {
        return mEvent->init(aSource, aType, aWaitable);
    }
private:
    ComObjPtr<VBoxEvent>      mEvent;

    // attribute startEvent
private:
    BOOL    m_startEvent;
public:
    STDMETHOD(COMGETTER(StartEvent))(BOOL* a_startEvent)
    {
         *a_startEvent = m_startEvent;
         return S_OK;
    }
    // purely internal setter
    HRESULT set_startEvent(BOOL a_startEvent)
    {
         m_startEvent = a_startEvent;
         return S_OK;
    }

    // attribute networkName
private:
    Bstr    m_networkName;
public:
    STDMETHOD(COMGETTER(NetworkName))(BSTR* a_networkName)
    {
         m_networkName.cloneTo(a_networkName);
         return S_OK;
    }
    // purely internal setter
    HRESULT set_networkName(CBSTR a_networkName)
    {
         m_networkName = a_networkName;
         return S_OK;
    }
    // skipping IEvent attributes 
};
#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(NATNetworkStartStopEvent)
NS_IMPL_THREADSAFE_ISUPPORTS3_CI(NATNetworkStartStopEvent, INATNetworkStartStopEvent, INATNetworkChangedEvent, IEvent)
#endif

// INATNetworkAlterEvent implementation code 
class ATL_NO_VTABLE NATNetworkAlterEvent
    : public VirtualBoxBase,
      VBOX_SCRIPTABLE_IMPL(INATNetworkAlterEvent)
{
public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(NATNetworkAlterEvent, INATNetworkAlterEvent)
    DECLARE_NOT_AGGREGATABLE(NATNetworkAlterEvent)
    DECLARE_PROTECT_FINAL_CONSTRUCT()
    BEGIN_COM_MAP(NATNetworkAlterEvent)
        VBOX_DEFAULT_INTERFACE_ENTRIES(INATNetworkAlterEvent)
        COM_INTERFACE_ENTRY(INATNetworkAlterEvent)
        COM_INTERFACE_ENTRY(INATNetworkChangedEvent)
        COM_INTERFACE_ENTRY(IEvent)
    END_COM_MAP()
    NATNetworkAlterEvent() { /*printf("NATNetworkAlterEvent\n")*/;}
    virtual ~NATNetworkAlterEvent() { /*printf("~NATNetworkAlterEvent\n")*/; uninit(); }

    HRESULT FinalConstruct()
    {
        BaseFinalConstruct();
        return mEvent.createObject();
    }
    void FinalRelease()
    {
        mEvent->FinalRelease();
        BaseFinalRelease();
    }
    STDMETHOD(COMGETTER(Type)) (VBoxEventType_T *aType)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Type) (aType);
    }
    STDMETHOD(COMGETTER(Source)) (IEventSource * *aSource)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Source) (aSource);
    }
    STDMETHOD(COMGETTER(Waitable)) (BOOL *aWaitable)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Waitable) (aWaitable);
    }
    STDMETHOD(SetProcessed)()
    {
       return ((VBoxEvent*)mEvent)->SetProcessed();
    }
    STDMETHOD(WaitProcessed)(LONG aTimeout, BOOL *aResult)
    {
        return ((VBoxEvent*)mEvent)->WaitProcessed(aTimeout, aResult);
    }
    void uninit()
    {
        if (!mEvent.isNull())
        {
           mEvent->uninit();
           mEvent.setNull();
        }
    }

    HRESULT init(IEventSource* aSource, VBoxEventType_T aType, BOOL aWaitable)
    {
        return mEvent->init(aSource, aType, aWaitable);
    }
private:
    ComObjPtr<VBoxEvent>      mEvent;

    // attribute networkName
private:
    Bstr    m_networkName;
public:
    STDMETHOD(COMGETTER(NetworkName))(BSTR* a_networkName)
    {
         m_networkName.cloneTo(a_networkName);
         return S_OK;
    }
    // purely internal setter
    HRESULT set_networkName(CBSTR a_networkName)
    {
         m_networkName = a_networkName;
         return S_OK;
    }
    // skipping IEvent attributes 
};
#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(NATNetworkAlterEvent)
NS_IMPL_THREADSAFE_ISUPPORTS3_CI(NATNetworkAlterEvent, INATNetworkAlterEvent, INATNetworkChangedEvent, IEvent)
#endif

// INATNetworkCreationDeletionEvent implementation code 
class ATL_NO_VTABLE NATNetworkCreationDeletionEvent
    : public VirtualBoxBase,
      VBOX_SCRIPTABLE_IMPL(INATNetworkCreationDeletionEvent)
{
public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(NATNetworkCreationDeletionEvent, INATNetworkCreationDeletionEvent)
    DECLARE_NOT_AGGREGATABLE(NATNetworkCreationDeletionEvent)
    DECLARE_PROTECT_FINAL_CONSTRUCT()
    BEGIN_COM_MAP(NATNetworkCreationDeletionEvent)
        VBOX_DEFAULT_INTERFACE_ENTRIES(INATNetworkCreationDeletionEvent)
        COM_INTERFACE_ENTRY(INATNetworkCreationDeletionEvent)
        COM_INTERFACE_ENTRY(INATNetworkAlterEvent)
        COM_INTERFACE_ENTRY(INATNetworkChangedEvent)
        COM_INTERFACE_ENTRY(IEvent)
    END_COM_MAP()
    NATNetworkCreationDeletionEvent() { /*printf("NATNetworkCreationDeletionEvent\n")*/;}
    virtual ~NATNetworkCreationDeletionEvent() { /*printf("~NATNetworkCreationDeletionEvent\n")*/; uninit(); }

    HRESULT FinalConstruct()
    {
        BaseFinalConstruct();
        return mEvent.createObject();
    }
    void FinalRelease()
    {
        mEvent->FinalRelease();
        BaseFinalRelease();
    }
    STDMETHOD(COMGETTER(Type)) (VBoxEventType_T *aType)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Type) (aType);
    }
    STDMETHOD(COMGETTER(Source)) (IEventSource * *aSource)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Source) (aSource);
    }
    STDMETHOD(COMGETTER(Waitable)) (BOOL *aWaitable)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Waitable) (aWaitable);
    }
    STDMETHOD(SetProcessed)()
    {
       return ((VBoxEvent*)mEvent)->SetProcessed();
    }
    STDMETHOD(WaitProcessed)(LONG aTimeout, BOOL *aResult)
    {
        return ((VBoxEvent*)mEvent)->WaitProcessed(aTimeout, aResult);
    }
    void uninit()
    {
        if (!mEvent.isNull())
        {
           mEvent->uninit();
           mEvent.setNull();
        }
    }

    HRESULT init(IEventSource* aSource, VBoxEventType_T aType, BOOL aWaitable)
    {
        return mEvent->init(aSource, aType, aWaitable);
    }
private:
    ComObjPtr<VBoxEvent>      mEvent;

    // attribute creationEvent
private:
    BOOL    m_creationEvent;
public:
    STDMETHOD(COMGETTER(CreationEvent))(BOOL* a_creationEvent)
    {
         *a_creationEvent = m_creationEvent;
         return S_OK;
    }
    // purely internal setter
    HRESULT set_creationEvent(BOOL a_creationEvent)
    {
         m_creationEvent = a_creationEvent;
         return S_OK;
    }

    // attribute networkName
private:
    Bstr    m_networkName;
public:
    STDMETHOD(COMGETTER(NetworkName))(BSTR* a_networkName)
    {
         m_networkName.cloneTo(a_networkName);
         return S_OK;
    }
    // purely internal setter
    HRESULT set_networkName(CBSTR a_networkName)
    {
         m_networkName = a_networkName;
         return S_OK;
    }
    // skipping IEvent attributes 
};
#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(NATNetworkCreationDeletionEvent)
NS_IMPL_THREADSAFE_ISUPPORTS4_CI(NATNetworkCreationDeletionEvent, INATNetworkCreationDeletionEvent, INATNetworkAlterEvent, INATNetworkChangedEvent, IEvent)
#endif

// INATNetworkSettingEvent implementation code 
class ATL_NO_VTABLE NATNetworkSettingEvent
    : public VirtualBoxBase,
      VBOX_SCRIPTABLE_IMPL(INATNetworkSettingEvent)
{
public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(NATNetworkSettingEvent, INATNetworkSettingEvent)
    DECLARE_NOT_AGGREGATABLE(NATNetworkSettingEvent)
    DECLARE_PROTECT_FINAL_CONSTRUCT()
    BEGIN_COM_MAP(NATNetworkSettingEvent)
        VBOX_DEFAULT_INTERFACE_ENTRIES(INATNetworkSettingEvent)
        COM_INTERFACE_ENTRY(INATNetworkSettingEvent)
        COM_INTERFACE_ENTRY(INATNetworkAlterEvent)
        COM_INTERFACE_ENTRY(INATNetworkChangedEvent)
        COM_INTERFACE_ENTRY(IEvent)
    END_COM_MAP()
    NATNetworkSettingEvent() { /*printf("NATNetworkSettingEvent\n")*/;}
    virtual ~NATNetworkSettingEvent() { /*printf("~NATNetworkSettingEvent\n")*/; uninit(); }

    HRESULT FinalConstruct()
    {
        BaseFinalConstruct();
        return mEvent.createObject();
    }
    void FinalRelease()
    {
        mEvent->FinalRelease();
        BaseFinalRelease();
    }
    STDMETHOD(COMGETTER(Type)) (VBoxEventType_T *aType)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Type) (aType);
    }
    STDMETHOD(COMGETTER(Source)) (IEventSource * *aSource)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Source) (aSource);
    }
    STDMETHOD(COMGETTER(Waitable)) (BOOL *aWaitable)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Waitable) (aWaitable);
    }
    STDMETHOD(SetProcessed)()
    {
       return ((VBoxEvent*)mEvent)->SetProcessed();
    }
    STDMETHOD(WaitProcessed)(LONG aTimeout, BOOL *aResult)
    {
        return ((VBoxEvent*)mEvent)->WaitProcessed(aTimeout, aResult);
    }
    void uninit()
    {
        if (!mEvent.isNull())
        {
           mEvent->uninit();
           mEvent.setNull();
        }
    }

    HRESULT init(IEventSource* aSource, VBoxEventType_T aType, BOOL aWaitable)
    {
        return mEvent->init(aSource, aType, aWaitable);
    }
private:
    ComObjPtr<VBoxEvent>      mEvent;

    // attribute enabled
private:
    BOOL    m_enabled;
public:
    STDMETHOD(COMGETTER(Enabled))(BOOL* a_enabled)
    {
         *a_enabled = m_enabled;
         return S_OK;
    }
    // purely internal setter
    HRESULT set_enabled(BOOL a_enabled)
    {
         m_enabled = a_enabled;
         return S_OK;
    }

    // attribute network
private:
    Bstr    m_network;
public:
    STDMETHOD(COMGETTER(Network))(BSTR* a_network)
    {
         m_network.cloneTo(a_network);
         return S_OK;
    }
    // purely internal setter
    HRESULT set_network(CBSTR a_network)
    {
         m_network = a_network;
         return S_OK;
    }

    // attribute gateway
private:
    Bstr    m_gateway;
public:
    STDMETHOD(COMGETTER(Gateway))(BSTR* a_gateway)
    {
         m_gateway.cloneTo(a_gateway);
         return S_OK;
    }
    // purely internal setter
    HRESULT set_gateway(CBSTR a_gateway)
    {
         m_gateway = a_gateway;
         return S_OK;
    }

    // attribute advertiseDefaultIPv6RouteEnabled
private:
    BOOL    m_advertiseDefaultIPv6RouteEnabled;
public:
    STDMETHOD(COMGETTER(AdvertiseDefaultIPv6RouteEnabled))(BOOL* a_advertiseDefaultIPv6RouteEnabled)
    {
         *a_advertiseDefaultIPv6RouteEnabled = m_advertiseDefaultIPv6RouteEnabled;
         return S_OK;
    }
    // purely internal setter
    HRESULT set_advertiseDefaultIPv6RouteEnabled(BOOL a_advertiseDefaultIPv6RouteEnabled)
    {
         m_advertiseDefaultIPv6RouteEnabled = a_advertiseDefaultIPv6RouteEnabled;
         return S_OK;
    }

    // attribute needDhcpServer
private:
    BOOL    m_needDhcpServer;
public:
    STDMETHOD(COMGETTER(NeedDhcpServer))(BOOL* a_needDhcpServer)
    {
         *a_needDhcpServer = m_needDhcpServer;
         return S_OK;
    }
    // purely internal setter
    HRESULT set_needDhcpServer(BOOL a_needDhcpServer)
    {
         m_needDhcpServer = a_needDhcpServer;
         return S_OK;
    }

    // attribute networkName
private:
    Bstr    m_networkName;
public:
    STDMETHOD(COMGETTER(NetworkName))(BSTR* a_networkName)
    {
         m_networkName.cloneTo(a_networkName);
         return S_OK;
    }
    // purely internal setter
    HRESULT set_networkName(CBSTR a_networkName)
    {
         m_networkName = a_networkName;
         return S_OK;
    }
    // skipping IEvent attributes 
};
#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(NATNetworkSettingEvent)
NS_IMPL_THREADSAFE_ISUPPORTS4_CI(NATNetworkSettingEvent, INATNetworkSettingEvent, INATNetworkAlterEvent, INATNetworkChangedEvent, IEvent)
#endif

// INATNetworkPortForwardEvent implementation code 
class ATL_NO_VTABLE NATNetworkPortForwardEvent
    : public VirtualBoxBase,
      VBOX_SCRIPTABLE_IMPL(INATNetworkPortForwardEvent)
{
public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(NATNetworkPortForwardEvent, INATNetworkPortForwardEvent)
    DECLARE_NOT_AGGREGATABLE(NATNetworkPortForwardEvent)
    DECLARE_PROTECT_FINAL_CONSTRUCT()
    BEGIN_COM_MAP(NATNetworkPortForwardEvent)
        VBOX_DEFAULT_INTERFACE_ENTRIES(INATNetworkPortForwardEvent)
        COM_INTERFACE_ENTRY(INATNetworkPortForwardEvent)
        COM_INTERFACE_ENTRY(INATNetworkAlterEvent)
        COM_INTERFACE_ENTRY(INATNetworkChangedEvent)
        COM_INTERFACE_ENTRY(IEvent)
    END_COM_MAP()
    NATNetworkPortForwardEvent() { /*printf("NATNetworkPortForwardEvent\n")*/;}
    virtual ~NATNetworkPortForwardEvent() { /*printf("~NATNetworkPortForwardEvent\n")*/; uninit(); }

    HRESULT FinalConstruct()
    {
        BaseFinalConstruct();
        return mEvent.createObject();
    }
    void FinalRelease()
    {
        mEvent->FinalRelease();
        BaseFinalRelease();
    }
    STDMETHOD(COMGETTER(Type)) (VBoxEventType_T *aType)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Type) (aType);
    }
    STDMETHOD(COMGETTER(Source)) (IEventSource * *aSource)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Source) (aSource);
    }
    STDMETHOD(COMGETTER(Waitable)) (BOOL *aWaitable)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Waitable) (aWaitable);
    }
    STDMETHOD(SetProcessed)()
    {
       return ((VBoxEvent*)mEvent)->SetProcessed();
    }
    STDMETHOD(WaitProcessed)(LONG aTimeout, BOOL *aResult)
    {
        return ((VBoxEvent*)mEvent)->WaitProcessed(aTimeout, aResult);
    }
    void uninit()
    {
        if (!mEvent.isNull())
        {
           mEvent->uninit();
           mEvent.setNull();
        }
    }

    HRESULT init(IEventSource* aSource, VBoxEventType_T aType, BOOL aWaitable)
    {
        return mEvent->init(aSource, aType, aWaitable);
    }
private:
    ComObjPtr<VBoxEvent>      mEvent;

    // attribute create
private:
    BOOL    m_create;
public:
    STDMETHOD(COMGETTER(Create))(BOOL* a_create)
    {
         *a_create = m_create;
         return S_OK;
    }
    // purely internal setter
    HRESULT set_create(BOOL a_create)
    {
         m_create = a_create;
         return S_OK;
    }

    // attribute ipv6
private:
    BOOL    m_ipv6;
public:
    STDMETHOD(COMGETTER(Ipv6))(BOOL* a_ipv6)
    {
         *a_ipv6 = m_ipv6;
         return S_OK;
    }
    // purely internal setter
    HRESULT set_ipv6(BOOL a_ipv6)
    {
         m_ipv6 = a_ipv6;
         return S_OK;
    }

    // attribute name
private:
    Bstr    m_name;
public:
    STDMETHOD(COMGETTER(Name))(BSTR* a_name)
    {
         m_name.cloneTo(a_name);
         return S_OK;
    }
    // purely internal setter
    HRESULT set_name(CBSTR a_name)
    {
         m_name = a_name;
         return S_OK;
    }

    // attribute proto
private:
    NATProtocol_T    m_proto;
public:
    STDMETHOD(COMGETTER(Proto))(NATProtocol_T* a_proto)
    {
         *a_proto = m_proto;
         return S_OK;
    }
    // purely internal setter
    HRESULT set_proto(NATProtocol_T a_proto)
    {
         m_proto = a_proto;
         return S_OK;
    }

    // attribute hostIp
private:
    Bstr    m_hostIp;
public:
    STDMETHOD(COMGETTER(HostIp))(BSTR* a_hostIp)
    {
         m_hostIp.cloneTo(a_hostIp);
         return S_OK;
    }
    // purely internal setter
    HRESULT set_hostIp(CBSTR a_hostIp)
    {
         m_hostIp = a_hostIp;
         return S_OK;
    }

    // attribute hostPort
private:
    LONG    m_hostPort;
public:
    STDMETHOD(COMGETTER(HostPort))(LONG* a_hostPort)
    {
         *a_hostPort = m_hostPort;
         return S_OK;
    }
    // purely internal setter
    HRESULT set_hostPort(LONG a_hostPort)
    {
         m_hostPort = a_hostPort;
         return S_OK;
    }

    // attribute guestIp
private:
    Bstr    m_guestIp;
public:
    STDMETHOD(COMGETTER(GuestIp))(BSTR* a_guestIp)
    {
         m_guestIp.cloneTo(a_guestIp);
         return S_OK;
    }
    // purely internal setter
    HRESULT set_guestIp(CBSTR a_guestIp)
    {
         m_guestIp = a_guestIp;
         return S_OK;
    }

    // attribute guestPort
private:
    LONG    m_guestPort;
public:
    STDMETHOD(COMGETTER(GuestPort))(LONG* a_guestPort)
    {
         *a_guestPort = m_guestPort;
         return S_OK;
    }
    // purely internal setter
    HRESULT set_guestPort(LONG a_guestPort)
    {
         m_guestPort = a_guestPort;
         return S_OK;
    }

    // attribute networkName
private:
    Bstr    m_networkName;
public:
    STDMETHOD(COMGETTER(NetworkName))(BSTR* a_networkName)
    {
         m_networkName.cloneTo(a_networkName);
         return S_OK;
    }
    // purely internal setter
    HRESULT set_networkName(CBSTR a_networkName)
    {
         m_networkName = a_networkName;
         return S_OK;
    }
    // skipping IEvent attributes 
};
#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(NATNetworkPortForwardEvent)
NS_IMPL_THREADSAFE_ISUPPORTS4_CI(NATNetworkPortForwardEvent, INATNetworkPortForwardEvent, INATNetworkAlterEvent, INATNetworkChangedEvent, IEvent)
#endif

// IHostNameResolutionConfigurationChangeEvent implementation code 
class ATL_NO_VTABLE HostNameResolutionConfigurationChangeEvent
    : public VirtualBoxBase,
      VBOX_SCRIPTABLE_IMPL(IHostNameResolutionConfigurationChangeEvent)
{
public:
    VIRTUALBOXBASE_ADD_ERRORINFO_SUPPORT(HostNameResolutionConfigurationChangeEvent, IHostNameResolutionConfigurationChangeEvent)
    DECLARE_NOT_AGGREGATABLE(HostNameResolutionConfigurationChangeEvent)
    DECLARE_PROTECT_FINAL_CONSTRUCT()
    BEGIN_COM_MAP(HostNameResolutionConfigurationChangeEvent)
        VBOX_DEFAULT_INTERFACE_ENTRIES(IHostNameResolutionConfigurationChangeEvent)
        COM_INTERFACE_ENTRY(IHostNameResolutionConfigurationChangeEvent)
        COM_INTERFACE_ENTRY(IEvent)
    END_COM_MAP()
    HostNameResolutionConfigurationChangeEvent() { /*printf("HostNameResolutionConfigurationChangeEvent\n")*/;}
    virtual ~HostNameResolutionConfigurationChangeEvent() { /*printf("~HostNameResolutionConfigurationChangeEvent\n")*/; uninit(); }

    HRESULT FinalConstruct()
    {
        BaseFinalConstruct();
        return mEvent.createObject();
    }
    void FinalRelease()
    {
        mEvent->FinalRelease();
        BaseFinalRelease();
    }
    STDMETHOD(COMGETTER(Type)) (VBoxEventType_T *aType)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Type) (aType);
    }
    STDMETHOD(COMGETTER(Source)) (IEventSource * *aSource)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Source) (aSource);
    }
    STDMETHOD(COMGETTER(Waitable)) (BOOL *aWaitable)
    {
        return ((VBoxEvent*)mEvent)->COMGETTER(Waitable) (aWaitable);
    }
    STDMETHOD(SetProcessed)()
    {
       return ((VBoxEvent*)mEvent)->SetProcessed();
    }
    STDMETHOD(WaitProcessed)(LONG aTimeout, BOOL *aResult)
    {
        return ((VBoxEvent*)mEvent)->WaitProcessed(aTimeout, aResult);
    }
    void uninit()
    {
        if (!mEvent.isNull())
        {
           mEvent->uninit();
           mEvent.setNull();
        }
    }

    HRESULT init(IEventSource* aSource, VBoxEventType_T aType, BOOL aWaitable)
    {
        return mEvent->init(aSource, aType, aWaitable);
    }
private:
    ComObjPtr<VBoxEvent>      mEvent;
    // skipping IEvent attributes 
};
#ifdef VBOX_WITH_XPCOM
NS_DECL_CLASSINFO(HostNameResolutionConfigurationChangeEvent)
NS_IMPL_THREADSAFE_ISUPPORTS2_CI(HostNameResolutionConfigurationChangeEvent, IHostNameResolutionConfigurationChangeEvent, IEvent)
#endif


HRESULT VBoxEventDesc::init(IEventSource* aSource, VBoxEventType_T aType, ...)
{
    va_list args;

    mEventSource = aSource;
    va_start(args, aType);
    switch (aType)
    {
         case VBoxEventType_OnMachineStateChanged:
         {
              ComObjPtr<MachineStateChangedEvent> obj;
              obj.createObject();
              obj->init(aSource, aType, FALSE);
              CBSTR a_machineId = va_arg(args, CBSTR);
              obj->set_machineId(a_machineId);
              MachineState_T a_state = va_arg(args, MachineState_T);
              obj->set_state(a_state);
              obj.queryInterfaceTo(mEvent.asOutParam());
              break;
         }
         case VBoxEventType_OnMachineDataChanged:
         {
              ComObjPtr<MachineDataChangedEvent> obj;
              obj.createObject();
              obj->init(aSource, aType, FALSE);
              CBSTR a_machineId = va_arg(args, CBSTR);
              obj->set_machineId(a_machineId);
              BOOL a_temporary = va_arg(args, BOOL);
              obj->set_temporary(a_temporary);
              obj.queryInterfaceTo(mEvent.asOutParam());
              break;
         }
         case VBoxEventType_OnMediumRegistered:
         {
              ComObjPtr<MediumRegisteredEvent> obj;
              obj.createObject();
              obj->init(aSource, aType, FALSE);
              CBSTR a_mediumId = va_arg(args, CBSTR);
              obj->set_mediumId(a_mediumId);
              DeviceType_T a_mediumType = va_arg(args, DeviceType_T);
              obj->set_mediumType(a_mediumType);
              BOOL a_registered = va_arg(args, BOOL);
              obj->set_registered(a_registered);
              obj.queryInterfaceTo(mEvent.asOutParam());
              break;
         }
         case VBoxEventType_OnMachineRegistered:
         {
              ComObjPtr<MachineRegisteredEvent> obj;
              obj.createObject();
              obj->init(aSource, aType, FALSE);
              CBSTR a_machineId = va_arg(args, CBSTR);
              obj->set_machineId(a_machineId);
              BOOL a_registered = va_arg(args, BOOL);
              obj->set_registered(a_registered);
              obj.queryInterfaceTo(mEvent.asOutParam());
              break;
         }
         case VBoxEventType_OnSessionStateChanged:
         {
              ComObjPtr<SessionStateChangedEvent> obj;
              obj.createObject();
              obj->init(aSource, aType, FALSE);
              CBSTR a_machineId = va_arg(args, CBSTR);
              obj->set_machineId(a_machineId);
              SessionState_T a_state = va_arg(args, SessionState_T);
              obj->set_state(a_state);
              obj.queryInterfaceTo(mEvent.asOutParam());
              break;
         }
         case VBoxEventType_OnGuestPropertyChanged:
         {
              ComObjPtr<GuestPropertyChangedEvent> obj;
              obj.createObject();
              obj->init(aSource, aType, FALSE);
              CBSTR a_machineId = va_arg(args, CBSTR);
              obj->set_machineId(a_machineId);
              CBSTR a_name = va_arg(args, CBSTR);
              obj->set_name(a_name);
              CBSTR a_value = va_arg(args, CBSTR);
              obj->set_value(a_value);
              CBSTR a_flags = va_arg(args, CBSTR);
              obj->set_flags(a_flags);
              obj.queryInterfaceTo(mEvent.asOutParam());
              break;
         }
         case VBoxEventType_OnSnapshotTaken:
         {
              ComObjPtr<SnapshotTakenEvent> obj;
              obj.createObject();
              obj->init(aSource, aType, FALSE);
              CBSTR a_machineId = va_arg(args, CBSTR);
              obj->set_machineId(a_machineId);
              CBSTR a_snapshotId = va_arg(args, CBSTR);
              obj->set_snapshotId(a_snapshotId);
              obj.queryInterfaceTo(mEvent.asOutParam());
              break;
         }
         case VBoxEventType_OnSnapshotDeleted:
         {
              ComObjPtr<SnapshotDeletedEvent> obj;
              obj.createObject();
              obj->init(aSource, aType, FALSE);
              CBSTR a_machineId = va_arg(args, CBSTR);
              obj->set_machineId(a_machineId);
              CBSTR a_snapshotId = va_arg(args, CBSTR);
              obj->set_snapshotId(a_snapshotId);
              obj.queryInterfaceTo(mEvent.asOutParam());
              break;
         }
         case VBoxEventType_OnSnapshotChanged:
         {
              ComObjPtr<SnapshotChangedEvent> obj;
              obj.createObject();
              obj->init(aSource, aType, FALSE);
              CBSTR a_machineId = va_arg(args, CBSTR);
              obj->set_machineId(a_machineId);
              CBSTR a_snapshotId = va_arg(args, CBSTR);
              obj->set_snapshotId(a_snapshotId);
              obj.queryInterfaceTo(mEvent.asOutParam());
              break;
         }
         case VBoxEventType_OnMousePointerShapeChanged:
         {
              ComObjPtr<MousePointerShapeChangedEvent> obj;
              obj.createObject();
              obj->init(aSource, aType, FALSE);
              BOOL a_visible = va_arg(args, BOOL);
              obj->set_visible(a_visible);
              BOOL a_alpha = va_arg(args, BOOL);
              obj->set_alpha(a_alpha);
              ULONG a_xhot = va_arg(args, ULONG);
              obj->set_xhot(a_xhot);
              ULONG a_yhot = va_arg(args, ULONG);
              obj->set_yhot(a_yhot);
              ULONG a_width = va_arg(args, ULONG);
              obj->set_width(a_width);
              ULONG a_height = va_arg(args, ULONG);
              obj->set_height(a_height);
#ifdef RT_OS_WINDOWS
              SAFEARRAY *aPtr_shape = va_arg(args, SAFEARRAY *);
              com::SafeArray<BYTE>   aArr_shape(aPtr_shape);
#else
              PRUint32 aArrSize_shape = va_arg(args, PRUint32);
              void*    aPtr_shape = va_arg(args, void*);
              com::SafeArray<BYTE>   aArr_shape(aArrSize_shape, (BYTE*)aPtr_shape);
#endif
              obj->set_shape(ComSafeArrayAsInParam(aArr_shape));
              obj.queryInterfaceTo(mEvent.asOutParam());
              break;
         }
         case VBoxEventType_OnMouseCapabilityChanged:
         {
              ComObjPtr<MouseCapabilityChangedEvent> obj;
              obj.createObject();
              obj->init(aSource, aType, FALSE);
              BOOL a_supportsAbsolute = va_arg(args, BOOL);
              obj->set_supportsAbsolute(a_supportsAbsolute);
              BOOL a_supportsRelative = va_arg(args, BOOL);
              obj->set_supportsRelative(a_supportsRelative);
              BOOL a_supportsMultiTouch = va_arg(args, BOOL);
              obj->set_supportsMultiTouch(a_supportsMultiTouch);
              BOOL a_needsHostCursor = va_arg(args, BOOL);
              obj->set_needsHostCursor(a_needsHostCursor);
              obj.queryInterfaceTo(mEvent.asOutParam());
              break;
         }
         case VBoxEventType_OnKeyboardLedsChanged:
         {
              ComObjPtr<KeyboardLedsChangedEvent> obj;
              obj.createObject();
              obj->init(aSource, aType, FALSE);
              BOOL a_numLock = va_arg(args, BOOL);
              obj->set_numLock(a_numLock);
              BOOL a_capsLock = va_arg(args, BOOL);
              obj->set_capsLock(a_capsLock);
              BOOL a_scrollLock = va_arg(args, BOOL);
              obj->set_scrollLock(a_scrollLock);
              obj.queryInterfaceTo(mEvent.asOutParam());
              break;
         }
         case VBoxEventType_OnStateChanged:
         {
              ComObjPtr<StateChangedEvent> obj;
              obj.createObject();
              obj->init(aSource, aType, FALSE);
              MachineState_T a_state = va_arg(args, MachineState_T);
              obj->set_state(a_state);
              obj.queryInterfaceTo(mEvent.asOutParam());
              break;
         }
         case VBoxEventType_OnAdditionsStateChanged:
         {
              ComObjPtr<AdditionsStateChangedEvent> obj;
              obj.createObject();
              obj->init(aSource, aType, FALSE);
              obj.queryInterfaceTo(mEvent.asOutParam());
              break;
         }
         case VBoxEventType_OnNetworkAdapterChanged:
         {
              ComObjPtr<NetworkAdapterChangedEvent> obj;
              obj.createObject();
              obj->init(aSource, aType, FALSE);
              INetworkAdapter* a_networkAdapter = va_arg(args, INetworkAdapter*);
              obj->set_networkAdapter(a_networkAdapter);
              obj.queryInterfaceTo(mEvent.asOutParam());
              break;
         }
         case VBoxEventType_OnSerialPortChanged:
         {
              ComObjPtr<SerialPortChangedEvent> obj;
              obj.createObject();
              obj->init(aSource, aType, FALSE);
              ISerialPort* a_serialPort = va_arg(args, ISerialPort*);
              obj->set_serialPort(a_serialPort);
              obj.queryInterfaceTo(mEvent.asOutParam());
              break;
         }
         case VBoxEventType_OnParallelPortChanged:
         {
              ComObjPtr<ParallelPortChangedEvent> obj;
              obj.createObject();
              obj->init(aSource, aType, FALSE);
              IParallelPort* a_parallelPort = va_arg(args, IParallelPort*);
              obj->set_parallelPort(a_parallelPort);
              obj.queryInterfaceTo(mEvent.asOutParam());
              break;
         }
         case VBoxEventType_OnStorageControllerChanged:
         {
              ComObjPtr<StorageControllerChangedEvent> obj;
              obj.createObject();
              obj->init(aSource, aType, FALSE);
              obj.queryInterfaceTo(mEvent.asOutParam());
              break;
         }
         case VBoxEventType_OnMediumChanged:
         {
              ComObjPtr<MediumChangedEvent> obj;
              obj.createObject();
              obj->init(aSource, aType, FALSE);
              IMediumAttachment* a_mediumAttachment = va_arg(args, IMediumAttachment*);
              obj->set_mediumAttachment(a_mediumAttachment);
              obj.queryInterfaceTo(mEvent.asOutParam());
              break;
         }
         case VBoxEventType_OnClipboardModeChanged:
         {
              ComObjPtr<ClipboardModeChangedEvent> obj;
              obj.createObject();
              obj->init(aSource, aType, FALSE);
              ClipboardMode_T a_clipboardMode = va_arg(args, ClipboardMode_T);
              obj->set_clipboardMode(a_clipboardMode);
              obj.queryInterfaceTo(mEvent.asOutParam());
              break;
         }
         case VBoxEventType_OnDragAndDropModeChanged:
         {
              ComObjPtr<DragAndDropModeChangedEvent> obj;
              obj.createObject();
              obj->init(aSource, aType, FALSE);
              DragAndDropMode_T a_dragAndDropMode = va_arg(args, DragAndDropMode_T);
              obj->set_dragAndDropMode(a_dragAndDropMode);
              obj.queryInterfaceTo(mEvent.asOutParam());
              break;
         }
         case VBoxEventType_OnCPUChanged:
         {
              ComObjPtr<CPUChangedEvent> obj;
              obj.createObject();
              obj->init(aSource, aType, FALSE);
              ULONG a_CPU = va_arg(args, ULONG);
              obj->set_CPU(a_CPU);
              BOOL a_add = va_arg(args, BOOL);
              obj->set_add(a_add);
              obj.queryInterfaceTo(mEvent.asOutParam());
              break;
         }
         case VBoxEventType_OnCPUExecutionCapChanged:
         {
              ComObjPtr<CPUExecutionCapChangedEvent> obj;
              obj.createObject();
              obj->init(aSource, aType, FALSE);
              ULONG a_executionCap = va_arg(args, ULONG);
              obj->set_executionCap(a_executionCap);
              obj.queryInterfaceTo(mEvent.asOutParam());
              break;
         }
         case VBoxEventType_OnGuestKeyboard:
         {
              ComObjPtr<GuestKeyboardEvent> obj;
              obj.createObject();
              obj->init(aSource, aType, FALSE);
#ifdef RT_OS_WINDOWS
              SAFEARRAY *aPtr_scancodes = va_arg(args, SAFEARRAY *);
              com::SafeArray<LONG>   aArr_scancodes(aPtr_scancodes);
#else
              PRUint32 aArrSize_scancodes = va_arg(args, PRUint32);
              void*    aPtr_scancodes = va_arg(args, void*);
              com::SafeArray<LONG>   aArr_scancodes(aArrSize_scancodes, (LONG*)aPtr_scancodes);
#endif
              obj->set_scancodes(ComSafeArrayAsInParam(aArr_scancodes));
              obj.queryInterfaceTo(mEvent.asOutParam());
              break;
         }
         case VBoxEventType_OnGuestMouse:
         {
              ComObjPtr<GuestMouseEvent> obj;
              obj.createObject();
              obj->init(aSource, aType, FALSE);
              GuestMouseEventMode_T a_mode = va_arg(args, GuestMouseEventMode_T);
              obj->set_mode(a_mode);
              LONG a_x = va_arg(args, LONG);
              obj->set_x(a_x);
              LONG a_y = va_arg(args, LONG);
              obj->set_y(a_y);
              LONG a_z = va_arg(args, LONG);
              obj->set_z(a_z);
              LONG a_w = va_arg(args, LONG);
              obj->set_w(a_w);
              LONG a_buttons = va_arg(args, LONG);
              obj->set_buttons(a_buttons);
              obj.queryInterfaceTo(mEvent.asOutParam());
              break;
         }
         case VBoxEventType_OnGuestMultiTouch:
         {
              ComObjPtr<GuestMultiTouchEvent> obj;
              obj.createObject();
              obj->init(aSource, aType, FALSE);
              LONG a_contactCount = va_arg(args, LONG);
              obj->set_contactCount(a_contactCount);
#ifdef RT_OS_WINDOWS
              SAFEARRAY *aPtr_xPositions = va_arg(args, SAFEARRAY *);
              com::SafeArray<SHORT>   aArr_xPositions(aPtr_xPositions);
#else
              PRUint32 aArrSize_xPositions = va_arg(args, PRUint32);
              void*    aPtr_xPositions = va_arg(args, void*);
              com::SafeArray<SHORT>   aArr_xPositions(aArrSize_xPositions, (SHORT*)aPtr_xPositions);
#endif
              obj->set_xPositions(ComSafeArrayAsInParam(aArr_xPositions));
#ifdef RT_OS_WINDOWS
              SAFEARRAY *aPtr_yPositions = va_arg(args, SAFEARRAY *);
              com::SafeArray<SHORT>   aArr_yPositions(aPtr_yPositions);
#else
              PRUint32 aArrSize_yPositions = va_arg(args, PRUint32);
              void*    aPtr_yPositions = va_arg(args, void*);
              com::SafeArray<SHORT>   aArr_yPositions(aArrSize_yPositions, (SHORT*)aPtr_yPositions);
#endif
              obj->set_yPositions(ComSafeArrayAsInParam(aArr_yPositions));
#ifdef RT_OS_WINDOWS
              SAFEARRAY *aPtr_contactIds = va_arg(args, SAFEARRAY *);
              com::SafeArray<USHORT>   aArr_contactIds(aPtr_contactIds);
#else
              PRUint32 aArrSize_contactIds = va_arg(args, PRUint32);
              void*    aPtr_contactIds = va_arg(args, void*);
              com::SafeArray<USHORT>   aArr_contactIds(aArrSize_contactIds, (USHORT*)aPtr_contactIds);
#endif
              obj->set_contactIds(ComSafeArrayAsInParam(aArr_contactIds));
#ifdef RT_OS_WINDOWS
              SAFEARRAY *aPtr_contactFlags = va_arg(args, SAFEARRAY *);
              com::SafeArray<USHORT>   aArr_contactFlags(aPtr_contactFlags);
#else
              PRUint32 aArrSize_contactFlags = va_arg(args, PRUint32);
              void*    aPtr_contactFlags = va_arg(args, void*);
              com::SafeArray<USHORT>   aArr_contactFlags(aArrSize_contactFlags, (USHORT*)aPtr_contactFlags);
#endif
              obj->set_contactFlags(ComSafeArrayAsInParam(aArr_contactFlags));
              ULONG a_scanTime = va_arg(args, ULONG);
              obj->set_scanTime(a_scanTime);
              obj.queryInterfaceTo(mEvent.asOutParam());
              break;
         }
         case VBoxEventType_OnGuestSessionStateChanged:
         {
              ComObjPtr<GuestSessionStateChangedEvent> obj;
              obj.createObject();
              obj->init(aSource, aType, FALSE);
              IGuestSession* a_session = va_arg(args, IGuestSession*);
              obj->set_session(a_session);
              ULONG a_id = va_arg(args, ULONG);
              obj->set_id(a_id);
              GuestSessionStatus_T a_status = va_arg(args, GuestSessionStatus_T);
              obj->set_status(a_status);
              IVirtualBoxErrorInfo* a_error = va_arg(args, IVirtualBoxErrorInfo*);
              obj->set_error(a_error);
              obj.queryInterfaceTo(mEvent.asOutParam());
              break;
         }
         case VBoxEventType_OnGuestSessionRegistered:
         {
              ComObjPtr<GuestSessionRegisteredEvent> obj;
              obj.createObject();
              obj->init(aSource, aType, FALSE);
              IGuestSession* a_session = va_arg(args, IGuestSession*);
              obj->set_session(a_session);
              BOOL a_registered = va_arg(args, BOOL);
              obj->set_registered(a_registered);
              obj.queryInterfaceTo(mEvent.asOutParam());
              break;
         }
         case VBoxEventType_OnGuestProcessRegistered:
         {
              ComObjPtr<GuestProcessRegisteredEvent> obj;
              obj.createObject();
              obj->init(aSource, aType, FALSE);
              IGuestSession* a_session = va_arg(args, IGuestSession*);
              obj->set_session(a_session);
              IGuestProcess* a_process = va_arg(args, IGuestProcess*);
              obj->set_process(a_process);
              ULONG a_pid = va_arg(args, ULONG);
              obj->set_pid(a_pid);
              BOOL a_registered = va_arg(args, BOOL);
              obj->set_registered(a_registered);
              obj.queryInterfaceTo(mEvent.asOutParam());
              break;
         }
         case VBoxEventType_OnGuestProcessStateChanged:
         {
              ComObjPtr<GuestProcessStateChangedEvent> obj;
              obj.createObject();
              obj->init(aSource, aType, FALSE);
              IGuestSession* a_session = va_arg(args, IGuestSession*);
              obj->set_session(a_session);
              IGuestProcess* a_process = va_arg(args, IGuestProcess*);
              obj->set_process(a_process);
              ULONG a_pid = va_arg(args, ULONG);
              obj->set_pid(a_pid);
              ProcessStatus_T a_status = va_arg(args, ProcessStatus_T);
              obj->set_status(a_status);
              IVirtualBoxErrorInfo* a_error = va_arg(args, IVirtualBoxErrorInfo*);
              obj->set_error(a_error);
              obj.queryInterfaceTo(mEvent.asOutParam());
              break;
         }
         case VBoxEventType_OnGuestProcessInputNotify:
         {
              ComObjPtr<GuestProcessInputNotifyEvent> obj;
              obj.createObject();
              obj->init(aSource, aType, FALSE);
              IGuestSession* a_session = va_arg(args, IGuestSession*);
              obj->set_session(a_session);
              IGuestProcess* a_process = va_arg(args, IGuestProcess*);
              obj->set_process(a_process);
              ULONG a_pid = va_arg(args, ULONG);
              obj->set_pid(a_pid);
              ULONG a_handle = va_arg(args, ULONG);
              obj->set_handle(a_handle);
              ULONG a_processed = va_arg(args, ULONG);
              obj->set_processed(a_processed);
              ProcessInputStatus_T a_status = va_arg(args, ProcessInputStatus_T);
              obj->set_status(a_status);
              obj.queryInterfaceTo(mEvent.asOutParam());
              break;
         }
         case VBoxEventType_OnGuestProcessOutput:
         {
              ComObjPtr<GuestProcessOutputEvent> obj;
              obj.createObject();
              obj->init(aSource, aType, FALSE);
              IGuestSession* a_session = va_arg(args, IGuestSession*);
              obj->set_session(a_session);
              IGuestProcess* a_process = va_arg(args, IGuestProcess*);
              obj->set_process(a_process);
              ULONG a_pid = va_arg(args, ULONG);
              obj->set_pid(a_pid);
              ULONG a_handle = va_arg(args, ULONG);
              obj->set_handle(a_handle);
              ULONG a_processed = va_arg(args, ULONG);
              obj->set_processed(a_processed);
#ifdef RT_OS_WINDOWS
              SAFEARRAY *aPtr_data = va_arg(args, SAFEARRAY *);
              com::SafeArray<BYTE>   aArr_data(aPtr_data);
#else
              PRUint32 aArrSize_data = va_arg(args, PRUint32);
              void*    aPtr_data = va_arg(args, void*);
              com::SafeArray<BYTE>   aArr_data(aArrSize_data, (BYTE*)aPtr_data);
#endif
              obj->set_data(ComSafeArrayAsInParam(aArr_data));
              obj.queryInterfaceTo(mEvent.asOutParam());
              break;
         }
         case VBoxEventType_OnGuestFileRegistered:
         {
              ComObjPtr<GuestFileRegisteredEvent> obj;
              obj.createObject();
              obj->init(aSource, aType, FALSE);
              IGuestSession* a_session = va_arg(args, IGuestSession*);
              obj->set_session(a_session);
              IGuestFile* a_file = va_arg(args, IGuestFile*);
              obj->set_file(a_file);
              BOOL a_registered = va_arg(args, BOOL);
              obj->set_registered(a_registered);
              obj.queryInterfaceTo(mEvent.asOutParam());
              break;
         }
         case VBoxEventType_OnGuestFileStateChanged:
         {
              ComObjPtr<GuestFileStateChangedEvent> obj;
              obj.createObject();
              obj->init(aSource, aType, FALSE);
              IGuestSession* a_session = va_arg(args, IGuestSession*);
              obj->set_session(a_session);
              IGuestFile* a_file = va_arg(args, IGuestFile*);
              obj->set_file(a_file);
              FileStatus_T a_status = va_arg(args, FileStatus_T);
              obj->set_status(a_status);
              IVirtualBoxErrorInfo* a_error = va_arg(args, IVirtualBoxErrorInfo*);
              obj->set_error(a_error);
              obj.queryInterfaceTo(mEvent.asOutParam());
              break;
         }
         case VBoxEventType_OnGuestFileOffsetChanged:
         {
              ComObjPtr<GuestFileOffsetChangedEvent> obj;
              obj.createObject();
              obj->init(aSource, aType, FALSE);
              IGuestSession* a_session = va_arg(args, IGuestSession*);
              obj->set_session(a_session);
              IGuestFile* a_file = va_arg(args, IGuestFile*);
              obj->set_file(a_file);
              LONG64 a_offset = va_arg(args, LONG64);
              obj->set_offset(a_offset);
              ULONG a_processed = va_arg(args, ULONG);
              obj->set_processed(a_processed);
              obj.queryInterfaceTo(mEvent.asOutParam());
              break;
         }
         case VBoxEventType_OnGuestFileRead:
         {
              ComObjPtr<GuestFileReadEvent> obj;
              obj.createObject();
              obj->init(aSource, aType, FALSE);
              IGuestSession* a_session = va_arg(args, IGuestSession*);
              obj->set_session(a_session);
              IGuestFile* a_file = va_arg(args, IGuestFile*);
              obj->set_file(a_file);
              LONG64 a_offset = va_arg(args, LONG64);
              obj->set_offset(a_offset);
              ULONG a_processed = va_arg(args, ULONG);
              obj->set_processed(a_processed);
#ifdef RT_OS_WINDOWS
              SAFEARRAY *aPtr_data = va_arg(args, SAFEARRAY *);
              com::SafeArray<BYTE>   aArr_data(aPtr_data);
#else
              PRUint32 aArrSize_data = va_arg(args, PRUint32);
              void*    aPtr_data = va_arg(args, void*);
              com::SafeArray<BYTE>   aArr_data(aArrSize_data, (BYTE*)aPtr_data);
#endif
              obj->set_data(ComSafeArrayAsInParam(aArr_data));
              obj.queryInterfaceTo(mEvent.asOutParam());
              break;
         }
         case VBoxEventType_OnGuestFileWrite:
         {
              ComObjPtr<GuestFileWriteEvent> obj;
              obj.createObject();
              obj->init(aSource, aType, FALSE);
              IGuestSession* a_session = va_arg(args, IGuestSession*);
              obj->set_session(a_session);
              IGuestFile* a_file = va_arg(args, IGuestFile*);
              obj->set_file(a_file);
              LONG64 a_offset = va_arg(args, LONG64);
              obj->set_offset(a_offset);
              ULONG a_processed = va_arg(args, ULONG);
              obj->set_processed(a_processed);
              obj.queryInterfaceTo(mEvent.asOutParam());
              break;
         }
         case VBoxEventType_OnVRDEServerChanged:
         {
              ComObjPtr<VRDEServerChangedEvent> obj;
              obj.createObject();
              obj->init(aSource, aType, FALSE);
              obj.queryInterfaceTo(mEvent.asOutParam());
              break;
         }
         case VBoxEventType_OnVRDEServerInfoChanged:
         {
              ComObjPtr<VRDEServerInfoChangedEvent> obj;
              obj.createObject();
              obj->init(aSource, aType, FALSE);
              obj.queryInterfaceTo(mEvent.asOutParam());
              break;
         }
         case VBoxEventType_OnVideoCaptureChanged:
         {
              ComObjPtr<VideoCaptureChangedEvent> obj;
              obj.createObject();
              obj->init(aSource, aType, FALSE);
              obj.queryInterfaceTo(mEvent.asOutParam());
              break;
         }
         case VBoxEventType_OnUSBControllerChanged:
         {
              ComObjPtr<USBControllerChangedEvent> obj;
              obj.createObject();
              obj->init(aSource, aType, FALSE);
              obj.queryInterfaceTo(mEvent.asOutParam());
              break;
         }
         case VBoxEventType_OnUSBDeviceStateChanged:
         {
              ComObjPtr<USBDeviceStateChangedEvent> obj;
              obj.createObject();
              obj->init(aSource, aType, FALSE);
              IUSBDevice* a_device = va_arg(args, IUSBDevice*);
              obj->set_device(a_device);
              BOOL a_attached = va_arg(args, BOOL);
              obj->set_attached(a_attached);
              IVirtualBoxErrorInfo* a_error = va_arg(args, IVirtualBoxErrorInfo*);
              obj->set_error(a_error);
              obj.queryInterfaceTo(mEvent.asOutParam());
              break;
         }
         case VBoxEventType_OnSharedFolderChanged:
         {
              ComObjPtr<SharedFolderChangedEvent> obj;
              obj.createObject();
              obj->init(aSource, aType, FALSE);
              Scope_T a_scope = va_arg(args, Scope_T);
              obj->set_scope(a_scope);
              obj.queryInterfaceTo(mEvent.asOutParam());
              break;
         }
         case VBoxEventType_OnRuntimeError:
         {
              ComObjPtr<RuntimeErrorEvent> obj;
              obj.createObject();
              obj->init(aSource, aType, FALSE);
              BOOL a_fatal = va_arg(args, BOOL);
              obj->set_fatal(a_fatal);
              CBSTR a_id = va_arg(args, CBSTR);
              obj->set_id(a_id);
              CBSTR a_message = va_arg(args, CBSTR);
              obj->set_message(a_message);
              obj.queryInterfaceTo(mEvent.asOutParam());
              break;
         }
         case VBoxEventType_OnEventSourceChanged:
         {
              ComObjPtr<EventSourceChangedEvent> obj;
              obj.createObject();
              obj->init(aSource, aType, TRUE);
              IEventListener* a_listener = va_arg(args, IEventListener*);
              obj->set_listener(a_listener);
              BOOL a_add = va_arg(args, BOOL);
              obj->set_add(a_add);
              obj.queryInterfaceTo(mEvent.asOutParam());
              break;
         }
         case VBoxEventType_OnExtraDataChanged:
         {
              ComObjPtr<ExtraDataChangedEvent> obj;
              obj.createObject();
              obj->init(aSource, aType, FALSE);
              CBSTR a_machineId = va_arg(args, CBSTR);
              obj->set_machineId(a_machineId);
              CBSTR a_key = va_arg(args, CBSTR);
              obj->set_key(a_key);
              CBSTR a_value = va_arg(args, CBSTR);
              obj->set_value(a_value);
              obj.queryInterfaceTo(mEvent.asOutParam());
              break;
         }
         case VBoxEventType_OnExtraDataCanChange:
         {
              ComObjPtr<ExtraDataCanChangeEvent> obj;
              obj.createObject();
              obj->init(aSource, aType, TRUE);
              CBSTR a_machineId = va_arg(args, CBSTR);
              obj->set_machineId(a_machineId);
              CBSTR a_key = va_arg(args, CBSTR);
              obj->set_key(a_key);
              CBSTR a_value = va_arg(args, CBSTR);
              obj->set_value(a_value);
              obj.queryInterfaceTo(mEvent.asOutParam());
              break;
         }
         case VBoxEventType_OnCanShowWindow:
         {
              ComObjPtr<CanShowWindowEvent> obj;
              obj.createObject();
              obj->init(aSource, aType, TRUE);
              obj.queryInterfaceTo(mEvent.asOutParam());
              break;
         }
         case VBoxEventType_OnShowWindow:
         {
              ComObjPtr<ShowWindowEvent> obj;
              obj.createObject();
              obj->init(aSource, aType, TRUE);
              LONG64 a_winId = va_arg(args, LONG64);
              obj->set_winId(a_winId);
              obj.queryInterfaceTo(mEvent.asOutParam());
              break;
         }
         case VBoxEventType_OnNATRedirect:
         {
              ComObjPtr<NATRedirectEvent> obj;
              obj.createObject();
              obj->init(aSource, aType, FALSE);
              CBSTR a_machineId = va_arg(args, CBSTR);
              obj->set_machineId(a_machineId);
              ULONG a_slot = va_arg(args, ULONG);
              obj->set_slot(a_slot);
              BOOL a_remove = va_arg(args, BOOL);
              obj->set_remove(a_remove);
              CBSTR a_name = va_arg(args, CBSTR);
              obj->set_name(a_name);
              NATProtocol_T a_proto = va_arg(args, NATProtocol_T);
              obj->set_proto(a_proto);
              CBSTR a_hostIP = va_arg(args, CBSTR);
              obj->set_hostIP(a_hostIP);
              LONG a_hostPort = va_arg(args, LONG);
              obj->set_hostPort(a_hostPort);
              CBSTR a_guestIP = va_arg(args, CBSTR);
              obj->set_guestIP(a_guestIP);
              LONG a_guestPort = va_arg(args, LONG);
              obj->set_guestPort(a_guestPort);
              obj.queryInterfaceTo(mEvent.asOutParam());
              break;
         }
         case VBoxEventType_OnHostPCIDevicePlug:
         {
              ComObjPtr<HostPCIDevicePlugEvent> obj;
              obj.createObject();
              obj->init(aSource, aType, TRUE);
              CBSTR a_machineId = va_arg(args, CBSTR);
              obj->set_machineId(a_machineId);
              BOOL a_plugged = va_arg(args, BOOL);
              obj->set_plugged(a_plugged);
              BOOL a_success = va_arg(args, BOOL);
              obj->set_success(a_success);
              IPCIDeviceAttachment* a_attachment = va_arg(args, IPCIDeviceAttachment*);
              obj->set_attachment(a_attachment);
              CBSTR a_message = va_arg(args, CBSTR);
              obj->set_message(a_message);
              obj.queryInterfaceTo(mEvent.asOutParam());
              break;
         }
         case VBoxEventType_OnVBoxSVCAvailabilityChanged:
         {
              ComObjPtr<VBoxSVCAvailabilityChangedEvent> obj;
              obj.createObject();
              obj->init(aSource, aType, FALSE);
              BOOL a_available = va_arg(args, BOOL);
              obj->set_available(a_available);
              obj.queryInterfaceTo(mEvent.asOutParam());
              break;
         }
         case VBoxEventType_OnBandwidthGroupChanged:
         {
              ComObjPtr<BandwidthGroupChangedEvent> obj;
              obj.createObject();
              obj->init(aSource, aType, FALSE);
              IBandwidthGroup* a_bandwidthGroup = va_arg(args, IBandwidthGroup*);
              obj->set_bandwidthGroup(a_bandwidthGroup);
              obj.queryInterfaceTo(mEvent.asOutParam());
              break;
         }
         case VBoxEventType_OnGuestMonitorChanged:
         {
              ComObjPtr<GuestMonitorChangedEvent> obj;
              obj.createObject();
              obj->init(aSource, aType, FALSE);
              GuestMonitorChangedEventType_T a_changeType = va_arg(args, GuestMonitorChangedEventType_T);
              obj->set_changeType(a_changeType);
              ULONG a_screenId = va_arg(args, ULONG);
              obj->set_screenId(a_screenId);
              ULONG a_originX = va_arg(args, ULONG);
              obj->set_originX(a_originX);
              ULONG a_originY = va_arg(args, ULONG);
              obj->set_originY(a_originY);
              ULONG a_width = va_arg(args, ULONG);
              obj->set_width(a_width);
              ULONG a_height = va_arg(args, ULONG);
              obj->set_height(a_height);
              obj.queryInterfaceTo(mEvent.asOutParam());
              break;
         }
         case VBoxEventType_OnGuestUserStateChanged:
         {
              ComObjPtr<GuestUserStateChangedEvent> obj;
              obj.createObject();
              obj->init(aSource, aType, FALSE);
              CBSTR a_name = va_arg(args, CBSTR);
              obj->set_name(a_name);
              CBSTR a_domain = va_arg(args, CBSTR);
              obj->set_domain(a_domain);
              GuestUserState_T a_state = va_arg(args, GuestUserState_T);
              obj->set_state(a_state);
              CBSTR a_stateDetails = va_arg(args, CBSTR);
              obj->set_stateDetails(a_stateDetails);
              obj.queryInterfaceTo(mEvent.asOutParam());
              break;
         }
         case VBoxEventType_OnStorageDeviceChanged:
         {
              ComObjPtr<StorageDeviceChangedEvent> obj;
              obj.createObject();
              obj->init(aSource, aType, FALSE);
              IMediumAttachment* a_storageDevice = va_arg(args, IMediumAttachment*);
              obj->set_storageDevice(a_storageDevice);
              BOOL a_removed = va_arg(args, BOOL);
              obj->set_removed(a_removed);
              BOOL a_silent = va_arg(args, BOOL);
              obj->set_silent(a_silent);
              obj.queryInterfaceTo(mEvent.asOutParam());
              break;
         }
         case VBoxEventType_OnNATNetworkChanged:
         {
              ComObjPtr<NATNetworkChangedEvent> obj;
              obj.createObject();
              obj->init(aSource, aType, FALSE);
              CBSTR a_networkName = va_arg(args, CBSTR);
              obj->set_networkName(a_networkName);
              obj.queryInterfaceTo(mEvent.asOutParam());
              break;
         }
         case VBoxEventType_OnNATNetworkStartStop:
         {
              ComObjPtr<NATNetworkStartStopEvent> obj;
              obj.createObject();
              obj->init(aSource, aType, FALSE);
              CBSTR a_networkName = va_arg(args, CBSTR);
              obj->set_networkName(a_networkName);
              BOOL a_startEvent = va_arg(args, BOOL);
              obj->set_startEvent(a_startEvent);
              obj.queryInterfaceTo(mEvent.asOutParam());
              break;
         }
         case VBoxEventType_OnNATNetworkAlter:
         {
              ComObjPtr<NATNetworkAlterEvent> obj;
              obj.createObject();
              obj->init(aSource, aType, FALSE);
              CBSTR a_networkName = va_arg(args, CBSTR);
              obj->set_networkName(a_networkName);
              obj.queryInterfaceTo(mEvent.asOutParam());
              break;
         }
         case VBoxEventType_OnNATNetworkCreationDeletion:
         {
              ComObjPtr<NATNetworkCreationDeletionEvent> obj;
              obj.createObject();
              obj->init(aSource, aType, FALSE);
              CBSTR a_networkName = va_arg(args, CBSTR);
              obj->set_networkName(a_networkName);
              BOOL a_creationEvent = va_arg(args, BOOL);
              obj->set_creationEvent(a_creationEvent);
              obj.queryInterfaceTo(mEvent.asOutParam());
              break;
         }
         case VBoxEventType_OnNATNetworkSetting:
         {
              ComObjPtr<NATNetworkSettingEvent> obj;
              obj.createObject();
              obj->init(aSource, aType, FALSE);
              CBSTR a_networkName = va_arg(args, CBSTR);
              obj->set_networkName(a_networkName);
              BOOL a_enabled = va_arg(args, BOOL);
              obj->set_enabled(a_enabled);
              CBSTR a_network = va_arg(args, CBSTR);
              obj->set_network(a_network);
              CBSTR a_gateway = va_arg(args, CBSTR);
              obj->set_gateway(a_gateway);
              BOOL a_advertiseDefaultIPv6RouteEnabled = va_arg(args, BOOL);
              obj->set_advertiseDefaultIPv6RouteEnabled(a_advertiseDefaultIPv6RouteEnabled);
              BOOL a_needDhcpServer = va_arg(args, BOOL);
              obj->set_needDhcpServer(a_needDhcpServer);
              obj.queryInterfaceTo(mEvent.asOutParam());
              break;
         }
         case VBoxEventType_OnNATNetworkPortForward:
         {
              ComObjPtr<NATNetworkPortForwardEvent> obj;
              obj.createObject();
              obj->init(aSource, aType, FALSE);
              CBSTR a_networkName = va_arg(args, CBSTR);
              obj->set_networkName(a_networkName);
              BOOL a_create = va_arg(args, BOOL);
              obj->set_create(a_create);
              BOOL a_ipv6 = va_arg(args, BOOL);
              obj->set_ipv6(a_ipv6);
              CBSTR a_name = va_arg(args, CBSTR);
              obj->set_name(a_name);
              NATProtocol_T a_proto = va_arg(args, NATProtocol_T);
              obj->set_proto(a_proto);
              CBSTR a_hostIp = va_arg(args, CBSTR);
              obj->set_hostIp(a_hostIp);
              LONG a_hostPort = va_arg(args, LONG);
              obj->set_hostPort(a_hostPort);
              CBSTR a_guestIp = va_arg(args, CBSTR);
              obj->set_guestIp(a_guestIp);
              LONG a_guestPort = va_arg(args, LONG);
              obj->set_guestPort(a_guestPort);
              obj.queryInterfaceTo(mEvent.asOutParam());
              break;
         }
         case VBoxEventType_OnHostNameResolutionConfigurationChange:
         {
              ComObjPtr<HostNameResolutionConfigurationChangeEvent> obj;
              obj.createObject();
              obj->init(aSource, aType, FALSE);
              obj.queryInterfaceTo(mEvent.asOutParam());
              break;
         }

         default:
            AssertFailed();
    }
    va_end(args);

    return S_OK;
}

HRESULT VBoxEventDesc::reinit(VBoxEventType_T aType, ...)
{
    va_list args;

    va_start(args, aType);
    switch (aType)
    {
         case VBoxEventType_OnGuestMouse:
         {
              ComPtr<IGuestMouseEvent> iobj;
              iobj = mEvent;
              Assert(!iobj.isNull());
              GuestMouseEvent* obj = (GuestMouseEvent*)(IGuestMouseEvent*)iobj;
              obj->Reuse();
              GuestMouseEventMode_T a_mode = va_arg(args, GuestMouseEventMode_T);
              obj->set_mode(a_mode);
              LONG a_x = va_arg(args, LONG);
              obj->set_x(a_x);
              LONG a_y = va_arg(args, LONG);
              obj->set_y(a_y);
              LONG a_z = va_arg(args, LONG);
              obj->set_z(a_z);
              LONG a_w = va_arg(args, LONG);
              obj->set_w(a_w);
              LONG a_buttons = va_arg(args, LONG);
              obj->set_buttons(a_buttons);
              break;
         }

         default:
            AssertFailed();
    }
    va_end(args);

    return S_OK;
}
