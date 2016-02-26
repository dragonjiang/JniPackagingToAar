package com.dj.jni.jnimodule;

/**
 * @author DragonJiang
 * @Date 2016/2/26
 * @Time 9:49
 * @description
 */
public class NativeHelper {
    public native String getStringFromJni();

    static {
        System.loadLibrary("JniPackageTest");
    }
}
