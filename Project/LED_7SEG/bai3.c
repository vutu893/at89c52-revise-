#include <REGX52.H>
#include "../../Lib/delay.h"

//bai3: den giao thong su dung led 7 thanh: led doi cung anot

//cac chan dung
#define LED_PIN  P2
sbit LED_RED = P3^0;
sbit LED_YELLOW = P3^1;
sbit LED_GREEN = P3^2;
sbit LED1 = P3^3;
sbit LED2 = P3^4;

//ma led 7seg
unsigned char code code_led[] = {0xC0, 0xF9, 0xA4, 0xB0, 0x99, 0x92, 0x82, 0x8F, 0x80, 0x90};

//cac ham den sang
void led_Red_On();
void led_Yellow_On();
void led_Green_On();

void main()
{	
	unsigned int j;
	unsigned char i,chuc, donvi;
	
	while(1)
	{	
		led_Red_On();
		for(i = 0; i < 10; i++)
		{
			chuc = i / 10;
			donvi = i % 10;
			for(j = 0; j < 500; j++)
			{
				LED_PIN = code_led[chuc];
				LED1 = 1;
				delay_ms(1);
				LED1 = 0;
				
				LED_PIN = code_led[donvi];
				LED2 = 1;
				delay_ms(1);
				LED2 = 0;
			}
			
		}
		
		led_Green_On();
		for(i = 0; i < 10; i++)
		{
			chuc = i / 10;
			donvi = i % 10;
			for(j = 0; j < 500; j++)
			{
				LED_PIN = code_led[chuc];
				LED1 = 1;
				delay_ms(1);
				LED1 = 0;
				
				LED_PIN = code_led[donvi];
				LED2 = 1;
				delay_ms(1);
				LED2 = 0;
			}
			if(i > 5)
			{
				led_Yellow_On();
			}
		}
	}
}
void led_Red_On()
{
	LED_RED = 1;
	LED_YELLOW = 0;
	LED_GREEN = 0;
}
void led_Yellow_On()
{
	LED_RED = 0;
	LED_YELLOW = 1;
	LED_GREEN = 0;
}
void led_Green_On()
{
	LED_RED = 0;
	LED_YELLOW = 0;
	LED_GREEN = 1;
}
