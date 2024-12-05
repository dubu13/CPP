#include "Base.hpp"
#include "Derived.hpp"

Base *generate(void){
    int random = rand() % 3;

    switch (random){
        case 0:
            return new A;
        case 1:s
            return new B;
        case 2:
            return new C;
        default:
            return nullptr;
    }
}

// void identify(Base* p){

// }

// void identify(Base& p){

// }