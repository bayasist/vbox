/** @file VBoxEvents.h
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


#include "EventImpl.h"
// IMachineStateChangedEvent generation routine 
DECLINLINE(void) fireMachineStateChangedEvent(IEventSource* aSource, CBSTR a_machineId, MachineState_T a_state)
{
    VBoxEventDesc evDesc;
    evDesc.init(aSource, VBoxEventType_OnMachineStateChanged, a_machineId, a_state);
    evDesc.fire(/* do not wait for delivery */ 0);
}
// IMachineDataChangedEvent generation routine 
DECLINLINE(void) fireMachineDataChangedEvent(IEventSource* aSource, CBSTR a_machineId, BOOL a_temporary)
{
    VBoxEventDesc evDesc;
    evDesc.init(aSource, VBoxEventType_OnMachineDataChanged, a_machineId, a_temporary);
    evDesc.fire(/* do not wait for delivery */ 0);
}
// IMediumRegisteredEvent generation routine 
DECLINLINE(void) fireMediumRegisteredEvent(IEventSource* aSource, CBSTR a_mediumId, DeviceType_T a_mediumType, BOOL a_registered)
{
    VBoxEventDesc evDesc;
    evDesc.init(aSource, VBoxEventType_OnMediumRegistered, a_mediumId, a_mediumType, a_registered);
    evDesc.fire(/* do not wait for delivery */ 0);
}
// IMachineRegisteredEvent generation routine 
DECLINLINE(void) fireMachineRegisteredEvent(IEventSource* aSource, CBSTR a_machineId, BOOL a_registered)
{
    VBoxEventDesc evDesc;
    evDesc.init(aSource, VBoxEventType_OnMachineRegistered, a_machineId, a_registered);
    evDesc.fire(/* do not wait for delivery */ 0);
}
// ISessionStateChangedEvent generation routine 
DECLINLINE(void) fireSessionStateChangedEvent(IEventSource* aSource, CBSTR a_machineId, SessionState_T a_state)
{
    VBoxEventDesc evDesc;
    evDesc.init(aSource, VBoxEventType_OnSessionStateChanged, a_machineId, a_state);
    evDesc.fire(/* do not wait for delivery */ 0);
}
// IGuestPropertyChangedEvent generation routine 
DECLINLINE(void) fireGuestPropertyChangedEvent(IEventSource* aSource, CBSTR a_machineId, CBSTR a_name, CBSTR a_value, CBSTR a_flags)
{
    VBoxEventDesc evDesc;
    evDesc.init(aSource, VBoxEventType_OnGuestPropertyChanged, a_machineId, a_name, a_value, a_flags);
    evDesc.fire(/* do not wait for delivery */ 0);
}
// ISnapshotTakenEvent generation routine 
DECLINLINE(void) fireSnapshotTakenEvent(IEventSource* aSource, CBSTR a_machineId, CBSTR a_snapshotId)
{
    VBoxEventDesc evDesc;
    evDesc.init(aSource, VBoxEventType_OnSnapshotTaken, a_machineId, a_snapshotId);
    evDesc.fire(/* do not wait for delivery */ 0);
}
// ISnapshotDeletedEvent generation routine 
DECLINLINE(void) fireSnapshotDeletedEvent(IEventSource* aSource, CBSTR a_machineId, CBSTR a_snapshotId)
{
    VBoxEventDesc evDesc;
    evDesc.init(aSource, VBoxEventType_OnSnapshotDeleted, a_machineId, a_snapshotId);
    evDesc.fire(/* do not wait for delivery */ 0);
}
// ISnapshotChangedEvent generation routine 
DECLINLINE(void) fireSnapshotChangedEvent(IEventSource* aSource, CBSTR a_machineId, CBSTR a_snapshotId)
{
    VBoxEventDesc evDesc;
    evDesc.init(aSource, VBoxEventType_OnSnapshotChanged, a_machineId, a_snapshotId);
    evDesc.fire(/* do not wait for delivery */ 0);
}
// IMousePointerShapeChangedEvent generation routine 
DECLINLINE(void) fireMousePointerShapeChangedEvent(IEventSource* aSource, BOOL a_visible, BOOL a_alpha, ULONG a_xhot, ULONG a_yhot, ULONG a_width, ULONG a_height, ComSafeArrayIn(BYTE,a_shape))
{
    VBoxEventDesc evDesc;
    evDesc.init(aSource, VBoxEventType_OnMousePointerShapeChanged, a_visible, a_alpha, a_xhot, a_yhot, a_width, a_height, ComSafeArrayInArg(a_shape));
    evDesc.fire(/* do not wait for delivery */ 0);
}
// IMouseCapabilityChangedEvent generation routine 
DECLINLINE(void) fireMouseCapabilityChangedEvent(IEventSource* aSource, BOOL a_supportsAbsolute, BOOL a_supportsRelative, BOOL a_supportsMultiTouch, BOOL a_needsHostCursor)
{
    VBoxEventDesc evDesc;
    evDesc.init(aSource, VBoxEventType_OnMouseCapabilityChanged, a_supportsAbsolute, a_supportsRelative, a_supportsMultiTouch, a_needsHostCursor);
    evDesc.fire(/* do not wait for delivery */ 0);
}
// IKeyboardLedsChangedEvent generation routine 
DECLINLINE(void) fireKeyboardLedsChangedEvent(IEventSource* aSource, BOOL a_numLock, BOOL a_capsLock, BOOL a_scrollLock)
{
    VBoxEventDesc evDesc;
    evDesc.init(aSource, VBoxEventType_OnKeyboardLedsChanged, a_numLock, a_capsLock, a_scrollLock);
    evDesc.fire(/* do not wait for delivery */ 0);
}
// IStateChangedEvent generation routine 
DECLINLINE(void) fireStateChangedEvent(IEventSource* aSource, MachineState_T a_state)
{
    VBoxEventDesc evDesc;
    evDesc.init(aSource, VBoxEventType_OnStateChanged, a_state);
    evDesc.fire(/* do not wait for delivery */ 0);
}
// IAdditionsStateChangedEvent generation routine 
DECLINLINE(void) fireAdditionsStateChangedEvent(IEventSource* aSource)
{
    VBoxEventDesc evDesc;
    evDesc.init(aSource, VBoxEventType_OnAdditionsStateChanged);
    evDesc.fire(/* do not wait for delivery */ 0);
}
// INetworkAdapterChangedEvent generation routine 
DECLINLINE(void) fireNetworkAdapterChangedEvent(IEventSource* aSource, INetworkAdapter* a_networkAdapter)
{
    VBoxEventDesc evDesc;
    evDesc.init(aSource, VBoxEventType_OnNetworkAdapterChanged, a_networkAdapter);
    evDesc.fire(/* do not wait for delivery */ 0);
}
// ISerialPortChangedEvent generation routine 
DECLINLINE(void) fireSerialPortChangedEvent(IEventSource* aSource, ISerialPort* a_serialPort)
{
    VBoxEventDesc evDesc;
    evDesc.init(aSource, VBoxEventType_OnSerialPortChanged, a_serialPort);
    evDesc.fire(/* do not wait for delivery */ 0);
}
// IParallelPortChangedEvent generation routine 
DECLINLINE(void) fireParallelPortChangedEvent(IEventSource* aSource, IParallelPort* a_parallelPort)
{
    VBoxEventDesc evDesc;
    evDesc.init(aSource, VBoxEventType_OnParallelPortChanged, a_parallelPort);
    evDesc.fire(/* do not wait for delivery */ 0);
}
// IStorageControllerChangedEvent generation routine 
DECLINLINE(void) fireStorageControllerChangedEvent(IEventSource* aSource)
{
    VBoxEventDesc evDesc;
    evDesc.init(aSource, VBoxEventType_OnStorageControllerChanged);
    evDesc.fire(/* do not wait for delivery */ 0);
}
// IMediumChangedEvent generation routine 
DECLINLINE(void) fireMediumChangedEvent(IEventSource* aSource, IMediumAttachment* a_mediumAttachment)
{
    VBoxEventDesc evDesc;
    evDesc.init(aSource, VBoxEventType_OnMediumChanged, a_mediumAttachment);
    evDesc.fire(/* do not wait for delivery */ 0);
}
// IClipboardModeChangedEvent generation routine 
DECLINLINE(void) fireClipboardModeChangedEvent(IEventSource* aSource, ClipboardMode_T a_clipboardMode)
{
    VBoxEventDesc evDesc;
    evDesc.init(aSource, VBoxEventType_OnClipboardModeChanged, a_clipboardMode);
    evDesc.fire(/* do not wait for delivery */ 0);
}
// IDragAndDropModeChangedEvent generation routine 
DECLINLINE(void) fireDragAndDropModeChangedEvent(IEventSource* aSource, DragAndDropMode_T a_dragAndDropMode)
{
    VBoxEventDesc evDesc;
    evDesc.init(aSource, VBoxEventType_OnDragAndDropModeChanged, a_dragAndDropMode);
    evDesc.fire(/* do not wait for delivery */ 0);
}
// ICPUChangedEvent generation routine 
DECLINLINE(void) fireCPUChangedEvent(IEventSource* aSource, ULONG a_CPU, BOOL a_add)
{
    VBoxEventDesc evDesc;
    evDesc.init(aSource, VBoxEventType_OnCPUChanged, a_CPU, a_add);
    evDesc.fire(/* do not wait for delivery */ 0);
}
// ICPUExecutionCapChangedEvent generation routine 
DECLINLINE(void) fireCPUExecutionCapChangedEvent(IEventSource* aSource, ULONG a_executionCap)
{
    VBoxEventDesc evDesc;
    evDesc.init(aSource, VBoxEventType_OnCPUExecutionCapChanged, a_executionCap);
    evDesc.fire(/* do not wait for delivery */ 0);
}
// IGuestKeyboardEvent generation routine 
DECLINLINE(void) fireGuestKeyboardEvent(IEventSource* aSource, ComSafeArrayIn(LONG,a_scancodes))
{
    VBoxEventDesc evDesc;
    evDesc.init(aSource, VBoxEventType_OnGuestKeyboard, ComSafeArrayInArg(a_scancodes));
    evDesc.fire(/* do not wait for delivery */ 0);
}
// IGuestMouseEvent generation routine 
DECLINLINE(void) fireGuestMouseEvent(IEventSource* aSource, GuestMouseEventMode_T a_mode, LONG a_x, LONG a_y, LONG a_z, LONG a_w, LONG a_buttons)
{
    VBoxEventDesc evDesc;
    evDesc.init(aSource, VBoxEventType_OnGuestMouse, a_mode, a_x, a_y, a_z, a_w, a_buttons);
    evDesc.fire(/* do not wait for delivery */ 0);
}
// IGuestMultiTouchEvent generation routine 
DECLINLINE(void) fireGuestMultiTouchEvent(IEventSource* aSource, LONG a_contactCount, ComSafeArrayIn(SHORT,a_xPositions), ComSafeArrayIn(SHORT,a_yPositions), ComSafeArrayIn(USHORT,a_contactIds), ComSafeArrayIn(USHORT,a_contactFlags), ULONG a_scanTime)
{
    VBoxEventDesc evDesc;
    evDesc.init(aSource, VBoxEventType_OnGuestMultiTouch, a_contactCount, ComSafeArrayInArg(a_xPositions), ComSafeArrayInArg(a_yPositions), ComSafeArrayInArg(a_contactIds), ComSafeArrayInArg(a_contactFlags), a_scanTime);
    evDesc.fire(/* do not wait for delivery */ 0);
}
// IGuestSessionStateChangedEvent generation routine 
DECLINLINE(void) fireGuestSessionStateChangedEvent(IEventSource* aSource, IGuestSession* a_session, ULONG a_id, GuestSessionStatus_T a_status, IVirtualBoxErrorInfo* a_error)
{
    VBoxEventDesc evDesc;
    evDesc.init(aSource, VBoxEventType_OnGuestSessionStateChanged, a_session, a_id, a_status, a_error);
    evDesc.fire(/* do not wait for delivery */ 0);
}
// IGuestSessionRegisteredEvent generation routine 
DECLINLINE(void) fireGuestSessionRegisteredEvent(IEventSource* aSource, IGuestSession* a_session, BOOL a_registered)
{
    VBoxEventDesc evDesc;
    evDesc.init(aSource, VBoxEventType_OnGuestSessionRegistered, a_session, a_registered);
    evDesc.fire(/* do not wait for delivery */ 0);
}
// IGuestProcessRegisteredEvent generation routine 
DECLINLINE(void) fireGuestProcessRegisteredEvent(IEventSource* aSource, IGuestSession* a_session, IGuestProcess* a_process, ULONG a_pid, BOOL a_registered)
{
    VBoxEventDesc evDesc;
    evDesc.init(aSource, VBoxEventType_OnGuestProcessRegistered, a_session, a_process, a_pid, a_registered);
    evDesc.fire(/* do not wait for delivery */ 0);
}
// IGuestProcessStateChangedEvent generation routine 
DECLINLINE(void) fireGuestProcessStateChangedEvent(IEventSource* aSource, IGuestSession* a_session, IGuestProcess* a_process, ULONG a_pid, ProcessStatus_T a_status, IVirtualBoxErrorInfo* a_error)
{
    VBoxEventDesc evDesc;
    evDesc.init(aSource, VBoxEventType_OnGuestProcessStateChanged, a_session, a_process, a_pid, a_status, a_error);
    evDesc.fire(/* do not wait for delivery */ 0);
}
// IGuestProcessInputNotifyEvent generation routine 
DECLINLINE(void) fireGuestProcessInputNotifyEvent(IEventSource* aSource, IGuestSession* a_session, IGuestProcess* a_process, ULONG a_pid, ULONG a_handle, ULONG a_processed, ProcessInputStatus_T a_status)
{
    VBoxEventDesc evDesc;
    evDesc.init(aSource, VBoxEventType_OnGuestProcessInputNotify, a_session, a_process, a_pid, a_handle, a_processed, a_status);
    evDesc.fire(/* do not wait for delivery */ 0);
}
// IGuestProcessOutputEvent generation routine 
DECLINLINE(void) fireGuestProcessOutputEvent(IEventSource* aSource, IGuestSession* a_session, IGuestProcess* a_process, ULONG a_pid, ULONG a_handle, ULONG a_processed, ComSafeArrayIn(BYTE,a_data))
{
    VBoxEventDesc evDesc;
    evDesc.init(aSource, VBoxEventType_OnGuestProcessOutput, a_session, a_process, a_pid, a_handle, a_processed, ComSafeArrayInArg(a_data));
    evDesc.fire(/* do not wait for delivery */ 0);
}
// IGuestFileRegisteredEvent generation routine 
DECLINLINE(void) fireGuestFileRegisteredEvent(IEventSource* aSource, IGuestSession* a_session, IGuestFile* a_file, BOOL a_registered)
{
    VBoxEventDesc evDesc;
    evDesc.init(aSource, VBoxEventType_OnGuestFileRegistered, a_session, a_file, a_registered);
    evDesc.fire(/* do not wait for delivery */ 0);
}
// IGuestFileStateChangedEvent generation routine 
DECLINLINE(void) fireGuestFileStateChangedEvent(IEventSource* aSource, IGuestSession* a_session, IGuestFile* a_file, FileStatus_T a_status, IVirtualBoxErrorInfo* a_error)
{
    VBoxEventDesc evDesc;
    evDesc.init(aSource, VBoxEventType_OnGuestFileStateChanged, a_session, a_file, a_status, a_error);
    evDesc.fire(/* do not wait for delivery */ 0);
}
// IGuestFileOffsetChangedEvent generation routine 
DECLINLINE(void) fireGuestFileOffsetChangedEvent(IEventSource* aSource, IGuestSession* a_session, IGuestFile* a_file, LONG64 a_offset, ULONG a_processed)
{
    VBoxEventDesc evDesc;
    evDesc.init(aSource, VBoxEventType_OnGuestFileOffsetChanged, a_session, a_file, a_offset, a_processed);
    evDesc.fire(/* do not wait for delivery */ 0);
}
// IGuestFileReadEvent generation routine 
DECLINLINE(void) fireGuestFileReadEvent(IEventSource* aSource, IGuestSession* a_session, IGuestFile* a_file, LONG64 a_offset, ULONG a_processed, ComSafeArrayIn(BYTE,a_data))
{
    VBoxEventDesc evDesc;
    evDesc.init(aSource, VBoxEventType_OnGuestFileRead, a_session, a_file, a_offset, a_processed, ComSafeArrayInArg(a_data));
    evDesc.fire(/* do not wait for delivery */ 0);
}
// IGuestFileWriteEvent generation routine 
DECLINLINE(void) fireGuestFileWriteEvent(IEventSource* aSource, IGuestSession* a_session, IGuestFile* a_file, LONG64 a_offset, ULONG a_processed)
{
    VBoxEventDesc evDesc;
    evDesc.init(aSource, VBoxEventType_OnGuestFileWrite, a_session, a_file, a_offset, a_processed);
    evDesc.fire(/* do not wait for delivery */ 0);
}
// IVRDEServerChangedEvent generation routine 
DECLINLINE(void) fireVRDEServerChangedEvent(IEventSource* aSource)
{
    VBoxEventDesc evDesc;
    evDesc.init(aSource, VBoxEventType_OnVRDEServerChanged);
    evDesc.fire(/* do not wait for delivery */ 0);
}
// IVRDEServerInfoChangedEvent generation routine 
DECLINLINE(void) fireVRDEServerInfoChangedEvent(IEventSource* aSource)
{
    VBoxEventDesc evDesc;
    evDesc.init(aSource, VBoxEventType_OnVRDEServerInfoChanged);
    evDesc.fire(/* do not wait for delivery */ 0);
}
// IVideoCaptureChangedEvent generation routine 
DECLINLINE(void) fireVideoCaptureChangedEvent(IEventSource* aSource)
{
    VBoxEventDesc evDesc;
    evDesc.init(aSource, VBoxEventType_OnVideoCaptureChanged);
    evDesc.fire(/* do not wait for delivery */ 0);
}
// IUSBControllerChangedEvent generation routine 
DECLINLINE(void) fireUSBControllerChangedEvent(IEventSource* aSource)
{
    VBoxEventDesc evDesc;
    evDesc.init(aSource, VBoxEventType_OnUSBControllerChanged);
    evDesc.fire(/* do not wait for delivery */ 0);
}
// IUSBDeviceStateChangedEvent generation routine 
DECLINLINE(void) fireUSBDeviceStateChangedEvent(IEventSource* aSource, IUSBDevice* a_device, BOOL a_attached, IVirtualBoxErrorInfo* a_error)
{
    VBoxEventDesc evDesc;
    evDesc.init(aSource, VBoxEventType_OnUSBDeviceStateChanged, a_device, a_attached, a_error);
    evDesc.fire(/* do not wait for delivery */ 0);
}
// ISharedFolderChangedEvent generation routine 
DECLINLINE(void) fireSharedFolderChangedEvent(IEventSource* aSource, Scope_T a_scope)
{
    VBoxEventDesc evDesc;
    evDesc.init(aSource, VBoxEventType_OnSharedFolderChanged, a_scope);
    evDesc.fire(/* do not wait for delivery */ 0);
}
// IRuntimeErrorEvent generation routine 
DECLINLINE(void) fireRuntimeErrorEvent(IEventSource* aSource, BOOL a_fatal, CBSTR a_id, CBSTR a_message)
{
    VBoxEventDesc evDesc;
    evDesc.init(aSource, VBoxEventType_OnRuntimeError, a_fatal, a_id, a_message);
    evDesc.fire(/* do not wait for delivery */ 0);
}
// IEventSourceChangedEvent generation routine 
DECLINLINE(void) fireEventSourceChangedEvent(IEventSource* aSource, IEventListener* a_listener, BOOL a_add)
{
    VBoxEventDesc evDesc;
    evDesc.init(aSource, VBoxEventType_OnEventSourceChanged, a_listener, a_add);
    evDesc.fire(/* do not wait for delivery */ 0);
}
// IExtraDataChangedEvent generation routine 
DECLINLINE(void) fireExtraDataChangedEvent(IEventSource* aSource, CBSTR a_machineId, CBSTR a_key, CBSTR a_value)
{
    VBoxEventDesc evDesc;
    evDesc.init(aSource, VBoxEventType_OnExtraDataChanged, a_machineId, a_key, a_value);
    evDesc.fire(/* do not wait for delivery */ 0);
}
// IExtraDataCanChangeEvent generation routine 
DECLINLINE(void) fireExtraDataCanChangeEvent(IEventSource* aSource, CBSTR a_machineId, CBSTR a_key, CBSTR a_value)
{
    VBoxEventDesc evDesc;
    evDesc.init(aSource, VBoxEventType_OnExtraDataCanChange, a_machineId, a_key, a_value);
    evDesc.fire(/* do not wait for delivery */ 0);
}
// ICanShowWindowEvent generation routine 
DECLINLINE(void) fireCanShowWindowEvent(IEventSource* aSource)
{
    VBoxEventDesc evDesc;
    evDesc.init(aSource, VBoxEventType_OnCanShowWindow);
    evDesc.fire(/* do not wait for delivery */ 0);
}
// IShowWindowEvent generation routine 
DECLINLINE(void) fireShowWindowEvent(IEventSource* aSource, LONG64 a_winId)
{
    VBoxEventDesc evDesc;
    evDesc.init(aSource, VBoxEventType_OnShowWindow, a_winId);
    evDesc.fire(/* do not wait for delivery */ 0);
}
// INATRedirectEvent generation routine 
DECLINLINE(void) fireNATRedirectEvent(IEventSource* aSource, CBSTR a_machineId, ULONG a_slot, BOOL a_remove, CBSTR a_name, NATProtocol_T a_proto, CBSTR a_hostIP, LONG a_hostPort, CBSTR a_guestIP, LONG a_guestPort)
{
    VBoxEventDesc evDesc;
    evDesc.init(aSource, VBoxEventType_OnNATRedirect, a_machineId, a_slot, a_remove, a_name, a_proto, a_hostIP, a_hostPort, a_guestIP, a_guestPort);
    evDesc.fire(/* do not wait for delivery */ 0);
}
// IHostPCIDevicePlugEvent generation routine 
DECLINLINE(void) fireHostPCIDevicePlugEvent(IEventSource* aSource, CBSTR a_machineId, BOOL a_plugged, BOOL a_success, IPCIDeviceAttachment* a_attachment, CBSTR a_message)
{
    VBoxEventDesc evDesc;
    evDesc.init(aSource, VBoxEventType_OnHostPCIDevicePlug, a_machineId, a_plugged, a_success, a_attachment, a_message);
    evDesc.fire(/* do not wait for delivery */ 0);
}
// IVBoxSVCAvailabilityChangedEvent generation routine 
DECLINLINE(void) fireVBoxSVCAvailabilityChangedEvent(IEventSource* aSource, BOOL a_available)
{
    VBoxEventDesc evDesc;
    evDesc.init(aSource, VBoxEventType_OnVBoxSVCAvailabilityChanged, a_available);
    evDesc.fire(/* do not wait for delivery */ 0);
}
// IBandwidthGroupChangedEvent generation routine 
DECLINLINE(void) fireBandwidthGroupChangedEvent(IEventSource* aSource, IBandwidthGroup* a_bandwidthGroup)
{
    VBoxEventDesc evDesc;
    evDesc.init(aSource, VBoxEventType_OnBandwidthGroupChanged, a_bandwidthGroup);
    evDesc.fire(/* do not wait for delivery */ 0);
}
// IGuestMonitorChangedEvent generation routine 
DECLINLINE(void) fireGuestMonitorChangedEvent(IEventSource* aSource, GuestMonitorChangedEventType_T a_changeType, ULONG a_screenId, ULONG a_originX, ULONG a_originY, ULONG a_width, ULONG a_height)
{
    VBoxEventDesc evDesc;
    evDesc.init(aSource, VBoxEventType_OnGuestMonitorChanged, a_changeType, a_screenId, a_originX, a_originY, a_width, a_height);
    evDesc.fire(/* do not wait for delivery */ 0);
}
// IGuestUserStateChangedEvent generation routine 
DECLINLINE(void) fireGuestUserStateChangedEvent(IEventSource* aSource, CBSTR a_name, CBSTR a_domain, GuestUserState_T a_state, CBSTR a_stateDetails)
{
    VBoxEventDesc evDesc;
    evDesc.init(aSource, VBoxEventType_OnGuestUserStateChanged, a_name, a_domain, a_state, a_stateDetails);
    evDesc.fire(/* do not wait for delivery */ 0);
}
// IStorageDeviceChangedEvent generation routine 
DECLINLINE(void) fireStorageDeviceChangedEvent(IEventSource* aSource, IMediumAttachment* a_storageDevice, BOOL a_removed, BOOL a_silent)
{
    VBoxEventDesc evDesc;
    evDesc.init(aSource, VBoxEventType_OnStorageDeviceChanged, a_storageDevice, a_removed, a_silent);
    evDesc.fire(/* do not wait for delivery */ 0);
}
// INATNetworkChangedEvent generation routine 
DECLINLINE(void) fireNATNetworkChangedEvent(IEventSource* aSource, CBSTR a_networkName)
{
    VBoxEventDesc evDesc;
    evDesc.init(aSource, VBoxEventType_OnNATNetworkChanged, a_networkName);
    evDesc.fire(/* do not wait for delivery */ 0);
}
// INATNetworkStartStopEvent generation routine 
DECLINLINE(void) fireNATNetworkStartStopEvent(IEventSource* aSource, CBSTR a_networkName, BOOL a_startEvent)
{
    VBoxEventDesc evDesc;
    evDesc.init(aSource, VBoxEventType_OnNATNetworkStartStop, a_networkName, a_startEvent);
    evDesc.fire(/* do not wait for delivery */ 0);
}
// INATNetworkAlterEvent generation routine 
DECLINLINE(void) fireNATNetworkAlterEvent(IEventSource* aSource, CBSTR a_networkName)
{
    VBoxEventDesc evDesc;
    evDesc.init(aSource, VBoxEventType_OnNATNetworkAlter, a_networkName);
    evDesc.fire(/* do not wait for delivery */ 0);
}
// INATNetworkCreationDeletionEvent generation routine 
DECLINLINE(void) fireNATNetworkCreationDeletionEvent(IEventSource* aSource, CBSTR a_networkName, BOOL a_creationEvent)
{
    VBoxEventDesc evDesc;
    evDesc.init(aSource, VBoxEventType_OnNATNetworkCreationDeletion, a_networkName, a_creationEvent);
    evDesc.fire(/* do not wait for delivery */ 0);
}
// INATNetworkSettingEvent generation routine 
DECLINLINE(void) fireNATNetworkSettingEvent(IEventSource* aSource, CBSTR a_networkName, BOOL a_enabled, CBSTR a_network, CBSTR a_gateway, BOOL a_advertiseDefaultIPv6RouteEnabled, BOOL a_needDhcpServer)
{
    VBoxEventDesc evDesc;
    evDesc.init(aSource, VBoxEventType_OnNATNetworkSetting, a_networkName, a_enabled, a_network, a_gateway, a_advertiseDefaultIPv6RouteEnabled, a_needDhcpServer);
    evDesc.fire(/* do not wait for delivery */ 0);
}
// INATNetworkPortForwardEvent generation routine 
DECLINLINE(void) fireNATNetworkPortForwardEvent(IEventSource* aSource, CBSTR a_networkName, BOOL a_create, BOOL a_ipv6, CBSTR a_name, NATProtocol_T a_proto, CBSTR a_hostIp, LONG a_hostPort, CBSTR a_guestIp, LONG a_guestPort)
{
    VBoxEventDesc evDesc;
    evDesc.init(aSource, VBoxEventType_OnNATNetworkPortForward, a_networkName, a_create, a_ipv6, a_name, a_proto, a_hostIp, a_hostPort, a_guestIp, a_guestPort);
    evDesc.fire(/* do not wait for delivery */ 0);
}
// IHostNameResolutionConfigurationChangeEvent generation routine 
DECLINLINE(void) fireHostNameResolutionConfigurationChangeEvent(IEventSource* aSource)
{
    VBoxEventDesc evDesc;
    evDesc.init(aSource, VBoxEventType_OnHostNameResolutionConfigurationChange);
    evDesc.fire(/* do not wait for delivery */ 0);
}
