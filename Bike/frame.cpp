#include <iostream>
#include <cmath>
#include <stdio.h>
#include "Bike/tube.h"
#include "Bike/fork.h"
#include "Bike/bike.h"
#include "Bike/frame.h"
#include "Bike/wheel.h"

#define PI 3.14159265

//Frame
Frame::Frame(double htAngle_){
    htAngle=htAngle_;
}

Frame::Frame(){}

double Frame::getHTAngle(){
    return htAngle;
}
void Frame::setHTAngle(double angle){
    htAngle=angle;
}

Frame::~Frame()
{

}

