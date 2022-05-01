#include <iostream>

int getInput(int k) {
    int nota;
    std::cout << "Ingrese nota " << k << " (-1 para finalizar):" << std::endl;
    std::cin >> nota;
    while (nota < -1 || nota > 10) {
        std::cout << "La nota debe ser un número entre 0 y 10" << std::endl;
        std::cout << "Ingrese nota " << k << ":" << std::endl;
        std::cin >> nota;
    }
    return nota;
}

int main() {
    int aprobados = 0;
    int reprobados = 0;
    int cantidadAlumnos = 0;
    int centinela = 0;
    int nota = 0;
    while (centinela != -1) {
        int input = getInput(cantidadAlumnos + 1);
        if (input == -1) {
            centinela = input;
        }
        else {
            nota = input;
            if (nota >= 6) {
                aprobados++;
            } else {
                reprobados++;
            }
            cantidadAlumnos++;
        }
    }
    if (cantidadAlumnos < 6) {
        std::cout << "La cantidad de alumnos debe ser mayor igual a 6." << std::endl;
        return 1;
    }
    if ((float(aprobados) / float(cantidadAlumnos)) > 2/3) {
        std::cout << "Se puede incrementar el número de plazas." << std::endl;
    }
}
