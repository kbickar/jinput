/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class net_java_games_input_LinuxDevice */

#ifndef _Included_net_java_games_input_LinuxDevice
#define _Included_net_java_games_input_LinuxDevice
#ifdef __cplusplus
extern "C" {
#endif
/* Inaccessible static: NO_AXES */
/* Inaccessible static: NO_CONTROLLERS */
/* Inaccessible static: NO_RUMBLERS */
/*
 * Class:     net_java_games_input_LinuxDevice
 * Method:    getNativeSupportedAbsAxes
 * Signature: (I[I)V
 */
JNIEXPORT void JNICALL Java_net_java_games_input_LinuxDevice_getNativeSupportedAbsAxes
  (JNIEnv *, jobject, jint, jintArray);

/*
 * Class:     net_java_games_input_LinuxDevice
 * Method:    getNativeSupportedRelAxes
 * Signature: (I[I)V
 */
JNIEXPORT void JNICALL Java_net_java_games_input_LinuxDevice_getNativeSupportedRelAxes
  (JNIEnv *, jobject, jint, jintArray);

/*
 * Class:     net_java_games_input_LinuxDevice
 * Method:    getNativeSupportedButtons
 * Signature: (I[I)V
 */
JNIEXPORT void JNICALL Java_net_java_games_input_LinuxDevice_getNativeSupportedButtons
  (JNIEnv *, jobject, jint, jintArray);

/*
 * Class:     net_java_games_input_LinuxDevice
 * Method:    nativePoll
 * Signature: (I[I[I[I)I
 */
JNIEXPORT jint JNICALL Java_net_java_games_input_LinuxDevice_nativePoll
  (JNIEnv *, jobject, jint, jintArray, jintArray, jintArray);

/*
 * Class:     net_java_games_input_LinuxDevice
 * Method:    getNativeAbsAxisFuzz
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_net_java_games_input_LinuxDevice_getNativeAbsAxisFuzz
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     net_java_games_input_LinuxDevice
 * Method:    getNativeAbsAxisMaximum
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_net_java_games_input_LinuxDevice_getNativeAbsAxisMaximum
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     net_java_games_input_LinuxDevice
 * Method:    getNativeAbsAxisMinimum
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_net_java_games_input_LinuxDevice_getNativeAbsAxisMinimum
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     net_java_games_input_LinuxDevice
 * Method:    getNativePortType
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_net_java_games_input_LinuxDevice_getNativePortType
  (JNIEnv *, jobject, jint);

#ifdef __cplusplus
}
#endif
#endif
