/*
 * Quadcopter.c
 *
 * Created: 1/2/2020 12:46:16 AM
 * Author : Khaled
 */ 


#include <avr/io.h>


#define F_CPU 8000000UL
#include <util/delay.h>

int main(void)
{
	

DDRA |= (1 << 1);

	
	

    while (1) 
    {
		
		PORTA |= (1 << 1);
		_delay_ms(1000);
		PORTA &= ~(1 << 1);
		_delay_ms(1000);

    }



}

