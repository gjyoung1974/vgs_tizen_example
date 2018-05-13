/*
 * 2018 Gordon Young
 * gjyoung1974@gmail.com
 * A Samsung Tizen demo
 * Demonstrating how to handle sensitive health data with VGS secure proxy and vault technologies
 * This demo leverages the VGS Proxy to securely transorm "tokenize" heart rate sensor data
 * And persist tokenized data in our mobile backend service API endpoint
 *
 */


#if !defined(_GIF_ANIMATOR_H_)
#define _GIF_ANIMATOR_H_

#include <stdbool.h>
#include <Elementary.h>
#include <efl_extension.h>

void gif_animator_play_set(Evas_Object *obj, Eina_Bool play, Eina_Bool repeat, Eina_Bool reset);
Evas_Object *gif_animator_create_animated_image(Evas_Object *parent, char *path);

#endif
