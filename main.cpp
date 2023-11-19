#include <iostream>
#include"calsses1.h"


int main(){
    std::cout << PI << std::endl;
    Cilindro cilindro1; // objetos
    std::cout << "volume: "<< cilindro1.volumeDoCilindro() <<std::endl;
    std::cout << "h:" << cilindro1.hDoCilindro() << std::endl;
    std::cout << "r:" << cilindro1.rDoCilindro() << std::endl;
    Cilindro *pc1 = &cilindro1;
    std::cout << "volume: "<< pc1->volumeDoCilindro() <<std::endl;
    std::cout << "h:" << pc1->hDoCilindro() << std::endl;
    std::cout << "r:" << pc1->rDoCilindro() << std::endl;

    return 0;
}