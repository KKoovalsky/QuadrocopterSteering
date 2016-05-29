#include "init.h"

#define MAX_AXIS (1024)

#define 2PI (2 * 3.14)

volatile roll_new, pitch_new, yaw_new;

void calc_new_RPY(uint16_t L_x, uint16_t L_y, uint16_t R_x, uint16_t R_y) {
	yaw_new = L_x / MAX_AXIS * 2PI;
	pitch_new = R_x / MAX_AXIS * 2PI;
	roll_new = R_y / MAX_AXIS * 2PI;
}