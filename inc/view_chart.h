/*
 * 2018 Gordon Young
 * gjyoung1974@gmail.com
 * A Samsung Tizen demo
 * Demonstrating how to handle sensitive health data with VGS secure proxy and vault technologies
 * This demo leverages the VGS Proxy to securely transorm "tokenize" heart rate sensor data
 * And persist tokenized data in our mobile backend service API endpoint
 *
 */

#if !defined(_VIEW_CHART_H_)
#define _VIEW_CHART_H_

#include <stdbool.h>
#include <Elementary.h>
#include <efl_extension.h>

bool view_chart_create(Evas_Object *parent);
void view_chart_prepare(int value_count, float min, float max);
void view_chart_add_data(float *values);

#endif
