/*
	msp430 led glow toy - c version

	by f. allin. kahrl
	started 12017-05-10

	portions by c. maccreary
*/

#include <msp430.h>

static const
unsigned	PWM_PERIOD = 	0xFDFF;			// PWM period

static
unsigned 	dcDelta,						// actual change to dutyCycle (+/-DC_STEP)
			dutyCycle;						// [DC_STEP, PWM_PERIOD] in DC_STEP increments

typedef enum {
    off,
    up,
    down,
    max
} glowstate;
