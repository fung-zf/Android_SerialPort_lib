/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_z_SerialPort */

#ifndef _Included_com_z_SerialPort
#define _Included_com_z_SerialPort
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_z_SerialPort
 * Method:    open
 * Signature: (Ljava/lang/String;II)Ljava/io/FileDescriptor;
 */
JNIEXPORT jobject JNICALL Java_com_z_SerialPort_open
  (JNIEnv *, jclass, jstring, jint, jint);

/*
 * Class:     com_z_SerialPort
 * Method:    close
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_z_SerialPort_close
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
