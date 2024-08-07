#include <REGX52.H>
#include "../../Lib/delay.h"


//led 7 segment with ic decoder 74HC7447
#define LED_PORT P2


void main()
{
	while(1)
	{
		led = !led;
		delay_ms(1000);
	}
}
