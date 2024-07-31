#include <REGX52.H>
#include "../../Lib/delay.h"

//bai2: su dung bit operator de tao hieu ung led

//chan Led
#define LED_PIN P2

void mode1();
void mode2();
void mode3();
void mode4();
void mode5();


void main()
{
	while(1)
	{
		mode1();
		mode2();
		mode3();
		mode4();
	}
}
//mode1
void mode1()
{
	LED_PIN = 0x00;
	delay_ms(1000);
	LED_PIN = 0xFF;
	delay_ms(1000);
}

//mode2
void mode2()
{	
	
	unsigned char i;
	LED_PIN = 0x01;
	for(i = 0;i < 8; i++)
	{
		LED_PIN &= (0x01 << i);
		LED_PIN << 1;
		delay_ms(1000);
	}
}
//mode3
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
