#include "delay.h"

void delay_ms(unsigned char t)
{
	unsigned char i, j;
	for(i = 0; i < t; i++)
	{
		for(j = 0; j < 123; j++);
	}
	
}