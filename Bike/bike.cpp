#include <iostream>
#include <cmath>
#include <stdio.h>
#include "Bike/tube.h"
#include "Bike/fork.h"
#include "Bike/bike.h"
#include "Bike/frame.h"
#include "Bike/wheel.h"

#define PI 3.14159265

Bike::Bike()
{
}

Bike::Bike(Frame fr,Fork fk,Wheel wh){
    frame=fr;
    fork=fk;
    fWheel=wh;
}

double Bike::getTrail(){
    trail=(fWheel.getRealRadius()*cos(frame.getHTAngle()*PI/180)-fork.getRake())/sin(frame.getHTAngle()*PI/180);
    trail=floor(trail * 10) / 10;
    return trail;
}

double Bike::getMechTrail(){
    mechTrail=trail*sin(frame.getHTAngle()*PI/180);
    mechTrail=floor(mechTrail * 10) / 10;
    return mechTrail;
}

double Bike::getFlop(){
    flop=mechTrail*cos(frame.getHTAngle()*PI/180);
    flop=floor(flop * 10) / 10;
    return flop;
}

Bike::~Bike()
{

}

