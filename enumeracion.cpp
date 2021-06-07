#include<iostream>
enum DiaSemana {Lunes, Martes, Miercoles, Jueves, Viernes, Sabado, Domingo};

int main() {

    DiaSemana hoy = Sabado;

    if (hoy == Sabado) {
        std::cout << "Tengo que hacer el Laboratorio :(";
    }

    return 0;
}