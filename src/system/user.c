#include "user/link.h"
#include "user/motor.h"
#include "user/senser.h"
#include "user/status.h"
#include "user/record.h"
#include "user/display.h"
#include "user/terminal.h"
#include "driver/stepper.h"
/*
 * user.c
 *
 *  Created on: 2016-10-21
 *      Author: redchenjs
 */

void user_init(void)
{
	record_read_all();

	status_init();

	motor_init();

	display_init();

	terminal_init();
}

void user_loop(void)
{
    terminal_update();

	senser_update();

	link_update();

	status_update();

    motor_update();

	display_update();
}
