#include <REGX52.H>
#include "../../Lib/delay.h"

//bai1: lam nhay led don va viet ham delay ms

//khai bao chan ket noi voi led
#define LED_PIN P2

//chi sang 1 den
sbit LED_SINGLE = P3^0;

void eight_Led_On_Off();
void one_Led_On_Off();

void main()
{
	LED_PIN = 0x00;
	LED_SINGLE = 0;
	while(1)
	{
		eight_Led_On_Off();
		one_Led_On_Off();
	}
}
void eight_Led_On_Off()
{
	LED_PIN = !LED_PIN;
	delay_ms(500);
}

void one_Led_On_Off()
{
	//LED DAU TIEN
	LED_SINGLE = !LED_SINGLE;
	delay_ms(500);
}