#include <iostream>
#include <cmath>
#include <stdio.h>
#include "Bike/tube.h"
#include "Bike/fork.h"
#include "Bike/bike.h"
#include "Bike/frame.h"
#include "Bike/wheel.h"

#define PI 3.14159265

//Wheel
Wheel::Wheel(int _dia, int _wide){
    this->dia=_dia;
    this->wide=_wide;
}
Wheel::Wheel(){}
Wheel::~Wheel(){}

double Wheel::getRealRadius(){
    return (dia+2*wide)/2;
}
void Wheel::setDiam(double _dia){dia=_dia;}
void Wheel::setWide(double _wide){wide=_wide;}

void Wheel::setY(int _y){center.y=_y;}
void Wheel::setX(int _x){center.x=_x;}

int Wheel::getY(){return center.y;}
int Wheel::getX(){return center.x;}

bool Wheel::match(int mX, int mY){
    int newR;
    newR=fabs(sqrt(pow((this->getX()-mX),2)+pow((this->getY()-mY),2)));
    if(newR<=this->getRealRadius())
        return true;
    else
        return false;
}
