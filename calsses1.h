#ifndef CALSSES1_H
#define CALSSES1_H

#include"constantes.h"

class Cilindro {

    public:
    
        double volumeDoCilindro();

        
        void heightDoCilindro(double h);

        void r_baseDoCilindro(double r);
        
        
        double hDoCilindro();

        double rDoCilindro();

        void dobra_H_DoCilindro(double h);
     

        Cilindro()=default;

        Cilindro(double h, double r);

    private:
        double base_radius{1};
        double heigth{1};
    
};

#endif