#ifndef TUBE_H
#define TUBE_H
#include <math.h>
#include "structs.h"

class Tube
{
    double dia;
    point A;
    point B;
public:
    Tube();
    ~Tube();
    void setA(int _x,int _y);
    void setB(int _x,int _y);
    void setDia(double _dia);

    int getTubeLength();
    void getA(int &_x,int &_y);
    void getB(int &_x, int &_y);
    double getDia();
};

#endif // TUBE_H
