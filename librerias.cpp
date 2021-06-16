#include<iostream>
#include "sumar.h"

int main() {
    int sumando = 3;
    int otro_sumando = 4;
    std::cout << "La suma de " << sumando << " y " << otro_sumando;
    std::cout << " es " << Sumar(sumando, otro_sumando) << std::endl;
    return 0;
}