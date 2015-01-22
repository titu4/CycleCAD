#include "bike/tube.h"

Tube::Tube()
{

}

Tube::~Tube()
{

}

void Tube::setDia(double _dia){
    dia=_dia;
}

void Tube::setA(int _x,int _y){
    A.x=_x;
    A.y=_y;
}

void Tube::setB(int _x,int _y){
    B.x=_x;
    B.y=_y;
}

int Tube::getTubeLength(){
    int length;
    length=fabs(sqrt(pow((B.x-A.x),2)+pow((B.y-A.y),2)));
    return length;
}

void Tube::getA(int &_x,int &_y){
    _x=A.x;
    _y=A.y;
}

void Tube::getB(int &_x,int &_y){
    _x=B.x;
    _y=B.y;
}

double Tube::getDia(){
    return dia;
}
