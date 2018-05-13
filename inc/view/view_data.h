/*
 * 2018 Gordon Young
 * gjyoung1974@gmail.com
 * A Samsung Tizen demo
 * Demonstrating how to handle sensitive health data with VGS secure proxy and vault technologies
 * This demo leverages the VGS Proxy to securely transorm "tokenize" heart rate sensor data
 * And persist tokenized data in our mobile backend service API endpoint
 *
 */


#if !defined(_VIEW_DATA_H_)
#define _VIEW_DATA_H_

#include <stdbool.h>
#include <Elementary.h>
#include <efl_extension.h>

bool view_data_create(Evas_Object *parent);
void view_data_show(void);
void view_data_rotary_pos_changed(bool is_clockwise);
void view_data_update_sensor_values(int count, float *values);
void view_data_hide(void);

#endif
