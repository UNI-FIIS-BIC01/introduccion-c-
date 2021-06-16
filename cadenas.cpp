#include<string>
#include<iostream>

int main() {
    std::string mi_cadena = "bic01";

    for (int indice=0; indice < mi_cadena.length(); indice += 1) {
        mi_cadena[indice] = toupper(mi_cadena[indice]);
    }

    std::cout << mi_cadena << std::endl;
    return 0;
}