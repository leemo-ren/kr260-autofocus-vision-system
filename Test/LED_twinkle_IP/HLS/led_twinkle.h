#ifndef __LED_TWINKLE_H__
#define __LED_TWINKLE_H__

// HLS提供的任意精度定点数文件
#include "ap_fixed.h"

#define DELAY 25000000

void led_twinkle(ap_int<3> *led);

#endif
