#ifndef FRAME_H
#define FRAME_H
#include "bike/tube.h"

class Frame{
    double htAngle;
    double stAngle;
public:
    Tube ht; //HeadTube
    Tube tt; //TopTube
    Tube dt; //DownTube
    Tube st; //SeatTube
    Tube ss; //SeatStays
    Tube cs; //ChainStays

    Tube bb; //BottomBracket

    Frame(double);
    Frame();
    ~Frame();
    double getHTAngle();
    void setHTAngle(double);
};
#endif // FRAME_H
