/*
 * 2018 Gordon Young
 * gjyoung1974@gmail.com
 * A Samsung Tizen demo
 * Demonstrating how to handle sensitive health data with VGS secure proxy and vault technologies
 * This demo leverages the VGS Proxy to securely transorm "tokenize" heart rate sensor data
 * And persist tokenized data in our mobile backend service API endpoint
 *
 */


#if !defined(_VIEW_BASE_H_)
#define _VIEW_BASE_H_

#include <stdbool.h>
#include <Elementary.h>
#include <efl_extension.h>

Evas_Object *view_indicator_create(Evas_Object *parent);

#endif
