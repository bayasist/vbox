
/*
 * Copyright (C) 2010-2014 Oracle Corporation
 *
 * This file is part of the VirtualBox SDK, as available from
 * http://www.virtualbox.org.  This library is free software; you can
 * redistribute it and/or modify it under the terms of the GNU Lesser General
 * Public License as published by the Free Software Foundation, in version 2.1
 * as it comes in the "COPYING.LIB" file of the VirtualBox SDK distribution.
 * This library is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public
 * License for more details.
 *
 * DhcpOpt.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/Main/glue/glue-java.xsl
 */

package org.virtualbox_4_3;

import org.virtualbox_4_3.xpcom.*;
import org.mozilla.interfaces.*;
public enum DhcpOpt
{
    SubnetMask(1),
    TimeOffset(2),
    Router(3),
    TimeServer(4),
    NameServer(5),
    DomainNameServer(6),
    LogServer(7),
    Cookie(8),
    LPRServer(9),
    ImpressServer(10),
    ResourseLocationServer(11),
    HostName(12),
    BootFileSize(13),
    MeritDumpFile(14),
    DomainName(15),
    SwapServer(16),
    RootPath(17),
    ExtensionPath(18),
    IPForwardingEnableDisable(19),
    NonLocalSourceRoutingEnableDisable(20),
    PolicyFilter(21),
    MaximumDatagramReassemblySize(22),
    DefaultIPTime2Live(23),
    PathMTUAgingTimeout(24),
    IPLayerParametersPerInterface(25),
    InterfaceMTU(26),
    AllSubnetsAreLocal(27),
    BroadcastAddress(28),
    PerformMaskDiscovery(29),
    MaskSupplier(30),
    PerformRouteDiscovery(31),
    RouterSolicitationAddress(32),
    StaticRoute(33),
    TrailerEncapsulation(34),
    ARPCacheTimeout(35),
    EthernetEncapsulation(36),
    TCPDefaultTTL(37),
    TCPKeepAliveInterval(38),
    TCPKeepAliveGarbage(39),
    NetworkInformationServiceDomain(40),
    NetworkInformationServiceServers(41),
    NetworkTimeProtocolServers(42),
    VendorSpecificInformation(43),
    Option_44(44),
    Option_45(45),
    Option_46(46),
    Option_47(47),
    Option_48(48),
    Option_49(49),
    IPAddressLeaseTime(51),
    Option_64(64),
    Option_65(65),
    TFTPServerName(66),
    BootfileName(67),
    Option_68(68),
    Option_69(69),
    Option_70(70),
    Option_71(71),
    Option_72(72),
    Option_73(73),
    Option_74(74),
    Option_75(75),
    Option_119(119);

    private final int value;

    DhcpOpt(int v)
    {
        value = v;
    }

    public int value()
    {
        return value;
    }

    public static DhcpOpt fromValue(long v)
    {
        for (DhcpOpt c: DhcpOpt.values())
        {
            if (c.value == (int)v)
            {
                return c;
            }
        }
        throw new IllegalArgumentException(Long.toString(v));
    }

    public static DhcpOpt fromValue(String v)
    {
        return valueOf(DhcpOpt.class, v);
    }
}

