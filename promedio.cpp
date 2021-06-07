#include<iostream>

const int numero_notas = 4;

double CalcularPromedioNotas(int numero_notas);

int main() {
    std::cout << "Procesando " << numero_notas << " notas " << std::endl;

    double promedio = CalcularPromedioNotas(numero_notas);

    std::cout << "El promedio es " << promedio << std::endl;
    return 0;
}

double CalcularPromedioNotas(int numero_notas) {

    int total_notas = 0;

    for (int indice_nota = 0; indice_nota < numero_notas; indice_nota += 1) {
        int nota = 0;
        std::cout << "Ingrese nota: ";
        std::cin  >> nota;
        total_notas += nota;
    }

    return double(total_notas)/numero_notas;
}

