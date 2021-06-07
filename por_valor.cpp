#include<iostream>

void Funcion(int parametro) {
    std::cout << "parametro=" << parametro << std::endl;
    parametro = 6;
    std::cout << "parametro=" << parametro << std::endl;
}

int main() {
    int numero = 5;
    std::cout << "numero=" << numero << std::endl;

    Funcion(numero);

    std::cout << "numero=" << numero << std::endl;
    return 0;
}