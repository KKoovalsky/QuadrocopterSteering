#include "init.h"

#define MAX_AXIS (1024)

#define AXIS_ZERO_LVL ((MAX_AXIS) / 2)

#define 2PI (2 * 3.14)

#DEFINE CONV_DEG_TO_RAD(X) ((X)/360 * 2PI)

#define MAX_PITCH 15 * CONV_DEG_TO_RAD

#DEFINE MAX_ROLL (MAX_PITCH)

#DEFINE MAX_YAW (MAX_PITCH)


volatile roll_new, pitch_new, yaw_new;

void calc_new_RPY(uint16_t L_x, uint16_t L_y, uint16_t R_x, uint16_t R_y) {
	yaw_new = (L_x - AXIS_ZERO_LVL) / AXIS_ZERO_LVL * MAX_YAW;
	pitch_new = (R_x - AXIS_ZERO_LVL) / AXIS_ZERO_LVL * MAX_PITCH;
	roll_new = (R_y - AXIS_ZERO_LVL) / AXIS_ZERO_LVL * MAX_PITCH;
}