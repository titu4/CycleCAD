#ifndef WHEEL_H
#define WHEEL_H
#include "structs.h"

class Wheel{
    int dia;
    int wide;
    point center;
public:
    Wheel(int _dia,int _wide);
    Wheel();
    ~Wheel();
    void setY(int y);
    void setX(int x);
    int getY();
    int getX();
    double getRealRadius();
    void setDiam(double _dia);
    void setWide(double _wide);
    bool match(int mX, int mY);
};

#endif // WHEEL_H
