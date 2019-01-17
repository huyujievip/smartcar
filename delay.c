#include "delay.h"

void delay (unsigned int time)
{
	unsigned char i;
	while (time --)
		for (i = 0; i < 133; i ++);
}
