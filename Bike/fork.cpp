#include <iostream>
#include <cmath>
#include <stdio.h>
#include "Bike/tube.h"
#include "Bike/fork.h"
#include "Bike/bike.h"
#include "Bike/frame.h"
#include "Bike/wheel.h"

#define PI 3.14159265

//Fork
Fork::Fork(double rake_){
    rake=rake_;
}

Fork::Fork(){}

double Fork::getRake(){
    return rake;
}
double Fork::getLength(){
    return fLength;
}
void Fork::setLength(double len){
    fLength=len;
}
void Fork::setRake(double rk){
    rake=rk;
}

Fork::~Fork()
{

}

