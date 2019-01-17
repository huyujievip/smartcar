#include "motor.h"

sbit La = P0^0;
sbit Lb = P0^1;
sbit Ra = P0^2;
sbit Rb = P0^3;




void up(void)
{
	La = 0;
	Lb = 1;
	Ra = 0;
	Rb = 1;
}


void down (void)
{
	La = 1;
	Lb = 0;
	Ra = 1;
	Rb = 0;
}


void left (void)
{
	La = 1;
	Lb = 0;
	Ra = 0;
	Rb = 1;
}


void right (void)
{
	La = 0;
	Lb = 1;
	Ra = 1;
	Rb = 0;
}

void stop (void)
{
	La = 0;
	Lb = 0;
	Ra = 0;
	Rb = 0;
}


