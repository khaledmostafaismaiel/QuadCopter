/*
 * OpMode.c
 *
 * Created: 1/3/2020 1:36:48 AM
 *  Author: Khaled
 */ 


#include "OpModeClass.h"

DigitalOutput led ;


void Init(){

led.PORT = 'D' ;
led.PIN = 6 ; 

timer0_pwm_init();
timer1A_pwm_init();
timer1B_pwm_init();
timer2_pwm_init();
}


void init_loop(){
_delay_ms(1000);
}



void start(){
_delay_ms(1000);

}


void loop(){


for(int i = 0 ; i < 255 ; ++i){
	set_timer0_pwm(i);
	set_timer1A_pwm(i);
	set_timer1B_pwm(i);
	set_timer2_pwm(i);
	_delay_ms(10);
}

for(int i=255 ; i > 0 ; --i){
	set_timer0_pwm(i);
	set_timer1A_pwm(i);
	set_timer1B_pwm(i);
	set_timer2_pwm(i);
	_delay_ms(10);

}

}

