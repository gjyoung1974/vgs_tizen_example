/*
 * 2018 Gordon Young
 * gjyoung1974@gmail.com
 * A Samsung Tizen demo
 * Demonstrating how to handle sensitive health data with VGS secure proxy and vault technologies
 * This demo leverages the VGS Proxy to securely transorm "tokenize" heart rate sensor data
 * And persist tokenized data in our mobile backend service API endpoint
 *
 */


#if !defined(_SENSORS_H)
#define _SENSORS_H

#include <app.h>
#include <dlog.h>

#if !defined(PACKAGE)
#define PACKAGE "org.example.vgs_tizen_example"
#endif

#ifdef LOG_TAG
#undef LOG_TAG
#endif
#define LOG_TAG "vgs_tizen_example"

#endif
