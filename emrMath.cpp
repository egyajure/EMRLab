#include "emrMath.h"

//making functions to find various EMR terms
double workFunction (double yInt){
    double n = yInt * (-1.6e-19) * -1.0;
    return n;
}

double thresFrequency (double slope, double yInt){
    double n = (yInt * -1.0) / slope;
    return n;
}

double constant (double slope){
    double n = slope * (-1.6e-19);
    return n;
}