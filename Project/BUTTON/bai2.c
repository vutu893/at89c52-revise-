#include <REGX52.H>
#include "../../Lib/delay.h"

//dung hai button de dieu khien cac che do den led: mot den bat mot den tat

#define LED_PIN P2
sbit BTN_ON = P1^0;
sbit BTN_OFF = P1^1;

void mode3();
void mode4();

void main()
{
	LED_PIN = 0x00;
	unsigned char mode = 0;
	while(1)
	{
		if(BTN_ON == 0)
		{
			delay_ms(20);
			if(BTN_ON == 0)
			{
				mode ++;
				if(mode == 1)
				{
					mode3();
					delay_ms(1000);
				}
				if(mode == 2)
				{
					mode4();
					delay_ms(1000);
					mode = 0;
				}
				while(BTN_ON == 0);
			}
		}
		if(BTN_OFF == 0)
		{
			delay_ms(20);
			if(BTN_OFF == 0)
			{
				LED_PIN = 0x00;
				while(BTN_OFF == 0);
			}
		}
	}
}
void mode3()
{
	unsigned char i;
	LED_PIN = 0x00;
	delay_ms(1000);
	for(i = 0; i< 8; i++)
	{
		LED_PIN |= (1 << i);
		delay_ms(1000);
	}
	for(i = 0; i < 8; i++)
	{
		LED_PIN &= (0x80 >> i);
		delay_ms(1000);
	}
}
//mode4
void mode4()
{
	LED_PIN = 0x55;
	delay_ms(1000);
	LED_PIN = 0xAA;
	delay_ms(1000);
}
