#include <REGX52.H>
#include "../../Lib/delay.h"

//bai3: den giao thong su dung led 7 thanh

//cac chan dung
#define LED_PIN  P2
sbit LED_RED = P3^0;
sbit LED_YELLOW = P3^1;
sbit LED_GREEN = P3^2;

//ma led 7seg
unsigned char code_led[] = {0xC0, 0xF9, 0xA4, 0xB0, 0x99, 0x92, 0x82, 0x8F, 0x80, 0x90};


void main()
{
	while(1)
	{
		
	}
}