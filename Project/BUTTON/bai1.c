#include <REGX52.H>
#include "../../Lib/delay.h"


//thao tac voi nut nhan: chong doi phim, giu phim, ...
sbit BUTTON_PIN = P1^0;
sbit LED_PIN = P2^0;

void main()
{
	LED_PIN = 0;
	
	while(1)
	{
		if(BUTTON_PIN == 0)
		{
			//delay 20 ms de cho qua khoang thoi gian tin hieu bi nhieu(doi phim)
			delay_ms(20);
			if(BUTTON_PIN == 0)
			{
				LED_PIN = !LED_PIN;
				// xu ly truong hop phim bi giu
				while(BUTTON_PIN == 0);
				LED_PIN = !LED_PIN;
			}
		}
	}
}
