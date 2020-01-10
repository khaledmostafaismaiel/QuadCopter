/*
 * FlightsClass.h
 *
 * Created: 1/5/2020 1:52:31 AM
 *  Author: Khaled
 */ 


#ifndef FLIGHTSCLASS_H_
#define FLIGHTSCLASS_H_
#include "BrushLessMotorClass.h"

void flight_up(BrushLessMotor left_back_motor ,BrushLessMotor left_front_motor , BrushLessMotor right_left_motor ,BrushLessMotor right_front_motor,double power);
void flight_down(BrushLessMotor left_back_motor ,BrushLessMotor left_front_motor , BrushLessMotor right_left_motor ,BrushLessMotor right_front_motor,double power);
void flight_left(BrushLessMotor left_back_motor ,BrushLessMotor left_front_motor , BrushLessMotor right_left_motor ,BrushLessMotor right_front_motor,double power);
void flight_right(BrushLessMotor left_back_motor ,BrushLessMotor left_front_motor , BrushLessMotor right_left_motor ,BrushLessMotor right_front_motor,double power);
void flight_forward(BrushLessMotor left_back_motor ,BrushLessMotor left_front_motor , BrushLessMotor right_left_motor ,BrushLessMotor right_front_motor,double power);
void flight_backward(BrushLessMotor left_back_motor ,BrushLessMotor left_front_motor , BrushLessMotor right_left_motor ,BrushLessMotor right_front_motor,double power);
void spin_clockwise_(BrushLessMotor left_back_motor ,BrushLessMotor left_front_motor , BrushLessMotor right_left_motor ,BrushLessMotor right_front_motor,double power);
void spin_anti_clockwise(BrushLessMotor left_back_motor ,BrushLessMotor left_front_motor , BrushLessMotor right_left_motor ,BrushLessMotor right_front_motor,double power);




#endif /* FLIGHTSCLASS_H_ */