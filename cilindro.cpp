#include"calsses1.h"

double Cilindro::volumeDoCilindro(){
    return PI * base_radius * base_radius * heigth;
 }
      
void Cilindro::heightDoCilindro(double h){
    heigth = h;
}

void Cilindro::r_baseDoCilindro(double r){
     base_radius = r;
}
           
double Cilindro::hDoCilindro(){
     return heigth;
}

double Cilindro::rDoCilindro(){
    return base_radius;
}

void Cilindro::dobra_H_DoCilindro(double h){
     heigth = 2 * h;
}

Cilindro::Cilindro(double r, double h){
    base_radius = r;
    heigth = h;
}    

 