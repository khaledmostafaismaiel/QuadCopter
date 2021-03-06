/*
 * OpModeClass.h
 *
 * Created: 1/3/2020 1:37:03 AM
 *  Author: Khaled
 */ 


#ifndef OPMODECLASS_H_
#define OPMODECLASS_H_

#define F_CPU 8000000UL
#include <avr/io.h>
#include <util/delay.h>
#include "DigitalOutputClass.h"
#include "DigitalInputClass.h"
#include "PwmClass.h"

void Init();

void init_loop();

void start();

void loop();

#endif /* OPMODE_H_ */