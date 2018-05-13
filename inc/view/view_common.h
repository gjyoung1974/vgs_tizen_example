/*
 * 2018 Gordon Young
 * gjyoung1974@gmail.com
 * A Samsung Tizen demo
 * Demonstrating how to handle sensitive health data with VGS secure proxy and vault technologies
 * This demo leverages the VGS Proxy to securely transorm "tokenize" heart rate sensor data
 * And persist tokenized data in our mobile backend service API endpoint
 *
 */

#if !defined(_VIEW_COMMON_H_)
#define _VIEW_COMMON_H_

#include <stdbool.h>
#include <Elementary.h>
#include <efl_extension.h>

Elm_Object_Item *view_create_layout(Evas_Object *parent, char *file_name, char *group_name);
void view_set_indicator_dot(Elm_Object_Item *navi_item, int position);
void view_set_selected_sensor(bool is_clockwise, int *pos);
char *data_create_resource_path(const char *file_name);

#endif
