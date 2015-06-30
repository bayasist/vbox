
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
 * Helper.java
 *
 * DO NOT EDIT! This is a generated file.
 * Generated from: src/VBox/Main/idl/VirtualBox.xidl (VirtualBox's interface definitions in XML)
 * Generator: src/VBox/Main/glue/glue-java.xsl
 */

package org.virtualbox_4_3.xpcom;

import org.virtualbox_4_3.xpcom.*;
import org.mozilla.interfaces.*;


import java.util.List;
import java.util.ArrayList;
import java.util.Collections;
import java.lang.reflect.Array;
import java.lang.reflect.Constructor;
import java.lang.reflect.Method;
import java.lang.reflect.InvocationTargetException;

public class Helper
{
    public static List<Short> wrap(byte[] values)
    {
        if (values == null)
            return null;

        List<Short> ret = new ArrayList<Short>(values.length);
        for (short v : values)
        {
            ret.add(v);
        }
        return ret;
    }

    public static List<Short> wrap(short[] values)
    {
        if (values == null)
            return null;

        List<Short> ret = new ArrayList<Short>(values.length);
        for (short v : values)
        {
            ret.add(v);
        }
        return ret;
    }

    public static List<Integer> wrap(int[] values)
    {
        if (values == null)
            return null;

        List<Integer> ret = new ArrayList<Integer>(values.length);
        for (int v : values)
        {
            ret.add(v);
        }
        return ret;
    }

    public static List<Long> wrap(long[] values)
    {
        if (values == null)
            return null;

        List<Long> ret = new ArrayList<Long>(values.length);
        for (long v : values)
        {
            ret.add(v);
        }
        return ret;
    }

    public static List<Boolean> wrap(boolean[] values)
    {
        if (values == null)
            return null;

        List<Boolean> ret = new ArrayList<Boolean>(values.length);
        for (boolean v: values)
        {
            ret.add(v);
        }
        return ret;
    }

    public static List<String> wrap(String[] values)
    {
        if (values == null)
            return null;

        List<String> ret = new ArrayList<String>(values.length);
        for (String v : values)
        {
            ret.add(v);
        }
        return ret;
    }

    public static <T> List<T> wrap(Class<T> wrapperClass, T[] values)
    {
        if (values == null)
            return null;

        List<T> ret = new ArrayList<T>(values.length);
        for (T v : values)
        {
            ret.add(v);
        }
        return ret;
    }

    @SuppressWarnings( "unchecked")
    public static <T> List<T> wrapEnum(Class<T> wrapperClass, long values[])
    {
        try
        {
            if (values == null)
                return null;
            //// This code is questionable, as it invokes a private constructor
            //// (all enums only have default constructors), and we don't really
            //// know what to pass as the name, and the ordinal may or may not
            //// be sensible, especially if the long was abused as a bitset.
            //Constructor<T> c = wrapperClass.getDeclaredConstructor(String.class, int.class, int.class);
            //c.setAccessible(true); // make it callable
            //List<T> ret = new ArrayList<T>(values.length);
            //for (long v : values)
            //{
            //    T convEnum = c.newInstance("unknown", (int)v, (int)v);
            //    ret.add(convEnum);
            //}

            // Alternative implementation: use the fromValue method, which is
            // what the code handling single enums will do. I see no reason to
            // use the above very ugly hack if there are better alternatives,
            // which as a bonus complain about unknown values. This variant is
            // slower, but also orders of magnitude safer.
            java.lang.reflect.Method fromValue = wrapperClass.getMethod("fromValue", long.class);
            List<T> ret = new ArrayList<T>(values.length);
            for (long v : values)
            {
                T convEnum = (T)fromValue.invoke(null, v);
                ret.add(convEnum);
            }
            return ret;
        }
        catch (NoSuchMethodException e)
        {
            throw new AssertionError(e);
        }
        //catch (InstantiationException e)
        //{
        //    throw new AssertionError(e);
        //}
        catch (IllegalAccessException e)
        {
            throw new AssertionError(e);
        }
        catch (InvocationTargetException e)
        {
            throw new AssertionError(e);
        }
    }
    public static short[] unwrapUShort(List<Short> values)
    {
        if (values == null)
            return null;

        short[] ret = new short[values.size()];
        int i = 0;
        for (short l : values)
        {
            ret[i++] = l;
        }
        return ret;
    }

    public static int[] unwrapInteger(List<Integer> values)
    {
        if (values == null)
            return null;

        int[] ret = new int[values.size()];
        int i = 0;
        for (int l : values)
        {
            ret[i++] = l;
        }
        return ret;
    }

    public static long[] unwrapULong(List<Long> values)
    {
        if (values == null)
            return null;

        long[] ret = new long[values.size()];
        int i = 0;
        for (long l : values)
        {
            ret[i++] = l;
        }
        return ret;
    }

    public static boolean[] unwrapBoolean(List<Boolean> values)
    {
        if (values == null)
            return null;

        boolean[] ret = new boolean[values.size()];
        int i = 0;
        for (boolean l : values)
        {
            ret[i++] = l;
        }
        return ret;
    }

    public static String[] unwrapStr(List<String> values)
    {
        if (values == null)
            return null;

        String[] ret = new String[values.size()];
        int i = 0;
        for (String l : values)
        {
            ret[i++] = l;
        }
        return ret;
    }

    public static <T extends Enum <T>> long[] unwrapEnum(Class<T> enumClass, List<T> values)
    {
        if (values == null)
            return null;

        long result[] = new long[values.size()];
        try
        {
            java.lang.reflect.Method valueM = enumClass.getMethod("value");
            int i = 0;
            for (T v : values)
            {
                result[i++] = (Integer)valueM.invoke(v);
            }
            return result;
        }
        catch (NoSuchMethodException e)
        {
            throw new AssertionError(e);
        }
        catch(SecurityException e)
        {
            throw new AssertionError(e);
        }
        catch (IllegalAccessException e)
        {
            throw new AssertionError(e);
        }
        catch (IllegalArgumentException e)
        {
            throw new AssertionError(e);
        }
        catch (InvocationTargetException e)
        {
            throw new AssertionError(e);
        }
    }

    public static <T1, T2> List<T1> wrap2(Class<T1> wrapperClass1, Class<T2> wrapperClass2, T2[] values)
    {
        try
        {
            if (values == null)
                return null;

            Constructor<T1> c = wrapperClass1.getConstructor(wrapperClass2);
            List<T1> ret = new ArrayList<T1>(values.length);
            for (T2 v : values)
            {
                ret.add(c.newInstance(v));
            }
            return ret;
        }
        catch (NoSuchMethodException e)
        {
            throw new AssertionError(e);
        }
        catch (InstantiationException e)
        {
            throw new AssertionError(e);
        }
        catch (IllegalAccessException e)
        {
            throw new AssertionError(e);
        }
        catch (InvocationTargetException e)
        {
            throw new AssertionError(e);
        }
    }

    @SuppressWarnings( "unchecked")
    public static <T> T[] unwrap(Class<T> wrapperClass, List<T> values)
    {
        if (values == null)
            return null;
        if (values.size() == 0)
            return null;
        return (T[])values.toArray((T[])Array.newInstance(wrapperClass, values.size()));
    }

    @SuppressWarnings( "unchecked" )
    public static <T> T queryInterface(Object obj, String uuid, Class<T> iface)
    {
        return (T)queryInterface(obj, uuid);
    }

    public static Object queryInterface(Object obj, String uuid)
    {
        try
        {
            /* Kind of ugly, but does the job of casting */
            org.mozilla.xpcom.Mozilla moz = org.mozilla.xpcom.Mozilla.getInstance();
            long xpobj = moz.wrapJavaObject(obj, uuid);
            return moz.wrapXPCOMObject(xpobj, uuid);
        }
        catch (Exception e)
        {
            return null;
        }
    }

    @SuppressWarnings("unchecked")
    public static <T1 extends IUnknown, T2> T2[] unwrap2(Class<T1> wrapperClass1, Class<T2> wrapperClass2, List<T1> values)
    {
        if (values == null)
            return null;

        T2 ret[] = (T2[])Array.newInstance(wrapperClass2, values.size());
        int i = 0;
        for (T1 obj : values)
        {
            ret[i++] = (T2)obj.getWrapped();
        }
        return ret;
    }
}
