//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//NOTES: created class that inherits Viscosity, uses 4 parameters

#include "4Pviscosity.h"

using namespace LAMMPS_NS;

4Pviscosity::4Pviscosity(double p1, double p2, double p3, double p4) {
    this->p1 = p1;
    this->p2 = p2;
    this->p3 = p3;
    this->p4 = p4;
}

double 4Pviscosity::computeViscosity(double temp) {
    return  p1*exp(p2/temp + p3*temp + p4*temp*temp);
} 

