#include<iostream>
#include<string>

int main() {
    std::string una_cadena = "alfa";
    std::string otra_cadena = "beta";

    if (una_cadena == otra_cadena) {
        std::cout << una_cadena + " es igual a " + otra_cadena + "\n";
    }
    if (una_cadena != otra_cadena) {
        std::cout << una_cadena + " es diferente a " + otra_cadena + "\n";
    }
    if (una_cadena > otra_cadena) {
        std::cout << una_cadena + " es mayor a " + otra_cadena + "\n";
    }
     if (una_cadena < otra_cadena) {
        std::cout << una_cadena + " es menor a " + otra_cadena + "\n";
    }
    return 0;
}