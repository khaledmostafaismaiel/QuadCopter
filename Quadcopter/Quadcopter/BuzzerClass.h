/*
 * BuzzerClass.h
 *
 * Created: 1/2/2020 2:29:39 AM
 *  Author: Khaled
 */ 

#ifndef _BUZZER_CLASSS_H_ 
#define _BUZZER_CLASSS_H_  

#include <stdbool.h>
#include <avr/io.h>


typedef struct Buzzer{
	
	char BUZZER_PORT ;
	int BUZZER_PIN ;
	
}Buzzer;


void buzzer_set_stutus(char port , int pin ,bool status){
		 
		
	switch(port){
			
			
		case 'A' :  DDRA |= (1 << pin);
		
					if(status == true){
						PORTA |= (1 << pin);
						break;
					}else{
						PORTA |= (0 << pin);
						break;
					}
		
			
		case 'B' :  DDRB |= (1 << pin);
					if(status == true){
						PORTB |= (1 << pin);
						break;
					}else{
						PORTB |= (0 << pin);
						break;
					}
		
			
		case 'C' :	DDRC |= (1 << pin);
					if(status == true){
						PORTC |= (1 << pin);
						break;
					}else{
						PORTC |= (0 << pin);
						break;
					}
		
			
		case 'D' :  DDRD |= (1 << pin);
					if(status == true){
						PORTD |= (1 << pin);
						break;
					}else{
						PORTD |= (0 << pin);
						break;
					}
		
			
			default: ;
			break;
		}
		
}
	
	
bool buzzer_get_stutus(char port , int pin){
		
	bool status=0 ;
		
	switch(port){
			
		case 'A' :  DDRA |= (1 << pin);
		status = PINA & (1 << pin);
		return status;
				
		case 'B' :  DDRB |= (1 << pin);
		status = PINA & (1 << pin);
		return status;
				
		case 'C' :	DDRC |= (1 << pin);
		status = PINA & (1 << pin);
		return status;
				
		case 'D' :  DDRD |= (1 << pin);
		status = PINA & (1 << pin);
		return status;
				
		default: ;
		return status;
		
	}
	
}
	
#endif