#ifndef BIKE_H
#define BIKE_H
#include "Bike/frame.h"
#include "Bike/fork.h"
#include "Bike/wheel.h"

class Bike{
    double trail;
    double mechTrail;
    double flop;
    double wheelBase;
public:
    Frame frame;
    Fork fork;
    Wheel fWheel;
    Wheel rWheel;

    Bike(Frame,Fork,Wheel);
    Bike();
    ~Bike();

    double getTrail();
    double getMechTrail();
    double getFlop();
};


#endif // BIKE_H
