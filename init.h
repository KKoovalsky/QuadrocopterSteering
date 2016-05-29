#ifndef INIT_H_
#define INIT_H_

extern volatile roll_new, pitch_new, yaw_new;

void calc_new_RPY(uint16_t L_x, uint16_t L_y, uint16_t R_x, uint16_t R_y);

#endif