/*
 * DigitalOutputClass.h
 *
 * Created: 1/2/2020 2:29:39 AM
 *  Author: Khaled
 */ 

#ifndef DIGITALOUTPUTCLASS_H_ 
#define DIGITALOUTPUTCLASS_H_  

#include <stdbool.h>
#include <avr/io.h>


typedef struct DigitalOutput{
	
	char PORT ;
	int PIN ;
	
}DigitalOutput;



void digital_output_init(DigitalOutput device);

void digital_output_set_stutus(DigitalOutput device,bool status);	
	
bool digital_output_get_stutus(DigitalOutput device);





#endif