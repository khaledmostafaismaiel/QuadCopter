/*
 * PwmClass.c
 *
 * Created: 1/5/2020 1:16:04 AM
 *  Author: Khaled
 */ 

#include "PwmClass.h"



void timer0_pwm_init(){
	
	TCCR0 |= (1 << WGM00) | (1 << WGM01) | (1 << CS00) |( 1 << COM01);
	DDRB |= (1 << PINB3); 
}


void set_timer0_pwm(int duty_cycle){
	
	OCR0 = duty_cycle ;
}


int get_timer0_pwm(){
	
	return OCR0;
}



void timer1A_pwm_init(){
	
	TCCR1A |= (1 << COM1A1);
	TCCR1B |= (1 << CS01);
	DDRD |= (1 << PIND5);

}

void set_timer1A_pwm(int duty_cycle){
	
	OCR1A = duty_cycle ;
}


int get_timer1A_pwm(){
	
	return OCR1A;
}



void timer1B_pwm_init(){
	
	TCCR1A |= (1 << COM1B1);
	TCCR1B |= (1 << CS01);
	DDRD |= (1 << PIND4);
	

}

void set_timer1B_pwm(int duty_cycle){
	
	OCR1B = duty_cycle ;

}


int get_timer1B_pwm(){
	
	return OCR1B;
}



void timer2_pwm_init(){
	
	TCCR2 |= (1 << WGM21) | (1 << WGM20) | (1 << CS20) |( 1 << COM21);
	DDRD |= (1 << PIND7);

}

void set_timer2_pwm(int duty_cycle){
	
	OCR2 = duty_cycle ;

}


int get_timer2_pwm(){
	
	return OCR2;
}