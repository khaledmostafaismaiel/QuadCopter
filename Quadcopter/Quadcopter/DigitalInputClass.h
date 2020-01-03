/*
 * DigitalInputClass.h
 *
 * Created: 1/3/2020 12:37:31 AM
 *  Author: Khaled
 */ 


#ifndef DIGITALINPUTCLASS_H_
#define DIGITALINPUTCLASS_H_

#include <stdbool.h>
#include <avr/io.h>

typedef struct DigitalInput{
	
	char PORT ;
	int PIN ;
	bool PULLUP ;
	
}DigitalInput;


void digital_input_init(DigitalInput device){
	
	
	switch(device.PORT){
		
		
		case 'A' :  DDRA |= (0 << device.PIN);
		
					if(device.PULLUP == true){
						PORTA |= (1 << device.PIN);
					}else{
						PORTA |= (0 << device.PIN);
					}
					break;
		
		
		case 'B' :  DDRB |= (0 << device.PIN);
					if(device.PULLUP == true){
						PORTB |= (1 << device.PIN);
					}else{
						PORTB |= (0 << device.PIN);
					}
					break;
		
		
		case 'C' :	DDRC |= (0 << device.PIN);
					if(device.PULLUP == true){
						PORTC |= (1 << device.PIN);
					}else{
						PORTC |= (0 << device.PIN);
					}
					break;
		
		
		case 'D' :  DDRD |= (0 << device.PIN);
					if(device.PULLUP == true){
						PORTD |= (1 << device.PIN);
					}else{
						PORTD |= (0 << device.PIN);
					}
					break;
		
		
		default:		 ;
					break;
	}
	
}


bool digital_input_get_stutus(DigitalInput device){
	
	bool status=0 ;
	
	switch(device.PORT){
		
		case 'A' :  status = PINA & (1 << device.PIN);
					return status;
		
		case 'B' :  status = PINA & (1 << device.PIN);
					return status;
		
		case 'C' :	status = PINA & (1 << device.PIN);
					return status;
		
		case 'D' :  status = PINA & (1 << device.PIN);
					return status;
		
		default:				 ;
					return status;
		
	}
	
}



#endif /* DIGITALINPUTCLASS_H_ */