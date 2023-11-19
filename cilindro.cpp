#include"calsses1.h"
#include<iostream>

double Cilindro::volumeDoCilindro(){
    return PI * (*p_r) * (*p_r) * (*p_h);
 }
      
void Cilindro::heightDoCilindro(double h){
    *p_h = h;
}

void Cilindro::r_baseDoCilindro(double r){
     *p_r = r;
}
           
double Cilindro::hDoCilindro(){
     return *p_h;
}

double Cilindro::rDoCilindro(){
    return *p_r;
}

std::string Cilindro::nDoCilindro(){
    return nome;
}

void Cilindro::dobra_H_DoCilindro(double h){
     heigth = 2 * h;
}
Cilindro::Cilindro(){
    nome = "nunhum";
    p_h = new double;
    *p_h = 1;
    p_r = new double;
    *p_r = 1;
}

Cilindro::Cilindro(double r, double h,std::string n){
    nome = n;
    p_h = new double;
    *p_h = h;
    p_r = new double;
    *p_r = r;

} 

 