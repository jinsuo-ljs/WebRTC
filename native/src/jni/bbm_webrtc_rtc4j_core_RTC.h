/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class bbm_webrtc_rtc4j_core_RTC */

#ifndef _Included_bbm_webrtc_rtc4j_core_RTC
#define _Included_bbm_webrtc_rtc4j_core_RTC
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     bbm_webrtc_rtc4j_core_RTC
 * Method:    createNativeObject
 * Signature: (Lbbm/webrtc/rtc4j/core/audio/AudioCapturer;Ljava/lang/String;IILjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_bbm_webrtc_rtc4j_core_RTC_createNativeObject__Lbbm_webrtc_rtc4j_core_audio_AudioCapturer_2Ljava_lang_String_2IILjava_lang_String_2
  (JNIEnv *, jobject, jobject, jstring, jint, jint, jstring);

/*
 * Class:     bbm_webrtc_rtc4j_core_RTC
 * Method:    createNativeObject
 * Signature: (Lbbm/webrtc/rtc4j/core/audio/AudioCapturer;Lbbm/webrtc/rtc4j/core/video/VideoCapturer;Ljava/lang/String;IIZLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_bbm_webrtc_rtc4j_core_RTC_createNativeObject__Lbbm_webrtc_rtc4j_core_audio_AudioCapturer_2Lbbm_webrtc_rtc4j_core_video_VideoCapturer_2Ljava_lang_String_2IIZLjava_lang_String_2
  (JNIEnv *, jobject, jobject, jobject, jstring, jint, jint, jboolean, jstring);

/*
 * Class:     bbm_webrtc_rtc4j_core_RTC
 * Method:    createNativeObject
 * Signature: (Ljava/lang/String;Ljava/lang/String;IILjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_bbm_webrtc_rtc4j_core_RTC_createNativeObject__Ljava_lang_String_2Ljava_lang_String_2IILjava_lang_String_2
  (JNIEnv *, jobject, jstring, jstring, jint, jint, jstring);

/*
 * Class:     bbm_webrtc_rtc4j_core_RTC
 * Method:    createNativePeerConnection
 * Signature: (JLbbm/webrtc/rtc4j/core/observer/PeerConnectionObserver;[Lbbm/webrtc/rtc4j/model/Turn;I)J
 */
JNIEXPORT jlong JNICALL Java_bbm_webrtc_rtc4j_core_RTC_createNativePeerConnection
  (JNIEnv *, jobject, jlong, jobject, jobjectArray, jint);

/*
 * Class:     bbm_webrtc_rtc4j_core_RTC
 * Method:    free
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_bbm_webrtc_rtc4j_core_RTC_free
  (JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif