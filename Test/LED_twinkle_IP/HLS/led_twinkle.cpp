#include "led_twinkle.h"

void led_twinkle(ap_int<3> *led){
#pragma HLS INTERFACE ap_none port=led
#pragma HLS INTERFACE ap_ctrl_none port=return
	int i = 0;
	for(i = 0; i < DELAY; i++){
		if(i < DELAY/2) *led = 1;
		else *led = 6;
	}
}
