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


void digital_input_init(DigitalInput device);
bool digital_input_get_stutus(DigitalInput device);
char digital_input_get_port(DigitalInput device);
int digital_input_get_pin(DigitalInput device);
int digital_input_get_pullup_status(DigitalInput device);


#endif /* DIGITALINPUTCLASS_H_ */