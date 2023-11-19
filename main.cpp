#include <iostream>
#include"calsses1.h"


int main(){
    std::cout << PI << std::endl;
    Cilindro cilindro1; // objetos
    std::cout << "volume: "<< cilindro1.volumeDoCilindro() <<std::endl;
    std::cout << "h:" << cilindro1.hDoCilindro() << std::endl;
    std::cout << "r:" << cilindro1.rDoCilindro() << std::endl;
    cilindro1.dobra_H_DoCilindro(cilindro1.hDoCilindro());
    std::cout << "volume: "<< cilindro1.volumeDoCilindro() <<std::endl;
    std::cout << "h:" << cilindro1.hDoCilindro() << std::endl;
    std::cout << "r:" << cilindro1.rDoCilindro() << std::endl;

    return 0;
}