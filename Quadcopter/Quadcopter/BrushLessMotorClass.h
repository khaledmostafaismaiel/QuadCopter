/*
 * BrushLessMotorClass.h
 *
 * Created: 1/5/2020 1:17:54 AM
 *  Author: Khaled
 */ 


#ifndef BRUSHLESSMOTORClass_H_
#define BRUSHLESSMOTORClass_H_


typedef struct BrushLessMotor{
	
	char PORT ;
	int PIN ;
	
	}BrushLessMotor;


void BrushLessMotor_int(BrushLessMotor motor);
void BrushLessMotor_set_power(BrushLessMotor motor,double power);
double BrushLessMotor_get_power(BrushLessMotor motor);
char BrushLessMotor_get_port(BrushLessMotor motor);
int BrushLessMotor_get_pin(BrushLessMotor motor);
#endif /* BRUSHLESSMOTOR_H_ */