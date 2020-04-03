//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//NOTES: created new viscosity class header file
//       just a constructor and virtual compute method... will be inherited by specific kind of visc calculations 

#ifndef LAMMPS_VISCOSITY_H
#define LAMMPS_VISCOSITY_H

namespace LAMMPS_NS {

    class Viscosity {
    public:
    
        Viscosity();
        virutal double computeViscosity(double temperature) = 0;
    };
}




#endif //LAMMPS_VISCOSITY_H 
