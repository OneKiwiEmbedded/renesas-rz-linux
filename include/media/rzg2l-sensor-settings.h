/* SPDX-License-Identifier: GPL-2.0+ */
/*
 * Driver for Renesas RZ/G2L CRU
 *
 * Copyright (C) 2024 Renesas Electronics Corp.
 *
 */
#ifndef __RZG2L_SENSOR_SETTINGS__
#define __RZG2L_SENSOR_SETTINGS__

#include <linux/types.h>

/**
 * struct rzg2l_sensor_settings - Sensor settings of margin and recording pixel area
 */
struct rzg2l_sensor_settings {
	struct {
		struct {
			uint32_t dummy_0;
			uint32_t ignored_area_of_effective_pixel_0;
			uint32_t effective_margin_for_color_processing_0;
			uint32_t recording_pixel_area;
			uint32_t effective_margin_for_color_processing_1;
			uint32_t ignored_area_of_effective_pixel_1;
			uint32_t dummy_1;
		} horizontal, vertical;
	} pixel_area;
	uint mbps;
	bool is_hdr;
};

#endif
