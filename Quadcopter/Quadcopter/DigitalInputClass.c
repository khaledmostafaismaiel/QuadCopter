/*
 * DigitalInputClass.c
 *
 * Created: 1/3/2020 12:37:06 AM
 *  Author: Khaled
 */ 


#include "DigitalInputClass.h"

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



char digital_input_get_port(DigitalInput device){
	
	return device.PORT;
	
}


int digital_input_get_pin(DigitalInput device){
	
		return device.PIN;
}


int digital_input_get_pullup_status(DigitalInput device){
	
	return device.PULLUP;
}