/*
 * BuzzerClass.c
 *
 * Created: 1/2/2020 2:03:18 AM
 *  Author: Khaled
 */ 


#include "DigitalOutputClass.h"





void digital_output_init(DigitalOutput device){
	
	
	switch(device.PORT){
		
		
		case 'A' :  DDRA |= (1 << device.PIN);
		break;
		
		
		case 'B' :  DDRB |= (1 << device.PIN);
		break;
		
		
		case 'C' :	DDRC |= (1 << device.PIN);
		break;
		
		
		case 'D' :  DDRD |= (1 << device.PIN);
		break;
		
		
		default:		 ;
		break;
	}
	
}


void digital_output_set_stutus(DigitalOutput device,bool status){
	
	
	switch(device.PORT){
		
		
		case 'A' :  DDRA |= (1 << device.PIN);
		
		if(status == true){
			PORTA |= (1 << device.PIN);
			}else{
			PORTA &= !(0 << device.PIN);
		}
		
		
		case 'B' :  DDRB |= (1 << device.PIN);
		if(status == true){
			PORTB |= (1 << device.PIN);
			}else{
			PORTB &= !(0 << device.PIN);
		}
		break;
		
		
		case 'C' :	DDRC |= (1 << device.PIN);
		if(status == true){
			PORTC |= (1 << device.PIN);
			}else{
			PORTC &= !(0 << device.PIN);
		}
		break;
		
		
		case 'D' :  DDRD |= (1 << device.PIN);
		if(status == true){
			PORTD |= (1 << device.PIN);
			}else{
			PORTD &= !(0 << device.PIN);
		}
		break;
		
		
		default:	 ;
		break;
	}
	
}


bool digital_output_get_stutus(DigitalOutput device){
	
	bool status=0 ;
	
	switch(device.PORT){
		
		case 'A' :  DDRA |= (1 << device.PIN);
		status = PINA & (1 << device.PIN);
		return status;
		
		case 'B' :  DDRB |= (1 << device.PIN);
		status = PINA & (1 << device.PIN);
		return status;
		
		case 'C' :	DDRC |= (1 << device.PIN);
		status = PINA & (1 << device.PIN);
		return status;
		
		case 'D' :  DDRD |= (1 << device.PIN);
		status = PINA & (1 << device.PIN);
		return status;
		
		default:				 ;
		return status;
		
	}
	
}



char digital_output_get_port(DigitalOutput device){
	
	return device.PORT;
	
}


int digital_output_get_pin(DigitalOutput device){
	
	return device.PIN ;
}