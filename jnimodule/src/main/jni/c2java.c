//
// Created by dragonjiang on 2016/2/26.
//
#include <jni.h>
#include<android/log.h>

#ifndef LOG_TAG
#define LOG_TAG "JNI"
#define LOGD(...) __android_log_print(ANDROID_LOG_DEBUG,LOG_TAG ,__VA_ARGS__) // 定义LOGD类型
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO,LOG_TAG ,__VA_ARGS__) // 定义LOGI类型
#define LOGW(...) __android_log_print(ANDROID_LOG_WARN,LOG_TAG ,__VA_ARGS__) // 定义LOGW类型
#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR,LOG_TAG ,__VA_ARGS__) // 定义LOGE类型
#define LOGF(...) __android_log_print(ANDROID_LOG_FATAL,LOG_TAG ,__VA_ARGS__) // 定义LOGF类型
#endif

/*
 * Class:     com_dj_jni_jnimodule_NativeHelper
 * Method:    getStringFromJni
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_dj_jni_jnimodule_NativeHelper_getStringFromJni
        (JNIEnv *env, jobject obj){

    LOGD("LOG from JNI");
    return (*env)->NewStringUTF(env,"Hello from JNI !");
}

