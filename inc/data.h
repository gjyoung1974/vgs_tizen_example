/*
 * 2018 Gordon Young
 * gjyoung1974@gmail.com
 * A Samsung Tizen demo
 * Demonstrating how to handle sensitive health data with VGS secure proxy and vault technologies
 * This demo leverages the VGS Proxy to securely transorm "tokenize" heart rate sensor data
 * And persist tokenized data in our mobile backend service API endpoint
 *
 */


#if !defined(_DATA_H)
#define _DATA_H

#include <sensor.h>
#include "view.h"

void data_finalize(void);
bool data_initialize(Update_Sensor_Values_Cb callback);
void data_set_selected_sensor(sensor_type_e type);
bool data_get_sensor_support(sensor_type_e type);
void data_get_sensor_range(sensor_type_e type, float *min, float *max);
float data_get_sensor_resolution(sensor_type_e type);
char *data_get_sensor_vendor(sensor_type_e type);
void data_get_sensor_data(sensor_type_e type);
void data_stop_sensor(void);

#endif
