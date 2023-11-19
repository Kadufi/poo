#include <iostream>
#include"calsses1.h"


int main(){
    std::cout << PI << std::endl;
    Cilindro cilindro1; // objetos
    std::cout << "volume: "<< cilindro1.volumeDoCilindro() <<std::endl;
    std::cout << "h:" << cilindro1.hDoCilindro() << std::endl;
    std::cout << "r:" << cilindro1.rDoCilindro() << std::endl;
    Cilindro *p_c1 = &cilindro1;
    std::cout << "volume: "<< p_c1->volumeDoCilindro() <<std::endl;
    std::cout << "h:" << p_c1->hDoCilindro() << std::endl;
    std::cout << "r:" << p_c1->rDoCilindro() << std::endl;


    Cilindro *p_c2 = new Cilindro(100,2); // Heap, sempre quando começãr assim, já faça o delete dele no final, eu acho... sla.
    std::cout << "volume: "<< p_c2->volumeDoCilindro() <<std::endl;
    std::cout << "h:" << p_c2->hDoCilindro() << std::endl;
    std::cout << "r:" << p_c2->rDoCilindro() << std::endl;

    delete p_c2;

    return 0;
}