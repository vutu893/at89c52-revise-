#include <REGX52.H>
#include "../../Lib/delay.h"

//dem tu 1 den 9 voi led 7seg chung catot
#define 7SEG_PIN P2

//ma hex cua cac so tu 0 den 9
unsigned char 7seg[] = {0xC0, 0xF9, 0xA4, 0xB0, 0x99, 0x92, 0x82, 0x8F, 0x80, 0x90};

void main()
{
	unsigned char i, counter = 0;
	
	while(1)
	{
		for(i = 0; i < 10; i++)
		{
			7SEG_PIN = 7seg[i];
			delay_ms(1000);
		}
	}
}