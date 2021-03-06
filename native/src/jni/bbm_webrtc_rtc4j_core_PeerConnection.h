/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class bbm_webrtc_rtc4j_core_PeerConnection */

#ifndef _Included_bbm_webrtc_rtc4j_core_PeerConnection
#define _Included_bbm_webrtc_rtc4j_core_PeerConnection
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     bbm_webrtc_rtc4j_core_PeerConnection
 * Method:    nativeAddIceCandidate
 * Signature: (JLjava/lang/String;ILjava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_bbm_webrtc_rtc4j_core_PeerConnection_nativeAddIceCandidate
  (JNIEnv *, jobject, jlong, jstring, jint, jstring);

/*
 * Class:     bbm_webrtc_rtc4j_core_PeerConnection
 * Method:    nativeSetLocalDescription
 * Signature: (JLbbm/webrtc/rtc4j/model/SessionDescription;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_bbm_webrtc_rtc4j_core_PeerConnection_nativeSetLocalDescription
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     bbm_webrtc_rtc4j_core_PeerConnection
 * Method:    nativeSetRemoteDescription
 * Signature: (JLbbm/webrtc/rtc4j/model/SessionDescription;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_bbm_webrtc_rtc4j_core_PeerConnection_nativeSetRemoteDescription
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     bbm_webrtc_rtc4j_core_PeerConnection
 * Method:    nativeCreateAnswer
 * Signature: (JLbbm/webrtc/rtc4j/core/observer/SessionDescriptionObserver;)V
 */
JNIEXPORT void JNICALL Java_bbm_webrtc_rtc4j_core_PeerConnection_nativeCreateAnswer
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     bbm_webrtc_rtc4j_core_PeerConnection
 * Method:    nativeCreateOffer
 * Signature: (JLbbm/webrtc/rtc4j/core/observer/SessionDescriptionObserver;)V
 */
JNIEXPORT void JNICALL Java_bbm_webrtc_rtc4j_core_PeerConnection_nativeCreateOffer
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     bbm_webrtc_rtc4j_core_PeerConnection
 * Method:    nativeGetSignalingState
 * Signature: (J)Ljava/lang/Integer;
 */
JNIEXPORT jobject JNICALL Java_bbm_webrtc_rtc4j_core_PeerConnection_nativeGetSignalingState
  (JNIEnv *, jobject, jlong);

/*
 * Class:     bbm_webrtc_rtc4j_core_PeerConnection
 * Method:    nativeOpenAudio
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_bbm_webrtc_rtc4j_core_PeerConnection_nativeOpenAudio
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     bbm_webrtc_rtc4j_core_PeerConnection
 * Method:    nativeCloseAudio
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_bbm_webrtc_rtc4j_core_PeerConnection_nativeCloseAudio
  (JNIEnv *, jobject, jlong);

/*
 * Class:     bbm_webrtc_rtc4j_core_PeerConnection
 * Method:    nativeChangeBitrate
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_bbm_webrtc_rtc4j_core_PeerConnection_nativeChangeBitrate
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     bbm_webrtc_rtc4j_core_PeerConnection
 * Method:    nativeStartTransport
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_bbm_webrtc_rtc4j_core_PeerConnection_nativeStartTransport
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     bbm_webrtc_rtc4j_core_PeerConnection
 * Method:    nativeStopTransport
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_bbm_webrtc_rtc4j_core_PeerConnection_nativeStopTransport
  (JNIEnv *, jobject, jlong);

/*
 * Class:     bbm_webrtc_rtc4j_core_PeerConnection
 * Method:    nativeCreateDataChannel
 * Signature: (JLjava/lang/String;Lbbm/webrtc/rtc4j/model/DataChannelConfig;Lbbm/webrtc/rtc4j/core/observer/DataChannelObserver;)J
 */
JNIEXPORT jlong JNICALL Java_bbm_webrtc_rtc4j_core_PeerConnection_nativeCreateDataChannel
  (JNIEnv *, jobject, jlong, jstring, jobject, jobject);

/*
 * Class:     bbm_webrtc_rtc4j_core_PeerConnection
 * Method:    free
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_bbm_webrtc_rtc4j_core_PeerConnection_free
  (JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif
