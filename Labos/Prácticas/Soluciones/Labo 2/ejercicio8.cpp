//
// Created by Yago Pajariño on 19/04/2022.
//

#include <iostream>

// ------------------------ versión iterativa ------------------------
/*void collatz (int n, int& cantPasos) {
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = n*3 + 1;
        }
        cantPasos++;
    }
}*/
// ------------------------ versión iterativa ------------------------

// ------------------------ versión recursiva ------------------------
void collatz (int n, int& cantPasos) {
    if (n == 1) {
        cantPasos;
    }
    else {
        if (n % 2 == 0) {
            cantPasos++;
            collatz(n/2, cantPasos);
        } else {
            cantPasos++;
            collatz(3*n + 1, cantPasos);
        }
    }
}


int main() {
    int cantPasos = 1;
    int n;
    std::cout << "Ingrese número" << std::endl;
    std::cin >> n;
    collatz(n, cantPasos);
    std::cout << "Cantidad de pasos: " << cantPasos << std::endl;
}