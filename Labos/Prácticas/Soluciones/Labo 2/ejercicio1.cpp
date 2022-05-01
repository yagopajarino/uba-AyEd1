#include <iostream>

int getNota(int k) {
    int nota;
    std::cout << "Ingrese nota " << k << ":" << std::endl;
    std::cin >> nota;
    while (nota < 0 || nota > 10 ) {
        std::cout << "La nota debe ser un número entre 0 y 10" << std::endl;
        std::cout << "Ingrese nota " << k << ":" << std::endl;
        std::cin >> nota;
    }
    return nota;
}


int main() {
    int notas = 0;
    int i = 1;
    int nota;
    while (i <= 10) {
        nota = getNota(i);
        notas += nota;
        i++;
    }
    float promedio = float(notas) / 10.0;
    std::cout << "Suma de notas: " << notas << std::endl;
    std::cout << "Promedio de notas: " << promedio << std::endl;
    return 0;
}
