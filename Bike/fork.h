#ifndef FORK_H
#define FORK_H
#include "bike/tube.h"

class Fork{
    double rake;
    double fLength;
public:
    Tube leg;
    Fork(double);
    Fork();
    ~Fork();
    double getRake();
    double getLength();
    void setLength(double);
    void setRake(double);
};

#endif // FORK_H
