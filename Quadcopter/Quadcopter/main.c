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
	
	
	Init();
	
	init_loop();

	start();



    while (1) 
    {
		loop();
    }



}

