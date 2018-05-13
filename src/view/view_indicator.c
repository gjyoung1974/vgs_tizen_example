/*
 * 2018 Gordon Young
 * gjyoung1974@gmail.com
 * A Samsung Tizen demo
 * Demonstrating how to handle sensitive health data with VGS secure proxy and vault technologies
 * This demo leverages the VGS Proxy to securely transorm "tokenize" heart rate sensor data
 * And persist tokenized data in our mobile backend service API endpoint
 *
 */


#include <stdbool.h>
#include <Elementary.h>
#include <efl_extension.h>
#include "data.h"
#include "vgs_tizen_example.h"
#include "view/view_indicator.h"
#include "view/view_common.h"
#include "view_defines.h"

#define DATA_VIEW_ROTARY_CB "data_view_rotray_cb"

/**
 * @brief Creates the indicator object's layout.
 * @param parent The parent layout that the indicator will placed into.
 * @return The indicator object or NULL on error.
 */
Evas_Object *view_indicator_create(Evas_Object *parent)
{
	char *edj_path = NULL;
	Evas_Object *indicator = elm_layout_add(parent);
	if (!indicator) {
		dlog_print(DLOG_ERROR, LOG_TAG, "[%s:%d] s_info.layout == NULL", __FILE__, __LINE__);
		return NULL;
	}

	edj_path = data_create_resource_path(EDJ_INDICATOR);
	if (!elm_layout_file_set(indicator, edj_path, GRP_INDICATOR)) {
		dlog_print(DLOG_ERROR, LOG_TAG, "[%s:%d] Function elm_layout_file_set() failed", __FILE__, __LINE__);
		return NULL;
	}

	return indicator;
}
