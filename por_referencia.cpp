#include<iostream>

void IncrementarEnUno(int &referencia_numero) {
    referencia_numero += 1;
}

int main() {
    int numero = 5;

    std::cout << "numero=" << numero << std::endl;
    IncrementarEnUno(numero);
    std::cout << "numero=" << numero << std::endl;

    return 0;
}