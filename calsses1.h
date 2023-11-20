#ifndef CALSSES1_H
#define CALSSES1_H

#include"constantes.h"
#include<iostream>

class Cilindro {

    public:
    
        double volumeDoCilindro();

        
        void heightDoCilindro(double h);

        void r_baseDoCilindro(double r);
        
        
        double hDoCilindro();

        double rDoCilindro();
        
        std::string nDoCilindro();

        void dobra_H_DoCilindro(double h);
     

        Cilindro();

        Cilindro(double h, double r,std::string n);
        
        ~Cilindro();

    private:
        double heigth;
        double base_radius;
        double *p_h{nullptr};
        double *p_r{nullptr};
        std::string nome;
    
};

#endif