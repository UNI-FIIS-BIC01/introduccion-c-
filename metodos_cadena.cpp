#include<string>
#include<iostream>

int main() {
    std::string una_cadena = "Vive la vida: No dejes que la vida te viva";

    std::string la_vida = una_cadena.substr(5, 7);

    int posicion = una_cadena.find("viva");
    std::string viva = una_cadena.substr(posicion);

    std::cout << viva << " " << la_vida << std::endl;

    return 0;
}