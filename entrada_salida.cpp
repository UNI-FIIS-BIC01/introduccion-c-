#include<iostream>

int main() {

    int entero;
    std::cout << "Por  favor, ingrese un numero entero: " << std::endl;
    std::cin >> entero;

    std::cout << "En numero ingresado es " << entero;
    std::cout << " y su doble es " << entero * 2 << "." << std::endl;

    return 0;
}