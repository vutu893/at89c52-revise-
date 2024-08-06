#include <REGX52.H>
#include "../../Lib/delay.h"

//bai2: dem tu 0 den 99 bang led 7 seg dung 2 led don

#define SEG_PIN1 P2
#define SEG_PIN2 P3

unsigned char led_7seg[] = {0xC0, 0xF9, 0xA4, 0xB0, 0x99, 0x92, 0x82, 0x8F, 0x80, 0x90};

void main()
{
	unsigned char i;
	unsigned char chuc, donvi;
	while(1)
	{
		for(i = 0; i < 100; i++)
		{
			chuc = i/10;
			SEG_PIN1 = led_7seg[chuc];
			delay_ms(1);
			donvi = i%10;
			SEG_PIN2 = led_7seg[donvi];
			delay_ms(1);
			delay_ms(1000);
		}
	}
}
