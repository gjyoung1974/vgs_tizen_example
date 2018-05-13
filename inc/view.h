/*
 * 2018 Gordon Young
 * gjyoung1974@gmail.com
 * A Samsung Tizen demo
 * Demonstrating how to handle sensitive health data with VGS secure proxy and vault technologies
 * This demo leverages the VGS Proxy to securely transorm "tokenize" heart rate sensor data
 * And persist tokenized data in our mobile backend service API endpoint
 *
 */


#if !defined(_VIEW_H)
#define _VIEW_H

#include <Elementary.h>
#include <efl_extension.h>
#include "view/view_indicator.h"

typedef void (*Update_Sensor_Values_Cb)(int count, float *values);

Eina_Bool view_create(void);
Evas_Object *view_create_win(const char *pkg_name);
Evas_Object *view_create_conformant_without_indicator(Evas_Object *win);
Evas_Object *view_create_layout_for_conformant(Evas_Object *parent, const char *file_path, const char *group_name, Eext_Event_Cb cb_function, void *user_data);
void view_destroy(void);
void view_add_chart(void);
void view_add_option_item(const char *opt_name, const int id, const bool checked);
void view_show_sensor(int sensor_id, const char *name);
void view_hide_sensor(int sensor_id);
void view_update_chart(double sensor_value, const int id);
void view_switch_view(int view_mode);

#endif
