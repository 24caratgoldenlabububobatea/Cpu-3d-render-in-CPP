#ifndef VECT_H
#define VECT_H

#include "math.h"

class Vect {
    double x, y, z;

    public:

    Vect ();

    Vect (double, double, double);

    //method functions
    double getVectX() { return x;}
    double getVectY() { return y;}
    double getVectZ() { return z;}
};

Vect::Vect (double i, double j, double k) {
    x = i;
    y = j;
    z = k;
}

#endif 