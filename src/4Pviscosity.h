//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
// NOTES:

#ifndef LAMMPS_4PVISCOSITY_H
#define LAMMPS_4PVISCOSITY_H

#include "math.h"
#include "viscosity.h"

namespace LAMMPS_NS{

class 4Pviscosity  : public Viscosity {

private:

    double p1, p2, p3, p4;
    
public:

    4Pviscosity(double p1, double p2, double p3, double p4);
    double computeViscosity(double temperature) override;

};

}

#endif //LAMMPS_4PVISCOSITY_H
