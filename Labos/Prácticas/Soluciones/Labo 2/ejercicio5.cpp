//
// Created by Yago Pajariño on 19/04/2022.
//

#include <iostream>
#include <math.h>

int calcularPropiedades(float r, float& diametro, float& area) {
    diametro = 2*r;
    float pi = 3.14159;
    area = pi * pow(r,2);
    return 0;
}


int main() {
    float diametro, area;
    float radio;
    std::cout << "Ingrese radio: " << std::endl;
    std::cin >> radio;
    calcularPropiedades(radio, diametro, area);
    std::cout << "Diametro: " << diametro << std::endl;
    std::cout << "Area: " << area << std::endl;
}