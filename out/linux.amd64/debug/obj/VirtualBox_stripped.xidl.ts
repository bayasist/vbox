<?xml version="1.0"?>
<idl>



<if target="midl">
  <cpp line="enum {"/>
  <cpp line="    kTypeLibraryMajorVersion = 1,"/>
  <cpp line="    kTypeLibraryMinorVersion = 3"/>
  <cpp line="};"/>
</if>

<if target="xpidl">
  
  <cpp>
/* currently, nsISupportsImpl.h lacks the below-like macros */

#define NS_IMPL_THREADSAFE_QUERY_INTERFACE1_CI NS_IMPL_QUERY_INTERFACE1_CI
#define NS_IMPL_THREADSAFE_QUERY_INTERFACE2_CI NS_IMPL_QUERY_INTERFACE2_CI
#define NS_IMPL_THREADSAFE_QUERY_INTERFACE3_CI NS_IMPL_QUERY_INTERFACE3_CI
#define NS_IMPL_THREADSAFE_QUERY_INTERFACE4_CI NS_IMPL_QUERY_INTERFACE4_CI
#define NS_IMPL_THREADSAFE_QUERY_INTERFACE5_CI NS_IMPL_QUERY_INTERFACE5_CI
#define NS_IMPL_THREADSAFE_QUERY_INTERFACE6_CI NS_IMPL_QUERY_INTERFACE6_CI
#define NS_IMPL_THREADSAFE_QUERY_INTERFACE7_CI NS_IMPL_QUERY_INTERFACE7_CI
#define NS_IMPL_THREADSAFE_QUERY_INTERFACE8_CI NS_IMPL_QUERY_INTERFACE8_CI


#ifndef NS_IMPL_THREADSAFE_ISUPPORTS1_CI
# define NS_IMPL_THREADSAFE_ISUPPORTS1_CI(_class, _interface)                 \
  NS_IMPL_THREADSAFE_ADDREF(_class)                                           \
  NS_IMPL_THREADSAFE_RELEASE(_class)                                          \
  NS_IMPL_THREADSAFE_QUERY_INTERFACE1_CI(_class, _interface)                  \
  NS_IMPL_CI_INTERFACE_GETTER1(_class, _interface)
#endif

#ifndef NS_IMPL_THREADSAFE_ISUPPORTS2_CI
# define NS_IMPL_THREADSAFE_ISUPPORTS2_CI(_class, _i1, _i2)                   \
  NS_IMPL_THREADSAFE_ADDREF(_class)                                           \
  NS_IMPL_THREADSAFE_RELEASE(_class)                                          \
  NS_IMPL_THREADSAFE_QUERY_INTERFACE2_CI(_class, _i1, _i2)                    \
  NS_IMPL_CI_INTERFACE_GETTER2(_class, _i1, _i2)
#endif

#ifndef NS_IMPL_THREADSAFE_ISUPPORTS3_CI
# define NS_IMPL_THREADSAFE_ISUPPORTS3_CI(_class, _i1, _i2, _i3)              \
  NS_IMPL_THREADSAFE_ADDREF(_class)                                           \
  NS_IMPL_THREADSAFE_RELEASE(_class)                                          \
  NS_IMPL_THREADSAFE_QUERY_INTERFACE3_CI(_class, _i1, _i2, _i3)               \
  NS_IMPL_CI_INTERFACE_GETTER3(_class, _i1, _i2, _i3)
#endif

#ifndef NS_IMPL_THREADSAFE_ISUPPORTS4_CI
# define NS_IMPL_THREADSAFE_ISUPPORTS4_CI(_class, _i1, _i2, _i3, _i4)         \
  NS_IMPL_THREADSAFE_ADDREF(_class)                                           \
  NS_IMPL_THREADSAFE_RELEASE(_class)                                          \
  NS_IMPL_THREADSAFE_QUERY_INTERFACE4_CI(_class, _i1, _i2, _i3, _i4)          \
  NS_IMPL_CI_INTERFACE_GETTER4(_class, _i1, _i2, _i3, _i4)
#endif

#ifndef NS_IMPL_THREADSAFE_ISUPPORTS5_CI
# define NS_IMPL_THREADSAFE_ISUPPORTS5_CI(_class, _i1, _i2, _i3, _i4, _i5)    \
  NS_IMPL_THREADSAFE_ADDREF(_class)                                           \
  NS_IMPL_THREADSAFE_RELEASE(_class)                                          \
  NS_IMPL_THREADSAFE_QUERY_INTERFACE5_CI(_class, _i1, _i2, _i3, _i4, _i5)     \
  NS_IMPL_CI_INTERFACE_GETTER5(_class, _i1, _i2, _i3, _i4, _i5)
#endif

#ifndef NS_IMPL_THREADSAFE_ISUPPORTS6_CI
# define NS_IMPL_THREADSAFE_ISUPPORTS6_CI(_class, _i1, _i2, _i3, _i4, _i5, _i6) \
  NS_IMPL_THREADSAFE_ADDREF(_class) \
  NS_IMPL_THREADSAFE_RELEASE(_class) \
  NS_IMPL_THREADSAFE_QUERY_INTERFACE6_CI(_class, _i1, _i2, _i3, _i4, _i5, _i6) \
  NS_IMPL_CI_INTERFACE_GETTER6(_class, _i1, _i2, _i3, _i4, _i5, _i6)
#endif

#ifndef NS_IMPL_THREADSAFE_ISUPPORTS7_CI
# define NS_IMPL_THREADSAFE_ISUPPORTS7_CI(_class, _i1, _i2, _i3, _i4, _i5, _i6, _i7) \
  NS_IMPL_THREADSAFE_ADDREF(_class) \
  NS_IMPL_THREADSAFE_RELEASE(_class) \
  NS_IMPL_THREADSAFE_QUERY_INTERFACE7_CI(_class, _i1, _i2, _i3, _i4, _i5, _i6, _i7) \
  NS_IMPL_CI_INTERFACE_GETTER7(_class, _i1, _i2, _i3, _i4, _i5, _i6, _i7)
#endif

#ifndef NS_IMPL_THREADSAFE_ISUPPORTS8_CI
# define NS_IMPL_THREADSAFE_ISUPPORTS8_CI(_class, _i1, _i2, _i3, _i4, _i5, _i6, _i7, _i8) \
  NS_IMPL_THREADSAFE_ADDREF(_class) \
  NS_IMPL_THREADSAFE_RELEASE(_class) \
  NS_IMPL_THREADSAFE_QUERY_INTERFACE8_CI(_class, _i1, _i2, _i3, _i4, _i5, _i6, _i7, _i8) \
  NS_IMPL_CI_INTERFACE_GETTER8(_class, _i1, _i2, _i3, _i4, _i5, _i6, _i7, _i8)
#endif

#ifndef NS_IMPL_QUERY_INTERFACE1_AMBIGUOUS_CI
# define NS_IMPL_QUERY_INTERFACE1_AMBIGUOUS_CI(_class, _i1, _ic1)             \
  NS_INTERFACE_MAP_BEGIN(_class)                                              \
    NS_INTERFACE_MAP_ENTRY_AMBIGUOUS(_i1, _ic1)                               \
    NS_INTERFACE_MAP_ENTRY_AMBIGUOUS(nsISupports, _ic1)                       \
    NS_IMPL_QUERY_CLASSINFO(_class)                                           \
  NS_INTERFACE_MAP_END
#endif

#ifndef NS_IMPL_QUERY_INTERFACE2_AMBIGUOUS_CI
# define NS_IMPL_QUERY_INTERFACE2_AMBIGUOUS_CI(_class, _i1, _ic1,             \
                                               _i2, _ic2)                     \
  NS_INTERFACE_MAP_BEGIN(_class)                                              \
    NS_INTERFACE_MAP_ENTRY_AMBIGUOUS(_i1, _ic1)                               \
    NS_INTERFACE_MAP_ENTRY_AMBIGUOUS(_i2, _ic2)                               \
    NS_INTERFACE_MAP_ENTRY_AMBIGUOUS(nsISupports, _ic1)                       \
    NS_IMPL_QUERY_CLASSINFO(_class)                                           \
  NS_INTERFACE_MAP_END
#endif

#ifndef NS_IMPL_QUERY_INTERFACE3_AMBIGUOUS_CI
# define NS_IMPL_QUERY_INTERFACE3_AMBIGUOUS_CI(_class, _i1, _ic1,             \
                                               _i2, _ic2, _i3, _ic3)          \
  NS_INTERFACE_MAP_BEGIN(_class)                                              \
    NS_INTERFACE_MAP_ENTRY_AMBIGUOUS(_i1, _ic1)                               \
    NS_INTERFACE_MAP_ENTRY_AMBIGUOUS(_i2, _ic2)                               \
    NS_INTERFACE_MAP_ENTRY_AMBIGUOUS(_i3, _ic3)                               \
    NS_INTERFACE_MAP_ENTRY_AMBIGUOUS(nsISupports, _ic1)                       \
    NS_IMPL_QUERY_CLASSINFO(_class)                                           \
  NS_INTERFACE_MAP_END
#endif

#define NS_IMPL_THREADSAFE_QUERY_INTERFACE1_AMBIGUOUS_CI NS_IMPL_QUERY_INTERFACE1_AMBIGUOUS_CI
#define NS_IMPL_THREADSAFE_QUERY_INTERFACE2_AMBIGUOUS_CI NS_IMPL_QUERY_INTERFACE2_AMBIGUOUS_CI
#define NS_IMPL_THREADSAFE_QUERY_INTERFACE3_AMBIGUOUS_CI NS_IMPL_QUERY_INTERFACE3_AMBIGUOUS_CI

#ifndef NS_IMPL_THREADSAFE_ISUPPORTS1_AMBIGUOUS_CI
# define NS_IMPL_THREADSAFE_ISUPPORTS1_AMBIGUOUS_CI(_class, _i1, _ic1)        \
  NS_IMPL_THREADSAFE_ADDREF(_class)                                           \
  NS_IMPL_THREADSAFE_RELEASE(_class)                                          \
  NS_IMPL_THREADSAFE_QUERY_INTERFACE1_AMBIGUOUS_CI(_class, _i1, _ic1)         \
  NS_IMPL_CI_INTERFACE_GETTER1(_class, _i1)
#endif

#ifndef NS_IMPL_THREADSAFE_ISUPPORTS2_AMBIGUOUS_CI
# define NS_IMPL_THREADSAFE_ISUPPORTS2_AMBIGUOUS_CI(_class, _i1, _ic1,        \
                                                     _i2, _ic2)               \
  NS_IMPL_THREADSAFE_ADDREF(_class)                                           \
  NS_IMPL_THREADSAFE_RELEASE(_class)                                          \
  NS_IMPL_THREADSAFE_QUERY_INTERFACE2_AMBIGUOUS_CI(_class, _i1, _ic1,         \
                                                   _i2, _ic2)                 \
  NS_IMPL_CI_INTERFACE_GETTER2(_class, _i1, _i2)
#endif

#ifndef NS_IMPL_THREADSAFE_ISUPPORTS3_AMBIGUOUS_CI
# define NS_IMPL_THREADSAFE_ISUPPORTS3_AMBIGUOUS_CI(_class, _i1, _ic1,        \
                                                     _i2, _ic2, _i3, _ic3)    \
  NS_IMPL_THREADSAFE_ADDREF(_class)                                           \
  NS_IMPL_THREADSAFE_RELEASE(_class)                                          \
  NS_IMPL_THREADSAFE_QUERY_INTERFACE3_AMBIGUOUS_CI(_class, _i1, _ic1,         \
                                                   _i2, _ic2, _i3, _ic3)      \
  NS_IMPL_CI_INTERFACE_GETTER3(_class, _i1, _i2, _i3)
#endif

  </cpp>
</if>


<library name="VirtualBox" uuid="d7569351-1750-46f0-936e-bd127d5bc264" version="1.3" desc="VirtualBox Type Library" appUuid="819B4D85-9CEE-493C-B6FC-64FFE759B3C9" supportsErrorInfo="yes">


  

  <descGroup id="VirtualBox_COM_result_codes" title="VirtualBox COM result codes">
    
  </descGroup>

  

  <result name="VBOX_E_OBJECT_NOT_FOUND" value="0x80BB0001">
    
  </result>

  <result name="VBOX_E_INVALID_VM_STATE" value="0x80BB0002">
    
  </result>

  <result name="VBOX_E_VM_ERROR" value="0x80BB0003">
    
  </result>

  <result name="VBOX_E_FILE_ERROR" value="0x80BB0004">
    
  </result>

  <result name="VBOX_E_IPRT_ERROR" value="0x80BB0005">
    
  </result>

  <result name="VBOX_E_PDM_ERROR" value="0x80BB0006">
    
  </result>

  <result name="VBOX_E_INVALID_OBJECT_STATE" value="0x80BB0007">
    
  </result>

  <result name="VBOX_E_HOST_ERROR" value="0x80BB0008">
    
  </result>

  <result name="VBOX_E_NOT_SUPPORTED" value="0x80BB0009">
    
  </result>

  <result name="VBOX_E_XML_ERROR" value="0x80BB000A">
    
  </result>

  <result name="VBOX_E_INVALID_SESSION_STATE" value="0x80BB000B">
    
  </result>

  <result name="VBOX_E_OBJECT_IN_USE" value="0x80BB000C">
    
  </result>

  

  <descGroup/>

  

  <enum name="SettingsVersion" uuid="d5b15ca7-3de7-46b2-a63a-ddcce42bfa3f">
    

    <const name="Null" value="0">
      
    </const>
    <const name="v1_0" value="1">
      
    </const>
    <const name="v1_1" value="2">
      
    </const>
    <const name="v1_2" value="3">
      
    </const>
    <const name="v1_3pre" value="4">
      
    </const>
    <const name="v1_3" value="5">
      
      
    </const>
    <const name="v1_4" value="6">
      
      
    </const>
    <const name="v1_5" value="7">
      
      
    </const>
    <const name="v1_6" value="8">
      
      
    </const>
    <const name="v1_7" value="9">
      
      
    </const>
    <const name="v1_8" value="10">
      
      
    </const>
    <const name="v1_9" value="11">
      
      
    </const>
    <const name="v1_10" value="12">
      
      
    </const>
    <const name="v1_11" value="13">
      
      
    </const>
    <const name="v1_12" value="14">
      
      
    </const>
    <const name="v1_13" value="15">
      
      
    </const>
    <const name="v1_14" value="16">
      
      
    </const>

    <const name="Future" value="99999">
      
    </const>
  </enum>

  <enum name="AccessMode" uuid="1da0007c-ddf7-4be8-bcac-d84a1558785f">
    

    <const name="ReadOnly" value="1"/>
    <const name="ReadWrite" value="2"/>
  </enum>

  <enum name="MachineState" uuid="ec6c6a9e-113d-4ff4-b44f-0b69f21c97fe">
    

    <const name="Null" value="0">
      
    </const>
    <const name="PoweredOff" value="1">
      
    </const>
    <const name="Saved" value="2">
      
    </const>
    <const name="Teleported" value="3">
      
    </const>
    <const name="Aborted" value="4">
      
    </const>
    <const name="Running" value="5">
      
    </const>
    <const name="Paused" value="6">
      
    </const>
    <const name="Stuck" value="7">
      
    </const>
    <const name="Teleporting" value="8">
      
    </const>
    <const name="LiveSnapshotting" value="9">
      
    </const>
    <const name="Starting" value="10">
      
    </const>
    <const name="Stopping" value="11">
      
    </const>
    <const name="Saving" value="12">
      
    </const>
    <const name="Restoring" value="13">
      
    </const>
    <const name="TeleportingPausedVM" value="14">
      
    </const>
    <const name="TeleportingIn" value="15">
      
    </const>
    <const name="FaultTolerantSyncing" value="16">
      
    </const>
    <const name="DeletingSnapshotOnline" value="17">
      
    </const>
    <const name="DeletingSnapshotPaused" value="18">
      
    </const>
    <const name="RestoringSnapshot" value="19">
      
    </const>
    <const name="DeletingSnapshot" value="20">
      
    </const>
    <const name="SettingUp" value="21">
      
    </const>

    <const name="FirstOnline" value="5" wsmap="suppress"> 
      
    </const>
    <const name="LastOnline" value="18" wsmap="suppress"> 
      
    </const>

    <const name="FirstTransient" value="8" wsmap="suppress"> 
      
    </const>
    <const name="LastTransient" value="21" wsmap="suppress"> 
      
    </const>

  </enum>

  <enum name="SessionState" uuid="cf2700c0-ea4b-47ae-9725-7810114b94d8">
    

    <const name="Null" value="0">
      
    </const>
    <const name="Unlocked" value="1">
      
    </const>
    <const name="Locked" value="2">
      
    </const>
    <const name="Spawning" value="3">
      
    </const>
    <const name="Unlocking" value="4">
      
    </const>
  </enum>

  <enum name="CPUPropertyType" uuid="52bc41f4-a279-45da-88ab-3a1d86fb73eb">
    
    <const name="Null" value="0">
      
    </const>
    <const name="PAE" value="1">
      
    </const>
    <const name="Synthetic" value="2">
      
    </const>
    <const name="LongMode" value="3">
      
    </const>
    <const name="TripleFaultReset" value="4">
      
    </const>
  </enum>


  <enum name="HWVirtExPropertyType" uuid="411ad0ea-aeeb-44cb-9d03-1624d0d025ac">
    
    <const name="Null" value="0">
      
    </const>
    <const name="Enabled" value="1">
      
    </const>
    <const name="VPID" value="2">
      
    </const>
    <const name="NestedPaging" value="3">
      
    </const>
    <const name="UnrestrictedExecution" value="4">
      
    </const>
    <const name="LargePages" value="5">
      
    </const>
    <const name="Force" value="6">
      
    </const>
  </enum>

  <enum name="FaultToleranceState" uuid="5124f7ec-6b67-493c-9dee-ee45a44114e1">
    
    <const name="Inactive" value="1">
      
    </const>
    <const name="Master" value="2">
      
    </const>
    <const name="Standby" value="3">
      
    </const>
  </enum>

  <enum name="LockType" uuid="168a6a8e-12fd-4878-a1f9-38a750a56089">
    
    <const name="Write" value="2">
      
    </const>
    <const name="Shared" value="1">
      
    </const>
    <const name="VM" value="3">
      
    </const>
  </enum>

  <enum name="SessionType" uuid="A13C02CB-0C2C-421E-8317-AC0E8AAA153A">
    

    <const name="Null" value="0">
      
    </const>
    <const name="WriteLock" value="1">
      
    </const>
    <const name="Remote" value="2">
      
    </const>
    <const name="Shared" value="3">
      
    </const>
  </enum>

  <enum name="DeviceType" uuid="6d9420f7-0b56-4636-99f9-7346f1b01e57">
    
    <const name="Null" value="0">
      
    </const>
    <const name="Floppy" value="1">
      
    </const>
    <const name="DVD" value="2">
      
    </const>
    <const name="HardDisk" value="3">
      
    </const>
    <const name="Network" value="4">
      
    </const>
    <const name="USB" value="5">
      
    </const>
    <const name="SharedFolder" value="6">
      
    </const>
  </enum>

  <enum name="DeviceActivity" uuid="6FC8AEAA-130A-4eb5-8954-3F921422D707">
    

    <const name="Null" value="0"/>
    <const name="Idle" value="1"/>
    <const name="Reading" value="2"/>
    <const name="Writing" value="3"/>
  </enum>

  <enum name="ClipboardMode" uuid="33364716-4008-4701-8f14-be0fa3d62950">
    

    <const name="Disabled" value="0"/>
    <const name="HostToGuest" value="1"/>
    <const name="GuestToHost" value="2"/>
    <const name="Bidirectional" value="3"/>
  </enum>

  <enum name="DragAndDropMode" uuid="b618ea0e-b6fb-4f8d-97f7-5e237e49b547">
    

    <const name="Disabled" value="0"/>
    <const name="HostToGuest" value="1"/>
    <const name="GuestToHost" value="2"/>
    <const name="Bidirectional" value="3"/>
  </enum>

  <enum name="Scope" uuid="7c91096e-499e-4eca-9f9b-9001438d7855">
    

    <const name="Global" value="0"/>
    <const name="Machine" value="1"/>
    <const name="Session" value="2"/>
  </enum>

  <enum name="BIOSBootMenuMode" uuid="ae4fb9f7-29d2-45b4-b2c7-d579603135d5">
    

    <const name="Disabled" value="0"/>
    <const name="MenuOnly" value="1"/>
    <const name="MessageAndMenu" value="2"/>
  </enum>

  <enum name="ProcessorFeature" uuid="64c38e6b-8bcf-45ad-ac03-9b406287c5bf">
    

    <const name="HWVirtEx" value="0"/>
    <const name="PAE" value="1"/>
    <const name="LongMode" value="2"/>
    <const name="NestedPaging" value="3"/>
  </enum>

  <enum name="FirmwareType" uuid="b903f264-c230-483e-ac74-2b37ce60d371">
    
    <const name="BIOS" value="1">
      
    </const>
    <const name="EFI" value="2">
      
    </const>
    <const name="EFI32" value="3">
      
    </const>
    <const name="EFI64" value="4">
      
    </const>
    <const name="EFIDUAL" value="5">
      
    </const>
  </enum>

  <enum name="PointingHIDType" uuid="19964e93-0050-45c4-9382-a7bccc53e666">
    
    <const name="None" value="1">
      
    </const>
    <const name="PS2Mouse" value="2">
      
    </const>
    <const name="USBMouse" value="3">
      
    </const>
    <const name="USBTablet" value="4">
      
    </const>
    <const name="ComboMouse" value="5">
      
    </const>
    <const name="USBMultiTouch" value="6">
      
    </const>
  </enum>

  <enum name="KeyboardHIDType" uuid="383e43d7-5c7c-4ec8-9cb8-eda1bccd6699">
    
    <const name="None" value="1">
      
    </const>
    <const name="PS2Keyboard" value="2">
      
    </const>
    <const name="USBKeyboard" value="3">
      
    </const>
    <const name="ComboKeyboard" value="4">
      
    </const>
  </enum>

  

  <interface name="IVirtualBoxErrorInfo" extends="$errorinfo" uuid="c1bcc6d5-7966-481d-ab0b-d0ed73e28135" supportsErrorInfo="no" wsmap="managed">
    

    <attribute name="resultCode" type="long" readonly="yes">
      
    </attribute>

    <attribute name="resultDetail" type="long" readonly="yes">
      
    </attribute>

    <attribute name="interfaceID" type="uuid" mod="string" readonly="yes">
      
    </attribute>

    <attribute name="component" type="wstring" readonly="yes">
      
    </attribute>

    <attribute name="text" type="wstring" readonly="yes">
      
    </attribute>

    <attribute name="next" type="IVirtualBoxErrorInfo" readonly="yes">
      
    </attribute>

  </interface>

  

  <interface name="INATNetwork" extends="$unknown" uuid="a63c75da-4c99-4e9d-8351-eb73651c18cc" wsmap="managed">
    <attribute name="networkName" type="wstring">
      
    </attribute>
    <attribute name="enabled" type="boolean"/>
    <attribute name="network" type="wstring">
      
    </attribute>
    <attribute name="gateway" type="wstring" readonly="yes">
      
    </attribute>
    <attribute name="IPv6Enabled" type="boolean">
      
    </attribute>
    <attribute name="IPv6Prefix" type="wstring">
      
    </attribute>
    <attribute name="advertiseDefaultIPv6RouteEnabled" type="boolean"/>
    <attribute name="needDhcpServer" type="boolean"/>
    <attribute name="eventSource" type="IEventSource" readonly="yes"/>
    <attribute name="portForwardRules4" type="wstring" readonly="yes" safearray="yes">
      
    </attribute>
    <attribute name="localMappings" type="wstring" readonly="yes" safearray="yes">
      
    </attribute>

    <method name="addLocalMapping">
      
      <param name="hostid" type="wstring" dir="in"/>
      <param name="offset" type="long" dir="in"/>
    </method>

    <attribute name="loopbackIp6" type="long">
      
    </attribute>

    <attribute name="portForwardRules6" type="wstring" readonly="yes" safearray="yes">
      
    </attribute>
    <method name="addPortForwardRule">
      <param name="isIpv6" type="boolean" dir="in"/>
      <param name="ruleName" type="wstring" dir="in"/>
      <param name="proto" type="NATProtocol" dir="in">
        
      </param>
      <param name="hostIP" type="wstring" dir="in">
        
      </param>
      <param name="hostPort" type="unsigned short" dir="in">
        
      </param>
      <param name="guestIP" type="wstring" dir="in">
        
        </param>
        <param name="guestPort" type="unsigned short" dir="in">
          
        </param>
    </method>
    <method name="removePortForwardRule">
      <param name="iSipv6" type="boolean" dir="in"/>
      <param name="ruleName" type="wstring" dir="in"/>
    </method>
    <method name="start">
      <param name="trunkType" type="wstring" dir="in">
        
      </param>
    </method>
    <method name="stop"/>
  </interface>

  <enum name="DhcpOpt" uuid="40d99bd3-3ece-44d2-a07e-1085fe9c4f0b">
    <const name="SubnetMask" value="1"/>
    <const name="TimeOffset" value="2"/>
    <const name="Router" value="3"/>
    <const name="TimeServer" value="4"/>
    <const name="NameServer" value="5"/>
    <const name="DomainNameServer" value="6"/>
    <const name="LogServer" value="7"/>
    <const name="Cookie" value="8"/>
    <const name="LPRServer" value="9"/>
    <const name="ImpressServer" value="10"/>
    <const name="ResourseLocationServer" value="11"/>
    <const name="HostName" value="12"/>
    <const name="BootFileSize" value="13"/>
    <const name="MeritDumpFile" value="14"/>
    <const name="DomainName" value="15"/>
    <const name="SwapServer" value="16"/>
    <const name="RootPath" value="17"/>
    <const name="ExtensionPath" value="18"/>
    <const name="IPForwardingEnableDisable" value="19"/>
    <const name="NonLocalSourceRoutingEnableDisable" value="20"/>
    <const name="PolicyFilter" value="21"/>
    <const name="MaximumDatagramReassemblySize" value="22"/>
    <const name="DefaultIPTime2Live" value="23"/>
    <const name="PathMTUAgingTimeout" value="24"/>
    <const name="IPLayerParametersPerInterface" value="25"/>
    <const name="InterfaceMTU" value="26"/>
    <const name="AllSubnetsAreLocal" value="27"/>
    <const name="BroadcastAddress" value="28"/>
    <const name="PerformMaskDiscovery" value="29"/>
    <const name="MaskSupplier" value="30"/>
    <const name="PerformRouteDiscovery" value="31"/>
    <const name="RouterSolicitationAddress" value="32"/>
    <const name="StaticRoute" value="33"/>
    <const name="TrailerEncapsulation" value="34"/>
    <const name="ARPCacheTimeout" value="35"/>
    <const name="EthernetEncapsulation" value="36"/>
    <const name="TCPDefaultTTL" value="37"/>
    <const name="TCPKeepAliveInterval" value="38"/>
    <const name="TCPKeepAliveGarbage" value="39"/>
    <const name="NetworkInformationServiceDomain" value="40"/>
    <const name="NetworkInformationServiceServers" value="41"/>
    <const name="NetworkTimeProtocolServers" value="42"/>
    <const name="VendorSpecificInformation" value="43"/>
    <const name="Option_44" value="44"/>
    <const name="Option_45" value="45"/>
    <const name="Option_46" value="46"/>
    <const name="Option_47" value="47"/>
    <const name="Option_48" value="48"/>
    <const name="Option_49" value="49"/>
    <const name="IPAddressLeaseTime" value="51"/>
    <const name="Option_64" value="64"/>
    <const name="Option_65" value="65"/>
    <const name="TFTPServerName" value="66"/>
    <const name="BootfileName" value="67"/>
    <const name="Option_68" value="68"/>
    <const name="Option_69" value="69"/>
    <const name="Option_70" value="70"/>
    <const name="Option_71" value="71"/>
    <const name="Option_72" value="72"/>
    <const name="Option_73" value="73"/>
    <const name="Option_74" value="74"/>
    <const name="Option_75" value="75"/>
    <const name="Option_119" value="119"/>
  </enum>

  <interface name="IDHCPServer" extends="$unknown" uuid="ff0774c5-1f62-4bc3-919c-7fc942bf1d25" wsmap="managed">
    
    
    <attribute name="eventSource" type="IEventSource" readonly="yes"/>
    <attribute name="enabled" type="boolean">
      
    </attribute>

    <attribute name="IPAddress" type="wstring" readonly="yes">
      
    </attribute>

    <attribute name="networkMask" type="wstring" readonly="yes">
      
    </attribute>

    <attribute name="networkName" type="wstring" readonly="yes">
      
    </attribute>

    <attribute name="lowerIP" type="wstring" readonly="yes">
      
    </attribute>

    <attribute name="upperIP" type="wstring" readonly="yes">
      
    </attribute>

    <method name="addGlobalOption">
      <param name="option" type="DhcpOpt" dir="in"/>
      <param name="value" type="wstring" dir="in"/>
    </method>

    
    <attribute name="globalOptions" type="wstring" safearray="yes" readonly="yes"/>

    
    <attribute name="vmConfigs" type="wstring" safearray="yes" readonly="yes"/>

    
    <method name="addVmSlotOption">
      <param name="vmname" type="wstring" dir="in"/>
      <param name="slot" type="long" dir="in"/>
      <param name="option" type="DhcpOpt" dir="in"/>
      <param name="value" type="wstring" dir="in"/>
    </method>

    <method name="removeVmSlotOptions">
      <param name="vmname" type="wstring" dir="in"/>
      <param name="slot" type="long" dir="in"/>
    </method>

    
    <method name="getVmSlotOptions">
      <param name="vmname" type="wstring" dir="in"/>
      <param name="slot" type="long" dir="in"/>
      <param name="option" type="wstring" safearray="yes" dir="return"/>
    </method>

    
    <method name="getMacOptions">
      <param name="mac" type="wstring" dir="in"/>
      <param name="option" type="wstring" safearray="yes" dir="return"/>
    </method>

    <method name="setConfiguration">
      
      <param name="IPAddress" type="wstring" dir="in">
        
      </param>
      <param name="networkMask" type="wstring" dir="in">
        
      </param>
      <param name="FromIPAddress" type="wstring" dir="in">
        
      </param>
      <param name="ToIPAddress" type="wstring" dir="in">
        
      </param>
    </method>

    <method name="start">
      
      <param name="networkName" type="wstring" dir="in">
        
      </param>
      <param name="trunkName" type="wstring" dir="in">
        
      </param>
      <param name="trunkType" type="wstring" dir="in">
        
      </param>
    </method>

    <method name="stop">
      
    </method>
  </interface>

  <interface name="IVirtualBox" extends="$unknown" uuid="fafa4e17-1ee2-4905-a10e-fe7c18bf5554" wsmap="managed">
    

    <attribute name="version" type="wstring" readonly="yes">
      
    </attribute>

    <attribute name="versionNormalized" type="wstring" readonly="yes">
      
    </attribute>

    <attribute name="revision" type="unsigned long" readonly="yes">
      
    </attribute>

    <attribute name="packageType" type="wstring" readonly="yes">
      
    </attribute>

    <attribute name="APIVersion" type="wstring" readonly="yes">
      
    </attribute>

    <attribute name="homeFolder" type="wstring" readonly="yes">
      
    </attribute>

    <attribute name="settingsFilePath" type="wstring" readonly="yes">
      
    </attribute>

    <attribute name="host" type="IHost" readonly="yes">
      
    </attribute>

    <attribute name="systemProperties" type="ISystemProperties" readonly="yes">
      
    </attribute>

    <attribute name="machines" type="IMachine" readonly="yes" safearray="yes">
      
    </attribute>

    <attribute name="machineGroups" type="wstring" readonly="yes" safearray="yes">
      
    </attribute>

    <attribute name="hardDisks" type="IMedium" readonly="yes" safearray="yes">
      
    </attribute>

    <attribute name="DVDImages" type="IMedium" readonly="yes" safearray="yes">
      
    </attribute>

    <attribute name="floppyImages" type="IMedium" readonly="yes" safearray="yes">
      
    </attribute>

    <attribute name="progressOperations" type="IProgress" readonly="yes" safearray="yes"/>

    <attribute name="guestOSTypes" type="IGuestOSType" readonly="yes" safearray="yes"/>

    <attribute name="sharedFolders" type="ISharedFolder" readonly="yes" safearray="yes">
      
    </attribute>

    <attribute name="performanceCollector" type="IPerformanceCollector" readonly="yes">
      
    </attribute>

    <attribute name="DHCPServers" type="IDHCPServer" safearray="yes" readonly="yes">
      
    </attribute>
    
    <attribute name="NATNetworks" type="INATNetwork" safearray="yes" readonly="yes"/>

    <attribute name="eventSource" type="IEventSource" readonly="yes">
      
    </attribute>

    <attribute name="extensionPackManager" type="IExtPackManager" readonly="yes">
      
    </attribute>


    <attribute name="internalNetworks" type="wstring" safearray="yes" readonly="yes">
      
    </attribute>

    <attribute name="genericNetworkDrivers" type="wstring" safearray="yes" readonly="yes">
      
    </attribute>

    <method name="composeMachineFilename">
      
      <param name="name" type="wstring" dir="in">
        
      </param>
      <param name="group" type="wstring" dir="in">
        
      </param>
      <param name="createFlags" type="wstring" dir="in">
        
      </param>
      <param name="baseFolder" type="wstring" dir="in">
        
      </param>
      <param name="file" type="wstring" dir="return">
        
      </param>
    </method>

    <method name="createMachine">
      

      <param name="settingsFile" type="wstring" dir="in">
        
      </param>
      <param name="name" type="wstring" dir="in">
        
      </param>
      <param name="groups" type="wstring" safearray="yes" dir="in">
        
      </param>
      <param name="osTypeId" type="wstring" dir="in">
        
      </param>
      <param name="flags" type="wstring" dir="in">
        
      </param>
      <param name="machine" type="IMachine" dir="return">
        
      </param>
    </method>

    <method name="openMachine">
      
      <param name="settingsFile" type="wstring" dir="in">
        
      </param>
      <param name="machine" type="IMachine" dir="return">
        
      </param>
    </method>

    <method name="registerMachine">
      
      <param name="machine" type="IMachine" dir="in"/>
    </method>

    <method name="findMachine">
      
      <param name="nameOrId" type="wstring" dir="in">
        
      </param>
      <param name="machine" type="IMachine" dir="return">
        
      </param>
    </method>

    <method name="getMachinesByGroups">
      
      <param name="groups" type="wstring" dir="in" safearray="yes">
        
      </param>
      <param name="machines" type="IMachine" dir="return" safearray="yes">
        
      </param>
    </method>

    <method name="getMachineStates">
      
      <param name="machines" type="IMachine" dir="in" safearray="yes">
        
      </param>
      <param name="states" type="MachineState" dir="return" safearray="yes">
        
      </param>
    </method>

    <method name="createAppliance">
      
      <param name="appliance" type="IAppliance" dir="return">
        
      </param>
    </method>

    <method name="createHardDisk">
      
      <param name="format" type="wstring" dir="in">
        
      </param>
      <param name="location" type="wstring" dir="in">
        
      </param>
      <param name="medium" type="IMedium" dir="return">
        
      </param>
    </method>

    <method name="openMedium">
      
      <param name="location" type="wstring" dir="in">
        
      </param>
      <param name="deviceType" type="DeviceType" dir="in">
        
      </param>
      <param name="accessMode" type="AccessMode" dir="in">
        
      </param>
      <param name="forceNewUuid" type="boolean" dir="in">
         
         </param>
      <param name="medium" type="IMedium" dir="return">
        
      </param>
    </method>

    <method name="getGuestOSType">
      
      <param name="id" type="uuid" mod="string" dir="in">
        
      </param>
      <param name="type" type="IGuestOSType" dir="return">
        
      </param>
    </method>

    <method name="createSharedFolder">
      
      <param name="name" type="wstring" dir="in">
        
      </param>
      <param name="hostPath" type="wstring" dir="in">
        
      </param>
      <param name="writable" type="boolean" dir="in">
        
      </param>
      <param name="automount" type="boolean" dir="in">
        
      </param>
    </method>

    <method name="removeSharedFolder">
      
      <param name="name" type="wstring" dir="in">
        
      </param>
    </method>

    <method name="getExtraDataKeys">
      
      <param name="keys" type="wstring" dir="return" safearray="yes">
        
      </param>
    </method>

    <method name="getExtraData">
      
      <param name="key" type="wstring" dir="in">
        
      </param>
      <param name="value" type="wstring" dir="return">
        
      </param>
    </method>

    <method name="setExtraData">
      
      <param name="key" type="wstring" dir="in">
        
      </param>
      <param name="value" type="wstring" dir="in">
        
      </param>
    </method>

    <method name="setSettingsSecret">
      
      <param name="password" type="wstring" dir="in">
        
      </param>
    </method>

    

    <method name="createDHCPServer">
      
      <param name="name" type="wstring" dir="in">
        
      </param>
      <param name="server" type="IDHCPServer" dir="return">
        
      </param>
    </method>

    <method name="findDHCPServerByNetworkName">
      
      <param name="name" type="wstring" dir="in">
        
      </param>
      <param name="server" type="IDHCPServer" dir="return">
        
      </param>
    </method>

    

    <method name="removeDHCPServer">
      
      <param name="server" type="IDHCPServer" dir="in">
        
      </param>
    </method>

    
    <method name="createNATNetwork">
      
      <param name="networkName" type="wstring" dir="in"/>
      <param name="network" type="INATNetwork" dir="return"/>
    </method>

     
     <method name="findNATNetworkByName">
      <param name="networkName" type="wstring" dir="in"/>
      <param name="network" type="INATNetwork" dir="return"/>
    </method>
    
    <method name="removeNATNetwork">
       <param name="network" type="INATNetwork" dir="in"/>
    </method>

    <method name="checkFirmwarePresent">
      
      <param name="firmwareType" type="FirmwareType" dir="in">
        
      </param>
      <param name="version" type="wstring" dir="in">
        
      </param>

      <param name="url" type="wstring" dir="out">
        
      </param>

      <param name="file" type="wstring" dir="out">
        
      </param>

      <param name="result" type="boolean" dir="return">
        
      </param>
    </method>

  </interface>

  

  <enum name="VFSType" uuid="813999ba-b949-48a8-9230-aadc6285e2f2">
    

    <const name="File" value="1"/>
    <const name="Cloud" value="2"/>
    <const name="S3" value="3"/>
    <const name="WebDav" value="4"/>
  </enum>

  <enum name="VFSFileType" uuid="714333cd-44e2-415f-a245-d378fa9b1242">
    

    <const name="Unknown" value="1"/>
    <const name="Fifo" value="2"/>
    <const name="DevChar" value="3"/>
    <const name="Directory" value="4"/>
    <const name="DevBlock" value="5"/>
    <const name="File" value="6"/>
    <const name="SymLink" value="7"/>
    <const name="Socket" value="8"/>
    <const name="WhiteOut" value="9"/>
  </enum>

  <interface name="IVFSExplorer" extends="$unknown" uuid="fb220201-2fd3-47e2-a5dc-2c2431d833cc" wsmap="managed">
    

    <attribute name="path" type="wstring" readonly="yes">
      
    </attribute>

    <attribute name="type" type="VFSType" readonly="yes">
      
    </attribute>

    <method name="update">
      

      <param name="progress" type="IProgress" dir="return">
        
      </param>
    </method>

    <method name="cd">
      

      <param name="dir" type="wstring" dir="in">
        
      </param>

      <param name="progress" type="IProgress" dir="return">
        
      </param>
    </method>

    <method name="cdUp">
      

      <param name="progress" type="IProgress" dir="return">
        
      </param>
    </method>

    <method name="entryList">
      

      <param name="names" type="wstring" safearray="yes" dir="out">
        
      </param>

      <param name="types" type="unsigned long" safearray="yes" dir="out">
        
      </param>

      <param name="sizes" type="long long" safearray="yes" dir="out">
        
      </param>

      <param name="modes" type="unsigned long" safearray="yes" dir="out">
        
      </param>
    </method>

    <method name="exists">
      

      <param name="names" type="wstring" safearray="yes" dir="in">
        
      </param>

      <param name="exists" type="wstring" safearray="yes" dir="return">
        
      </param>
    </method>

    <method name="remove">
      

      <param name="names" type="wstring" safearray="yes" dir="in">
        
      </param>

      <param name="progress" type="IProgress" dir="return">
        
      </param>
    </method>

  </interface>

  <enum name="ImportOptions" uuid="0a981523-3b20-4004-8ee3-dfd322202ace">

    

    <const name="KeepAllMACs" value="1">
      
    </const>
    <const name="KeepNATMACs" value="2">
      
    </const>

  </enum>

  <enum name="ExportOptions" uuid="8f45eb08-fd34-41ee-af95-a880bdee5554">

    

    <const name="CreateManifest" value="1">
      
    </const>
    <const name="ExportDVDImages" value="2">
      
    </const>
    <const name="StripAllMACs" value="3">
      
    </const>
    <const name="StripAllNonNATMACs" value="4">
      
    </const>

  </enum>


  

  <interface name="IAppliance" extends="$unknown" uuid="3059cf9e-25c7-4f0b-9fa5-3c42e441670b" wsmap="managed">
    

    <attribute name="path" type="wstring" readonly="yes">
      
    </attribute>

    <attribute name="disks" type="wstring" readonly="yes" safearray="yes">
      
    </attribute>

    <attribute name="virtualSystemDescriptions" type="IVirtualSystemDescription" readonly="yes" safearray="yes">
      
    </attribute>

    <attribute name="machines" type="wstring" readonly="yes" safearray="yes">
      
    </attribute>

    <method name="read">
      
      <param name="file" type="wstring" dir="in">
        
      </param>
      <param name="progress" type="IProgress" dir="return">
        
      </param>
    </method>

    <method name="interpret">
      
    </method>

    <method name="importMachines">
      

      <param name="options" type="ImportOptions" dir="in" safearray="yes">
        
      </param>

      <param name="progress" type="IProgress" dir="return">
        
      </param>
    </method>

    <method name="createVFSExplorer">
      

      <param name="URI" type="wstring" dir="in">
        
      </param>

      <param name="explorer" type="IVFSExplorer" dir="return">
        
      </param>
    </method>

    <method name="write">
      
      <param name="format" type="wstring" dir="in">
        
      </param>
      <param name="options" type="ExportOptions" dir="in" safearray="yes">
        
      </param>
      <param name="path" type="wstring" dir="in">
          
      </param>
      <param name="progress" type="IProgress" dir="return">
        
      </param>
    </method>

    <method name="getWarnings">
      

      <param name="warnings" type="wstring" dir="return" safearray="yes">
        
      </param>
    </method>

  </interface>

  <enum name="VirtualSystemDescriptionType" uuid="303c0900-a746-4612-8c67-79003e91f459">
    

    <const name="Ignore" value="1"/>
    <const name="OS" value="2"/>
    <const name="Name" value="3"/>
    <const name="Product" value="4"/>
    <const name="Vendor" value="5"/>
    <const name="Version" value="6"/>
    <const name="ProductUrl" value="7"/>
    <const name="VendorUrl" value="8"/>
    <const name="Description" value="9"/>
    <const name="License" value="10"/>
    <const name="Miscellaneous" value="11"/>
    <const name="CPU" value="12"/>
    <const name="Memory" value="13"/>
    <const name="HardDiskControllerIDE" value="14"/>
    <const name="HardDiskControllerSATA" value="15"/>
    <const name="HardDiskControllerSCSI" value="16"/>
    <const name="HardDiskControllerSAS" value="17"/>
    <const name="HardDiskImage" value="18"/>
    <const name="Floppy" value="19"/>
    <const name="CDROM" value="20"/>
    <const name="NetworkAdapter" value="21"/>
    <const name="USBController" value="22"/>
    <const name="SoundCard" value="23"/>
    <const name="SettingsFile" value="24">
      
    </const>
  </enum>

  <enum name="VirtualSystemDescriptionValueType" uuid="56d9403f-3425-4118-9919-36f2a9b8c77c">
    

    <const name="Reference" value="1"/>
    <const name="Original" value="2"/>
    <const name="Auto" value="3"/>
    <const name="ExtraConfig" value="4"/>

  </enum>

  <interface name="IVirtualSystemDescription" extends="$unknown" uuid="d7525e6c-531a-4c51-8e04-41235083a3d8" wsmap="managed">

    

    <attribute name="count" type="unsigned long" readonly="yes">
      
    </attribute>

    <method name="getDescription">
      

      <param name="types" type="VirtualSystemDescriptionType" dir="out" safearray="yes">
        
      </param>

      <param name="refs" type="wstring" dir="out" safearray="yes">
        
      </param>

      <param name="OVFValues" type="wstring" dir="out" safearray="yes">
        
      </param>

      <param name="VBoxValues" type="wstring" dir="out" safearray="yes">
        
      </param>

      <param name="extraConfigValues" type="wstring" dir="out" safearray="yes">
        
      </param>

    </method>

    <method name="getDescriptionByType">
      

      <param name="type" type="VirtualSystemDescriptionType" dir="in">
        
      </param>

      <param name="types" type="VirtualSystemDescriptionType" dir="out" safearray="yes">
        
      </param>

      <param name="refs" type="wstring" dir="out" safearray="yes">
        
      </param>

      <param name="OVFValues" type="wstring" dir="out" safearray="yes">
        
      </param>

      <param name="VBoxValues" type="wstring" dir="out" safearray="yes">
        
      </param>

      <param name="extraConfigValues" type="wstring" dir="out" safearray="yes">
        
      </param>

    </method>

    <method name="getValuesByType">
      

      <param name="type" type="VirtualSystemDescriptionType" dir="in">
        
      </param>

      <param name="which" type="VirtualSystemDescriptionValueType" dir="in">
        
      </param>

      <param name="values" type="wstring" dir="return" safearray="yes">
        
      </param>

    </method>

    <method name="setFinalValues">
      

      <param name="enabled" type="boolean" dir="in" safearray="yes">
        
      </param>

      <param name="VBoxValues" type="wstring" dir="in" safearray="yes">
        
      </param>

      <param name="extraConfigValues" type="wstring" dir="in" safearray="yes">
        
      </param>
    </method>

    <method name="addDescription">
      

      <param name="type" type="VirtualSystemDescriptionType" dir="in">
        
      </param>

      <param name="VBoxValue" type="wstring" dir="in">
        
      </param>

      <param name="extraConfigValue" type="wstring" dir="in">
        
      </param>
    </method>
  </interface>


  

  <interface name="IInternalMachineControl" extends="$unknown" uuid="2d9ce4b7-0ab2-4931-ac4a-e45aa66465ef" internal="yes" wsmap="suppress">
    <method name="setRemoveSavedStateFile">
      
      <param name="remove" type="boolean" dir="in"/>
    </method>

    <method name="updateState">
      
      <param name="state" type="MachineState" dir="in"/>
    </method>

    <method name="beginPowerUp">
      
      <param name="progress" type="IProgress" dir="in"/>
    </method>

    <method name="endPowerUp">
      
      <param name="result" type="long" dir="in"/>
    </method>

    <method name="beginPoweringDown">
      
      <param name="progress" type="IProgress" dir="out">
        
      </param>
    </method>

    <method name="endPoweringDown">
      

      <param name="result" type="long" dir="in">
        
      </param>
      <param name="errMsg" type="wstring" dir="in">
        
      </param>
    </method>

    <method name="runUSBDeviceFilters">
      
      <param name="device" type="IUSBDevice" dir="in"/>
      <param name="matched" type="boolean" dir="out"/>
      <param name="maskedInterfaces" type="unsigned long" dir="out"/>
    </method>

    <method name="captureUSBDevice">
      
      <param name="id" type="uuid" mod="string" dir="in"/>
    </method>

    <method name="detachUSBDevice">
      
      <param name="id" type="uuid" mod="string" dir="in"/>
      <param name="done" type="boolean" dir="in"/>
    </method>

    <method name="autoCaptureUSBDevices">
      
    </method>

    <method name="detachAllUSBDevices">
      
      <param name="done" type="boolean" dir="in"/>
    </method>

    <method name="onSessionEnd">
      
      <param name="session" type="ISession" dir="in">
        
      </param>
      <param name="progress" type="IProgress" dir="return">
        
      </param>
    </method>

    <method name="beginSavingState">
      
      <param name="progress" type="IProgress" dir="out">
        
      </param>
      <param name="stateFilePath" type="wstring" dir="out">
        
      </param>
    </method>

    <method name="endSavingState">
      

      <param name="result" type="long" dir="in">
        
      </param>
      <param name="errMsg" type="wstring" dir="in">
        
      </param>
    </method>

    <method name="adoptSavedState">
      
      <param name="savedStateFile" type="wstring" dir="in">
        
      </param>
    </method>

    <method name="beginTakingSnapshot">
      
      <param name="initiator" type="IConsole" dir="in">
        
      </param>
      <param name="name" type="wstring" dir="in">
        
      </param>
      <param name="description" type="wstring" dir="in">
        
      </param>
      <param name="consoleProgress" type="IProgress" dir="in">
        
      </param>
      <param name="fTakingSnapshotOnline" type="boolean" dir="in">
        
      </param>
      <param name="stateFilePath" type="wstring" dir="out">
        
      </param>
    </method>

    <method name="endTakingSnapshot">
      

      <param name="success" type="boolean" dir="in">
        
      </param>
    </method>

    <method name="deleteSnapshot">
      
      <param name="initiator" type="IConsole" dir="in">
        
      </param>
      <param name="startId" type="uuid" mod="string" dir="in">
        
      </param>
      <param name="endId" type="uuid" mod="string" dir="in">
        
      </param>
      <param name="deleteAllChildren" type="boolean" dir="in">
        
      </param>
      <param name="machineState" type="MachineState" dir="out">
        
      </param>
      <param name="progress" type="IProgress" dir="return">
        
      </param>
    </method>

    <method name="finishOnlineMergeMedium">
      
    </method>

    <method name="restoreSnapshot">
      
      <param name="initiator" type="IConsole" dir="in">
        
      </param>
      <param name="snapshot" type="ISnapshot" dir="in">
        
      </param>
      <param name="machineState" type="MachineState" dir="out">
        
      </param>
      <param name="progress" type="IProgress" dir="return">
        
      </param>
    </method>

    <method name="pullGuestProperties">
      
      <param name="names" type="wstring" dir="out" safearray="yes">
        
      </param>
      <param name="values" type="wstring" dir="out" safearray="yes">
        
      </param>
      <param name="timestamps" type="long long" dir="out" safearray="yes">
        
      </param>
      <param name="flags" type="wstring" dir="out" safearray="yes">
        
      </param>
    </method>

    <method name="pushGuestProperty">
      
      <param name="name" type="wstring" dir="in">
        
      </param>
      <param name="value" type="wstring" dir="in">
        
      </param>
      <param name="timestamp" type="long long" dir="in">
        
      </param>
      <param name="flags" type="wstring" dir="in">
        
      </param>
    </method>

    <method name="lockMedia">
      
    </method>
    <method name="unlockMedia">
      
    </method>

    <method name="ejectMedium">
      
      <param name="attachment" type="IMediumAttachment" dir="in">
        
      </param>
      <param name="newAttachment" type="IMediumAttachment" dir="return">
        
      </param>
    </method>

    <method name="reportVmStatistics">
      
      <param name="validStats" type="unsigned long" dir="in">
        
      </param>
      <param name="cpuUser" type="unsigned long" dir="in">
        
      </param>
      <param name="cpuKernel" type="unsigned long" dir="in">
        
      </param>
      <param name="cpuIdle" type="unsigned long" dir="in">
        
      </param>
      <param name="memTotal" type="unsigned long" dir="in">
        
      </param>
      <param name="memFree" type="unsigned long" dir="in">
        
      </param>
      <param name="memBalloon" type="unsigned long" dir="in">
        
      </param>
      <param name="memShared" type="unsigned long" dir="in">
        
      </param>
      <param name="memCache" type="unsigned long" dir="in">
        
      </param>
      <param name="pagedTotal" type="unsigned long" dir="in">
        
      </param>
      <param name="memAllocTotal" type="unsigned long" dir="in">
        
      </param>
      <param name="memFreeTotal" type="unsigned long" dir="in">
        
      </param>
      <param name="memBalloonTotal" type="unsigned long" dir="in">
        
      </param>
      <param name="memSharedTotal" type="unsigned long" dir="in">
        
      </param>
      <param name="vmNetRx" type="unsigned long" dir="in">
        
      </param>
      <param name="vmNetTx" type="unsigned long" dir="in">
        
      </param>
    </method>
  </interface>

  <interface name="IBIOSSettings" extends="$unknown" uuid="38b54279-dc35-4f5e-a431-835b867c6b5e" wsmap="managed">
    
    <attribute name="logoFadeIn" type="boolean">
      
    </attribute>

    <attribute name="logoFadeOut" type="boolean">
      
    </attribute>

    <attribute name="logoDisplayTime" type="unsigned long">
      
    </attribute>

    <attribute name="logoImagePath" type="wstring">
      
    </attribute>

    <attribute name="bootMenuMode" type="BIOSBootMenuMode">
      
    </attribute>

    <attribute name="ACPIEnabled" type="boolean">
      
    </attribute>

    <attribute name="IOAPICEnabled" type="boolean">
      
    </attribute>

    <attribute name="timeOffset" type="long long">
      
    </attribute>

    <attribute name="PXEDebugEnabled" type="boolean">
      
    </attribute>

    <attribute name="nonVolatileStorageFile" type="wstring" readonly="yes">
      
    </attribute>

  </interface>

  <interface name="IPCIAddress" extends="$unknown" uuid="c984d15f-e191-400b-840e-970f3dad7296" wsmap="managed">

    

    <attribute name="bus" type="short">
      
    </attribute>

    <attribute name="device" type="short">
      
    </attribute>

    <attribute name="devFunction" type="short">
      
    </attribute>

    <method name="asLong">
      
      <param name="result" type="long" dir="return"/>
    </method>

    <method name="fromLong">
      
      <param name="number" type="long" dir="in"/>
    </method>
  </interface>

  <interface name="IPCIDeviceAttachment" extends="$unknown" uuid="91f33d6f-e621-4f70-a77e-15f0e3c714d5" wsmap="struct">

    

    <attribute name="name" type="wstring" readonly="yes">
      
    </attribute>

    <attribute name="isPhysicalDevice" type="boolean" readonly="yes">
      
    </attribute>

    <attribute name="hostAddress" type="long" readonly="yes">
      
    </attribute>

    <attribute name="guestAddress" type="long" readonly="yes">
      
    </attribute>

  </interface>

  <enum name="GraphicsControllerType" uuid="79c96ca0-9f39-4900-948e-68c41cbe127a">
    
    <const name="Null" value="0">
      
    </const>
    <const name="VBoxVGA" value="1">
      
    </const>
    <const name="VMSVGA" value="2">
      
    </const>
  </enum>

  <enum name="CleanupMode" uuid="67897c50-7cca-47a9-83f6-ce8fd8eb5441">
    
    <const name="UnregisterOnly" value="1">
      
    </const>
    <const name="DetachAllReturnNone" value="2">
      
    </const>
    <const name="DetachAllReturnHardDisksOnly" value="3">
      
    </const>
    <const name="Full" value="4">
      
    </const>
  </enum>

  <enum name="CloneMode" uuid="A7A159FE-5096-4B8D-8C3C-D033CB0B35A8">

    

    <const name="MachineState" value="1">
      
    </const>
    <const name="MachineAndChildStates" value="2">
      
    </const>
    <const name="AllStates" value="3">
      
    </const>

  </enum>

  <enum name="CloneOptions" uuid="22243f8e-96ab-497c-8cf0-f40a566c630b">

    

    <const name="Link" value="1">
      
    </const>
    <const name="KeepAllMACs" value="2">
      
    </const>
    <const name="KeepNATMACs" value="3">
      
    </const>
    <const name="KeepDiskNames" value="4">
      
    </const>

  </enum>

  <enum name="AutostopType" uuid="6bb96740-cf34-470d-aab2-2cd48ea2e10e">

    

    <const name="Disabled" value="1">
      
    </const>
    <const name="SaveState" value="2">
      
    </const>
    <const name="PowerOff" value="3">
      
    </const>
    <const name="AcpiShutdown" value="4">
      
    </const>

  </enum>


  <interface name="IMachine" extends="$unknown" uuid="480cf695-2d8d-4256-9c7c-cce4184fa048" wsmap="managed">
    

    <attribute name="parent" type="IVirtualBox" readonly="yes">
      
    </attribute>

    <attribute name="icon" type="octet" safearray="yes">
      
    </attribute>

    <attribute name="accessible" type="boolean" readonly="yes">
      
    </attribute>

    <attribute name="accessError" type="IVirtualBoxErrorInfo" readonly="yes">
      
    </attribute>

    <attribute name="name" type="wstring">
      
    </attribute>

    <attribute name="description" type="wstring">
      
    </attribute>

    <attribute name="id" type="uuid" mod="string" readonly="yes">
      
    </attribute>

    <attribute name="groups" type="wstring" safearray="yes">
      
    </attribute>

    <attribute name="OSTypeId" type="wstring">
      
    </attribute>

    <attribute name="hardwareVersion" type="wstring">
      
    </attribute>

    <attribute name="hardwareUUID" type="uuid" mod="string">
      
    </attribute>

    <attribute name="CPUCount" type="unsigned long">
      
    </attribute>

    <attribute name="CPUHotPlugEnabled" type="boolean">
      
    </attribute>

    <attribute name="CPUExecutionCap" type="unsigned long">
      
    </attribute>

    <attribute name="memorySize" type="unsigned long">
      
    </attribute>

    <attribute name="memoryBalloonSize" type="unsigned long">
      
    </attribute>

    <attribute name="pageFusionEnabled" type="boolean">
      
    </attribute>

    <attribute name="graphicsControllerType" type="GraphicsControllerType">
      
    </attribute>

    <attribute name="VRAMSize" type="unsigned long">
      
    </attribute>

    <attribute name="accelerate3DEnabled" type="boolean" default="false">
      
    </attribute>

    <attribute name="accelerate2DVideoEnabled" type="boolean" default="false">
      
    </attribute>

    <attribute name="monitorCount" type="unsigned long">
      
    </attribute>

    <attribute name="videoCaptureEnabled" type="boolean" default="false">
      
    </attribute>

    <attribute name="videoCaptureScreens" type="boolean" safearray="yes">
      
    </attribute>

    <attribute name="videoCaptureFile" type="wstring">
      
    </attribute>

    <attribute name="videoCaptureWidth" type="unsigned long" default="640">
      
    </attribute>

    <attribute name="videoCaptureHeight" type="unsigned long" default="480">
      
    </attribute>

    <attribute name="videoCaptureRate" type="unsigned long" default="512">
      
    </attribute>

    <attribute name="videoCaptureFPS" type="unsigned long" default="25">
      
    </attribute>

    <attribute name="BIOSSettings" type="IBIOSSettings" readonly="yes">
      
    </attribute>

    <attribute name="firmwareType" type="FirmwareType">
      
    </attribute>

    <attribute name="pointingHIDType" type="PointingHIDType">
      
    </attribute>

    <attribute name="keyboardHIDType" type="KeyboardHIDType">
      
    </attribute>

    <attribute name="HPETEnabled" type="boolean">
      
    </attribute>

    <attribute name="chipsetType" type="ChipsetType">
      
    </attribute>

    <attribute name="snapshotFolder" type="wstring">
      
    </attribute>

    <attribute name="VRDEServer" type="IVRDEServer" readonly="yes">
      
    </attribute>

    <attribute name="emulatedUSBCardReaderEnabled" type="boolean" default="false"/>

    <attribute name="mediumAttachments" type="IMediumAttachment" readonly="yes" safearray="yes">
      
    </attribute>

    <attribute name="USBControllers" type="IUSBController" readonly="yes" safearray="yes">
      
    </attribute>

    <attribute name="USBDeviceFilters" type="IUSBDeviceFilters" readonly="yes">
      
    </attribute>

    <attribute name="audioAdapter" type="IAudioAdapter" readonly="yes">
      
    </attribute>

    <attribute name="storageControllers" type="IStorageController" readonly="yes" safearray="yes">
      
    </attribute>

    <attribute name="settingsFilePath" type="wstring" readonly="yes">
      
    </attribute>

    <attribute name="settingsModified" type="boolean" readonly="yes">
      
    </attribute>

    <attribute name="sessionState" type="SessionState" readonly="yes">
      
    </attribute>

    <attribute name="sessionType" type="wstring" readonly="yes">
      
    </attribute>

    <attribute name="sessionPID" type="unsigned long" readonly="yes">
      
    </attribute>

    <attribute name="state" type="MachineState" readonly="yes">
      
    </attribute>

    <attribute name="lastStateChange" type="long long" readonly="yes">
      
    </attribute>

    <attribute name="stateFilePath" type="wstring" readonly="yes">
      
    </attribute>

    <attribute name="logFolder" type="wstring" readonly="yes">
      
    </attribute>

    <attribute name="currentSnapshot" type="ISnapshot" readonly="yes">
      
    </attribute>

    <attribute name="snapshotCount" type="unsigned long" readonly="yes">
      
    </attribute>

    <attribute name="currentStateModified" type="boolean" readonly="yes">
      
    </attribute>

    <attribute name="sharedFolders" type="ISharedFolder" readonly="yes" safearray="yes">
      
    </attribute>

    <attribute name="clipboardMode" type="ClipboardMode">
      
    </attribute>

    <attribute name="dragAndDropMode" type="DragAndDropMode">
      
    </attribute>

    <attribute name="guestPropertyNotificationPatterns" type="wstring">
      
    </attribute>

    <attribute name="teleporterEnabled" type="boolean">
      
    </attribute>

    <attribute name="teleporterPort" type="unsigned long">
      
    </attribute>

    <attribute name="teleporterAddress" type="wstring">
      
    </attribute>

    <attribute name="teleporterPassword" type="wstring">
      
    </attribute>

    <attribute name="faultToleranceState" type="FaultToleranceState">
      
    </attribute>

    <attribute name="faultTolerancePort" type="unsigned long">
      
    </attribute>

    <attribute name="faultToleranceAddress" type="wstring">
      
    </attribute>

    <attribute name="faultTolerancePassword" type="wstring">
      
    </attribute>

    <attribute name="faultToleranceSyncInterval" type="unsigned long">
      
    </attribute>

    <attribute name="RTCUseUTC" type="boolean">
      
    </attribute>

    <attribute name="IOCacheEnabled" type="boolean">
      
    </attribute>

    <attribute name="IOCacheSize" type="unsigned long">
      
    </attribute>

    <attribute name="PCIDeviceAssignments" type="IPCIDeviceAttachment" readonly="yes" safearray="yes">
      
    </attribute>

    <attribute name="bandwidthControl" type="IBandwidthControl" readonly="yes">
      
    </attribute>

    <attribute name="tracingEnabled" type="boolean">
      
    </attribute>

    <attribute name="tracingConfig" type="wstring">
      
    </attribute>

    <attribute name="allowTracingToAccessVM" type="boolean">
      
    </attribute>

    <attribute name="autostartEnabled" type="boolean">
      
    </attribute>

    <attribute name="autostartDelay" type="unsigned long">
      
    </attribute>

    <attribute name="autostopType" type="AutostopType">
      
    </attribute>

    <attribute name="defaultFrontend" type="wstring">
      
    </attribute>

    <attribute name="USBProxyAvailable" type="boolean" readonly="yes">
      
    </attribute>

    <method name="lockMachine">
      
      <param name="session" type="ISession" dir="in">
        
      </param>
      <param name="lockType" type="LockType" dir="in">
        
      </param>
    </method>

    <method name="launchVMProcess">
      
      <param name="session" type="ISession" dir="in">
        
      </param>
      <param name="type" type="wstring" dir="in">
        
      </param>
      <param name="environment" type="wstring" dir="in">
        
      </param>
      <param name="progress" type="IProgress" dir="return">
        
      </param>
    </method>

    <method name="setBootOrder">
      
      <param name="position" type="unsigned long" dir="in">
        
      </param>
      <param name="device" type="DeviceType" dir="in">
        
      </param>
    </method>

    <method name="getBootOrder" const="yes">
      
      <param name="position" type="unsigned long" dir="in">
        
      </param>
      <param name="device" type="DeviceType" dir="return">
        
      </param>
    </method>

    <method name="attachDevice">
      
      <param name="name" type="wstring" dir="in">
        
      </param>
      <param name="controllerPort" type="long" dir="in">
        
      </param>
      <param name="device" type="long" dir="in">
        
      </param>
      <param name="type" type="DeviceType" dir="in">
        
      </param>
      <param name="medium" type="IMedium" dir="in">
        
      </param>
    </method>

  <method name="attachDeviceWithoutMedium">
      
      <param name="name" type="wstring" dir="in">
      
      </param>
      <param name="controllerPort" type="long" dir="in">
      
      </param>
      <param name="device" type="long" dir="in">
      
      </param>
      <param name="type" type="DeviceType" dir="in">
      
      </param>
    </method>

    <method name="detachDevice">
      
      <param name="name" type="wstring" dir="in">
        
      </param>
      <param name="controllerPort" type="long" dir="in">
        
      </param>
      <param name="device" type="long" dir="in">
        
      </param>
    </method>

    <method name="passthroughDevice">
      
      <param name="name" type="wstring" dir="in">
        
      </param>
      <param name="controllerPort" type="long" dir="in">
        
      </param>
      <param name="device" type="long" dir="in">
        
      </param>
      <param name="passthrough" type="boolean" dir="in">
        
      </param>
    </method>

    <method name="temporaryEjectDevice">
      
      <param name="name" type="wstring" dir="in">
        
      </param>
      <param name="controllerPort" type="long" dir="in">
        
      </param>
      <param name="device" type="long" dir="in">
        
      </param>
      <param name="temporaryEject" type="boolean" dir="in">
        
      </param>
    </method>

    <method name="nonRotationalDevice">
      
      <param name="name" type="wstring" dir="in">
        
      </param>
      <param name="controllerPort" type="long" dir="in">
        
      </param>
      <param name="device" type="long" dir="in">
        
      </param>
      <param name="nonRotational" type="boolean" dir="in">
        
      </param>
    </method>

    <method name="setAutoDiscardForDevice">
      
      <param name="name" type="wstring" dir="in">
        
      </param>
      <param name="controllerPort" type="long" dir="in">
        
      </param>
      <param name="device" type="long" dir="in">
        
      </param>
      <param name="discard" type="boolean" dir="in">
        
      </param>
    </method>

    <method name="setHotPluggableForDevice">
      

      <param name="name" type="wstring" dir="in">
        
      </param>
      <param name="controllerPort" type="long" dir="in">
        
      </param>
      <param name="device" type="long" dir="in">
        
      </param>
      <param name="hotPluggable" type="boolean" dir="in">
        
      </param>
    </method>

    <method name="setBandwidthGroupForDevice">
      
      <param name="name" type="wstring" dir="in">
        
      </param>
      <param name="controllerPort" type="long" dir="in">
        
      </param>
      <param name="device" type="long" dir="in">
        
      </param>
      <param name="bandwidthGroup" type="IBandwidthGroup" dir="in">
        
      </param>
    </method>

    <method name="setNoBandwidthGroupForDevice">
      
      <param name="name" type="wstring" dir="in">
      
      </param>
      <param name="controllerPort" type="long" dir="in">
      
      </param>
      <param name="device" type="long" dir="in">
      
      </param>
    </method>


    <method name="unmountMedium">
      

      <param name="name" type="wstring" dir="in">
        
      </param>
      <param name="controllerPort" type="long" dir="in">
        
      </param>
      <param name="device" type="long" dir="in">
        
      </param>
      <param name="force" type="boolean" dir="in">
        
      </param>
    </method>

    <method name="mountMedium">
      
      <param name="name" type="wstring" dir="in">
        
      </param>
      <param name="controllerPort" type="long" dir="in">
        
      </param>
      <param name="device" type="long" dir="in">
        
      </param>
      <param name="medium" type="IMedium" dir="in">
        
      </param>
      <param name="force" type="boolean" dir="in">
        
      </param>
    </method>

    <method name="getMedium" const="yes">
      
      <param name="name" type="wstring" dir="in">
        
      </param>
      <param name="controllerPort" type="long" dir="in">
        
      </param>
      <param name="device" type="long" dir="in">
        
      </param>
      <param name="medium" type="IMedium" dir="return">
        
      </param>
    </method>

    <method name="getMediumAttachmentsOfController" const="yes">
      
      <param name="name" type="wstring" dir="in"/>
      <param name="mediumAttachments" type="IMediumAttachment" safearray="yes" dir="return"/>
    </method>

    <method name="getMediumAttachment" const="yes">
      
      <param name="name" type="wstring" dir="in"/>
      <param name="controllerPort" type="long" dir="in"/>
      <param name="device" type="long" dir="in"/>
      <param name="attachment" type="IMediumAttachment" dir="return"/>
    </method>

    <method name="attachHostPCIDevice">
      
      <param name="hostAddress" type="long" dir="in">
        
      </param>
      <param name="desiredGuestAddress" type="long" dir="in">
        
      </param>
      <param name="tryToUnbind" type="boolean" dir="in">
        
      </param>
    </method>

    <method name="detachHostPCIDevice">
      
      <param name="hostAddress" type="long" dir="in">
        
      </param>
    </method>

    <method name="getNetworkAdapter" const="yes">
      
      <param name="slot" type="unsigned long" dir="in"/>
      <param name="adapter" type="INetworkAdapter" dir="return"/>
    </method>

    <method name="addStorageController">
      
      <param name="name" type="wstring" dir="in"/>
      <param name="connectionType" type="StorageBus" dir="in"/>
      <param name="controller" type="IStorageController" dir="return"/>
    </method>

    <method name="getStorageControllerByName" const="yes">
      
      <param name="name" type="wstring" dir="in"/>
      <param name="storageController" type="IStorageController" dir="return"/>
    </method>

    <method name="getStorageControllerByInstance" const="yes">
      
      <param name="instance" type="unsigned long" dir="in"/>
      <param name="storageController" type="IStorageController" dir="return"/>
    </method>

    <method name="removeStorageController">
      
      <param name="name" type="wstring" dir="in"/>
    </method>

    <method name="setStorageControllerBootable">
      
      <param name="name" type="wstring" dir="in"/>
      <param name="bootable" type="boolean" dir="in"/>
    </method>

    <method name="addUSBController">
      
      <param name="name" type="wstring" dir="in"/>
      <param name="type" type="USBControllerType" dir="in"/>
      <param name="controller" type="IUSBController" dir="return"/>
    </method>

    <method name="removeUSBController">
      
      <param name="name" type="wstring" dir="in"/>
    </method>

    <method name="getUSBControllerByName" const="yes">
      
      <param name="name" type="wstring" dir="in"/>
      <param name="controller" type="IUSBController" dir="return"/>
    </method>

    <method name="getUSBControllerCountByType" const="yes">
      
      <param name="type" type="USBControllerType" dir="in"/>
      <param name="controllers" type="unsigned long" dir="return"/>
    </method>

    <method name="getSerialPort" const="yes">
      
      <param name="slot" type="unsigned long" dir="in"/>
      <param name="port" type="ISerialPort" dir="return"/>
    </method>

    <method name="getParallelPort" const="yes">
      
      <param name="slot" type="unsigned long" dir="in"/>
      <param name="port" type="IParallelPort" dir="return"/>
    </method>

    <method name="getExtraDataKeys">
        
        <param name="keys" type="wstring" dir="return" safearray="yes">
            
        </param>
    </method>

    <method name="getExtraData">
      
      <param name="key" type="wstring" dir="in">
        
      </param>
      <param name="value" type="wstring" dir="return">
        
      </param>
    </method>

    <method name="setExtraData">
      
      <param name="key" type="wstring" dir="in">
        
      </param>
      <param name="value" type="wstring" dir="in">
        
      </param>
    </method>

    <method name="getCPUProperty" const="yes">
      
      <param name="property" type="CPUPropertyType" dir="in">
        
      </param>
      <param name="value" type="boolean" dir="return">
        
      </param>
    </method>

    <method name="setCPUProperty">
      
      <param name="property" type="CPUPropertyType" dir="in">
        
      </param>
      <param name="value" type="boolean" dir="in">
        
      </param>
    </method>

    <method name="getCPUIDLeaf" const="yes">
      
      <param name="id" type="unsigned long" dir="in">
        
      </param>
      <param name="valEax" type="unsigned long" dir="out">
        
      </param>
      <param name="valEbx" type="unsigned long" dir="out">
        
      </param>
      <param name="valEcx" type="unsigned long" dir="out">
        
      </param>
      <param name="valEdx" type="unsigned long" dir="out">
        
      </param>
    </method>

    <method name="setCPUIDLeaf">
      
      <param name="id" type="unsigned long" dir="in">
        
      </param>
      <param name="valEax" type="unsigned long" dir="in">
        
      </param>
      <param name="valEbx" type="unsigned long" dir="in">
        
      </param>
      <param name="valEcx" type="unsigned long" dir="in">
        
      </param>
      <param name="valEdx" type="unsigned long" dir="in">
        
      </param>
    </method>

    <method name="removeCPUIDLeaf">
      
      <param name="id" type="unsigned long" dir="in">
        
      </param>
    </method>

    <method name="removeAllCPUIDLeaves">
      
    </method>

    <method name="getHWVirtExProperty" const="yes">
      
      <param name="property" type="HWVirtExPropertyType" dir="in">
        
      </param>
      <param name="value" type="boolean" dir="return">
        
      </param>
    </method>

    <method name="setHWVirtExProperty">
      
      <param name="property" type="HWVirtExPropertyType" dir="in">
        
      </param>
      <param name="value" type="boolean" dir="in">
        
      </param>
    </method>

    <method name="setSettingsFilePath">
      

      <param name="settingsFilePath" type="wstring" dir="in">
        
      </param>
      <param name="progress" type="IProgress" dir="return">
        
      </param>
    </method>

    <method name="saveSettings">
      
    </method>

    <method name="discardSettings">
      
    </method>

    <method name="unregister">
      

      <param name="cleanupMode" type="CleanupMode" dir="in">
        
      </param>
      <param name="media" type="IMedium" safearray="yes" dir="return">
        
      </param>
    </method>

    <method name="deleteConfig">
      
      <param name="media" type="IMedium" safearray="yes" dir="in">
        
      </param>
      <param name="progress" type="IProgress" dir="return">
        
      </param>
    </method>

    <method name="exportTo">
      

      <param name="appliance" type="IAppliance" dir="in">
        
      </param>
      <param name="location" type="wstring" dir="in">
        
      </param>
      <param name="description" type="IVirtualSystemDescription" dir="return">
        
      </param>
    </method>

    <method name="findSnapshot">
      
      <param name="nameOrId" type="wstring" dir="in">
        
      </param>
      <param name="snapshot" type="ISnapshot" dir="return">
        
      </param>
    </method>

    <method name="createSharedFolder">
      
      <param name="name" type="wstring" dir="in">
        
      </param>
      <param name="hostPath" type="wstring" dir="in">
        
      </param>
      <param name="writable" type="boolean" dir="in">
        
      </param>
      <param name="automount" type="boolean" dir="in">
        
      </param>
    </method>

    <method name="removeSharedFolder">
      
      <param name="name" type="wstring" dir="in">
        
      </param>
    </method>

    <method name="canShowConsoleWindow">
      
      <param name="canShow" type="boolean" dir="return">
        
      </param>
    </method>

    <method name="showConsoleWindow">
      
      <param name="winId" type="long long" dir="return">
        
      </param>
    </method>

    <method name="getGuestProperty" const="yes">
      
      <param name="name" type="wstring" dir="in">
        
      </param>
      <param name="value" type="wstring" dir="out">
        
      </param>
      <param name="timestamp" type="long long" dir="out">
        
      </param>
      <param name="flags" type="wstring" dir="out">
        
      </param>
    </method>

    <method name="getGuestPropertyValue" const="yes">
      
      <param name="property" type="wstring" dir="in">
        
      </param>
      <param name="value" type="wstring" dir="return">
        
      </param>
    </method>

    <method name="getGuestPropertyTimestamp" const="yes">
      
      <param name="property" type="wstring" dir="in">
        
      </param>
      <param name="value" type="long long" dir="return">
        
      </param>
    </method>

    <method name="setGuestProperty">
      
      <param name="property" type="wstring" dir="in">
        
      </param>
      <param name="value" type="wstring" dir="in">
        
      </param>
      <param name="flags" type="wstring" dir="in">
        
      </param>
    </method>

    <method name="setGuestPropertyValue">
      

      <param name="property" type="wstring" dir="in">
        
      </param>
      <param name="value" type="wstring" dir="in">
        
      </param>
    </method>

    <method name="deleteGuestProperty" const="yes">
      
      <param name="name" type="wstring" dir="in">
        
      </param>
    </method>

    <method name="enumerateGuestProperties" const="yes">
      
      <param name="patterns" type="wstring" dir="in">
        
      </param>
      <param name="names" type="wstring" dir="out" safearray="yes">
        
      </param>
      <param name="values" type="wstring" dir="out" safearray="yes">
        
      </param>
      <param name="timestamps" type="long long" dir="out" safearray="yes">
        
      </param>
      <param name="flags" type="wstring" dir="out" safearray="yes">
        
      </param>
    </method>

    <method name="querySavedGuestScreenInfo" const="yes">
      
      <param name="screenId" type="unsigned long" dir="in">
        
      </param>
      <param name="originX" type="unsigned long" dir="out">
        
      </param>
      <param name="originY" type="unsigned long" dir="out">
        
      </param>
      <param name="width" type="unsigned long" dir="out">
        
      </param>
      <param name="height" type="unsigned long" dir="out">
        
      </param>
      <param name="enabled" type="boolean" dir="out">
        
      </param>
    </method>

    <method name="querySavedThumbnailSize">
      
      <param name="screenId" type="unsigned long" dir="in">
        
      </param>
      <param name="size" type="unsigned long" dir="out">
        
      </param>
      <param name="width" type="unsigned long" dir="out">
        
      </param>
      <param name="height" type="unsigned long" dir="out">
        
      </param>
    </method>

    <method name="readSavedThumbnailToArray">
      
      <param name="screenId" type="unsigned long" dir="in">
        
      </param>
      <param name="BGR" type="boolean" dir="in">
        
      </param>
      <param name="width" type="unsigned long" dir="out">
        
      </param>
      <param name="height" type="unsigned long" dir="out">
        
      </param>
      <param name="data" type="octet" safearray="yes" dir="return">
        
      </param>
    </method>

    <method name="readSavedThumbnailPNGToArray">
      
      <param name="screenId" type="unsigned long" dir="in">
        
      </param>
      <param name="width" type="unsigned long" dir="out">
        
      </param>
      <param name="height" type="unsigned long" dir="out">
        
      </param>
      <param name="data" type="octet" dir="return" safearray="yes">
        
      </param>
    </method>

    <method name="querySavedScreenshotPNGSize">
      
      <param name="screenId" type="unsigned long" dir="in">
        
      </param>
      <param name="size" type="unsigned long" dir="out">
        
      </param>
      <param name="width" type="unsigned long" dir="out">
        
      </param>
      <param name="height" type="unsigned long" dir="out">
        
      </param>
    </method>

    <method name="readSavedScreenshotPNGToArray">
      
      <param name="screenId" type="unsigned long" dir="in">
        
      </param>
      <param name="width" type="unsigned long" dir="out">
        
      </param>
      <param name="height" type="unsigned long" dir="out">
        
      </param>
      <param name="data" type="octet" dir="return" safearray="yes">
        
      </param>
    </method>

    <method name="hotPlugCPU">
      
      <param name="cpu" type="unsigned long" dir="in">
        
      </param>
    </method>

    <method name="hotUnplugCPU">
      
      <param name="cpu" type="unsigned long" dir="in">
        
      </param>
    </method>

    <method name="getCPUStatus">
      
      <param name="cpu" type="unsigned long" dir="in">
        
      </param>
      <param name="attached" type="boolean" dir="return">
        
      </param>
    </method>

    <method name="queryLogFilename">
      
      <param name="idx" type="unsigned long" dir="in">
        
      </param>
      <param name="filename" type="wstring" dir="return">
        
      </param>
    </method>

    <method name="readLog">
      
      <param name="idx" type="unsigned long" dir="in">
        
      </param>
      <param name="offset" type="long long" dir="in">
        
      </param>
      <param name="size" type="long long" dir="in">
        
      </param>
      <param name="data" type="octet" dir="return" safearray="yes">
        
      </param>
    </method>

    <method name="cloneTo">
      

      <param name="target" type="IMachine" dir="in">
        
      </param>
      <param name="mode" type="CloneMode" dir="in">
        
      </param>
      <param name="options" type="CloneOptions" dir="in" safearray="yes">
        
      </param>
      <param name="progress" type="IProgress" dir="return">
        
      </param>
    </method>

  </interface>

  <interface name="IEmulatedUSB" extends="$unknown" uuid="38cc4dfd-8bb2-4d40-aebe-699eead8c2dd" wsmap="managed">
    

    <method name="webcamAttach">
      
      <param name="path" type="wstring" dir="in">
        
      </param>
      <param name="settings" type="wstring" dir="in">
        
      </param>
    </method>

    <method name="webcamDetach">
      
      <param name="path" type="wstring" dir="in">
        
      </param>
    </method>

    <attribute name="webcams" type="wstring" safearray="yes" readonly="yes">
      
    </attribute>
  </interface>

  

  <interface name="IVRDEServerInfo" extends="$unknown" uuid="714434a1-58c3-4aab-9049-7652c5df113b" wsmap="struct">
    

    <attribute name="active" type="boolean" readonly="yes">
      
    </attribute>

    <attribute name="port" type="long" readonly="yes">
      
    </attribute>

    <attribute name="numberOfClients" type="unsigned long" readonly="yes">
      
    </attribute>

    <attribute name="beginTime" type="long long" readonly="yes">
      
    </attribute>

    <attribute name="endTime" type="long long" readonly="yes">
      
    </attribute>

    <attribute name="bytesSent" type="long long" readonly="yes">
      
    </attribute>

    <attribute name="bytesSentTotal" type="long long" readonly="yes">
      
    </attribute>

    <attribute name="bytesReceived" type="long long" readonly="yes">
      
    </attribute>

    <attribute name="bytesReceivedTotal" type="long long" readonly="yes">
      
    </attribute>

    <attribute name="user" type="wstring" readonly="yes">
      
    </attribute>

    <attribute name="domain" type="wstring" readonly="yes">
      
    </attribute>

    <attribute name="clientName" type="wstring" readonly="yes">
      
    </attribute>

    <attribute name="clientIP" type="wstring" readonly="yes">
      
    </attribute>

    <attribute name="clientVersion" type="unsigned long" readonly="yes">
      
    </attribute>

    <attribute name="encryptionStyle" type="unsigned long" readonly="yes">
      
    </attribute>

  </interface>

  <interface name="IConsole" extends="$unknown" uuid="8ab7c520-2442-4b66-8d74-4ff1e195d2b6" wsmap="managed">
    

    <attribute name="machine" type="IMachine" readonly="yes">
      
    </attribute>

    <attribute name="state" type="MachineState" readonly="yes">
      
    </attribute>

    <attribute name="guest" type="IGuest" readonly="yes">
      
    </attribute>

    <attribute name="keyboard" type="IKeyboard" readonly="yes">
      
    </attribute>

    <attribute name="mouse" type="IMouse" readonly="yes">
      
    </attribute>

    <attribute name="display" type="IDisplay" readonly="yes">
      
    </attribute>

    <attribute name="debugger" type="IMachineDebugger" readonly="yes">
      
    </attribute>

    <attribute name="USBDevices" type="IUSBDevice" readonly="yes" safearray="yes">
      
    </attribute>

    <attribute name="remoteUSBDevices" type="IHostUSBDevice" readonly="yes" safearray="yes">
      
    </attribute>

    <attribute name="sharedFolders" type="ISharedFolder" readonly="yes" safearray="yes">
      
    </attribute>

    <attribute name="VRDEServerInfo" type="IVRDEServerInfo" readonly="yes">
      
    </attribute>

    <attribute name="eventSource" type="IEventSource" readonly="yes">
      
    </attribute>

    <attribute name="attachedPCIDevices" type="IPCIDeviceAttachment" readonly="yes" safearray="yes">
      
    </attribute>

    <attribute name="useHostClipboard" type="boolean">
      
    </attribute>

    <attribute name="emulatedUSB" type="IEmulatedUSB" readonly="yes">
      
    </attribute>

    <method name="powerUp">
      
      <param name="progress" type="IProgress" dir="return">
        
      </param>
    </method>

    <method name="powerUpPaused">
      
      <param name="progress" type="IProgress" dir="return">
        
      </param>
    </method>

    <method name="powerDown">
      
      <param name="progress" type="IProgress" dir="return">
        
      </param>
    </method>

    <method name="reset">
      
    </method>

    <method name="pause">
      
    </method>

    <method name="resume">
      
    </method>

    <method name="powerButton">
      
    </method>

    <method name="sleepButton">
      
    </method>

    <method name="getPowerButtonHandled">
      
      <param name="handled" type="boolean" dir="return"/>
    </method>

    <method name="getGuestEnteredACPIMode">
      
      <param name="entered" type="boolean" dir="return"/>
    </method>

    <method name="saveState">
      
      <param name="progress" type="IProgress" dir="return">
        
      </param>
    </method>

    <method name="adoptSavedState">
      
      <param name="savedStateFile" type="wstring" dir="in">
        
      </param>
    </method>

    <method name="discardSavedState">
      
      <param name="fRemoveFile" type="boolean" dir="in">
        
      </param>
    </method>

    <method name="getDeviceActivity">
      
      <param name="type" type="DeviceType" dir="in"/>
      <param name="activity" type="DeviceActivity" dir="return"/>
    </method>

    <method name="attachUSBDevice">
      
      <param name="id" type="uuid" mod="string" dir="in">
        
      </param>
    </method>

    <method name="detachUSBDevice">
      
      <param name="id" type="uuid" mod="string" dir="in">
        
      </param>
      <param name="device" type="IUSBDevice" dir="return">
        
      </param>
    </method>

    <method name="findUSBDeviceByAddress">
      
      <param name="name" type="wstring" dir="in">
        
      </param>
      <param name="device" type="IUSBDevice" dir="return">
        
      </param>
    </method>

    <method name="findUSBDeviceById">
      
      <param name="id" type="uuid" mod="string" dir="in">
        
      </param>
      <param name="device" type="IUSBDevice" dir="return">
        
      </param>
    </method>

    <method name="createSharedFolder">
      
      <param name="name" type="wstring" dir="in">
        
      </param>
      <param name="hostPath" type="wstring" dir="in">
        
      </param>
      <param name="writable" type="boolean" dir="in">
        
      </param>
      <param name="automount" type="boolean" dir="in">
        
      </param>
    </method>

    <method name="removeSharedFolder">
      
      <param name="name" type="wstring" dir="in">
        
      </param>
    </method>

    <method name="takeSnapshot">
      
      <param name="name" type="wstring" dir="in">
        
      </param>
      <param name="description" type="wstring" dir="in">
        
      </param>
      <param name="progress" type="IProgress" dir="return">
        
      </param>
    </method>

    <method name="deleteSnapshot">
      
      <param name="id" type="uuid" mod="string" dir="in">
        
      </param>
      <param name="progress" type="IProgress" dir="return">
        
      </param>
    </method>

    <method name="deleteSnapshotAndAllChildren">
      
      <param name="id" type="uuid" mod="string" dir="in">
        
      </param>
      <param name="progress" type="IProgress" dir="return">
        
      </param>
    </method>

    <method name="deleteSnapshotRange">
      
      <param name="startId" type="uuid" mod="string" dir="in">
        
      </param>
      <param name="endId" type="uuid" mod="string" dir="in">
        
      </param>
      <param name="progress" type="IProgress" dir="return">
        
      </param>
    </method>

    <method name="restoreSnapshot">
      
      <param name="snapshot" type="ISnapshot" dir="in">
        
      </param>
      <param name="progress" type="IProgress" dir="return">
        
      </param>
    </method>

    <method name="teleport">
      
      <param name="hostname" type="wstring" dir="in">
        
      </param>
      <param name="tcpport" type="unsigned long" dir="in">
        
      </param>
      <param name="password" type="wstring" dir="in">
        
      </param>
      <param name="maxDowntime" type="unsigned long" dir="in">
        
      </param>
      <param name="progress" type="IProgress" dir="return">
        
      </param>
    </method>

  </interface>

  

  <enum name="HostNetworkInterfaceMediumType" uuid="1aa54aaf-2497-45a2-bfb1-8eb225e93d5b">
    

    <const name="Unknown" value="0">
      
    </const>
    <const name="Ethernet" value="1">
      
    </const>
    <const name="PPP" value="2">
      
    </const>
    <const name="SLIP" value="3">
      
    </const>
  </enum>

  <enum name="HostNetworkInterfaceStatus" uuid="CC474A69-2710-434B-8D99-C38E5D5A6F41">
    

    <const name="Unknown" value="0">
      
    </const>
    <const name="Up" value="1">
      
    </const>
    <const name="Down" value="2">
      
    </const>
  </enum>

  <enum name="HostNetworkInterfaceType" uuid="67431b00-9946-48a2-bc02-b25c5919f4f3">
    
    <const name="Bridged" value="1"/>
    <const name="HostOnly" value="2"/>
  </enum>

  <interface name="IHostNetworkInterface" extends="$unknown" uuid="f6e556f9-d598-409b-898c-8ba99d9b05ae" wsmap="managed">
    
    <attribute name="name" type="wstring" readonly="yes">
      
    </attribute>

    <attribute name="shortName" type="wstring" readonly="yes">
      
    </attribute>

    <attribute name="id" type="uuid" mod="string" readonly="yes">
      
    </attribute>

    <attribute name="networkName" type="wstring" readonly="yes">
      
    </attribute>

    <attribute name="DHCPEnabled" type="boolean" readonly="yes">
      
    </attribute>

    <attribute name="IPAddress" type="wstring" readonly="yes">
      
    </attribute>

    <attribute name="networkMask" type="wstring" readonly="yes">
      
    </attribute>

    <attribute name="IPV6Supported" type="boolean" readonly="yes">
      
    </attribute>

    <attribute name="IPV6Address" type="wstring" readonly="yes">
      
    </attribute>

    <attribute name="IPV6NetworkMaskPrefixLength" type="unsigned long" readonly="yes">
      
    </attribute>

    <attribute name="hardwareAddress" type="wstring" readonly="yes">
      
    </attribute>

    <attribute name="mediumType" type="HostNetworkInterfaceMediumType" readonly="yes">
      
    </attribute>

    <attribute name="status" type="HostNetworkInterfaceStatus" readonly="yes">
      
    </attribute>

    <attribute name="interfaceType" type="HostNetworkInterfaceType" readonly="yes">
      
    </attribute>

    <method name="enableStaticIPConfig">
      
      <param name="IPAddress" type="wstring" dir="in">
        
      </param>
      <param name="networkMask" type="wstring" dir="in">
        
      </param>
    </method>

    <method name="enableStaticIPConfigV6">
      
      <param name="IPV6Address" type="wstring" dir="in">
        
      </param>
      <param name="IPV6NetworkMaskPrefixLength" type="unsigned long" dir="in">
        
      </param>
    </method>

    <method name="enableDynamicIPConfig">
      
    </method>

    <method name="DHCPRediscover">
      
    </method>

  </interface>

  <interface name="IHostVideoInputDevice" extends="$unknown" uuid="a1ceae44-d65e-4156-9359-d390f93ee9a0" wsmap="managed">
    
    <attribute name="name" type="wstring" readonly="yes">
      
    </attribute>

    <attribute name="path" type="wstring" readonly="yes">
      
    </attribute>

    <attribute name="alias" type="wstring" readonly="yes">
      
    </attribute>

  </interface>

  <interface name="IHost" extends="$unknown" uuid="93269330-48ca-4096-b4a2-1189df336267" wsmap="managed">
    
    <attribute name="DVDDrives" type="IMedium" readonly="yes" safearray="yes">
      
    </attribute>

    <attribute name="floppyDrives" type="IMedium" readonly="yes" safearray="yes">
      
    </attribute>

    <attribute name="USBDevices" type="IHostUSBDevice" readonly="yes" safearray="yes">
      
    </attribute>

    <attribute name="USBDeviceFilters" type="IHostUSBDeviceFilter" readonly="yes" safearray="yes">
      
    </attribute>

    <attribute name="networkInterfaces" type="IHostNetworkInterface" safearray="yes" readonly="yes">
      
    </attribute>

    <attribute name="nameServers" type="wstring" safearray="yes" readonly="yes">
      
    </attribute>

    <attribute name="domainName" type="wstring" readonly="yes">
      
    </attribute>

    <attribute name="searchStrings" type="wstring" safearray="yes" readonly="yes">
      
    </attribute>

    <attribute name="processorCount" type="unsigned long" readonly="yes">
      
    </attribute>

    <attribute name="processorOnlineCount" type="unsigned long" readonly="yes">
      
    </attribute>

    <attribute name="processorCoreCount" type="unsigned long" readonly="yes">
      
    </attribute>

    <attribute name="processorOnlineCoreCount" type="unsigned long" readonly="yes">
      
    </attribute>

    <method name="getProcessorSpeed">
      
      <param name="cpuId" type="unsigned long" dir="in">
        
      </param>
      <param name="speed" type="unsigned long" dir="return">
        
      </param>
    </method>

    <method name="getProcessorFeature">
      
      <param name="feature" type="ProcessorFeature" dir="in">
        
      </param>
      <param name="supported" type="boolean" dir="return">
        
      </param>
    </method>

    <method name="getProcessorDescription">
      
      <param name="cpuId" type="unsigned long" dir="in">
        
      </param>
      <param name="description" type="wstring" dir="return">
        
      </param>
    </method>

    <method name="getProcessorCPUIDLeaf">
      
      <param name="cpuId" type="unsigned long" dir="in">
        
      </param>
      <param name="leaf" type="unsigned long" dir="in">
        
      </param>
      <param name="subLeaf" type="unsigned long" dir="in">
        
      </param>
      <param name="valEax" type="unsigned long" dir="out">
        
      </param>
      <param name="valEbx" type="unsigned long" dir="out">
        
      </param>
      <param name="valEcx" type="unsigned long" dir="out">
        
      </param>
      <param name="valEdx" type="unsigned long" dir="out">
        
      </param>
    </method>

    <attribute name="memorySize" type="unsigned long" readonly="yes">
      
    </attribute>

    <attribute name="memoryAvailable" type="unsigned long" readonly="yes">
      
    </attribute>

    <attribute name="operatingSystem" type="wstring" readonly="yes">
      
    </attribute>

    <attribute name="OSVersion" type="wstring" readonly="yes">
      
    </attribute>

    <attribute name="UTCTime" type="long long" readonly="yes">
      
    </attribute>

    <attribute name="acceleration3DAvailable" type="boolean" readonly="yes">
      
    </attribute>

    <method name="createHostOnlyNetworkInterface">
      
      <param name="hostInterface" type="IHostNetworkInterface" dir="out">
        
      </param>
      <param name="progress" type="IProgress" dir="return">
        
      </param>
    </method>

    <method name="removeHostOnlyNetworkInterface">
      
      <param name="id" type="uuid" mod="string" dir="in">
        
      </param>
      <param name="progress" type="IProgress" dir="return">
        
      </param>
    </method>

    <method name="createUSBDeviceFilter">
      
      <param name="name" type="wstring" dir="in">
        
      </param>
      <param name="filter" type="IHostUSBDeviceFilter" dir="return">
        
      </param>
    </method>

    <method name="insertUSBDeviceFilter">
      
      <param name="position" type="unsigned long" dir="in">
        
      </param>
      <param name="filter" type="IHostUSBDeviceFilter" dir="in">
        
      </param>
    </method>

    <method name="removeUSBDeviceFilter">
      
      <param name="position" type="unsigned long" dir="in">
        
      </param>
    </method>

    <method name="findHostDVDDrive">
      
      <param name="name" type="wstring" dir="in">
        
      </param>
      <param name="drive" type="IMedium" dir="return">
        
      </param>
    </method>

    <method name="findHostFloppyDrive">
      
      <param name="name" type="wstring" dir="in">
        
      </param>
      <param name="drive" type="IMedium" dir="return">
        
      </param>
    </method>

    <method name="findHostNetworkInterfaceByName">
      
      <param name="name" type="wstring" dir="in">
        
      </param>
      <param name="networkInterface" type="IHostNetworkInterface" dir="return">
        
      </param>
    </method>
    <method name="findHostNetworkInterfaceById">
      
      <param name="id" type="uuid" mod="string" dir="in">
        
      </param>
      <param name="networkInterface" type="IHostNetworkInterface" dir="return">
        
      </param>
    </method>
    <method name="findHostNetworkInterfacesOfType">
      
      <param name="type" type="HostNetworkInterfaceType" dir="in">
        
      </param>
      <param name="networkInterfaces" type="IHostNetworkInterface" safearray="yes" dir="return">
        
      </param>
    </method>

    <method name="findUSBDeviceById">
      
      <param name="id" type="uuid" mod="string" dir="in">
        
      </param>
      <param name="device" type="IHostUSBDevice" dir="return">
        
      </param>
    </method>

    <method name="findUSBDeviceByAddress">
      
      <param name="name" type="wstring" dir="in">
        
      </param>
      <param name="device" type="IHostUSBDevice" dir="return">
        
      </param>
    </method>

    <method name="generateMACAddress">
      
      <param name="address" type="wstring" dir="return">
        
      </param>
    </method>

    <attribute name="videoInputDevices" type="IHostVideoInputDevice" safearray="yes" readonly="yes">
      
    </attribute>

  </interface>

  

  <interface name="ISystemProperties" extends="$unknown" uuid="1254a96a-ae57-4484-946a-22d86c1f98af" wsmap="managed">
    

    <attribute name="minGuestRAM" type="unsigned long" readonly="yes">
      
    </attribute>

    <attribute name="maxGuestRAM" type="unsigned long" readonly="yes">
      
    </attribute>

    <attribute name="minGuestVRAM" type="unsigned long" readonly="yes">
      
    </attribute>

    <attribute name="maxGuestVRAM" type="unsigned long" readonly="yes">
      
    </attribute>

    <attribute name="minGuestCPUCount" type="unsigned long" readonly="yes">
      
    </attribute>

    <attribute name="maxGuestCPUCount" type="unsigned long" readonly="yes">
      
    </attribute>

    <attribute name="maxGuestMonitors" type="unsigned long" readonly="yes">
      
    </attribute>

    <attribute name="infoVDSize" type="long long" readonly="yes">
      
    </attribute>

    <attribute name="serialPortCount" type="unsigned long" readonly="yes">
      
    </attribute>

    <attribute name="parallelPortCount" type="unsigned long" readonly="yes">
      
    </attribute>

    <attribute name="maxBootPosition" type="unsigned long" readonly="yes">
      
    </attribute>

    <attribute name="exclusiveHwVirt" type="boolean">
      
    </attribute>

    <attribute name="defaultMachineFolder" type="wstring">
      
    </attribute>

    <attribute name="loggingLevel" type="wstring">
      
    </attribute>

    <attribute name="mediumFormats" type="IMediumFormat" safearray="yes" readonly="yes">
      
    </attribute>

    <attribute name="defaultHardDiskFormat" type="wstring">
      
    </attribute>

    <attribute name="freeDiskSpaceWarning" type="long long">
      
    </attribute>

    <attribute name="freeDiskSpacePercentWarning" type="unsigned long">
      
    </attribute>

    <attribute name="freeDiskSpaceError" type="long long">
      
    </attribute>

    <attribute name="freeDiskSpacePercentError" type="unsigned long">
      
    </attribute>

    <attribute name="VRDEAuthLibrary" type="wstring">
      
    </attribute>

    <attribute name="webServiceAuthLibrary" type="wstring">
      
    </attribute>

    <attribute name="defaultVRDEExtPack" type="wstring">
      
    </attribute>

    <attribute name="logHistoryCount" type="unsigned long">
      
    </attribute>

    <attribute name="defaultAudioDriver" type="AudioDriverType" readonly="yes">
      
    </attribute>

    <attribute name="autostartDatabasePath" type="wstring">
      
    </attribute>

    <attribute name="defaultAdditionsISO" type="wstring">
      
    </attribute>

    <attribute name="defaultFrontend" type="wstring">
      
    </attribute>

    <method name="getMaxNetworkAdapters">
      

      <param name="chipset" type="ChipsetType" dir="in">
        
      </param>


      <param name="maxNetworkAdapters" type="unsigned long" dir="return">
        
      </param>

    </method>

    <method name="getMaxNetworkAdaptersOfType">
      

      <param name="chipset" type="ChipsetType" dir="in">
        
      </param>

      <param name="type" type="NetworkAttachmentType" dir="in">
        
      </param>

      <param name="maxNetworkAdapters" type="unsigned long" dir="return">
        
      </param>

    </method>


    <method name="getMaxDevicesPerPortForStorageBus">
      

      <param name="bus" type="StorageBus" dir="in">
        
      </param>

      <param name="maxDevicesPerPort" type="unsigned long" dir="return">
        
      </param>
    </method>

    <method name="getMinPortCountForStorageBus">
      

      <param name="bus" type="StorageBus" dir="in">
        
      </param>

      <param name="minPortCount" type="unsigned long" dir="return">
        
      </param>
    </method>

    <method name="getMaxPortCountForStorageBus">
      

      <param name="bus" type="StorageBus" dir="in">
        
      </param>

      <param name="maxPortCount" type="unsigned long" dir="return">
        
      </param>
    </method>

    <method name="getMaxInstancesOfStorageBus">
      

      <param name="chipset" type="ChipsetType" dir="in">
        
      </param>

      <param name="bus" type="StorageBus" dir="in">
        
      </param>

      <param name="maxInstances" type="unsigned long" dir="return">
        
      </param>
    </method>

    <method name="getDeviceTypesForStorageBus">
      

      <param name="bus" type="StorageBus" dir="in">
        
      </param>

      <param name="deviceTypes" type="DeviceType" safearray="yes" dir="return">
        
      </param>
    </method>

    <method name="getDefaultIoCacheSettingForStorageController">
      

      <param name="controllerType" type="StorageControllerType" dir="in">
        
      </param>

      <param name="enabled" type="boolean" dir="return">
        
      </param>
    </method>

    <method name="getMaxInstancesOfUSBControllerType">
      

      <param name="chipset" type="ChipsetType" dir="in">
        
      </param>

      <param name="type" type="USBControllerType" dir="in">
        
      </param>

      <param name="maxInstances" type="unsigned long" dir="return">
        
      </param>
    </method>
  </interface>

  

  <interface name="IGuestOSType" extends="$unknown" uuid="6d968f9a-858b-4c50-bf17-241f069e94c2" wsmap="struct">
    

    <attribute name="familyId" type="wstring" readonly="yes">
      
    </attribute>

    <attribute name="familyDescription" type="wstring" readonly="yes">
      
    </attribute>

    <attribute name="id" type="wstring" readonly="yes">
      
    </attribute>

    <attribute name="description" type="wstring" readonly="yes">
      
    </attribute>

    <attribute name="is64Bit" type="boolean" readonly="yes">
      
    </attribute>

    <attribute name="recommendedIOAPIC" type="boolean" readonly="yes">
      
    </attribute>

    <attribute name="recommendedVirtEx" type="boolean" readonly="yes">
      
    </attribute>

    <attribute name="recommendedRAM" type="unsigned long" readonly="yes">
      
    </attribute>

    <attribute name="recommendedVRAM" type="unsigned long" readonly="yes">
      
    </attribute>

    <attribute name="recommended2DVideoAcceleration" type="boolean" readonly="yes">
      
    </attribute>

    <attribute name="recommended3DAcceleration" type="boolean" readonly="yes">
      
    </attribute>

    <attribute name="recommendedHDD" type="long long" readonly="yes">
      
    </attribute>

    <attribute name="adapterType" type="NetworkAdapterType" readonly="yes">
      
    </attribute>

    <attribute name="recommendedPAE" type="boolean" readonly="yes">
      
    </attribute>

    <attribute name="recommendedDVDStorageController" type="StorageControllerType" readonly="yes">
      
    </attribute>

    <attribute name="recommendedDVDStorageBus" type="StorageBus" readonly="yes">
      
    </attribute>

    <attribute name="recommendedHDStorageController" type="StorageControllerType" readonly="yes">
      
    </attribute>

    <attribute name="recommendedHDStorageBus" type="StorageBus" readonly="yes">
      
    </attribute>

    <attribute name="recommendedFirmware" type="FirmwareType" readonly="yes">
      
    </attribute>

    <attribute name="recommendedUSBHID" type="boolean" readonly="yes">
      
    </attribute>

    <attribute name="recommendedHPET" type="boolean" readonly="yes">
      
    </attribute>

    <attribute name="recommendedUSBTablet" type="boolean" readonly="yes">
      
    </attribute>

    <attribute name="recommendedRTCUseUTC" type="boolean" readonly="yes">
      
    </attribute>

    <attribute name="recommendedChipset" type="ChipsetType" readonly="yes">
      
    </attribute>

    <attribute name="recommendedAudioController" type="AudioControllerType" readonly="yes">
      
    </attribute>

    <attribute name="recommendedFloppy" type="boolean" readonly="yes">
      
    </attribute>

    <attribute name="recommendedUSB" type="boolean" readonly="yes">
      
    </attribute>

  </interface>

  <enum name="AdditionsFacilityType" uuid="98f7f957-89fb-49b6-a3b1-31e3285eb1d8">
    

    <const name="None" value="0">
      
    </const>
    <const name="VBoxGuestDriver" value="20">
      
    </const>
    <const name="AutoLogon" value="90">
      
    </const>
    <const name="VBoxService" value="100">
      
    </const>
    <const name="VBoxTrayClient" value="101">
      
    </const>
    <const name="Seamless" value="1000">
      
    </const>
    <const name="Graphics" value="1100">
      
    </const>
    <const name="All" value="2147483646">
      
    </const>
  </enum>

  <enum name="AdditionsFacilityClass" uuid="446451b2-c88d-4e5d-84c9-91bc7f533f5f">
    

    <const name="None" value="0">
      
    </const>
    <const name="Driver" value="10">
      
    </const>
    <const name="Service" value="30">
      
    </const>
    <const name="Program" value="50">
      
    </const>
    <const name="Feature" value="100">
      
    </const>
    <const name="ThirdParty" value="999">
      
    </const>
    <const name="All" value="2147483646">
      
    </const>
  </enum>

  <enum name="AdditionsFacilityStatus" uuid="ce06f9e1-394e-4fe9-9368-5a88c567dbde">
    

    <const name="Inactive" value="0">
      
    </const>
    <const name="Paused" value="1">
      
    </const>
    <const name="PreInit" value="20">
      
    </const>
    <const name="Init" value="30">
      
    </const>
    <const name="Active" value="50">
      
    </const>
    <const name="Terminating" value="100">
      
    </const>
    <const name="Terminated" value="101">
      
    </const>
    <const name="Failed" value="800">
      
    </const>
    <const name="Unknown" value="999">
      
    </const>
  </enum>

  <interface name="IAdditionsFacility" extends="$unknown" uuid="54992946-6af1-4e49-98ec-58b558b7291e" wsmap="struct">
    

    <attribute name="classType" type="AdditionsFacilityClass" readonly="yes">
      
    </attribute>

    <attribute name="lastUpdated" type="long long" readonly="yes">
      
    </attribute>

    <attribute name="name" type="wstring" readonly="yes">
      
    </attribute>

    <attribute name="status" type="AdditionsFacilityStatus" readonly="yes">
      
    </attribute>

    <attribute name="type" type="AdditionsFacilityType" readonly="yes">
      
    </attribute>
  </interface>

  <enum name="AdditionsRunLevelType" uuid="a25417ee-a9dd-4f5b-b0dc-377860087754">
    

    <const name="None" value="0">
      
    </const>
    <const name="System" value="1">
      
    </const>
    <const name="Userland" value="2">
      
    </const>
    <const name="Desktop" value="3">
      
    </const>
  </enum>

  <enum name="AdditionsUpdateFlag" uuid="726a818d-18d6-4389-94e8-3e9e6826171a">
    

    <const name="None" value="0">
      
    </const>
    <const name="WaitForUpdateStartOnly" value="1">
      
    </const>
  </enum>

  <enum name="GuestSessionStatus" uuid="ac2669da-4624-44f2-85b5-0b0bfb8d8673">
    
    <const name="Undefined" value="0">
      
    </const>
    <const name="Starting" value="10">
      
    </const>
    <const name="Started" value="100">
      
    </const>
    <const name="Terminating" value="480">
      
    </const>
    <const name="Terminated" value="500">
      
    </const>
    <const name="TimedOutKilled" value="512">
      
    </const>
    <const name="TimedOutAbnormally" value="513">
      
    </const>
    <const name="Down" value="600">
      
    </const>
    <const name="Error" value="800">
      
    </const>
  </enum>

  <enum name="GuestSessionWaitForFlag" uuid="bb7a372a-f635-4e11-a81a-e707f3a52ef5">
    

    <const name="None" value="0">
      
    </const>
    <const name="Start" value="1">
      
    </const>
    <const name="Terminate" value="2">
      
    </const>
    <const name="Status" value="4">
      
    </const>
  </enum>

  <enum name="GuestSessionWaitResult" uuid="c0f6a8a5-fdb6-42bf-a582-56c6f82bcd2d">
    

    <const name="None" value="0">
      
    </const>
    <const name="Start" value="1">
      
    </const>
    <const name="Terminate" value="2">
      
    </const>
    <const name="Status" value="3">
      
    </const>
    <const name="Error" value="4">
      
    </const>
    <const name="Timeout" value="5">
      
    </const>
    <const name="WaitFlagNotSupported" value="6">
      
    </const>
  </enum>

  <enum name="GuestUserState" uuid="b2a82b02-fd3d-4fc2-ba84-6ba5ac8be198">
    

    <const name="Unknown" value="0">
      
    </const>
    <const name="LoggedIn" value="1">
      
    </const>
    <const name="LoggedOut" value="2">
      
    </const>
    <const name="Locked" value="3">
      
    </const>
    <const name="Unlocked" value="4">
      
    </const>
    <const name="Disabled" value="5">
      
    </const>
    <const name="Idle" value="6">
      
    </const>
    <const name="InUse" value="7">
      
    </const>
    <const name="Created" value="8">
      
    </const>
    <const name="Deleted" value="9">
      
    </const>
    <const name="SessionChanged" value="10">
      
    </const>
    <const name="CredentialsChanged" value="11">
      
    </const>
    <const name="RoleChanged" value="12">
      
    </const>
    <const name="GroupAdded" value="13">
      
    </const>
    <const name="GroupRemoved" value="14">
      
    </const>
    <const name="Elevated" value="15">
      
    </const>
  </enum>

  <enum name="FileSeekType" uuid="1b73f4f3-3515-4073-a506-76878d9e2541">
    

    <const name="Set" value="0">
      
    </const>
    <const name="Current" value="1">
      
    </const>
  </enum>

  <enum name="ProcessInputFlag" uuid="5d38c1dd-2604-4ddf-92e5-0c0cdd3bdbd5">
    
    <const name="None" value="0">
      
    </const>
    <const name="EndOfFile" value="1">
      
    </const>
  </enum>

  <enum name="ProcessOutputFlag" uuid="9979e85a-52bb-40b7-870c-57115e27e0f1">
    
    <const name="None" value="0">
      
    </const>
    <const name="StdErr" value="1">
      
    </const>
  </enum>

  <enum name="ProcessWaitForFlag" uuid="23b550c7-78e1-437e-98f0-65fd9757bcd2">
    

    <const name="None" value="0">
      
    </const>
    <const name="Start" value="1">
      
    </const>
    <const name="Terminate" value="2">
      
    </const>
    <const name="StdIn" value="4">
      
    </const>
    <const name="StdOut" value="8">
      
    </const>
    <const name="StdErr" value="16">
      
    </const>
  </enum>

  <enum name="ProcessWaitResult" uuid="40719cbe-f192-4fe9-a231-6697b3c8e2b4">
    

    <const name="None" value="0">
      
    </const>
    <const name="Start" value="1">
      
    </const>
    <const name="Terminate" value="2">
      
    </const>
    <const name="Status" value="3">
      
    </const>
    <const name="Error" value="4">
      
    </const>
    <const name="Timeout" value="5">
      
    </const>
    <const name="StdIn" value="6">
      
    </const>
    <const name="StdOut" value="7">
      
    </const>
    <const name="StdErr" value="8">
      
    </const>
    <const name="WaitFlagNotSupported" value="9">
      
    </const>
  </enum>

  <enum name="CopyFileFlag" uuid="23f79fdf-738a-493d-b80b-42d607c9b916">
    
    <const name="None" value="0">
      
    </const>
    <const name="Recursive" value="1">
      
    </const>
    <const name="Update" value="2">
      
    </const>
    <const name="FollowLinks" value="4">
      
    </const>
  </enum>

  <enum name="DirectoryCreateFlag" uuid="bd721b0e-ced5-4f79-b368-249897c32a36">
    
    <const name="None" value="0">
      
    </const>
    <const name="Parents" value="1">
      
    </const>
  </enum>

  <enum name="DirectoryRemoveRecFlag" uuid="455aabf0-7692-48f6-9061-f21579b65769">
    

    <const name="None" value="0">
      
    </const>
    <const name="ContentAndDir" value="1">
      
    </const>
    <const name="ContentOnly" value="2">
      
    </const>
  </enum>

  <enum name="PathRenameFlag" uuid="f3baa09f-c758-453d-b91c-c7787d76351d">
    

    <const name="None" value="0">
      
    </const>
    <const name="NoReplace" value="1">
      
    </const>
    <const name="Replace" value="2">
      
    </const>
    <const name="NoSymlinks" value="4">
      
    </const>
  </enum>

  <enum name="ProcessCreateFlag" uuid="35192799-bfde-405d-9bea-c735ab9998e4">
    

    <const name="None" value="0">
      
    </const>
    <const name="WaitForProcessStartOnly" value="1">
      
    </const>
    <const name="IgnoreOrphanedProcesses" value="2">
      
    </const>
    <const name="Hidden" value="4">
      
    </const>
    <const name="NoProfile" value="8">
      
    </const>
    <const name="WaitForStdOut" value="16">
      
    </const>
    <const name="WaitForStdErr" value="32">
      
    </const>
    <const name="ExpandArguments" value="64">
      
    </const>
    <const name="UnquotedArguments" value="128">
      
    </const>
  </enum>

  <enum name="ProcessPriority" uuid="ee8cac50-e232-49fe-806b-d1214d9c2e49">
    

    <const name="Invalid" value="0">
      
    </const>
    <const name="Default" value="1">
      
    </const>
  </enum>

  <enum name="SymlinkType" uuid="37794668-f8f1-4714-98a5-6f8fa2ed0118">
    

    <const name="Unknown" value="0">
      
    </const>
    <const name="Directory" value="1">
      
    </const>
    <const name="File" value="2">
      
    </const>
  </enum>

  <enum name="SymlinkReadFlag" uuid="b7fe2b9d-790e-4b25-8adf-1ca33026931f">
    

    <const name="None" value="0">
      
    </const>
    <const name="NoSymlinks" value="1">
      
    </const>
  </enum>

  <enum name="ProcessStatus" uuid="4d52368f-5b48-4bfe-b486-acf89139b52f">
    

    <const name="Undefined" value="0">
      
    </const>
    <const name="Starting" value="10">
      
    </const>
    <const name="Started" value="100">
      
    </const>
    <const name="Paused" value="110">
      
    </const>
    <const name="Terminating" value="480">
      
    </const>
    <const name="TerminatedNormally" value="500">
      
    </const>
    <const name="TerminatedSignal" value="510">
      
    </const>
    <const name="TerminatedAbnormally" value="511">
      
    </const>
     <const name="TimedOutKilled" value="512">
      
    </const>
    <const name="TimedOutAbnormally" value="513">
      
    </const>
    <const name="Down" value="600">
      
    </const>
    <const name="Error" value="800">
      
    </const>
  </enum>

  <enum name="ProcessInputStatus" uuid="a4a0ef9c-29cc-4805-9803-c8215ae9da6c">
    

    <const name="Undefined" value="0">
      
    </const>
    <const name="Broken" value="1">
      
    </const>
    <const name="Available" value="10">
      
    </const>
    <const name="Written" value="50">
      
    </const>
    <const name="Overflow" value="100">
      
    </const>
  </enum>

  <enum name="FileStatus" uuid="8c86468b-b97b-4080-8914-e29f5b0abd2c">
    

    <const name="Undefined" value="0">
      
    </const>
    <const name="Opening" value="10">
      
    </const>
    <const name="Open" value="100">
      
    </const>
    <const name="Closing" value="150">
      
    </const>
    <const name="Closed" value="200">
      
    </const>
    <const name="Down" value="600">
      
    </const>
    <const name="Error" value="800">
      
    </const>
  </enum>

  <enum name="FsObjType" uuid="a1ed437c-b3c3-4ca2-b19c-4239d658d5e8">
    

    <const name="Undefined" value="0">
      
    </const>
    <const name="FIFO" value="1">
      
    </const>
    <const name="DevChar" value="10">
      
    </const>
    <const name="DevBlock" value="11">
      
    </const>
    <const name="Directory" value="50">
      
    </const>
    <const name="File" value="80">
      
    </const>
    <const name="Symlink" value="100">
      
    </const>
    <const name="Socket" value="200">
      
    </const>
    <const name="Whiteout" value="400">
      
    </const>
  </enum>

  <enum name="DragAndDropAction" uuid="47f3b162-c107-4fcd-bfa7-54b8135c441e">
    

    <const name="Ignore" value="0">
      
    </const>

    <const name="Copy" value="1">
      
    </const>

    <const name="Move" value="2">
      
    </const>

    <const name="Link" value="3">
      
    </const>
  </enum>

  <enum name="DirectoryOpenFlag" uuid="5138837a-8fd2-4194-a1b0-08f7bc3949d0">
    
    <const name="None" value="0">
      
    </const>
    <const name="NoSymlinks" value="1">
      
    </const>
  </enum>

  <interface name="IGuestSession" extends="$unknown" uuid="5b28703c-07b6-4fcb-afba-ac199b309752" wsmap="managed">
    

    <attribute name="user" type="wstring" readonly="yes">
      
    </attribute>
    <attribute name="domain" type="wstring" readonly="yes">
      
    </attribute>
    <attribute name="name" type="wstring" readonly="yes">
      
    </attribute>
    <attribute name="id" type="unsigned long" readonly="yes">
      
    </attribute>
    <attribute name="timeout" type="unsigned long">
      
    </attribute>
    <attribute name="protocolVersion" type="unsigned long" readonly="yes">
      
    </attribute>
    <attribute name="status" type="GuestSessionStatus" readonly="yes">
      
    </attribute>
    <attribute name="environment" type="wstring" safearray="yes">
      
    </attribute>
    <attribute name="processes" type="IGuestProcess" readonly="yes" safearray="yes">
      
    </attribute>
    <attribute name="directories" type="IGuestDirectory" readonly="yes" safearray="yes">
      
    </attribute>
    <attribute name="files" type="IGuestFile" readonly="yes" safearray="yes">
      
    </attribute>
    <attribute name="eventSource" type="IEventSource" readonly="yes">
      
    </attribute>

    <method name="close">
      
    </method>

    <method name="copyFrom">
      
      <param name="source" type="wstring" dir="in">
        
      </param>
      <param name="dest" type="wstring" dir="in">
        
      </param>
      <param name="flags" type="CopyFileFlag" dir="in" safearray="yes">
        
      </param>
      <param name="progress" type="IProgress" dir="return">
        
      </param>
    </method>

    <method name="copyTo">
      
      <param name="source" type="wstring" dir="in">
        
      </param>
      <param name="dest" type="wstring" dir="in">
        
      </param>
      <param name="flags" type="CopyFileFlag" dir="in" safearray="yes">
        
      </param>
      <param name="progress" type="IProgress" dir="return">
        
      </param>
    </method>

    <method name="directoryCreate">
      
      <param name="path" type="wstring" dir="in">
        
      </param>
      <param name="mode" type="unsigned long" dir="in">
        
      </param>
      <param name="flags" type="DirectoryCreateFlag" dir="in" safearray="yes">
        
      </param>
    </method>

    <method name="directoryCreateTemp">
      
      <param name="templateName" type="wstring" dir="in">
        
      </param>
      <param name="mode" type="unsigned long" dir="in">
        
      </param>
      <param name="path" type="wstring" dir="in">
        
      </param>
      <param name="secure" type="boolean" dir="in">
        
      </param>
      <param name="directory" type="wstring" dir="return">
        
      </param>
    </method>

    <method name="directoryExists">
      
      <param name="path" type="wstring" dir="in">
        
      </param>
      <param name="exists" type="boolean" dir="return">
        
      </param>
    </method>

    <method name="directoryOpen">
      
      <param name="path" type="wstring" dir="in">
        
      </param>
      <param name="filter" type="wstring" dir="in">
        
      </param>
      <param name="flags" type="DirectoryOpenFlag" dir="in" safearray="yes">
        
      </param>
      <param name="directory" type="IGuestDirectory" dir="return">
        
      </param>
    </method>

    <method name="directoryQueryInfo">
      
      <param name="path" type="wstring" dir="in">
        
      </param>
      <param name="info" type="IGuestFsObjInfo" dir="return">
        
      </param>
    </method>

    <method name="directoryRemove">
      
      <param name="path" type="wstring" dir="in">
        
      </param>
    </method>

    <method name="directoryRemoveRecursive">
      
      <param name="path" type="wstring" dir="in">
        
      </param>
      <param name="flags" type="DirectoryRemoveRecFlag" dir="in" safearray="yes">
        
      </param>
      <param name="progress" type="IProgress" dir="return">
        
      </param>
    </method>

    <method name="directoryRename">
      
      <param name="source" type="wstring" dir="in">
        
      </param>
      <param name="dest" type="wstring" dir="in">
        
      </param>
      <param name="flags" type="PathRenameFlag" dir="in" safearray="yes">
        
      </param>
    </method>

    <method name="directorySetACL">
      
      <param name="path" type="wstring" dir="in">
        
      </param>
      <param name="acl" type="wstring" dir="in">
        
      </param>
    </method>

    <method name="environmentClear">
      
    </method>

    <method name="environmentGet">
      
      <param name="name" type="wstring" dir="in">
        
      </param>
      <param name="value" type="wstring" dir="return">
        
      </param>
    </method>

    <method name="environmentSet">
      
      <param name="name" type="wstring" dir="in">
        
      </param>
      <param name="value" type="wstring" dir="in">
        
      </param>
    </method>

    <method name="environmentUnset">
      
      <param name="name" type="wstring" dir="in">
        
      </param>
    </method>

    <method name="fileCreateTemp">
      
      <param name="templateName" type="wstring" dir="in">
        
      </param>
      <param name="mode" type="unsigned long" dir="in">
        
      </param>
      <param name="path" type="wstring" dir="in">
        
      </param>
      <param name="secure" type="boolean" dir="in">
        
      </param>
      <param name="file" type="IGuestFile" dir="return">
        
      </param>
    </method>

    <method name="fileExists">
      
      <param name="path" type="wstring" dir="in">
        
      </param>
      <param name="exists" type="boolean" dir="return">
        
      </param>
    </method>

    <method name="fileRemove">
      
      <param name="path" type="wstring" dir="in">
        
      </param>
    </method>

    <method name="fileOpen">
      
      <param name="path" type="wstring" dir="in">
        
      </param>
      <param name="openMode" type="wstring" dir="in">
        
      </param>
      <param name="disposition" type="wstring" dir="in">
        
      </param>
      <param name="creationMode" type="unsigned long" dir="in">
        
      </param>
      <param name="file" type="IGuestFile" dir="return">
        
      </param>
    </method>

    <method name="fileOpenEx">
      
      <param name="path" type="wstring" dir="in">
        
      </param>
      <param name="openMode" type="wstring" dir="in">
        
      </param>
      <param name="disposition" type="wstring" dir="in">
        
      </param>
      <param name="sharingMode" type="wstring" dir="in">
        
      </param>
      <param name="creationMode" type="unsigned long" dir="in">
        
      </param>
      <param name="offset" type="long long" dir="in">
        
      </param>
      <param name="file" type="IGuestFile" dir="return">
        
      </param>
    </method>

    <method name="fileQueryInfo">
      
      <param name="path" type="wstring" dir="in">
        
      </param>
      <param name="info" type="IGuestFsObjInfo" dir="return">
        
      </param>
    </method>

    <method name="fileQuerySize">
      
      <param name="path" type="wstring" dir="in">
        
      </param>
      <param name="size" type="long long" dir="return">
        
      </param>
    </method>

    <method name="fileRename">
      
      <param name="source" type="wstring" dir="in">
        
      </param>
      <param name="dest" type="wstring" dir="in">
        
      </param>
      <param name="flags" type="PathRenameFlag" dir="in" safearray="yes">
        
      </param>
    </method>

    <method name="fileSetACL">
      
      <param name="file" type="wstring" dir="in">
        
      </param>
      <param name="acl" type="wstring" dir="in">
        
      </param>
    </method>

    <method name="processCreate">
      
      <param name="command" type="wstring" dir="in">
        
      </param>
      <param name="arguments" type="wstring" dir="in" safearray="yes">
        
      </param>
      <param name="environment" type="wstring" dir="in" safearray="yes">
        
      </param>
      <param name="flags" type="ProcessCreateFlag" dir="in" safearray="yes">
        
      </param>
      <param name="timeoutMS" type="unsigned long" dir="in">
        
      </param>
      <param name="guestProcess" type="IGuestProcess" dir="return">
        
      </param>
    </method>

    <method name="processCreateEx">
      
      <param name="command" type="wstring" dir="in">
        
      </param>
      <param name="arguments" type="wstring" dir="in" safearray="yes">
        
      </param>
      <param name="environment" type="wstring" dir="in" safearray="yes">
        
      </param>
      <param name="flags" type="ProcessCreateFlag" dir="in" safearray="yes">
        
      </param>
      <param name="timeoutMS" type="unsigned long" dir="in">
        
      </param>
      <param name="priority" type="ProcessPriority" dir="in">
        
      </param>
      <param name="affinity" type="long" dir="in" safearray="yes">
        
      </param>
      <param name="guestProcess" type="IGuestProcess" dir="return">
        
      </param>
    </method>

    <method name="processGet">
      
      <param name="pid" type="unsigned long" dir="in">
        
      </param>
      <param name="guestProcess" type="IGuestProcess" dir="return">
        
      </param>
    </method>

    <method name="symlinkCreate">
      
      <param name="source" type="wstring" dir="in">
        
      </param>
      <param name="target" type="wstring" dir="in">
        
      </param>
      <param name="type" type="SymlinkType" dir="in">
        
      </param>
    </method>

    <method name="symlinkExists">
      
      <param name="symlink" type="wstring" dir="in">
        
      </param>
      <param name="exists" type="boolean" dir="return">
        
      </param>
    </method>

    <method name="symlinkRead">
      
      <param name="symlink" type="wstring" dir="in">
        
      </param>
      <param name="flags" type="SymlinkReadFlag" dir="in" safearray="yes">
        
      </param>
      <param name="target" type="wstring" dir="return">
        
      </param>
    </method>

    <method name="symlinkRemoveDirectory">
      
      <param name="path" type="wstring" dir="in">
        
      </param>
    </method>

    <method name="symlinkRemoveFile">
      
      <param name="file" type="wstring" dir="in">
        
      </param>
    </method>

    <method name="waitFor">
      
      <param name="waitFor" type="unsigned long" dir="in">
        
      </param>
      <param name="timeoutMS" type="unsigned long" dir="in">
        
      </param>
      <param name="reason" type="GuestSessionWaitResult" dir="return">
        
      </param>
    </method>

    <method name="waitForArray">
      
      <param name="waitFor" type="GuestSessionWaitForFlag" dir="in" safearray="yes">
        
      </param>
      <param name="timeoutMS" type="unsigned long" dir="in">
        
      </param>
      <param name="reason" type="GuestSessionWaitResult" dir="return">
        
      </param>
    </method>

  </interface>

  <interface name="IProcess" extends="$unknown" uuid="5a4fe06d-8cb1-40ff-ac9e-9676e32f706e" wsmap="managed">
    

    <attribute name="arguments" type="wstring" readonly="yes" safearray="yes">
      
    </attribute>
    <attribute name="environment" type="wstring" readonly="yes" safearray="yes">
      
    </attribute>
    <attribute name="eventSource" type="IEventSource" readonly="yes">
      
    </attribute>
    <attribute name="executablePath" type="wstring" readonly="yes">
      
    </attribute>
    <attribute name="exitCode" type="long" readonly="yes">
      
    </attribute>
    <attribute name="name" type="wstring" readonly="yes">
      
    </attribute>
    <attribute name="PID" type="unsigned long" readonly="yes">
      
    </attribute>
    <attribute name="status" type="ProcessStatus" readonly="yes">
      
    </attribute>

    <method name="waitFor">
      
      <param name="waitFor" type="unsigned long" dir="in">
        
      </param>
      <param name="timeoutMS" type="unsigned long" dir="in">
        
      </param>
      <param name="reason" type="ProcessWaitResult" dir="return">
        
      </param>
    </method>

    <method name="waitForArray">
      
      <param name="waitFor" type="ProcessWaitForFlag" dir="in" safearray="yes">
        
      </param>
      <param name="timeoutMS" type="unsigned long" dir="in">
        
      </param>
      <param name="reason" type="ProcessWaitResult" dir="return">
        
      </param>
    </method>

    <method name="read">
      
      <param name="handle" type="unsigned long" dir="in">
        
      </param>
      <param name="toRead" type="unsigned long" dir="in">
        
      </param>
      <param name="timeoutMS" type="unsigned long" dir="in">
        
      </param>
      <param name="data" type="octet" dir="return" safearray="yes">
        
      </param>
    </method>

    <method name="write">
      
      <param name="handle" type="unsigned long" dir="in">
        
      </param>
      <param name="flags" type="unsigned long" dir="in">
        
      </param>
      <param name="data" type="octet" dir="in" safearray="yes">
        
      </param>
      <param name="timeoutMS" type="unsigned long" dir="in">
        
      </param>
      <param name="written" type="unsigned long" dir="return">
        
      </param>
    </method>

    <method name="writeArray">
      
      <param name="handle" type="unsigned long" dir="in">
        
      </param>
      <param name="flags" type="ProcessInputFlag" dir="in" safearray="yes">
        
      </param>
      <param name="data" type="octet" dir="in" safearray="yes">
        
      </param>
      <param name="timeoutMS" type="unsigned long" dir="in">
        
      </param>
      <param name="written" type="unsigned long" dir="return">
        
      </param>
    </method>

    <method name="terminate">
      
    </method>
  </interface>

  <interface name="IGuestProcess" extends="IProcess" uuid="dfa39a36-5d43-4840-a025-67ea956b3111" wsmap="managed">
    
  </interface>

  <interface name="IDirectory" extends="$unknown" uuid="1b70dd03-26d7-483a-8877-89bbb0f87b70" wsmap="managed">
    

    <attribute name="directoryName" type="wstring" readonly="yes">
      
    </attribute>

    <attribute name="filter" type="wstring" readonly="yes">
      
    </attribute>

    <method name="close">
      
    </method>

    <method name="read">
      
      <param name="objInfo" type="IFsObjInfo" dir="return">
        
      </param>
    </method>
  </interface>

  <interface name="IGuestDirectory" extends="IDirectory" uuid="af4a8ce0-0725-42b7-8826-46e3c7ba7357" wsmap="managed">
    
  </interface>

  <interface name="IFile" extends="$unknown" uuid="5ec56ea3-b55d-4bdb-8c4f-5f9fb26b894b" wsmap="managed">
    
    <attribute name="creationMode" type="unsigned long" readonly="yes">
      
    </attribute>
    <attribute name="disposition" type="wstring" readonly="yes">
      
    </attribute>
    <attribute name="eventSource" type="IEventSource" readonly="yes">
      
    </attribute>
    <attribute name="fileName" type="wstring" readonly="yes">
      
    </attribute>
    <attribute name="id" type="unsigned long" readonly="yes">
      
    </attribute>
    <attribute name="initialSize" type="long long" readonly="yes">
      
    </attribute>
    <attribute name="openMode" type="wstring" readonly="yes">
      
    </attribute>
    <attribute name="offset" type="long long" readonly="yes">
      
    </attribute>
    <attribute name="status" type="FileStatus" readonly="yes">
      
    </attribute>

    <method name="close">
      
    </method>

    <method name="queryInfo">
      
      <param name="objInfo" type="IFsObjInfo" dir="return">
        
      </param>
    </method>

    <method name="read">
      
      <param name="toRead" type="unsigned long" dir="in">
        
      </param>
      <param name="timeoutMS" type="unsigned long" dir="in">
        
      </param>
      <param name="data" type="octet" dir="return" safearray="yes">
        
      </param>
    </method>

    <method name="readAt">
      
      <param name="offset" type="long long" dir="in">
        
      </param>
      <param name="toRead" type="unsigned long" dir="in">
        
      </param>
      <param name="timeoutMS" type="unsigned long" dir="in">
        
      </param>
      <param name="data" type="octet" dir="return" safearray="yes">
        
      </param>
    </method>

    <method name="seek">
      
      <param name="offset" type="long long" dir="in">
        
      </param>
      <param name="whence" type="FileSeekType" dir="in">
        
      </param>
    </method>

    <method name="setACL">
      
      <param name="acl" type="wstring" dir="in">
        
      </param>
    </method>

    <method name="write">
      
      <param name="data" type="octet" dir="in" safearray="yes">
        
      </param>
      <param name="timeoutMS" type="unsigned long" dir="in">
        
      </param>
      <param name="written" type="unsigned long" dir="return">
        
      </param>
    </method>

    <method name="writeAt">
      
      <param name="offset" type="long long" dir="in">
        
      </param>
      <param name="data" type="octet" dir="in" safearray="yes">
        
      </param>
      <param name="timeoutMS" type="unsigned long" dir="in">
        
      </param>
      <param name="written" type="unsigned long" dir="return">
        
      </param>
    </method>

  </interface>

  <interface name="IGuestFile" extends="IFile" uuid="60661aec-145f-4d11-b80e-8ea151598093" wsmap="managed">
    
  </interface>

  <interface name="IFsObjInfo" extends="$unknown" uuid="4047ba30-7006-4966-ae86-94164e5e20eb" wsmap="managed">
    

    <attribute name="accessTime" type="long long" readonly="yes">
      
    </attribute>
    <attribute name="allocatedSize" type="long long" readonly="yes">
      
    </attribute>
    <attribute name="birthTime" type="long long" readonly="yes">
      
    </attribute>
        <attribute name="changeTime" type="long long" readonly="yes">
      
    </attribute>
    <attribute name="deviceNumber" type="unsigned long" readonly="yes">
      
    </attribute>
    <attribute name="fileAttributes" type="wstring" readonly="yes">
      
    </attribute>
    <attribute name="generationId" type="unsigned long" readonly="yes">
      
    </attribute>
    <attribute name="GID" type="unsigned long" readonly="yes">
      
    </attribute>
    <attribute name="groupName" type="wstring" readonly="yes">
      
    </attribute>
    <attribute name="hardLinks" type="unsigned long" readonly="yes">
      
    </attribute>
    <attribute name="modificationTime" type="long long" readonly="yes">
      
    </attribute>
    <attribute name="name" type="wstring" readonly="yes">
      
    </attribute>
    <attribute name="nodeId" type="long long" readonly="yes">
      
    </attribute>
    <attribute name="nodeIdDevice" type="unsigned long" readonly="yes">
      
    </attribute>
    <attribute name="objectSize" type="long long" readonly="yes">
      
    </attribute>
    <attribute name="type" type="FsObjType" readonly="yes">
      
    </attribute>
    <attribute name="UID" type="unsigned long" readonly="yes">
      
    </attribute>
    <attribute name="userFlags" type="unsigned long" readonly="yes">
      
    </attribute>
    <attribute name="userName" type="wstring" readonly="yes">
      
    </attribute>

  </interface>

  <interface name="IGuestFsObjInfo" extends="IFsObjInfo" uuid="d5cf678e-3484-4e4a-ac55-329e15462e18" wsmap="managed">
    
  </interface>

  <interface name="IGuest" extends="$unknown" uuid="8011a1b1-6adb-4ffb-a37e-20abdaee4650" wsmap="managed">
    

    <attribute name="OSTypeId" type="wstring" readonly="yes">
      
    </attribute>

    <attribute name="additionsRunLevel" type="AdditionsRunLevelType" readonly="yes">
      
    </attribute>

    <attribute name="additionsVersion" type="wstring" readonly="yes">
      
    </attribute>

    <attribute name="additionsRevision" type="unsigned long" readonly="yes">
      
    </attribute>

    <attribute name="eventSource" type="IEventSource" readonly="yes">
      
    </attribute>

    <attribute name="facilities" type="IAdditionsFacility" readonly="yes" safearray="yes">
      
    </attribute>

    <attribute name="sessions" type="IGuestSession" readonly="yes" safearray="yes">
      
    </attribute>

    <attribute name="memoryBalloonSize" type="unsigned long">
      
    </attribute>

    <attribute name="statisticsUpdateInterval" type="unsigned long">
      
    </attribute>

    <method name="internalGetStatistics">
      
      <param name="cpuUser" type="unsigned long" dir="out">
        
      </param>
      <param name="cpuKernel" type="unsigned long" dir="out">
        
      </param>
      <param name="cpuIdle" type="unsigned long" dir="out">
        
      </param>
      <param name="memTotal" type="unsigned long" dir="out">
        
      </param>
      <param name="memFree" type="unsigned long" dir="out">
        
      </param>
      <param name="memBalloon" type="unsigned long" dir="out">
        
      </param>
      <param name="memShared" type="unsigned long" dir="out">
        
      </param>
      <param name="memCache" type="unsigned long" dir="out">
        
      </param>
      <param name="pagedTotal" type="unsigned long" dir="out">
        
      </param>
      <param name="memAllocTotal" type="unsigned long" dir="out">
        
      </param>
      <param name="memFreeTotal" type="unsigned long" dir="out">
        
      </param>
      <param name="memBalloonTotal" type="unsigned long" dir="out">
        
      </param>
      <param name="memSharedTotal" type="unsigned long" dir="out">
        
      </param>
    </method>

    <method name="getFacilityStatus">
      
      <param name="facility" type="AdditionsFacilityType" dir="in">
        
      </param>
      <param name="timestamp" type="long long" dir="out">
        
      </param>
      <param name="status" type="AdditionsFacilityStatus" dir="return">
        
      </param>
    </method>

    <method name="getAdditionsStatus">
      
      <param name="level" type="AdditionsRunLevelType" dir="in">
        
      </param>
      <param name="active" type="boolean" dir="return">
        
      </param>
    </method>

    <method name="setCredentials">
      
      <param name="userName" type="wstring" dir="in">
        
      </param>
      <param name="password" type="wstring" dir="in">
        
      </param>
      <param name="domain" type="wstring" dir="in">
        
      </param>
      <param name="allowInteractiveLogon" type="boolean" dir="in">
        
      </param>
    </method>

    <method name="dragHGEnter">
      
      <param name="screenId" type="unsigned long" dir="in">
        
      </param>
      <param name="y" type="unsigned long" dir="in">
        
      </param>
      <param name="x" type="unsigned long" dir="in">
        
      </param>
      <param name="defaultAction" type="DragAndDropAction" dir="in">
        
      </param>
      <param name="allowedActions" type="DragAndDropAction" dir="in" safearray="yes">
        
      </param>
      <param name="formats" type="wstring" dir="in" safearray="yes">
        
      </param>
      <param name="resultAction" type="DragAndDropAction" dir="return">
        
      </param>
    </method>

    <method name="dragHGMove">
      
      <param name="screenId" type="unsigned long" dir="in">
        
      </param>
      <param name="x" type="unsigned long" dir="in">
        
      </param>
      <param name="y" type="unsigned long" dir="in">
        
      </param>
      <param name="defaultAction" type="DragAndDropAction" dir="in">
        
      </param>
      <param name="allowedActions" type="DragAndDropAction" dir="in" safearray="yes">
        
      </param>
      <param name="formats" type="wstring" dir="in" safearray="yes">
        
      </param>
      <param name="resultAction" type="DragAndDropAction" dir="return">
        
      </param>
    </method>

    <method name="dragHGLeave">
      
      <param name="screenId" type="unsigned long" dir="in">
        
      </param>
    </method>

    <method name="dragHGDrop">
      
      <param name="screenId" type="unsigned long" dir="in">
        
      </param>
      <param name="x" type="unsigned long" dir="in">
        
      </param>
      <param name="y" type="unsigned long" dir="in">
        
      </param>
      <param name="defaultAction" type="DragAndDropAction" dir="in">
        
      </param>
      <param name="allowedActions" type="DragAndDropAction" dir="in" safearray="yes">
        
      </param>
      <param name="formats" type="wstring" dir="in" safearray="yes">
        
      </param>
      <param name="format" type="wstring" dir="out">
        
      </param>
      <param name="resultAction" type="DragAndDropAction" dir="return">
        
      </param>
    </method>

    <method name="dragHGPutData">
      
      <param name="screenId" type="unsigned long" dir="in">
        
      </param>
      <param name="format" type="wstring" dir="in">
        
      </param>
      <param name="data" type="octet" dir="in" safearray="yes">
        
      </param>
      <param name="progress" type="IProgress" dir="return">
        
      </param>
    </method>

    <method name="dragGHPending">
      
      <param name="screenId" type="unsigned long" dir="in">
        
      </param>
      <param name="formats" type="wstring" dir="out" safearray="yes">
        
      </param>
      <param name="allowedActions" type="DragAndDropAction" dir="out" safearray="yes">
        
      </param>
      <param name="defaultAction" type="DragAndDropAction" dir="return">
        
      </param>
    </method>

    <method name="dragGHDropped">
      

      <param name="format" type="wstring" dir="in">
        
      </param>
      <param name="action" type="DragAndDropAction" dir="in">
        
      </param>
      <param name="progress" type="IProgress" dir="return">
        
      </param>
    </method>

    <method name="dragGHGetData">
      

      <param name="data" type="octet" safearray="yes" dir="return">
        
      </param>
    </method>

    <method name="createSession">
      
      <param name="user" type="wstring" dir="in">
        
      </param>
      <param name="password" type="wstring" dir="in">
        
      </param>
      <param name="domain" type="wstring" dir="in">
        
      </param>
      <param name="sessionName" type="wstring" dir="in">
        
      </param>
      <param name="guestSession" type="IGuestSession" dir="return">
        
      </param>
    </method>

    <method name="findSession">
      
      <param name="sessionName" type="wstring" dir="in">
        
      </param>
      <param name="sessions" type="IGuestSession" safearray="yes" dir="return">
        
      </param>
    </method>

    <method name="updateGuestAdditions">
      
      <param name="source" type="wstring" dir="in">
        
      </param>
      <param name="arguments" type="wstring" dir="in" safearray="yes">
        
      </param>
      <param name="flags" type="AdditionsUpdateFlag" dir="in" safearray="yes">
        
      </param>
      <param name="progress" type="IProgress" dir="return">
        
      </param>
    </method>

  </interface>


  

  <interface name="IProgress" extends="$unknown" uuid="c20238e4-3221-4d3f-8891-81ce92d9f913" wsmap="managed">
    

    <attribute name="id" type="uuid" mod="string" readonly="yes">
      
    </attribute>

    <attribute name="description" type="wstring" readonly="yes">
      
    </attribute>

    <attribute name="initiator" type="$unknown" readonly="yes">
      
    </attribute>

    <attribute name="cancelable" type="boolean" readonly="yes">
      
    </attribute>

    <attribute name="percent" type="unsigned long" readonly="yes">
      
    </attribute>

    <attribute name="timeRemaining" type="long" readonly="yes">
        
    </attribute>

    <attribute name="completed" type="boolean" readonly="yes">
      
    </attribute>

    <attribute name="canceled" type="boolean" readonly="yes">
      
    </attribute>

    <attribute name="resultCode" type="long" readonly="yes">
      
    </attribute>

    <attribute name="errorInfo" type="IVirtualBoxErrorInfo" readonly="yes">
      
    </attribute>

    <attribute name="operationCount" type="unsigned long" readonly="yes">
      
    </attribute>

    <attribute name="operation" type="unsigned long" readonly="yes">
        
    </attribute>

    <attribute name="operationDescription" type="wstring" readonly="yes">
      
    </attribute>

    <attribute name="operationPercent" type="unsigned long" readonly="yes">
        
    </attribute>

    <attribute name="operationWeight" type="unsigned long" readonly="yes">
        
    </attribute>

    <attribute name="timeout" type="unsigned long">
      
    </attribute>

    <method name="setCurrentOperationProgress">
      
      <param name="percent" type="unsigned long" dir="in"/>
    </method>
    <method name="setNextOperation">
      
      <param name="nextOperationDescription" type="wstring" dir="in"/>
      <param name="nextOperationsWeight" type="unsigned long" dir="in"/>
    </method>

    <method name="waitForCompletion">
      

      <param name="timeout" type="long" dir="in">
        
      </param>
    </method>

    <method name="waitForOperationCompletion">
      
      <param name="operation" type="unsigned long" dir="in">
        
      </param>
      <param name="timeout" type="long" dir="in">
        
      </param>
    </method>

    <method name="waitForAsyncProgressCompletion">
      

      <param name="pProgressAsync" type="IProgress" dir="in">
        
      </param>
    </method>

    <method name="cancel">
      
    </method>

  </interface>

  

  <interface name="ISnapshot" extends="$unknown" uuid="0472823b-c6e7-472a-8e9f-d732e86b8463" wsmap="managed">
    

    <attribute name="id" type="uuid" mod="string" readonly="yes">
      
    </attribute>

    <attribute name="name" type="wstring">
      
    </attribute>

    <attribute name="description" type="wstring">
      
    </attribute>

    <attribute name="timeStamp" type="long long" readonly="yes">
      
    </attribute>

    <attribute name="online" type="boolean" readonly="yes">
      
    </attribute>

    <attribute name="machine" type="IMachine" readonly="yes">
      
    </attribute>

    <attribute name="parent" type="ISnapshot" readonly="yes">
      
    </attribute>

    <attribute name="children" type="ISnapshot" readonly="yes" safearray="yes">
      
    </attribute>

    <method name="getChildrenCount" const="yes">
      
      <param name="childrenCount" type="unsigned long" dir="return">
        
      </param>
    </method>

  </interface>


  

  <enum name="MediumState" uuid="ef41e980-e012-43cd-9dea-479d4ef14d13">
    

    <const name="NotCreated" value="0">
      
    </const>
    <const name="Created" value="1">
      
    </const>
    <const name="LockedRead" value="2">
      
    </const>
    <const name="LockedWrite" value="3">
      
    </const>
    <const name="Inaccessible" value="4">
      
    </const>
    <const name="Creating" value="5">
      
    </const>
    <const name="Deleting" value="6">
      
    </const>
  </enum>

  <enum name="MediumType" uuid="fe663fb5-c244-4e1b-9d81-c628b417dd04">
    

    <const name="Normal" value="0">
      
    </const>
    <const name="Immutable" value="1">
      
    </const>
    <const name="Writethrough" value="2">
      
    </const>
    <const name="Shareable" value="3">
      
    </const>
    <const name="Readonly" value="4">
      
    </const>
    <const name="MultiAttach" value="5">
      
    </const>
  </enum>

  <enum name="MediumVariant" uuid="80685b6b-e42f-497d-8271-e77bf3c61ada">
    

    <const name="Standard" value="0">
      
    </const>
    <const name="VmdkSplit2G" value="0x01">
      
    </const>
    <const name="VmdkRawDisk" value="0x02">
      
    </const>
    <const name="VmdkStreamOptimized" value="0x04">
      
    </const>
    <const name="VmdkESX" value="0x08">
      
    </const>
    <const name="Fixed" value="0x10000">
      
    </const>
    <const name="Diff" value="0x20000">
      
    </const>
    <const name="NoCreateDir" value="0x40000000">
      
    </const>
  </enum>

  <interface name="IMediumAttachment" extends="$unknown" uuid="4b252567-5d4e-4db8-b3c8-569ec1c9236c" wsmap="struct">
    

    <attribute name="medium" type="IMedium" readonly="yes">
      
    </attribute>

    <attribute name="controller" type="wstring" readonly="yes">
      
    </attribute>

    <attribute name="port" type="long" readonly="yes">
      
    </attribute>

    <attribute name="device" type="long" readonly="yes">
      
    </attribute>

    <attribute name="type" type="DeviceType" readonly="yes">
      
    </attribute>

    <attribute name="passthrough" type="boolean" readonly="yes">
      
    </attribute>

    <attribute name="temporaryEject" type="boolean" readonly="yes">
      
    </attribute>

    <attribute name="isEjected" type="boolean" readonly="yes">
      
    </attribute>

    <attribute name="nonRotational" type="boolean" readonly="yes">
      
    </attribute>

    <attribute name="discard" type="boolean" readonly="yes">
      
    </attribute>

    <attribute name="hotPluggable" type="boolean" readonly="yes">
      
    </attribute>

    <attribute name="bandwidthGroup" type="IBandwidthGroup" readonly="yes">
      
    </attribute>

  </interface>

  <interface name="IMedium" extends="$unknown" uuid="05f2bbb6-a3a6-4fb9-9b49-6d0dda7142ac" wsmap="managed">
    

    <attribute name="id" type="uuid" mod="string" readonly="yes">
      
    </attribute>

    <attribute name="description" type="wstring">
      
    </attribute>

    <attribute name="state" type="MediumState" readonly="yes">
      
    </attribute>

    <attribute name="variant" type="MediumVariant" safearray="yes" readonly="yes">
      
    </attribute>

    <attribute name="location" type="wstring" readonly="yes">
      
    </attribute>

    <attribute name="name" type="wstring" readonly="yes">
      
    </attribute>

    <attribute name="deviceType" type="DeviceType" readonly="yes">
      
    </attribute>

    <attribute name="hostDrive" type="boolean" readonly="yes">
      
    </attribute>

    <attribute name="size" type="long long" readonly="yes">
      
    </attribute>

    <attribute name="format" type="wstring" readonly="yes">
      
    </attribute>

    <attribute name="mediumFormat" type="IMediumFormat" readonly="yes">
      
    </attribute>

    <attribute name="type" type="MediumType">
      
    </attribute>

    <attribute name="allowedTypes" type="MediumType" safearray="yes" readonly="yes">
      
    </attribute>

    <attribute name="parent" type="IMedium" readonly="yes">
      
    </attribute>

    <attribute name="children" type="IMedium" safearray="yes" readonly="yes">
      
    </attribute>

    <attribute name="base" type="IMedium" readonly="yes">
      
    </attribute>

    <attribute name="readOnly" type="boolean" readonly="yes">
      
    </attribute>

    <attribute name="logicalSize" type="long long" readonly="yes">
      
    </attribute>

    <attribute name="autoReset" type="boolean">
      
    </attribute>

    <attribute name="lastAccessError" type="wstring" readonly="yes">
      
    </attribute>

    <attribute name="machineIds" type="uuid" mod="string" safearray="yes" readonly="yes">
      
    </attribute>

    <method name="setIds">
      
      <param name="setImageId" type="boolean" dir="in">
        
      </param>
      <param name="imageId" type="uuid" mod="string" dir="in">
        
      </param>
      <param name="setParentId" type="boolean" dir="in">
        
      </param>
      <param name="parentId" type="uuid" mod="string" dir="in">
        
      </param>
        <result name="E_INVALIDARG">
          Invalid parameter combination.
        </result>
      <result name="VBOX_E_NOT_SUPPORTED">
        Medium is not a hard disk medium.
      </result>
    </method>

    <method name="refreshState">
      
      <param name="state" type="MediumState" dir="return">
        
      </param>
    </method>

    <method name="getSnapshotIds">
      
      <param name="machineId" type="uuid" mod="string" dir="in">
        
      </param>
      <param name="snapshotIds" type="uuid" mod="string" safearray="yes" dir="return">
        
      </param>
    </method>

    <method name="lockRead">
      
      <param name="token" type="IToken" dir="return">
        
      </param>
    </method>

    <method name="lockWrite">
      
      <param name="token" type="IToken" dir="return">
        
      </param>
    </method>

    <method name="close">
      
    </method>

    

    <method name="getProperty" const="yes">
      
      <param name="name" type="wstring" dir="in">
        
      </param>
      <param name="value" type="wstring" dir="return">
        
      </param>
    </method>

    <method name="setProperty">
      
      <param name="name" type="wstring" dir="in">
        
      </param>
      <param name="value" type="wstring" dir="in">
        
      </param>
    </method>

    <method name="getProperties" const="yes">
      
      <param name="names" type="wstring" dir="in">
        
      </param>
      <param name="returnNames" type="wstring" safearray="yes" dir="out">
        
      </param>
      <param name="returnValues" type="wstring" safearray="yes" dir="return">
        
      </param>
    </method>

    <method name="setProperties">
      
      <param name="names" type="wstring" safearray="yes" dir="in">
        
      </param>
      <param name="values" type="wstring" safearray="yes" dir="in">
        
      </param>
    </method>

    

    <method name="createBaseStorage">
      
      <param name="logicalSize" type="long long" dir="in">
        
      </param>
      <param name="variant" type="MediumVariant" safearray="yes" dir="in">
        
      </param>
      <param name="progress" type="IProgress" dir="return">
        
      </param>
    </method>

    <method name="deleteStorage">
      
      <param name="progress" type="IProgress" dir="return">
        
      </param>
    </method>

    

    <method name="createDiffStorage">
      
      <param name="target" type="IMedium" dir="in">
        
      </param>
      <param name="variant" type="MediumVariant" safearray="yes" dir="in">
        
      </param>
      <param name="progress" type="IProgress" dir="return">
        
      </param>
    </method>

    <method name="mergeTo">
      
      <param name="target" type="IMedium" dir="in">
        
      </param>
      <param name="progress" type="IProgress" dir="return">
        
      </param>
    </method>

    

    <method name="cloneTo">
      
      <param name="target" type="IMedium" dir="in">
        
      </param>
      <param name="variant" type="MediumVariant" safearray="yes" dir="in">
        
      </param>
      <param name="parent" type="IMedium" dir="in">
        
      </param>
      <param name="progress" type="IProgress" dir="return">
        
      </param>
    </method>

    <method name="cloneToBase">
    
    <param name="target" type="IMedium" dir="in">
    
    </param>
    <param name="variant" type="MediumVariant" safearray="yes" dir="in">
    
    </param>
    <param name="progress" type="IProgress" dir="return">
    
    </param>
    </method>

    

    <method name="setLocation">
      
      <param name="location" type="wstring" dir="in">
        
      </param>
      <param name="progress" type="IProgress" dir="return">
        
      </param>
    </method>

    <method name="compact">
      
      <param name="progress" type="IProgress" dir="return">
        
      </param>
    </method>

    <method name="resize">
      
      <param name="logicalSize" type="long long" dir="in">
        
      </param>
      <param name="progress" type="IProgress" dir="return">
        
      </param>
    </method>

    <method name="reset">
      
      <param name="progress" type="IProgress" dir="return">
        
      </param>
    </method>

  </interface>


  

  <enum name="DataType" uuid="d90ea51e-a3f1-4a01-beb1-c1723c0d3ba7">
    <const name="Int32" value="0"/>
    <const name="Int8" value="1"/>
    <const name="String" value="2"/>
  </enum>

  <enum name="DataFlags" uuid="86884dcf-1d6b-4f1b-b4bf-f5aa44959d60">
    <const name="None" value="0x00"/>
    <const name="Mandatory" value="0x01"/>
    <const name="Expert" value="0x02"/>
    <const name="Array" value="0x04"/>
    <const name="FlagMask" value="0x07"/>
  </enum>

  <enum name="MediumFormatCapabilities" uuid="7342ba79-7ce0-4d94-8f86-5ed5a185d9bd">
    

    <const name="Uuid" value="0x01">
      
    </const>

    <const name="CreateFixed" value="0x02">
      
    </const>

    <const name="CreateDynamic" value="0x04">
      
    </const>

    <const name="CreateSplit2G" value="0x08">
      
    </const>

    <const name="Differencing" value="0x10">
      
    </const>

    <const name="Asynchronous" value="0x20">
      
    </const>

    <const name="File" value="0x40">
      
    </const>

    <const name="Properties" value="0x80">
      
    </const>

    <const name="TcpNetworking" value="0x100">
      
    </const>

    <const name="VFS" value="0x200">
      
    </const>

    <const name="CapabilityMask" value="0x3FF"/>
  </enum>

  <interface name="IMediumFormat" extends="$unknown" uuid="6238e1cf-a17d-4ec1-8172-418bfb22b93a" wsmap="managed">
    

    <attribute name="id" type="wstring" readonly="yes">
      
    </attribute>

    <attribute name="name" type="wstring" readonly="yes">
      
    </attribute>

    <attribute name="capabilities" type="MediumFormatCapabilities" safearray="yes" readonly="yes">
      
    </attribute>

    <method name="describeFileExtensions">
      
      <param name="extensions" type="wstring" safearray="yes" dir="out">
        
      </param>
      <param name="types" type="DeviceType" safearray="yes" dir="out">
        
      </param>
    </method>

    <method name="describeProperties" const="yes">
      

      <param name="names" type="wstring" safearray="yes" dir="out">
        
      </param>
      <param name="descriptions" type="wstring" safearray="yes" dir="out">
        
      </param>
      <param name="types" type="DataType" safearray="yes" dir="out">
        
      </param>
      <param name="flags" type="unsigned long" safearray="yes" dir="out">
        
      </param>
      <param name="defaults" type="wstring" safearray="yes" dir="out">
        
      </param>
    </method>

  </interface>


  

  <interface name="IToken" extends="$unknown" uuid="3b1c4797-e289-4d4c-b74c-50c9b86a36f8" wsmap="managed">
    

    <method name="abandon" wrap-hint-server="passcaller">
      
    </method>

    <method name="dummy">
      
    </method>

  </interface>


  

  <interface name="IKeyboard" extends="$unknown" uuid="f6916ec5-a881-4237-898f-7de58cf88672" wsmap="managed">
    

    <method name="putScancode">
      
      <param name="scancode" type="long" dir="in"/>
    </method>

    <method name="putScancodes">
      
      <param name="scancodes" type="long" dir="in" safearray="yes"/>
      <param name="codesStored" type="unsigned long" dir="return"/>
    </method>

    <method name="putCAD">
      
    </method>

    <attribute name="eventSource" type="IEventSource" readonly="yes">
      
    </attribute>

  </interface>


  

  <enum name="MouseButtonState" uuid="9ee094b8-b28a-4d56-a166-973cb588d7f8">
    

    <const name="LeftButton" value="0x01"/>
    <const name="RightButton" value="0x02"/>
    <const name="MiddleButton" value="0x04"/>
    <const name="WheelUp" value="0x08"/>
    <const name="WheelDown" value="0x10"/>
    <const name="XButton1" value="0x20"/>
    <const name="XButton2" value="0x40"/>
    <const name="MouseStateMask" value="0x7F"/>
  </enum>

  <enum name="TouchContactState" uuid="3f942686-2506-421c-927c-90d4b45f4a38">
    

    <const name="None" value="0x00">
      
    </const>
    <const name="InContact" value="0x01">
      
    </const>
    <const name="InRange" value="0x02">
      
    </const>
    <const name="ContactStateMask" value="0x03"/>
  </enum>

  <interface name="IMouse" extends="$unknown" uuid="ee770393-415f-4421-b2d5-28b73cacf86a" wsmap="managed">
    

    <attribute name="absoluteSupported" type="boolean" readonly="yes">
      
    </attribute>

    <attribute name="relativeSupported" type="boolean" readonly="yes">
      
    </attribute>

    <attribute name="multiTouchSupported" type="boolean" readonly="yes">
      
    </attribute>

    <attribute name="needsHostCursor" type="boolean" readonly="yes">
      
    </attribute>

    <method name="putMouseEvent">
      

      <param name="dx" type="long" dir="in">
        
      </param>
      <param name="dy" type="long" dir="in">
        
      </param>
      <param name="dz" type="long" dir="in">
        
      </param>
      <param name="dw" type="long" dir="in">
        
      </param>
      <param name="buttonState" type="long" dir="in">
        
      </param>
    </method>

    <method name="putMouseEventAbsolute">
      

      <param name="x" type="long" dir="in">
        
      </param>
      <param name="y" type="long" dir="in">
        
      </param>
      <param name="dz" type="long" dir="in">
        
      </param>
      <param name="dw" type="long" dir="in">
        
      </param>
      <param name="buttonState" type="long" dir="in">
        
      </param>
    </method>

    <method name="putEventMultiTouch">
      

      <param name="count" type="long" dir="in">
        
      </param>

      <param name="contacts" type="long long" dir="in" safearray="yes">
        
      </param>

      <param name="scanTime" type="unsigned long" dir="in">
        
      </param>
    </method>

    <method name="putEventMultiTouchString">
      

      <param name="count" type="long" dir="in">
        
      </param>

      <param name="contacts" type="wstring" dir="in">
        
      </param>

      <param name="scanTime" type="unsigned long" dir="in">
        
      </param>
    </method>

    <attribute name="eventSource" type="IEventSource" readonly="yes">
      
    </attribute>

  </interface>

  

  <enum name="FramebufferPixelFormat" uuid="7acfd5ed-29e3-45e3-8136-73c9224f3d2d">
    

    <const name="Opaque" value="0">
      
    </const>
    <const name="FOURCC_RGB" value="0x32424752">
      
    </const>
  </enum>

  <interface name="IFramebuffer" extends="$unknown" uuid="e3f122c0-adab-4fc9-a8dc-da112fb48428" wsmap="managed">
    <attribute name="address" type="octet" mod="ptr" readonly="yes" wsmap="suppress">
      
    </attribute>

    <attribute name="width" type="unsigned long" readonly="yes">
      
    </attribute>

    <attribute name="height" type="unsigned long" readonly="yes">
      
    </attribute>

    <attribute name="bitsPerPixel" type="unsigned long" readonly="yes">
      
    </attribute>

    <attribute name="bytesPerLine" type="unsigned long" readonly="yes">
      
    </attribute>

    <attribute name="pixelFormat" type="unsigned long" readonly="yes">
      
    </attribute>

    <attribute name="usesGuestVRAM" type="boolean" readonly="yes">
      
    </attribute>

    <attribute name="heightReduction" type="unsigned long" readonly="yes">
      
    </attribute>

    <attribute name="overlay" type="IFramebufferOverlay" readonly="yes">
      
    </attribute>

    <attribute name="winId" type="long long" readonly="yes" wsmap="suppress">
      
    </attribute>

    <method name="lock" wsmap="suppress">
      
    </method>

    <method name="unlock" wsmap="suppress">
      
    </method>

    <method name="notifyUpdate" wsmap="suppress">
      
      <param name="x" type="unsigned long" dir="in"/>
      <param name="y" type="unsigned long" dir="in"/>
      <param name="width" type="unsigned long" dir="in"/>
      <param name="height" type="unsigned long" dir="in"/>
    </method>

    <method name="requestResize" wsmap="suppress">
      
      <param name="screenId" type="unsigned long" dir="in">
        
      </param>
      <param name="pixelFormat" type="unsigned long" dir="in">
        
      </param>
      <param name="VRAM" type="octet" mod="ptr" dir="in">
        
      </param>
      <param name="bitsPerPixel" type="unsigned long" dir="in">
        
      </param>
      <param name="bytesPerLine" type="unsigned long" dir="in">
        
      </param>
      <param name="width" type="unsigned long" dir="in">
        
      </param>
      <param name="height" type="unsigned long" dir="in">
        
      </param>
      <param name="finished" type="boolean" dir="return">
        
      </param>
    </method>

    <method name="videoModeSupported">
      
      <param name="width" type="unsigned long" dir="in"/>
      <param name="height" type="unsigned long" dir="in"/>
      <param name="bpp" type="unsigned long" dir="in"/>
      <param name="supported" type="boolean" dir="return"/>
    </method>

    <method name="getVisibleRegion" wsmap="suppress">
      
      <param name="rectangles" type="octet" mod="ptr" dir="in">
        
      </param>
      <param name="count" type="unsigned long" dir="in">
        
      </param>
      <param name="countCopied" type="unsigned long" dir="return">
        
      </param>
    </method>

    <method name="setVisibleRegion" wsmap="suppress">
      
      <param name="rectangles" type="octet" mod="ptr" dir="in">
        
      </param>
      <param name="count" type="unsigned long" dir="in">
        
      </param>
    </method>

    <method name="processVHWACommand" wsmap="suppress">
      

      <param name="command" type="octet" mod="ptr" dir="in">
        
      </param>
    </method>

    <method name="notify3DEvent">
      

      <param name="type" type="unsigned long" dir="in">
        
      </param>
      <param name="data" type="octet" mod="ptr" dir="in">
        
      </param>
    </method>

  </interface>

  <interface name="IFramebufferOverlay" extends="IFramebuffer" uuid="0bcc1c7e-e415-47d2-bfdb-e4c705fb0f47" wsmap="managed">
    
    <attribute name="x" type="unsigned long" readonly="yes">
      
    </attribute>

    <attribute name="y" type="unsigned long" readonly="yes">
      
    </attribute>

    <attribute name="visible" type="boolean">
      
    </attribute>

    <attribute name="alpha" type="unsigned long">
      
    </attribute>

    <method name="move">
      
      <param name="x" type="unsigned long" dir="in"/>
      <param name="y" type="unsigned long" dir="in"/>
    </method>

  </interface>

  <interface name="IDisplay" extends="$unknown" uuid="480b372c-c0b5-4c23-9bd7-dcbb85b1594c" wsmap="managed">
    
    <method name="getScreenResolution">
      
      <param name="screenId" type="unsigned long" dir="in"/>
      <param name="width" type="unsigned long" dir="out"/>
      <param name="height" type="unsigned long" dir="out"/>
      <param name="bitsPerPixel" type="unsigned long" dir="out"/>
      <param name="xOrigin" type="long" dir="out"/>
      <param name="yOrigin" type="long" dir="out"/>
    </method>

    <method name="setFramebuffer">
      
      <param name="screenId" type="unsigned long" dir="in"/>
      <param name="framebuffer" type="IFramebuffer" dir="in"/>
    </method>

    <method name="getFramebuffer">
      
      <param name="screenId" type="unsigned long" dir="in"/>
      <param name="framebuffer" type="IFramebuffer" dir="out"/>
      <param name="xOrigin" type="long" dir="out"/>
      <param name="yOrigin" type="long" dir="out"/>
    </method>

    <method name="setVideoModeHint">
      
      <param name="display" type="unsigned long" dir="in">
        
      </param>
      <param name="enabled" type="boolean" dir="in">
        
      </param>
      <param name="changeOrigin" type="boolean" dir="in">
        
      </param>
      <param name="originX" type="long" dir="in">
        
      </param>
      <param name="originY" type="long" dir="in">
        
      </param>
      <param name="width" type="unsigned long" dir="in"/>
      <param name="height" type="unsigned long" dir="in"/>
      <param name="bitsPerPixel" type="unsigned long" dir="in"/>
    </method>

    <method name="setSeamlessMode">
      
      <param name="enabled" type="boolean" dir="in"/>
    </method>

    <method name="takeScreenShot">
      
      <param name="screenId" type="unsigned long" dir="in"/>
      <param name="address" type="octet" mod="ptr" dir="in"/>
      <param name="width" type="unsigned long" dir="in"/>
      <param name="height" type="unsigned long" dir="in"/>
    </method>

    <method name="takeScreenShotToArray">
      
      <param name="screenId" type="unsigned long" dir="in">
        
      </param>
      <param name="width" type="unsigned long" dir="in">
        
      </param>
      <param name="height" type="unsigned long" dir="in">
        
      </param>
      <param name="screenData" type="octet" dir="return" safearray="yes">
        
      </param>
    </method>

    <method name="takeScreenShotPNGToArray">
      
      <param name="screenId" type="unsigned long" dir="in">
        
      </param>
      <param name="width" type="unsigned long" dir="in">
        
      </param>
      <param name="height" type="unsigned long" dir="in">
        
      </param>
      <param name="screenData" type="octet" dir="return" safearray="yes">
        
      </param>
    </method>

    <method name="drawToScreen">
      
      <param name="screenId" type="unsigned long" dir="in">
        
      </param>
      <param name="address" type="octet" mod="ptr" dir="in">
        
      </param>
      <param name="x" type="unsigned long" dir="in">
        
      </param>
      <param name="y" type="unsigned long" dir="in">
        
      </param>
      <param name="width" type="unsigned long" dir="in">
        
      </param>
      <param name="height" type="unsigned long" dir="in">
        
      </param>
    </method>

    <method name="invalidateAndUpdate">
      
    </method>

    <method name="resizeCompleted">
      
      <param name="screenId" type="unsigned long" dir="in"/>
    </method>

    <method name="completeVHWACommand">
      

      <param name="command" type="octet" mod="ptr" dir="in">
        
      </param>
    </method>

    <method name="viewportChanged">
      

      <param name="screenId" type="unsigned long" dir="in">
        
      </param>
      <param name="x" type="unsigned long" dir="in">
        
      </param>
      <param name="y" type="unsigned long" dir="in">
        
      </param>
      <param name="width" type="unsigned long" dir="in">
        
      </param>
      <param name="height" type="unsigned long" dir="in">
        
      </param>
    </method>
  </interface>

  

  <enum name="NetworkAttachmentType" uuid="524a8f9d-4b86-4b51-877d-1aa27c4ebeac">
    

    <const name="Null" value="0">
      
    </const>
    <const name="NAT" value="1"/>
    <const name="Bridged" value="2"/>
    <const name="Internal" value="3"/>
    <const name="HostOnly" value="4"/>
    <const name="Generic" value="5"/>
    <const name="NATNetwork" value="6"/>
  </enum>

  <enum name="NetworkAdapterType" uuid="3c2281e4-d952-4e87-8c7d-24379cb6a81c">
    

    <const name="Null" value="0">
      
    </const>
    <const name="Am79C970A" value="1">
        
    </const>
    <const name="Am79C973" value="2">
        
    </const>
    <const name="I82540EM" value="3">
        
    </const>
    <const name="I82543GC" value="4">
        
    </const>
    <const name="I82545EM" value="5">
        
    </const>
    <const name="Virtio" value="6">
        
    </const>
  </enum>

  <enum name="NetworkAdapterPromiscModePolicy" uuid="c963768a-376f-4c85-8d84-d8ced4b7269e">
    

    <const name="Deny" value="1">
      
    </const>
    <const name="AllowNetwork" value="2">
      
    </const>
    <const name="AllowAll" value="3">
      
    </const>
  </enum>

  <interface name="INetworkAdapter" extends="$unknown" uuid="efa0f965-63c7-4c60-afdf-b1cc9943b9c0" wsmap="managed">
    

    <attribute name="adapterType" type="NetworkAdapterType">
      
    </attribute>

    <attribute name="slot" type="unsigned long" readonly="yes">
      
    </attribute>

    <attribute name="enabled" type="boolean">
      
    </attribute>

    <attribute name="MACAddress" type="wstring">
      
    </attribute>

    <attribute name="attachmentType" type="NetworkAttachmentType">
      
    </attribute>

    <attribute name="bridgedInterface" type="wstring">
      
    </attribute>

    <attribute name="hostOnlyInterface" type="wstring">
      
    </attribute>

    <attribute name="internalNetwork" type="wstring">
      
    </attribute>

    <attribute name="NATNetwork" type="wstring">
      
    </attribute>

    <attribute name="genericDriver" type="wstring">
      
    </attribute>

    <attribute name="cableConnected" type="boolean">
      
    </attribute>

    <attribute name="lineSpeed" type="unsigned long">
      
    </attribute>

    <attribute name="promiscModePolicy" type="NetworkAdapterPromiscModePolicy">
      
    </attribute>

    <attribute name="traceEnabled" type="boolean">
      
    </attribute>

    <attribute name="traceFile" type="wstring">
      
    </attribute>

    <attribute name="NATEngine" type="INATEngine" readonly="yes">
      
    </attribute>

    <attribute name="bootPriority" type="unsigned long">
      
    </attribute>

    <attribute name="bandwidthGroup" type="IBandwidthGroup">
      
    </attribute>

    

    <method name="getProperty" const="yes">
      
      <param name="key" type="wstring" dir="in">
        
      </param>
      <param name="value" type="wstring" dir="return">
        
      </param>
    </method>

    <method name="setProperty">
      
      <param name="key" type="wstring" dir="in">
        
      </param>
      <param name="value" type="wstring" dir="in">
        
      </param>
    </method>

    <method name="getProperties" const="yes">
      
      <param name="names" type="wstring" dir="in">
        
      </param>
      <param name="returnNames" type="wstring" safearray="yes" dir="out">
        
      </param>
      <param name="returnValues" type="wstring" safearray="yes" dir="return">
        
      </param>
    </method>

  </interface>


  

  <enum name="PortMode" uuid="533b5fe3-0185-4197-86a7-17e37dd39d76">
    

    <const name="Disconnected" value="0">
      
    </const>
    <const name="HostPipe" value="1">
      
    </const>
    <const name="HostDevice" value="2">
      
    </const>
    <const name="RawFile" value="3">
      
    </const>
  </enum>

  <interface name="ISerialPort" extends="$unknown" uuid="937f6970-5103-4745-b78e-d28dcf1479a8" wsmap="managed">

    

    <attribute name="slot" type="unsigned long" readonly="yes">
      
    </attribute>

    <attribute name="enabled" type="boolean">
      
    </attribute>

    <attribute name="IOBase" type="unsigned long">
      
    </attribute>

    <attribute name="IRQ" type="unsigned long">
      
    </attribute>

    <attribute name="hostMode" type="PortMode">
      
    </attribute>

    <attribute name="server" type="boolean">
      
    </attribute>

    <attribute name="path" type="wstring">
      
    </attribute>

  </interface>

  

  <interface name="IParallelPort" extends="$unknown" uuid="0c925f06-dd10-4b77-8de8-294d738c3214" wsmap="managed">

    

    <attribute name="slot" type="unsigned long" readonly="yes">
      
    </attribute>

    <attribute name="enabled" type="boolean">
      
    </attribute>

    <attribute name="IOBase" type="unsigned long">
      
    </attribute>

    <attribute name="IRQ" type="unsigned long">
      
    </attribute>

    <attribute name="path" type="wstring">
      
    </attribute>

  </interface>


  

  <interface name="IMachineDebugger" extends="$unknown" uuid="5e4534dc-21b8-4f6b-8a08-eef50e1a0aa1" wsmap="managed">
    <method name="dumpGuestCore">
      
      <param name="filename" type="wstring" dir="in">
        
      </param>
      <param name="compression" type="wstring" dir="in">
        
      </param>
    </method>

    <method name="dumpHostProcessCore">
      
      <param name="filename" type="wstring" dir="in">
        
      </param>
      <param name="compression" type="wstring" dir="in">
        
      </param>
    </method>

    <method name="info">
      
      <param name="name" type="wstring" dir="in">
        
      </param>
      <param name="args" type="wstring" dir="in">
        
      </param>
      <param name="info" type="wstring" dir="return">
        
      </param>
    </method>

    <method name="injectNMI">
      
    </method>

    <method name="modifyLogGroups">
      
      <param name="settings" type="wstring" dir="in">
        
      </param>
    </method>

    <method name="modifyLogFlags">
      
      <param name="settings" type="wstring" dir="in">
        
      </param>
    </method>

    <method name="modifyLogDestinations">
      
      <param name="settings" type="wstring" dir="in">
        
      </param>
    </method>

    <method name="readPhysicalMemory">
      
      <param name="address" type="long long" dir="in">
        
      </param>
      <param name="size" type="unsigned long" dir="in">
        
      </param>
      <param name="bytes" type="octet" safearray="yes" dir="return">
        
      </param>
    </method>

    <method name="writePhysicalMemory">
      
      <param name="address" type="long long" dir="in">
        
      </param>
      <param name="size" type="unsigned long" dir="in">
        
      </param>
      <param name="bytes" type="octet" safearray="yes" dir="in">
        
      </param>
    </method>

    <method name="readVirtualMemory">
      
      <param name="cpuId" type="unsigned long" dir="in">
        
      </param>
      <param name="address" type="long long" dir="in">
        
      </param>
      <param name="size" type="unsigned long" dir="in">
        
      </param>
      <param name="bytes" type="octet" safearray="yes" dir="return">
        
      </param>
    </method>

    <method name="writeVirtualMemory">
      
      <param name="cpuId" type="unsigned long" dir="in">
        
      </param>
      <param name="address" type="long long" dir="in">
        
      </param>
      <param name="size" type="unsigned long" dir="in">
        
      </param>
      <param name="bytes" type="octet" safearray="yes" dir="in">
        
      </param>
    </method>

    <method name="detectOS">
      
      <param name="os" type="wstring" dir="return">
        
      </param>
    </method>

    <method name="getRegister">
      
      <param name="cpuId" type="unsigned long" dir="in">
        
      </param>
      <param name="name" type="wstring" dir="in">
        
      </param>
      <param name="value" type="wstring" dir="return">
        
      </param>
    </method>

    <method name="getRegisters">
      
      <param name="cpuId" type="unsigned long" dir="in">
        
      </param>
      <param name="names" type="wstring" dir="out" safearray="yes">
        
      </param>
      <param name="values" type="wstring" dir="out" safearray="yes">
        
      </param>
    </method>

    <method name="setRegister">
      
      <param name="cpuId" type="unsigned long" dir="in">
        
      </param>
      <param name="name" type="wstring" dir="in">
        
      </param>
      <param name="value" type="wstring" dir="in">
        
      </param>
    </method>

    <method name="setRegisters">
      
      <param name="cpuId" type="unsigned long" dir="in">
        
      </param>
      <param name="names" type="wstring" dir="in" safearray="yes">
        
      </param>
      <param name="values" type="wstring" dir="in" safearray="yes">
        
      </param>
    </method>

    <method name="dumpGuestStack">
      
      <param name="cpuId" type="unsigned long" dir="in">
        
      </param>
      <param name="stack" type="wstring" dir="return">
        
      </param>
    </method>

    <method name="resetStats">
      
      <param name="pattern" type="wstring" dir="in">
        
      </param>
    </method>

    <method name="dumpStats">
      
      <param name="pattern" type="wstring" dir="in">
        
      </param>
    </method>

    <method name="getStats">
      
      <param name="pattern" type="wstring" dir="in">
        
      </param>
      <param name="withDescriptions" type="boolean" dir="in">
        
      </param>
      <param name="stats" type="wstring" dir="return">
        
      </param>
    </method>

    <attribute name="singleStep" type="boolean">
      
    </attribute>

    <attribute name="recompileUser" type="boolean">
      
    </attribute>

    <attribute name="recompileSupervisor" type="boolean">
      
    </attribute>

    <attribute name="executeAllInIEM" type="boolean">
      
    </attribute>

    <attribute name="PATMEnabled" type="boolean">
      
    </attribute>

    <attribute name="CSAMEnabled" type="boolean">
      
    </attribute>

    <attribute name="logEnabled" type="boolean">
      
    </attribute>

    <attribute name="logDbgFlags" type="wstring" readonly="yes">
      
    </attribute>

    <attribute name="logDbgGroups" type="wstring" readonly="yes">
      
    </attribute>

    <attribute name="logDbgDestinations" type="wstring" readonly="yes">
      
    </attribute>

    <attribute name="logRelFlags" type="wstring" readonly="yes">
      
    </attribute>

    <attribute name="logRelGroups" type="wstring" readonly="yes">
      
    </attribute>

    <attribute name="logRelDestinations" type="wstring" readonly="yes">
      
    </attribute>

    <attribute name="HWVirtExEnabled" type="boolean" readonly="yes">
      
    </attribute>

    <attribute name="HWVirtExNestedPagingEnabled" type="boolean" readonly="yes">
      
    </attribute>

    <attribute name="HWVirtExVPIDEnabled" type="boolean" readonly="yes">
      
    </attribute>

    <attribute name="HWVirtExUXEnabled" type="boolean" readonly="yes">
      
    </attribute>

    <attribute name="OSName" type="wstring" readonly="yes">
      
    </attribute>

    <attribute name="OSVersion" type="wstring" readonly="yes">
      
    </attribute>

    <attribute name="PAEEnabled" type="boolean" readonly="yes">
      
    </attribute>

    <attribute name="virtualTimeRate" type="unsigned long">
      
    </attribute>

    <attribute name="VM" type="long long" readonly="yes" wsmap="suppress">
      
    </attribute>

  </interface>

  

  <interface name="IUSBDeviceFilters" extends="$unknown" uuid="2ab550b2-53cc-4c2e-ae07-0adf4114e75c" wsmap="managed">

    <attribute name="deviceFilters" type="IUSBDeviceFilter" readonly="yes" safearray="yes">
      
    </attribute>

    <method name="createDeviceFilter">
      
      <param name="name" type="wstring" dir="in">
        
      </param>
      <param name="filter" type="IUSBDeviceFilter" dir="return">
        
      </param>
    </method>

    <method name="insertDeviceFilter">
      
      <param name="position" type="unsigned long" dir="in">
        
      </param>
      <param name="filter" type="IUSBDeviceFilter" dir="in">
        
      </param>
    </method>

    <method name="removeDeviceFilter">
      
      <param name="position" type="unsigned long" dir="in">
        
      </param>
      <param name="filter" type="IUSBDeviceFilter" dir="return">
        
      </param>
    </method>

  </interface>

  

  <enum name="USBControllerType" uuid="8fdd1c6a-5412-41da-ab07-7baed7d6e18e">
    
    <const name="Null" value="0">
      
    </const>
    <const name="OHCI" value="1"/>
    <const name="EHCI" value="2"/>
    <const name="Last" value="3">
      
    </const>
  </enum>

  <interface name="IUSBController" extends="$unknown" uuid="d2745291-65f7-4d75-9556-38047d802319" wsmap="managed">

    <attribute name="name" type="wstring" readonly="yes">
      
    </attribute>

    <attribute name="type" type="USBControllerType" readonly="yes">
      
    </attribute>

    <attribute name="USBStandard" type="unsigned short" readonly="yes">
      
    </attribute>

  </interface>


  

  <interface name="IUSBDevice" extends="$unknown" uuid="f8967b0b-4483-400f-92b5-8b675d98a85b" wsmap="managed">
    

    <attribute name="id" type="uuid" mod="string" readonly="yes">
      
    </attribute>

    <attribute name="vendorId" type="unsigned short" readonly="yes">
      
    </attribute>

    <attribute name="productId" type="unsigned short" readonly="yes">
      
    </attribute>

    <attribute name="revision" type="unsigned short" readonly="yes">
      
    </attribute>

    <attribute name="manufacturer" type="wstring" readonly="yes">
      
    </attribute>

    <attribute name="product" type="wstring" readonly="yes">
      
    </attribute>

    <attribute name="serialNumber" type="wstring" readonly="yes">
      
    </attribute>

    <attribute name="address" type="wstring" readonly="yes">
      
    </attribute>

    <attribute name="port" type="unsigned short" readonly="yes">
      
    </attribute>

    <attribute name="version" type="unsigned short" readonly="yes">
      
    </attribute>

    <attribute name="portVersion" type="unsigned short" readonly="yes">
      
    </attribute>

    <attribute name="remote" type="boolean" readonly="yes">
      
    </attribute>

  </interface>


  

  <interface name="IUSBDeviceFilter" extends="$unknown" uuid="d6831fb4-1a94-4c2c-96ef-8d0d6192066d" wsmap="managed">
    

    <attribute name="name" type="wstring">
      
    </attribute>

    <attribute name="active" type="boolean">
      
    </attribute>

    <attribute name="vendorId" type="wstring">
      
    </attribute>

    <attribute name="productId" type="wstring">
      
    </attribute>

    <attribute name="revision" type="wstring">
      
    </attribute>

    <attribute name="manufacturer" type="wstring">
      
    </attribute>

    <attribute name="product" type="wstring">
      
    </attribute>

    <attribute name="serialNumber" type="wstring">
      
    </attribute>

    <attribute name="port" type="wstring">
      
    </attribute>

    <attribute name="remote" type="wstring">
      
    </attribute>

    <attribute name="maskedInterfaces" type="unsigned long">
      
    </attribute>

  </interface>


  

  <enum name="USBDeviceState" uuid="b99a2e65-67fb-4882-82fd-f3e5e8193ab4">
    

    <const name="NotSupported" value="0">
      
    </const>
    <const name="Unavailable" value="1">
      
    </const>
    <const name="Busy" value="2">
      
    </const>
    <const name="Available" value="3">
      
    </const>
    <const name="Held" value="4">
      
    </const>
    <const name="Captured" value="5">
      
    </const>
  </enum>

  <interface name="IHostUSBDevice" extends="IUSBDevice" uuid="173b4b44-d268-4334-a00d-b6521c9a740a" wsmap="managed">
    

    <attribute name="state" type="USBDeviceState" readonly="yes">
      
    </attribute>

    

  </interface>


  

  <enum name="USBDeviceFilterAction" uuid="cbc30a49-2f4e-43b5-9da6-121320475933">
    

    <const name="Null" value="0">
      
    </const>
    <const name="Ignore" value="1">
      
    </const>
    <const name="Hold" value="2">
      
    </const>
  </enum>

  <interface name="IHostUSBDeviceFilter" extends="IUSBDeviceFilter" uuid="4cc70246-d74a-400f-8222-3900489c0374" wsmap="managed">
    

    <attribute name="action" type="USBDeviceFilterAction">
      
    </attribute>

  </interface>

  

  <enum name="AudioDriverType" uuid="4bcc3d73-c2fe-40db-b72f-0c2ca9d68496">
    

    <const name="Null" value="0">
      
    </const>
    <const name="WinMM" value="1">
        
    </const>
    <const name="OSS" value="2">
        
    </const>
    <const name="ALSA" value="3">
        
    </const>
    <const name="DirectSound" value="4">
        
    </const>
    <const name="CoreAudio" value="5">
        
    </const>
    <const name="MMPM" value="6">
        
    </const>
    <const name="Pulse" value="7">
        
    </const>
    <const name="SolAudio" value="8">
        
    </const>
  </enum>

  <enum name="AudioControllerType" uuid="7afd395c-42c3-444e-8788-3ce80292f36c">
    

    <const name="AC97" value="0"/>
    <const name="SB16" value="1"/>
    <const name="HDA" value="2"/>
  </enum>

  <interface name="IAudioAdapter" extends="$unknown" uuid="921873db-5f3f-4b69-91f9-7be9e535a2cb" wsmap="managed">
    
    <attribute name="enabled" type="boolean">
      
    </attribute>
    <attribute name="audioController" type="AudioControllerType">
      
    </attribute>
    <attribute name="audioDriver" type="AudioDriverType">
      
    </attribute>
  </interface>

  <enum name="AuthType" uuid="7eef6ef6-98c2-4dc2-ab35-10d2b292028d">
    

    <const name="Null" value="0">
      
    </const>
    <const name="External" value="1"/>
    <const name="Guest" value="2"/>
  </enum>

  

  <interface name="IVRDEServer" extends="$unknown" uuid="d38de40a-c2c1-4e95-b5a4-167b05f5694c" wsmap="managed">

    <attribute name="enabled" type="boolean">
      
    </attribute>

    <attribute name="authType" type="AuthType">
      
    </attribute>

    <attribute name="authTimeout" type="unsigned long">
      
    </attribute>

    <attribute name="allowMultiConnection" type="boolean">
      
    </attribute>

    <attribute name="reuseSingleConnection" type="boolean">
      
    </attribute>

    <attribute name="VRDEExtPack" type="wstring">
      
    </attribute>

    <attribute name="authLibrary" type="wstring">
      
    </attribute>

    <attribute name="VRDEProperties" type="wstring" readonly="yes" safearray="yes">
      
    </attribute>

    <method name="setVRDEProperty">
      
      <param name="key" type="wstring" dir="in">
        
      </param>
      <param name="value" type="wstring" dir="in">
        
      </param>
    </method>

    <method name="getVRDEProperty" const="yes">
      
      <param name="key" type="wstring" dir="in">
        
      </param>
      <param name="value" type="wstring" dir="return">
        
      </param>
    </method>

  </interface>


  

  <interface name="ISharedFolder" extends="$unknown" uuid="8388da11-b559-4574-a5b7-2bd7acd5cef8" wsmap="struct">
    

    <attribute name="name" type="wstring" readonly="yes">
      
    </attribute>

    <attribute name="hostPath" type="wstring" readonly="yes">
      
    </attribute>

    <attribute name="accessible" type="boolean" readonly="yes">
      
    </attribute>

    <attribute name="writable" type="boolean" readonly="yes">
      
    </attribute>

    <attribute name="autoMount" type="boolean" readonly="yes">
      
    </attribute>

    <attribute name="lastAccessError" type="wstring" readonly="yes">
      
    </attribute>

  </interface>

  

  <enum name="Reason" uuid="e7e8e097-299d-4e98-8bbc-c31c2d47d0cc">
    

    <const name="Unspecified" value="0">
      
    </const>
    <const name="HostSuspend" value="1">
      
    </const>
    <const name="HostResume" value="2">
      
    </const>
    <const name="HostBatteryLow" value="3">
      
    </const>
  </enum>

  <interface name="IInternalSessionControl" extends="$unknown" uuid="2d2124a7-0f62-4907-ae21-eee5a559bdde" internal="yes" wsmap="suppress">
    <method name="getPID">
      
      <param name="pid" type="unsigned long" dir="return"/>
    </method>

    <method name="getRemoteConsole">
      
      <param name="console" type="IConsole" dir="return"/>
    </method>

<if target="midl">
    <method name="assignMachine">
      
      <param name="machine" type="IMachine" dir="in"/>
      <param name="lockType" type="LockType" dir="in"/>
      <param name="tokenId" type="wstring" dir="in"/>
    </method>
</if>
<if target="xpidl">
    <method name="assignMachine">
      
      <param name="machine" type="IMachine" dir="in"/>
      <param name="lockType" type="LockType" dir="in"/>
      <param name="token" type="IToken" dir="in"/>
    </method>
</if>

    <method name="assignRemoteMachine">
      
      <param name="machine" type="IMachine" dir="in"/>
      <param name="console" type="IConsole" dir="in"/>
    </method>

    <method name="updateMachineState">
      
      <param name="machineState" type="MachineState" dir="in"/>
    </method>

    <method name="uninitialize">
      
    </method>

    <method name="onNetworkAdapterChange">
      
      <param name="networkAdapter" type="INetworkAdapter" dir="in"/>
      <param name="changeAdapter" type="boolean" dir="in"/>
    </method>

    <method name="onSerialPortChange">
      
      <param name="serialPort" type="ISerialPort" dir="in"/>
    </method>

    <method name="onParallelPortChange">
      
      <param name="parallelPort" type="IParallelPort" dir="in"/>
    </method>

    <method name="onStorageControllerChange">
      
    </method>

    <method name="onMediumChange">
      

      <param name="mediumAttachment" type="IMediumAttachment" dir="in">
        
      </param>
      <param name="force" type="boolean" dir="in">
        
      </param>
    </method>

    <method name="onStorageDeviceChange">
      

      <param name="mediumAttachment" type="IMediumAttachment" dir="in">
        
      </param>
      <param name="remove" type="boolean" dir="in">
        
      </param>
      <param name="silent" type="boolean" dir="in">
        
      </param>
    </method>

    <method name="onClipboardModeChange">
      
      <param name="clipboardMode" type="ClipboardMode" dir="in">
        
      </param>
    </method>

    <method name="onDragAndDropModeChange">
      
      <param name="dragAndDropMode" type="DragAndDropMode" dir="in">
        
      </param>
    </method>

    <method name="onCPUChange">
      
      <param name="cpu" type="unsigned long" dir="in">
        
      </param>
      <param name="add" type="boolean" dir="in">
        
      </param>
    </method>

    <method name="onCPUExecutionCapChange">
      
      <param name="executionCap" type="unsigned long" dir="in">
        
      </param>
    </method>

    <method name="onVRDEServerChange">
      
      <param name="restart" type="boolean" dir="in">
        
      </param>
    </method>

    <method name="onVideoCaptureChange">
      
    </method>

    <method name="onUSBControllerChange">
      
    </method>

    <method name="onSharedFolderChange">
      
      <param name="global" type="boolean" dir="in"/>
    </method>

    <method name="onUSBDeviceAttach">
      
      <param name="device" type="IUSBDevice" dir="in"/>
      <param name="error" type="IVirtualBoxErrorInfo" dir="in"/>
      <param name="maskedInterfaces" type="unsigned long" dir="in"/>
    </method>

    <method name="onUSBDeviceDetach">
      
      <param name="id" type="uuid" mod="string" dir="in"/>
      <param name="error" type="IVirtualBoxErrorInfo" dir="in"/>
    </method>

    <method name="onShowWindow">
      
      <param name="check" type="boolean" dir="in"/>
      <param name="canShow" type="boolean" dir="out"/>
      <param name="winId" type="long long" dir="out"/>
    </method>

    <method name="onBandwidthGroupChange">
      
      <param name="bandwidthGroup" type="IBandwidthGroup" dir="in">
        
      </param>
    </method>

    <method name="accessGuestProperty">
      
      <param name="name" type="wstring" dir="in"/>
      <param name="value" type="wstring" dir="in"/>
      <param name="flags" type="wstring" dir="in"/>
      <param name="isSetter" type="boolean" dir="in"/>
      <param name="retValue" type="wstring" dir="out"/>
      <param name="retTimestamp" type="long long" dir="out"/>
      <param name="retFlags" type="wstring" dir="out"/>
    </method>

    <method name="enumerateGuestProperties" const="yes">
      
      <param name="patterns" type="wstring" dir="in">
        
      </param>
      <param name="keys" type="wstring" dir="out" safearray="yes">
        
      </param>
      <param name="values" type="wstring" dir="out" safearray="yes">
        
      </param>
      <param name="timestamps" type="long long" dir="out" safearray="yes">
        
      </param>
      <param name="flags" type="wstring" dir="out" safearray="yes">
        
      </param>
    </method>

    <method name="onlineMergeMedium">
      
      <param name="mediumAttachment" type="IMediumAttachment" dir="in">
        
      </param>
      <param name="sourceIdx" type="unsigned long" dir="in">
        
      </param>
      <param name="targetIdx" type="unsigned long" dir="in">
        
      </param>
      <param name="progress" type="IProgress" dir="in">
        
      </param>
    </method>

    <method name="enableVMMStatistics">
      
      <param name="enable" type="boolean" dir="in">
        
      </param>
    </method>

    <method name="pauseWithReason">
      

      <param name="reason" type="Reason" dir="in">
        
      </param>
    </method>

    <method name="resumeWithReason">
      

      <param name="reason" type="Reason" dir="in">
        
      </param>
    </method>

    <method name="saveStateWithReason">
      

      <param name="reason" type="Reason" dir="in">
        
      </param>
      <param name="progress" type="IProgress" dir="return">
        
      </param>
    </method>

  </interface>

  <interface name="ISession" extends="$unknown" uuid="12F4DCDB-12B2-4EC1-B7CD-DDD9F6C5BF4D" wsmap="managed">
    

    <attribute name="state" type="SessionState" readonly="yes">
      
    </attribute>

    <attribute name="type" type="SessionType" readonly="yes">
      
    </attribute>

    <attribute name="machine" type="IMachine" readonly="yes">
      
    </attribute>

    <attribute name="console" type="IConsole" readonly="yes">
      
    </attribute>

    <method name="unlockMachine">
      
    </method>

  </interface>

  

  <enum name="StorageBus" uuid="eee67ab3-668d-4ef5-91e0-7025fe4a0d7a">
    
    <const name="Null" value="0">
      
    </const>
    <const name="IDE" value="1"/>
    <const name="SATA" value="2"/>
    <const name="SCSI" value="3"/>
    <const name="Floppy" value="4"/>
    <const name="SAS" value="5"/>
  </enum>

  <enum name="StorageControllerType" uuid="8a412b8a-f43e-4456-bd37-b474f0879a58">
    

    <const name="Null" value="0">
      
    </const>
    <const name="LsiLogic" value="1">
      
    </const>
    <const name="BusLogic" value="2">
      
    </const>
    <const name="IntelAhci" value="3">
      
    </const>
    <const name="PIIX3" value="4">
      
    </const>
    <const name="PIIX4" value="5">
      
    </const>
    <const name="ICH6" value="6">
      
    </const>
    <const name="I82078" value="7">
      
    </const>
    <const name="LsiLogicSas" value="8">
      
    </const>
  </enum>

  <enum name="ChipsetType" uuid="8b4096a8-a7c3-4d3b-bbb1-05a0a51ec394">
    

    <const name="Null" value="0">
      
    </const>
    <const name="PIIX3" value="1">
      
    </const>
    <const name="ICH9" value="2">
      
    </const>
  </enum>

  <interface name="IStorageController" extends="$unknown" uuid="a1556333-09b6-46d9-bfb7-fc239b7fbe1e" wsmap="managed">
    

    <attribute name="name" type="wstring" readonly="yes">
      
    </attribute>

    <attribute name="maxDevicesPerPortCount" type="unsigned long" readonly="yes">
      
    </attribute>

    <attribute name="minPortCount" type="unsigned long" readonly="yes">
      
    </attribute>

    <attribute name="maxPortCount" type="unsigned long" readonly="yes">
      
    </attribute>

    <attribute name="instance" type="unsigned long">
      
    </attribute>

    <attribute name="portCount" type="unsigned long">
      
    </attribute>

    <attribute name="bus" type="StorageBus" readonly="yes">
      
    </attribute>

    <attribute name="controllerType" type="StorageControllerType">
      
    </attribute>

    <attribute name="useHostIOCache" type="boolean">
      
    </attribute>

    <attribute name="bootable" type="boolean" readonly="yes">
      
    </attribute>
  </interface>

<if target="wsdl">

  

  <interface name="IManagedObjectRef" extends="$unknown" uuid="9474d09d-2313-46de-b568-a42b8718e8ed" internal="yes" wsmap="managed" wscpp="hardcoded">
    

    <method name="getInterfaceName">
      
      <param name="return" type="wstring" dir="return"/>
    </method>

    <method name="release">
      
    </method>

  </interface>

  

  <interface name="IWebsessionManager" extends="$unknown" uuid="dea1b4c7-2de3-418a-850d-7868617f7733" internal="yes" wsmap="global" wscpp="hardcoded">
    
    <method name="logon">
      
      <param name="username" type="wstring" dir="in"/>
      <param name="password" type="wstring" dir="in"/>
      <param name="return" type="IVirtualBox" dir="return"/>
    </method>

    <method name="getSessionObject">
      
      <param name="refIVirtualBox" type="IVirtualBox" dir="in"/>
      <param name="return" type="ISession" dir="return"/>
    </method>

    <method name="logoff">
      
      <param name="refIVirtualBox" type="IVirtualBox" dir="in"/>
    </method>

  </interface>

</if>

  

  <interface name="IPerformanceMetric" extends="$unknown" uuid="2a1a60ae-9345-4019-ad53-d34ba41cbfe9" wsmap="managed">
    

    <attribute name="metricName" type="wstring" readonly="yes">
      
    </attribute>

    <attribute name="object" type="$unknown" readonly="yes">
      
    </attribute>

    <attribute name="description" type="wstring" readonly="yes">
      
    </attribute>

    <attribute name="period" type="unsigned long" readonly="yes">
      
    </attribute>

    <attribute name="count" type="unsigned long" readonly="yes">
      
    </attribute>

    <attribute name="unit" type="wstring" readonly="yes">
      
    </attribute>

    <attribute name="minimumValue" type="long" readonly="yes">
      
    </attribute>

    <attribute name="maximumValue" type="long" readonly="yes">
      
    </attribute>
  </interface>

  <interface name="IPerformanceCollector" extends="$unknown" uuid="e22e1acb-ac4a-43bb-a31c-17321659b0c6" wsmap="managed">
    

    <attribute name="metricNames" type="wstring" readonly="yes" safearray="yes">
      
    </attribute>

    <method name="getMetrics">
      
      <param name="metricNames" type="wstring" dir="in" safearray="yes">
        
      </param>
      <param name="objects" type="$unknown" dir="in" safearray="yes">
        
      </param>
      <param name="metrics" type="IPerformanceMetric" dir="return" safearray="yes">
        
      </param>
    </method>

    <method name="setupMetrics">
      
      <param name="metricNames" type="wstring" dir="in" safearray="yes">
        
      </param>
      <param name="objects" type="$unknown" dir="in" safearray="yes">
        
      </param>
      <param name="period" type="unsigned long" dir="in">
        
      </param>
      <param name="count" type="unsigned long" dir="in">
        
      </param>
      <param name="affectedMetrics" type="IPerformanceMetric" dir="return" safearray="yes">
        
      </param>
    </method>

    <method name="enableMetrics">
      
      <param name="metricNames" type="wstring" dir="in" safearray="yes">
        
      </param>
      <param name="objects" type="$unknown" dir="in" safearray="yes">
        
      </param>
      <param name="affectedMetrics" type="IPerformanceMetric" dir="return" safearray="yes">
        
      </param>
    </method>

    <method name="disableMetrics">
      
      <param name="metricNames" type="wstring" dir="in" safearray="yes">
        
      </param>
      <param name="objects" type="$unknown" dir="in" safearray="yes">
        
      </param>
      <param name="affectedMetrics" type="IPerformanceMetric" dir="return" safearray="yes">
        
      </param>
    </method>

    <method name="queryMetricsData">
      
      <param name="metricNames" type="wstring" dir="in" safearray="yes">
        
      </param>
      <param name="objects" type="$unknown" dir="in" safearray="yes">
        
      </param>
      <param name="returnMetricNames" type="wstring" dir="out" safearray="yes">
        
      </param>
      <param name="returnObjects" type="$unknown" dir="out" safearray="yes">
        
      </param>
      <param name="returnUnits" type="wstring" dir="out" safearray="yes">
        
      </param>
      <param name="returnScales" type="unsigned long" dir="out" safearray="yes">
        
      </param>
      <param name="returnSequenceNumbers" type="unsigned long" dir="out" safearray="yes">
        
      </param>
      <param name="returnDataIndices" type="unsigned long" dir="out" safearray="yes">
        
      </param>
      <param name="returnDataLengths" type="unsigned long" dir="out" safearray="yes">
        
      </param>
      <param name="returnData" type="long" dir="return" safearray="yes">
        
      </param>
    </method>

  </interface>

  <enum name="NATAliasMode" uuid="67772168-50d9-11df-9669-7fb714ee4fa1">
    
    <const name="AliasLog" value="0x1">
      
    </const>
    <const name="AliasProxyOnly" value="0x02">
      
    </const>
    <const name="AliasUseSamePorts" value="0x04">
      
    </const>
  </enum>

  <enum name="NATProtocol" uuid="e90164be-eb03-11de-94af-fff9b1c1b19f">
    
    <const name="UDP" value="0">
        
    </const>
    <const name="TCP" value="1">
        
    </const>
  </enum>

  <interface name="INATEngine" extends="$unknown" uuid="26451b99-3b2d-4dcb-8e4b-d63654218175" wsmap="managed">
    
    <attribute name="network" type="wstring">
      
    </attribute>
    <attribute name="hostIP" type="wstring">
        
    </attribute>
    <attribute name="TFTPPrefix" type="wstring">
      
    </attribute>
    <attribute name="TFTPBootFile" type="wstring">
      
    </attribute>
    <attribute name="TFTPNextServer" type="wstring">
      
    </attribute>
    <attribute name="aliasMode" type="unsigned long">
      
    </attribute>
    <attribute name="DNSPassDomain" type="boolean">
      
    </attribute>
    <attribute name="DNSProxy" type="boolean">
      
    </attribute>
    <attribute name="DNSUseHostResolver" type="boolean">
      
    </attribute>
    <attribute name="redirects" type="wstring" readonly="yes" safearray="yes">
      
    </attribute>
    <method name="setNetworkSettings">
      
      <param name="mtu" type="unsigned long" dir="in">
        
      </param>
      <param name="sockSnd" type="unsigned long" dir="in">
        
      </param>
      <param name="sockRcv" type="unsigned long" dir="in">
        
      </param>
      <param name="TcpWndSnd" type="unsigned long" dir="in">
        
      </param>
      <param name="TcpWndRcv" type="unsigned long" dir="in">
        
      </param>
    </method>
    <method name="getNetworkSettings">
      
      <param name="mtu" type="unsigned long" dir="out"/>
      <param name="sockSnd" type="unsigned long" dir="out"/>
      <param name="sockRcv" type="unsigned long" dir="out"/>
      <param name="TcpWndSnd" type="unsigned long" dir="out"/>
      <param name="TcpWndRcv" type="unsigned long" dir="out"/>
    </method>
    <method name="addRedirect">
        
        <param name="name" type="wstring" dir="in">
          
        </param>
        <param name="proto" type="NATProtocol" dir="in">
          
        </param>
        <param name="hostIP" type="wstring" dir="in">
          
        </param>
        <param name="hostPort" type="unsigned short" dir="in">
          
        </param>
        <param name="guestIP" type="wstring" dir="in">
          
        </param>
        <param name="guestPort" type="unsigned short" dir="in">
          
        </param>
    </method>
    <method name="removeRedirect">
      
      <param name="name" type="wstring" dir="in">
        
      </param>
    </method>
  </interface>

  

  <interface name="IExtPackPlugIn" extends="$unknown" uuid="58000040-e718-4746-bbce-4b86d96da461" wsmap="suppress">
    
    <attribute name="name" type="wstring" readonly="yes">
      
    </attribute>
    <attribute name="description" type="wstring" readonly="yes">
      
    </attribute>
    <attribute name="frontend" type="wstring" readonly="yes">
      
    </attribute>
    <attribute name="modulePath" type="wstring" readonly="yes">
      
    </attribute>
  </interface>

  <interface name="IExtPackBase" extends="$unknown" uuid="f79b75d8-2890-4f34-ffff-ffffa144e82c" wsmap="suppress">
    
    <attribute name="name" type="wstring" readonly="yes">
      
    </attribute>
    <attribute name="description" type="wstring" readonly="yes">
      
    </attribute>
    <attribute name="version" type="wstring" readonly="yes">
      
    </attribute>
    <attribute name="revision" type="unsigned long" readonly="yes">
      
    </attribute>
    <attribute name="edition" type="wstring" readonly="yes">
      
    </attribute>
    <attribute name="VRDEModule" type="wstring" readonly="yes">
      
    </attribute>
    <attribute name="plugIns" type="IExtPackPlugIn" safearray="yes" readonly="yes">
      
    </attribute>
    <attribute name="usable" type="boolean" readonly="yes">
      
    </attribute>
    <attribute name="whyUnusable" type="wstring" readonly="yes">
      
    </attribute>
    <attribute name="showLicense" type="boolean" readonly="yes">
      
    </attribute>
    <attribute name="license" type="wstring" readonly="yes">
      
    </attribute>

    <method name="queryLicense">
      
      <param name="preferredLocale" type="wstring" dir="in">
        
      </param>
      <param name="preferredLanguage" type="wstring" dir="in">
        
      </param>
      <param name="format" type="wstring" dir="in">
        
      </param>
      <param name="licenseText" type="wstring" dir="return">
        
      </param>
    </method>

  </interface>

  <interface name="IExtPack" extends="IExtPackBase" uuid="431685da-3618-4ebc-b038-833ba829b4b2" wsmap="suppress">
    
    <method name="queryObject">
      
      <param name="objUuid" type="wstring" dir="in">
        
      </param>
      <param name="returnInterface" type="$unknown" dir="return">
        
      </param>
    </method>
  </interface>

  <interface name="IExtPackFile" extends="IExtPackBase" uuid="b6b49f55-efcc-4f08-b486-56e8d8afb10b" wsmap="suppress">
    
    <attribute name="filePath" type="wstring" readonly="yes">
      
    </attribute>

    <method name="install">
      
      <param name="replace" type="boolean" dir="in">
        
      </param>
      <param name="displayInfo" type="wstring" dir="in">
        
      </param>
      <param name="progess" type="IProgress" dir="return">
        
      </param>
    </method>
  </interface>

  <interface name="IExtPackManager" extends="$unknown" uuid="3295e6ce-b051-47b2-9514-2c588bfe7554" wsmap="suppress">
    

    <attribute name="installedExtPacks" type="IExtPack" safearray="yes" readonly="yes">
      
    </attribute>

    <method name="find">
      
      <param name="name" type="wstring" dir="in">
        
      </param>
      <param name="returnData" type="IExtPack" dir="return">
        
      </param>
    </method>

    <method name="openExtPackFile">
      
      <param name="path" type="wstring" dir="in">
        
      </param>
      <param name="file" type="IExtPackFile" dir="return">
        
      </param>
    </method>

    <method name="uninstall">
      
      <param name="name" type="wstring" dir="in">
        
      </param>
      <param name="forcedRemoval" type="boolean" dir="in">
        
      </param>
      <param name="displayInfo" type="wstring" dir="in">
        
      </param>
      <param name="progess" type="IProgress" dir="return">
        
      </param>
    </method>

    <method name="cleanup">
      
    </method>

    <method name="queryAllPlugInsForFrontend">
      
      <param name="frontendName" type="wstring" dir="in">
        
      </param>
      <param name="plugInModules" type="wstring" dir="return" safearray="yes">
        
      </param>
    </method>

    <method name="isExtPackUsable">
      
      <param name="name" type="wstring" dir="in">
        
      </param>
      <param name="usable" type="boolean" dir="return">
        
      </param>
    </method>

  </interface>

  
  <enum name="BandwidthGroupType" uuid="1d92b67d-dc69-4be9-ad4c-93a01e1e0c8e">

    

    <const name="Null" value="0">
      
    </const>

    <const name="Disk" value="1">
      
    </const>

    <const name="Network" value="2">
      
    </const>

  </enum>

  
  <interface name="IBandwidthGroup" extends="$unknown" uuid="badea2d7-0261-4146-89f0-6a57cc34833d" wsmap="managed">
    

    <attribute name="name" type="wstring" readonly="yes">
      
    </attribute>

    <attribute name="type" type="BandwidthGroupType" readonly="yes">
      
    </attribute>

    <attribute name="reference" type="unsigned long" readonly="yes">
      
    </attribute>

    <attribute name="maxBytesPerSec" type="long long">
      
    </attribute>

  </interface>

  
  <interface name="IBandwidthControl" extends="$unknown" uuid="e2eb3930-d2f4-4f87-be17-0707e30f019f" wsmap="managed">
    

    <attribute name="numGroups" type="unsigned long" readonly="yes">
      
    </attribute>

    <method name="createBandwidthGroup">
      

      <param name="name" type="wstring" dir="in">
        
      </param>
      <param name="type" type="BandwidthGroupType" dir="in">
        
      </param>
      <param name="maxBytesPerSec" type="long long" dir="in">
        
      </param>
    </method>

    <method name="deleteBandwidthGroup">
      

      <param name="name" type="wstring" dir="in">
        
      </param>
    </method>

    <method name="getBandwidthGroup" const="yes">
      

      <param name="name" type="wstring" dir="in">
        
      </param>
      <param name="bandwidthGroup" type="IBandwidthGroup" dir="return">
        
      </param>
    </method>

    <method name="getAllBandwidthGroups" const="yes">
      

      <param name="bandwidthGroups" type="IBandwidthGroup" dir="return" safearray="yes">
        
      </param>
    </method>
  </interface>

  

  <interface name="IVirtualBoxClient" extends="$unknown" uuid="d191281f-b0cb-4d83-a8fa-0d9fd6ba234c" wsmap="suppress">
    

    <attribute name="virtualBox" type="IVirtualBox" readonly="yes">
      
    </attribute>

    <attribute name="session" type="ISession" readonly="yes">
      
    </attribute>

    <attribute name="eventSource" type="IEventSource" readonly="yes">
      
    </attribute>

    <method name="checkMachineError">
      

      <param name="machine" type="IMachine" dir="in">
        
      </param>
    </method>
  </interface>

  
  <enum name="VBoxEventType" uuid="5248e377-e578-47d7-b07b-84b1db6db8a8">

    

    <const name="Invalid" value="0">
      
    </const>

    <const name="Any" value="1">
      
    </const>

    <const name="Vetoable" value="2">
      
    </const>

    <const name="MachineEvent" value="3">
      
    </const>

    <const name="SnapshotEvent" value="4">
      
    </const>

    <const name="InputEvent" value="5">
      
    </const>

    <const name="LastWildcard" value="31">
      
    </const>

    <const name="OnMachineStateChanged" value="32">
      
    </const>
    <const name="OnMachineDataChanged" value="33">
      
    </const>
    <const name="OnExtraDataChanged" value="34">
      
    </const>
    <const name="OnExtraDataCanChange" value="35">
      
    </const>
    <const name="OnMediumRegistered" value="36">
      
    </const>
    <const name="OnMachineRegistered" value="37">
      
    </const>
    <const name="OnSessionStateChanged" value="38">
      
    </const>
    <const name="OnSnapshotTaken" value="39">
      
    </const>
    <const name="OnSnapshotDeleted" value="40">
      
    </const>
    <const name="OnSnapshotChanged" value="41">
      
    </const>
    <const name="OnGuestPropertyChanged" value="42">
      
    </const>
    
    <const name="OnMousePointerShapeChanged" value="43">
      
    </const>
    <const name="OnMouseCapabilityChanged" value="44">
      
    </const>
    <const name="OnKeyboardLedsChanged" value="45">
      
    </const>
    <const name="OnStateChanged" value="46">
      
    </const>
    <const name="OnAdditionsStateChanged" value="47">
      
    </const>
    <const name="OnNetworkAdapterChanged" value="48">
      
    </const>
    <const name="OnSerialPortChanged" value="49">
      
    </const>
    <const name="OnParallelPortChanged" value="50">
      
    </const>
    <const name="OnStorageControllerChanged" value="51">
      
    </const>
    <const name="OnMediumChanged" value="52">
      
    </const>
    <const name="OnVRDEServerChanged" value="53">
      
    </const>
    <const name="OnUSBControllerChanged" value="54">
      
    </const>
    <const name="OnUSBDeviceStateChanged" value="55">
      
    </const>
    <const name="OnSharedFolderChanged" value="56">
      
    </const>
    <const name="OnRuntimeError" value="57">
      
    </const>
    <const name="OnCanShowWindow" value="58">
      
    </const>
    <const name="OnShowWindow" value="59">
      
    </const>
    <const name="OnCPUChanged" value="60">
      
    </const>
    <const name="OnVRDEServerInfoChanged" value="61">
      
    </const>
    <const name="OnEventSourceChanged" value="62">
      
    </const>
    <const name="OnCPUExecutionCapChanged" value="63">
      
    </const>
    <const name="OnGuestKeyboard" value="64">
      
    </const>
    <const name="OnGuestMouse" value="65">
      
    </const>
    <const name="OnNATRedirect" value="66">
      
    </const>
    <const name="OnHostPCIDevicePlug" value="67">
      
    </const>
    <const name="OnVBoxSVCAvailabilityChanged" value="68">
      
    </const>
    <const name="OnBandwidthGroupChanged" value="69">
      
    </const>
    <const name="OnGuestMonitorChanged" value="70">
      
    </const>
    <const name="OnStorageDeviceChanged" value="71">
      
    </const>
    <const name="OnClipboardModeChanged" value="72">
      
    </const>
    <const name="OnDragAndDropModeChanged" value="73">
      
    </const>
    <const name="OnNATNetworkChanged" value="74">
      
    </const>
    <const name="OnNATNetworkStartStop" value="75">
      
    </const>
    <const name="OnNATNetworkAlter" value="76">
      
    </const>
    <const name="OnNATNetworkCreationDeletion" value="77">
      
    </const>
    <const name="OnNATNetworkSetting" value="78">
      
    </const>
    <const name="OnNATNetworkPortForward" value="79">
      
    </const>
    <const name="OnGuestSessionStateChanged" value="80">
      
    </const>
    <const name="OnGuestSessionRegistered" value="81">
      
    </const>
    <const name="OnGuestProcessRegistered" value="82">
      
    </const>
    <const name="OnGuestProcessStateChanged" value="83">
      
    </const>
    <const name="OnGuestProcessInputNotify" value="84">
      
    </const>
    <const name="OnGuestProcessOutput" value="85">
      
    </const>
    <const name="OnGuestFileRegistered" value="86">
      
    </const>
    <const name="OnGuestFileStateChanged" value="87">
      
    </const>
    <const name="OnGuestFileOffsetChanged" value="88">
      
    </const>
    <const name="OnGuestFileRead" value="89">
      
    </const>
    <const name="OnGuestFileWrite" value="90">
      
    </const>
    <const name="OnVideoCaptureChanged" value="91">
      
    </const>
    <const name="OnGuestUserStateChanged" value="92">
      
    </const>
    <const name="OnGuestMultiTouch" value="93">
      
    </const>
    <const name="OnHostNameResolutionConfigurationChange" value="94">
      
    </const>
    
    
    <const name="Last" value="95">
      
    </const>

  </enum>

  <interface name="IEventSource" extends="$unknown" uuid="9b6e1aee-35f3-4f4d-b5bb-ed0ecefd8538" wsmap="managed">
    

    <method name="createListener">
      
      <param name="listener" type="IEventListener" dir="return"/>
    </method>

    <method name="createAggregator">
      
      <param name="subordinates" type="IEventSource" dir="in" safearray="yes">
        
      </param>
      <param name="result" type="IEventSource" dir="return">
        
      </param>
    </method>

    <method name="registerListener">
      
      <param name="listener" type="IEventListener" dir="in">
        
      </param>
      <param name="interesting" type="VBoxEventType" dir="in" safearray="yes">
        
      </param>
      <param name="active" type="boolean" dir="in">
        
      </param>
    </method>

    <method name="unregisterListener">
      
      <param name="listener" type="IEventListener" dir="in">
        
      </param>
    </method>

    <method name="fireEvent">
      
      <param name="event" type="IEvent" dir="in">
        
      </param>
      <param name="timeout" type="long" dir="in">
        
      </param>
      <param name="result" type="boolean" dir="return">
        
      </param>
    </method>

    <method name="getEvent">
      
      <param name="listener" type="IEventListener" dir="in">
        
      </param>
      <param name="timeout" type="long" dir="in">
        
      </param>
      <param name="event" type="IEvent" dir="return">
        
      </param>
    </method>

    <method name="eventProcessed">
      
      <param name="listener" type="IEventListener" dir="in">
        
      </param>
      <param name="event" type="IEvent" dir="in">
        
      </param>
    </method>

  </interface>

  <interface name="IEventListener" extends="$unknown" uuid="67099191-32e7-4f6c-85ee-422304c71b90" wsmap="managed">
    

    <method name="handleEvent">
      
      <param name="event" type="IEvent" dir="in">
        
      </param>
    </method>

  </interface>

  <interface name="IEvent" extends="$unknown" uuid="0ca2adba-8f30-401b-a8cd-fe31dbe839c0" wsmap="managed">
    

    <attribute name="type" readonly="yes" type="VBoxEventType">
      
    </attribute>

    <attribute name="source" readonly="yes" type="IEventSource">
      
    </attribute>

    <attribute name="waitable" readonly="yes" type="boolean">
      
    </attribute>

    <method name="setProcessed">
      
    </method>

    <method name="waitProcessed">
      
      <param name="timeout" type="long" dir="in">
        
      </param>
      <param name="result" type="boolean" dir="return">
        
      </param>
    </method>
  </interface>


  <interface name="IReusableEvent" extends="IEvent" uuid="69bfb134-80f6-4266-8e20-16371f68fa25" wsmap="managed">
    

    <attribute name="generation" readonly="yes" type="unsigned long">
      
    </attribute>

    <method name="reuse">
      
    </method>
  </interface>

  <interface name="IMachineEvent" extends="IEvent" uuid="92ed7b1a-0d96-40ed-ae46-a564d484325e" wsmap="managed" id="MachineEvent">
    

    <attribute name="machineId" readonly="yes" type="uuid" mod="string">
      
    </attribute>

  </interface>

  <interface name="IMachineStateChangedEvent" extends="IMachineEvent" uuid="5748F794-48DF-438D-85EB-98FFD70D18C9" wsmap="managed" autogen="VBoxEvent" id="OnMachineStateChanged">
    

    <attribute name="state" readonly="yes" type="MachineState">
      
    </attribute>
  </interface>

  <interface name="IMachineDataChangedEvent" extends="IMachineEvent" uuid="abe94809-2e88-4436-83d7-50f3e64d0503" wsmap="managed" autogen="VBoxEvent" id="OnMachineDataChanged">
    

    <attribute name="temporary" readonly="yes" type="boolean">
      
    </attribute>
  </interface>

  <interface name="IMediumRegisteredEvent" extends="IEvent" uuid="53fac49a-b7f1-4a5a-a4ef-a11dd9c2a458" wsmap="managed" autogen="VBoxEvent" id="OnMediumRegistered">
    

    <attribute name="mediumId" readonly="yes" type="uuid" mod="string">
      
    </attribute>

    <attribute name="mediumType" readonly="yes" type="DeviceType">
      
    </attribute>

    <attribute name="registered" type="boolean" readonly="yes">
      
    </attribute>
  </interface>

  <interface name="IMachineRegisteredEvent" extends="IMachineEvent" uuid="c354a762-3ff2-4f2e-8f09-07382ee25088" wsmap="managed" autogen="VBoxEvent" id="OnMachineRegistered">
    

    <attribute name="registered" type="boolean" readonly="yes">
      
    </attribute>
  </interface>

  <interface name="ISessionStateChangedEvent" extends="IMachineEvent" uuid="714a3eef-799a-4489-86cd-fe8e45b2ff8e" wsmap="managed" autogen="VBoxEvent" id="OnSessionStateChanged">
    

    <attribute name="state" type="SessionState" readonly="yes">
      
    </attribute>
  </interface>

  <interface name="IGuestPropertyChangedEvent" extends="IMachineEvent" uuid="3f63597a-26f1-4edb-8dd2-6bddd0912368" wsmap="managed" autogen="VBoxEvent" id="OnGuestPropertyChanged">
    

    <attribute name="name" readonly="yes" type="wstring">
      
    </attribute>

    <attribute name="value" readonly="yes" type="wstring">
      
    </attribute>

    <attribute name="flags" readonly="yes" type="wstring">
      
    </attribute>

  </interface>

  <interface name="ISnapshotEvent" extends="IMachineEvent" uuid="21637b0e-34b8-42d3-acfb-7e96daf77c22" wsmap="managed" id="SnapshotEvent">
    

    <attribute name="snapshotId" readonly="yes" type="uuid" mod="string">
      
    </attribute>

  </interface>

  <interface name="ISnapshotTakenEvent" extends="ISnapshotEvent" uuid="d27c0b3d-6038-422c-b45e-6d4a0503d9f1" wsmap="managed" autogen="VBoxEvent" id="OnSnapshotTaken">
    
  </interface>

  <interface name="ISnapshotDeletedEvent" extends="ISnapshotEvent" uuid="c48f3401-4a9e-43f4-b7a7-54bd285e22f4" wsmap="managed" autogen="VBoxEvent" id="OnSnapshotDeleted">
    
  </interface>

  <interface name="ISnapshotChangedEvent" extends="ISnapshotEvent" uuid="07541941-8079-447a-a33e-47a69c7980db" wsmap="managed" autogen="VBoxEvent" id="OnSnapshotChanged">
    
  </interface>

  <interface name="IMousePointerShapeChangedEvent" extends="IEvent" uuid="a6dcf6e8-416b-4181-8c4a-45ec95177aef" wsmap="managed" autogen="VBoxEvent" id="OnMousePointerShapeChanged">
    

    <attribute name="visible" type="boolean" readonly="yes">
      
    </attribute>
    <attribute name="alpha" type="boolean" readonly="yes">
      
    </attribute>
    <attribute name="xhot" type="unsigned long" readonly="yes">
      
    </attribute>
    <attribute name="yhot" type="unsigned long" readonly="yes">
      
    </attribute>
    <attribute name="width" type="unsigned long" readonly="yes">
      
    </attribute>
    <attribute name="height" type="unsigned long" readonly="yes">
      
    </attribute>
    <attribute name="shape" type="octet" safearray="yes" readonly="yes">
      
    </attribute>
  </interface>

  <interface name="IMouseCapabilityChangedEvent" extends="IEvent" uuid="70e7779a-e64a-4908-804e-371cad23a756" wsmap="managed" autogen="VBoxEvent" id="OnMouseCapabilityChanged">
    
    <attribute name="supportsAbsolute" type="boolean" readonly="yes">
      
    </attribute>
    <attribute name="supportsRelative" type="boolean" readonly="yes">
      
    </attribute>
    <attribute name="supportsMultiTouch" type="boolean" readonly="yes">
      
    </attribute>
    <attribute name="needsHostCursor" type="boolean" readonly="yes">
      
    </attribute>
  </interface>

  <interface name="IKeyboardLedsChangedEvent" extends="IEvent" uuid="6DDEF35E-4737-457B-99FC-BC52C851A44F" wsmap="managed" autogen="VBoxEvent" id="OnKeyboardLedsChanged">
    
    <attribute name="numLock" type="boolean" readonly="yes">
      
    </attribute>
    <attribute name="capsLock" type="boolean" readonly="yes">
      
    </attribute>
    <attribute name="scrollLock" type="boolean" readonly="yes">
      
    </attribute>
  </interface>

  <interface name="IStateChangedEvent" extends="IEvent" uuid="4376693C-CF37-453B-9289-3B0F521CAF27" wsmap="managed" autogen="VBoxEvent" id="OnStateChanged">
    
    <attribute name="state" type="MachineState" readonly="yes">
      
    </attribute>
  </interface>

  <interface name="IAdditionsStateChangedEvent" extends="IEvent" uuid="D70F7915-DA7C-44C8-A7AC-9F173490446A" wsmap="managed" autogen="VBoxEvent" id="OnAdditionsStateChanged">
    
  </interface>

  <interface name="INetworkAdapterChangedEvent" extends="IEvent" uuid="08889892-1EC6-4883-801D-77F56CFD0103" wsmap="managed" autogen="VBoxEvent" id="OnNetworkAdapterChanged">
    
    <attribute name="networkAdapter" type="INetworkAdapter" readonly="yes">
      
    </attribute>
  </interface>

  <interface name="ISerialPortChangedEvent" extends="IEvent" uuid="3BA329DC-659C-488B-835C-4ECA7AE71C6C" wsmap="managed" autogen="VBoxEvent" id="OnSerialPortChanged">
    
    <attribute name="serialPort" type="ISerialPort" readonly="yes">
      
    </attribute>
  </interface>

  <interface name="IParallelPortChangedEvent" extends="IEvent" uuid="813C99FC-9849-4F47-813E-24A75DC85615" wsmap="managed" autogen="VBoxEvent" id="OnParallelPortChanged">
    
    <attribute name="parallelPort" type="IParallelPort" readonly="yes">
      
    </attribute>
  </interface>

  <interface name="IStorageControllerChangedEvent" extends="IEvent" uuid="715212BF-DA59-426E-8230-3831FAA52C56" wsmap="managed" autogen="VBoxEvent" id="OnStorageControllerChanged">
    
  </interface>

  <interface name="IMediumChangedEvent" extends="IEvent" uuid="0FE2DA40-5637-472A-9736-72019EABD7DE" wsmap="managed" autogen="VBoxEvent" id="OnMediumChanged">
    
    <attribute name="mediumAttachment" type="IMediumAttachment" readonly="yes">
      
    </attribute>
  </interface>

  <interface name="IClipboardModeChangedEvent" extends="IEvent" uuid="cac21692-7997-4595-a731-3a509db604e5" wsmap="managed" autogen="VBoxEvent" id="OnClipboardModeChanged">
    
    <attribute name="clipboardMode" type="ClipboardMode" readonly="yes">
      
    </attribute>
  </interface>

  <interface name="IDragAndDropModeChangedEvent" extends="IEvent" uuid="e90b8850-ac8e-4dff-8059-4100ae2c3c3d" wsmap="managed" autogen="VBoxEvent" id="OnDragAndDropModeChanged">
    
    <attribute name="dragAndDropMode" type="DragAndDropMode" readonly="yes">
      
    </attribute>
  </interface>

  <interface name="ICPUChangedEvent" extends="IEvent" uuid="4da2dec7-71b2-4817-9a64-4ed12c17388e" wsmap="managed" autogen="VBoxEvent" id="OnCPUChanged">
    
    <attribute name="CPU" type="unsigned long" readonly="yes">
      
    </attribute>
    <attribute name="add" type="boolean" readonly="yes">
      
    </attribute>
  </interface>

  <interface name="ICPUExecutionCapChangedEvent" extends="IEvent" uuid="dfa7e4f5-b4a4-44ce-85a8-127ac5eb59dc" wsmap="managed" autogen="VBoxEvent" id="OnCPUExecutionCapChanged">
    
    <attribute name="executionCap" type="unsigned long" readonly="yes">
      
    </attribute>
  </interface>

  <interface name="IGuestKeyboardEvent" extends="IEvent" uuid="88394258-7006-40d4-b339-472ee3801844" wsmap="managed" autogen="VBoxEvent" id="OnGuestKeyboard">
    
    <attribute name="scancodes" type="long" safearray="yes" readonly="yes">
      
    </attribute>
  </interface>

  <enum name="GuestMouseEventMode" uuid="4b500146-ebba-4b7c-bc29-69c2d57a5caf">

    

    <const name="Relative" value="0">
      
    </const>

    <const name="Absolute" value="1">
      
    </const>
  </enum>

  <interface name="IGuestMouseEvent" extends="IReusableEvent" uuid="179f8647-319c-4e7e-8150-c5837bd265f6" wsmap="managed" autogen="VBoxEvent" id="OnGuestMouse">
    

    <attribute name="mode" type="GuestMouseEventMode" readonly="yes">
      
    </attribute>

    <attribute name="x" type="long" readonly="yes">
      
    </attribute>

    <attribute name="y" type="long" readonly="yes">
      
    </attribute>

    <attribute name="z" type="long" readonly="yes">
      
    </attribute>

    <attribute name="w" type="long" readonly="yes">
      
    </attribute>

    <attribute name="buttons" type="long" readonly="yes">
      
    </attribute>

  </interface>

  <interface name="IGuestMultiTouchEvent" extends="IEvent" uuid="be8a0eb5-f4f4-4dd0-9d30-c89b873247ec" wsmap="managed" autogen="VBoxEvent" id="OnGuestMultiTouch">
    
    <attribute name="contactCount" type="long" readonly="yes">
      
    </attribute>
    <attribute name="xPositions" type="short" safearray="yes" readonly="yes">
      
    </attribute>
    <attribute name="yPositions" type="short" safearray="yes" readonly="yes">
      
    </attribute>
    <attribute name="contactIds" type="unsigned short" safearray="yes" readonly="yes">
      
    </attribute>
    <attribute name="contactFlags" type="unsigned short" safearray="yes" readonly="yes">
      
    </attribute>
    <attribute name="scanTime" type="unsigned long" readonly="yes">
      
    </attribute>
  </interface>

  <interface name="IGuestSessionEvent" extends="IEvent" uuid="b9acd33f-647d-45ac-8fe9-f49b3183ba37" wsmap="managed">
    

    <attribute name="session" type="IGuestSession" readonly="yes">
      
    </attribute>

  </interface>

  <interface name="IGuestSessionStateChangedEvent" extends="IGuestSessionEvent" uuid="327e3c00-ee61-462f-aed3-0dff6cbf9904" wsmap="managed" autogen="VBoxEvent" id="OnGuestSessionStateChanged">
    

    <attribute name="id" type="unsigned long" readonly="yes">
      
    </attribute>
    <attribute name="status" type="GuestSessionStatus" readonly="yes">
      
    </attribute>
    <attribute name="error" type="IVirtualBoxErrorInfo" readonly="yes">
      
    </attribute>

  </interface>

  <interface name="IGuestSessionRegisteredEvent" extends="IGuestSessionEvent" uuid="b79de686-eabd-4fa6-960a-f1756c99ea1c" wsmap="managed" autogen="VBoxEvent" id="OnGuestSessionRegistered">
    

    <attribute name="registered" type="boolean" readonly="yes">
      
    </attribute>

  </interface>

  <interface name="IGuestProcessEvent" extends="IGuestSessionEvent" uuid="2405f0e5-6588-40a3-9b0a-68c05ba52c4b" wsmap="managed">
    

    <attribute name="process" type="IGuestProcess" readonly="yes">
      
    </attribute>
    <attribute name="pid" type="unsigned long" readonly="yes">
      
    </attribute>

  </interface>

  <interface name="IGuestProcessRegisteredEvent" extends="IGuestProcessEvent" uuid="1d89e2b3-c6ea-45b6-9d43-dc6f70cc9f02" wsmap="managed" autogen="VBoxEvent" id="OnGuestProcessRegistered">
    

    <attribute name="registered" type="boolean" readonly="yes">
      
    </attribute>

  </interface>

  <interface name="IGuestProcessStateChangedEvent" extends="IGuestProcessEvent" uuid="c365fb7b-4430-499f-92c8-8bed814a567a" wsmap="managed" autogen="VBoxEvent" id="OnGuestProcessStateChanged">
    

    <attribute name="status" type="ProcessStatus" readonly="yes">
      
    </attribute>
    <attribute name="error" type="IVirtualBoxErrorInfo" readonly="yes">
      
    </attribute>

  </interface>

  <interface name="IGuestProcessIOEvent" extends="IGuestProcessEvent" uuid="9ea9227c-e9bb-49b3-bfc7-c5171e93ef38" wsmap="managed">
    

    <attribute name="handle" type="unsigned long" readonly="yes">
      
    </attribute>

    <attribute name="processed" type="unsigned long" readonly="yes">
      
    </attribute>

  </interface>

  <interface name="IGuestProcessInputNotifyEvent" extends="IGuestProcessIOEvent" uuid="0de887f2-b7db-4616-aac6-cfb94d89ba78" wsmap="managed" autogen="VBoxEvent" id="OnGuestProcessInputNotify">
    

    <attribute name="status" type="ProcessInputStatus" readonly="yes">
      
    </attribute>

  </interface>

  <interface name="IGuestProcessOutputEvent" extends="IGuestProcessIOEvent" uuid="d3d5f1ee-bcb2-4905-a7ab-cc85448a742b" wsmap="managed" autogen="VBoxEvent" id="OnGuestProcessOutput">
    

    <attribute name="data" type="octet" safearray="yes" readonly="yes">
      
    </attribute>

  </interface>

  <interface name="IGuestFileEvent" extends="IGuestSessionEvent" uuid="c8adb7b0-057d-4391-b928-f14b06b710c5" wsmap="managed">
    

    <attribute name="file" type="IGuestFile" readonly="yes">
      
    </attribute>

  </interface>

  <interface name="IGuestFileRegisteredEvent" extends="IGuestFileEvent" uuid="d0d93830-70a2-487e-895e-d3fc9679f7b3" wsmap="managed" autogen="VBoxEvent" id="OnGuestFileRegistered">
    

    <attribute name="registered" type="boolean" readonly="yes">
      
    </attribute>

  </interface>

  <interface name="IGuestFileStateChangedEvent" extends="IGuestFileEvent" uuid="d37fe88f-0979-486c-baa1-3abb144dc82d" wsmap="managed" autogen="VBoxEvent" id="OnGuestFileStateChanged">
    

    <attribute name="status" type="FileStatus" readonly="yes">
      
    </attribute>
    <attribute name="error" type="IVirtualBoxErrorInfo" readonly="yes">
      
    </attribute>
    

  </interface>

  <interface name="IGuestFileIOEvent" extends="IGuestFileEvent" uuid="b5191a7c-9536-4ef8-820e-3b0e17e5bbc8" wsmap="managed">
    

    <attribute name="offset" type="long long" readonly="yes">
      
    </attribute>
    <attribute name="processed" type="unsigned long" readonly="yes">
      
    </attribute>

  </interface>

  <interface name="IGuestFileOffsetChangedEvent" extends="IGuestFileIOEvent" uuid="e8f79a21-1207-4179-94cf-ca250036308f" wsmap="managed" autogen="VBoxEvent" id="OnGuestFileOffsetChanged">
    

  </interface>

  <interface name="IGuestFileReadEvent" extends="IGuestFileIOEvent" uuid="4ee3cbcb-486f-40db-9150-deee3fd24189" wsmap="managed" autogen="VBoxEvent" id="OnGuestFileRead">
    

    <attribute name="data" type="octet" safearray="yes" readonly="yes">
      
    </attribute>

  </interface>

  <interface name="IGuestFileWriteEvent" extends="IGuestFileIOEvent" uuid="e062a915-3cf5-4c0a-bc90-9b8d4cc94d89" wsmap="managed" autogen="VBoxEvent" id="OnGuestFileWrite">
    

  </interface>

  <interface name="IVRDEServerChangedEvent" extends="IEvent" uuid="a06fd66a-3188-4c8c-8756-1395e8cb691c" wsmap="managed" autogen="VBoxEvent" id="OnVRDEServerChanged">
    
  </interface>

  <interface name="IVRDEServerInfoChangedEvent" extends="IEvent" uuid="dd6a1080-e1b7-4339-a549-f0878115596e" wsmap="managed" autogen="VBoxEvent" id="OnVRDEServerInfoChanged">
    
  </interface>

  <interface name="IVideoCaptureChangedEvent" extends="IEvent" uuid="6215d169-25dd-4719-ab34-c908701efb58" wsmap="managed" autogen="VBoxEvent" id="OnVideoCaptureChanged">
    
  </interface>

  <interface name="IUSBControllerChangedEvent" extends="IEvent" uuid="93BADC0C-61D9-4940-A084-E6BB29AF3D83" wsmap="managed" autogen="VBoxEvent" id="OnUSBControllerChanged">
    
  </interface>

  <interface name="IUSBDeviceStateChangedEvent" extends="IEvent" uuid="806da61b-6679-422a-b629-51b06b0c6d93" wsmap="managed" autogen="VBoxEvent" id="OnUSBDeviceStateChanged">
    
    <attribute name="device" type="IUSBDevice" readonly="yes">
      
    </attribute>
    <attribute name="attached" type="boolean" readonly="yes">
      
    </attribute>
    <attribute name="error" type="IVirtualBoxErrorInfo" readonly="yes">
      
    </attribute>
  </interface>

  <interface name="ISharedFolderChangedEvent" extends="IEvent" uuid="B66349B5-3534-4239-B2DE-8E1535D94C0B" wsmap="managed" autogen="VBoxEvent" id="OnSharedFolderChanged">
    
    <attribute name="scope" type="Scope" readonly="yes">
      
    </attribute>
  </interface>

  <interface name="IRuntimeErrorEvent" extends="IEvent" uuid="883DD18B-0721-4CDE-867C-1A82ABAF914C" wsmap="managed" autogen="VBoxEvent" id="OnRuntimeError">
    
    <attribute name="fatal" type="boolean" readonly="yes">
      
    </attribute>
    <attribute name="id" type="wstring" readonly="yes">
      
    </attribute>
    <attribute name="message" type="wstring" readonly="yes">
      
    </attribute>
  </interface>


  <interface name="IEventSourceChangedEvent" extends="IEvent" uuid="e7932cb8-f6d4-4ab6-9cbf-558eb8959a6a" waitable="yes" wsmap="managed" autogen="VBoxEvent" id="OnEventSourceChanged">
    

    <attribute name="listener" type="IEventListener" readonly="yes">
      
    </attribute>

    <attribute name="add" type="boolean" readonly="yes">
      
    </attribute>
  </interface>

  <interface name="IExtraDataChangedEvent" extends="IEvent" uuid="024F00CE-6E0B-492A-A8D0-968472A94DC7" wsmap="managed" autogen="VBoxEvent" id="OnExtraDataChanged">
    
    <attribute name="machineId" type="uuid" mod="string" readonly="yes">
      
    </attribute>
    <attribute name="key" type="wstring" readonly="yes">
      
    </attribute>
    <attribute name="value" type="wstring" readonly="yes">
      
    </attribute>
  </interface>

  <interface name="IVetoEvent" extends="IEvent" uuid="9a1a4130-69fe-472f-ac10-c6fa25d75007" wsmap="managed">
    

    <method name="addVeto">
      
      <param name="reason" type="wstring" dir="in">
        
      </param>
    </method>

    <method name="isVetoed">
      
      <param name="result" type="boolean" dir="return">
        
      </param>
    </method>

    <method name="getVetos">
      
      <param name="result" type="wstring" dir="return" safearray="yes">
        
      </param>
    </method>

  </interface>

  <interface name="IExtraDataCanChangeEvent" extends="IVetoEvent" uuid="245d88bd-800a-40f8-87a6-170d02249a55" wsmap="managed" autogen="VBoxEvent" id="OnExtraDataCanChange" waitable="yes">
    
    <attribute name="machineId" type="uuid" mod="string" readonly="yes">
      
    </attribute>
    <attribute name="key" type="wstring" readonly="yes">
      
    </attribute>
    <attribute name="value" type="wstring" readonly="yes">
      
    </attribute>
  </interface>

  <interface name="ICanShowWindowEvent" extends="IVetoEvent" uuid="adf292b0-92c9-4a77-9d35-e058b39fe0b9" wsmap="managed" autogen="VBoxEvent" id="OnCanShowWindow" waitable="yes">
    
  </interface>

  <interface name="IShowWindowEvent" extends="IEvent" uuid="B0A0904D-2F05-4D28-855F-488F96BAD2B2" wsmap="managed" autogen="VBoxEvent" id="OnShowWindow" waitable="yes">
    
    <attribute name="winId" type="long long">
      
    </attribute>
  </interface>

  <interface name="INATRedirectEvent" extends="IMachineEvent" uuid="24eef068-c380-4510-bc7c-19314a7352f1" wsmap="managed" autogen="VBoxEvent" id="OnNATRedirect">
    
    <attribute name="slot" type="unsigned long" readonly="yes">
      
    </attribute>
    <attribute name="remove" type="boolean" readonly="yes">
      
    </attribute>
    <attribute name="name" type="wstring" readonly="yes">
      
    </attribute>
    <attribute name="proto" type="NATProtocol" readonly="yes">
      
    </attribute>
    <attribute name="hostIP" type="wstring" readonly="yes">
      
    </attribute>
    <attribute name="hostPort" type="long" readonly="yes">
      
    </attribute>
    <attribute name="guestIP" type="wstring" readonly="yes">
      
    </attribute>
    <attribute name="guestPort" type="long" readonly="yes">
      
    </attribute>
  </interface>

  <interface name="IHostPCIDevicePlugEvent" extends="IMachineEvent" waitable="yes" uuid="a0bad6df-d612-47d3-89d4-db3992533948" wsmap="managed" autogen="VBoxEvent" id="OnHostPCIDevicePlug">
    

    <attribute name="plugged" type="boolean" readonly="yes">
      
    </attribute>

    <attribute name="success" type="boolean" readonly="yes">
      
    </attribute>

    <attribute name="attachment" type="IPCIDeviceAttachment" readonly="yes">
      
    </attribute>

    <attribute name="message" type="wstring" readonly="yes">
      
    </attribute>

  </interface>

  <interface name="IVBoxSVCAvailabilityChangedEvent" extends="IEvent" uuid="97c78fcd-d4fc-485f-8613-5af88bfcfcdc" wsmap="managed" autogen="VBoxEvent" id="OnVBoxSVCAvailabilityChanged">
    

    <attribute name="available" type="boolean" readonly="yes">
      
    </attribute>
  </interface>

  <interface name="IBandwidthGroupChangedEvent" extends="IEvent" uuid="334df94a-7556-4cbc-8c04-043096b02d82" wsmap="managed" autogen="VBoxEvent" id="OnBandwidthGroupChanged">
    
    <attribute name="bandwidthGroup" type="IBandwidthGroup" readonly="yes">
      
    </attribute>
  </interface>

  <enum name="GuestMonitorChangedEventType" uuid="ef172985-7e36-4297-95be-e46396968d66">

    

    <const name="Enabled" value="0">
      
    </const>

    <const name="Disabled" value="1">
      
    </const>

    <const name="NewOrigin" value="2">
      
    </const>
  </enum>

  <interface name="IGuestMonitorChangedEvent" extends="IEvent" uuid="0f7b8a22-c71f-4a36-8e5f-a77d01d76090" wsmap="managed" autogen="VBoxEvent" id="OnGuestMonitorChanged">
    

    <attribute name="changeType" type="GuestMonitorChangedEventType" readonly="yes">
      
    </attribute>

    <attribute name="screenId" type="unsigned long" readonly="yes">
      
    </attribute>

    <attribute name="originX" type="unsigned long" readonly="yes">
      
    </attribute>

    <attribute name="originY" type="unsigned long" readonly="yes">
      
    </attribute>

    <attribute name="width" type="unsigned long" readonly="yes">
      
    </attribute>

    <attribute name="height" type="unsigned long" readonly="yes">
      
    </attribute>

  </interface>

  <interface name="IGuestUserStateChangedEvent" extends="IEvent" uuid="39b4e759-1ec0-4c0f-857f-fbe2a737a256" wsmap="managed" autogen="VBoxEvent" id="OnGuestUserStateChanged">
    

    <attribute name="name" type="wstring" readonly="yes">
      
    </attribute>
    <attribute name="domain" type="wstring" readonly="yes">
      
    </attribute>
    <attribute name="state" type="GuestUserState" readonly="yes">
      
    </attribute>
    <attribute name="stateDetails" type="wstring" readonly="yes">
      
    </attribute>

  </interface>

  <interface name="IStorageDeviceChangedEvent" extends="IEvent" uuid="232e9151-ae84-4b8e-b0f3-5c20c35caac9" wsmap="managed" autogen="VBoxEvent" id="OnStorageDeviceChanged">
    
    <attribute name="storageDevice" type="IMediumAttachment" readonly="yes">
      
    </attribute>
    <attribute name="removed" type="boolean" readonly="yes">
      
    </attribute>
    <attribute name="silent" type="boolean" readonly="yes">
      
    </attribute>
  </interface>

  <interface name="INATNetworkChangedEvent" extends="IEvent" uuid="101ae042-1a29-4a19-92cf-02285773f3b5" wsmap="managed" autogen="VBoxEvent" id="OnNATNetworkChanged">
    
    <attribute name="networkName" type="wstring" readonly="yes"/>
  </interface>
  
  <interface name="INATNetworkStartStopEvent" extends="INATNetworkChangedEvent" uuid="269d8f6b-fa1e-4cee-91c7-6d8496bea3c1" wsmap="managed" autogen="VBoxEvent" id="OnNATNetworkStartStop">
    <attribute name="startEvent" type="boolean" readonly="yes">
      
    </attribute>
  </interface>

  
  <interface name="INATNetworkAlterEvent" extends="INATNetworkChangedEvent" uuid="3f5a0822-163a-43b1-ad16-8d58b0ef6e75" wsmap="managed" autogen="VBoxEvent" id="OnNATNetworkAlter"/>

  <interface name="INATNetworkCreationDeletionEvent" extends="INATNetworkAlterEvent" uuid="8d984a7e-b855-40b8-ab0c-44d3515b4528" wsmap="managed" autogen="VBoxEvent" id="OnNATNetworkCreationDeletion">
    <attribute name="creationEvent" type="boolean" readonly="yes"/>
  </interface>
  <interface name="INATNetworkSettingEvent" extends="INATNetworkAlterEvent" uuid="9db3a9e6-7f29-4aae-a627-5a282c83092c" wsmap="managed" autogen="VBoxEvent" id="OnNATNetworkSetting">
    <attribute name="enabled" type="boolean" readonly="yes"/>
    <attribute name="network" type="wstring" readonly="yes"/>
    <attribute name="gateway" type="wstring" readonly="yes"/>
    <attribute name="advertiseDefaultIPv6RouteEnabled" type="boolean" readonly="yes"/>
    <attribute name="needDhcpServer" type="boolean" readonly="yes"/>
  </interface>
  <interface name="INATNetworkPortForwardEvent" extends="INATNetworkAlterEvent" uuid="2514881b-23d0-430a-a7ff-7ed7f05534bc" wsmap="managed" autogen="VBoxEvent" id="OnNATNetworkPortForward">
    <attribute name="create" type="boolean" readonly="yes"/>
    <attribute name="ipv6" type="boolean" readonly="yes"/>
    <attribute name="name" type="wstring" readonly="yes"/>
    <attribute name="proto" type="NATProtocol" readonly="yes"/>
    <attribute name="hostIp" type="wstring" readonly="yes"/>
    <attribute name="hostPort" type="long" readonly="yes"/>
    <attribute name="guestIp" type="wstring" readonly="yes"/>
    <attribute name="guestPort" type="long" readonly="yes"/>
  </interface>

  <interface name="IHostNameResolutionConfigurationChangeEvent" extends="IEvent" uuid="f9b9e1cf-cb63-47a1-84fb-02c4894b89a9" wsmap="managed" autogen="VBoxEvent" id="OnHostNameResolutionConfigurationChange">
  </interface>

  <module name="VBoxSVC" context="LocalServer">
    <class name="VirtualBox" uuid="B1A7A4F2-47B9-4A1E-82B2-07CCD5323C3F" namespace="virtualbox.org">
      <interface name="IVirtualBox" default="yes"/>
    </class>
  </module>

  <module name="VBoxC" context="InprocServer" threadingModel="Free">
    <class name="VirtualBoxClient" uuid="dd3fc71d-26c0-4fe1-bf6f-67f633265bba" namespace="virtualbox.org">
      <interface name="IVirtualBoxClient" default="yes"/>
    </class>

    <class name="Session" uuid="3C02F46D-C9D2-4F11-A384-53F0CF917214" namespace="virtualbox.org">
      <interface name="ISession" default="yes"/>
    </class>
  </module>

</library>

</idl>
