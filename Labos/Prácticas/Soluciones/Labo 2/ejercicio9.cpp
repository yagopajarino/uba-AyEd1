//
// Created by Yago Pajariño on 19/04/2022.
//

#include <iostream>

void division(int dividendo, int divisor, int& cociente, int& resto) {
    cociente = dividendo / divisor;
    resto = dividendo % divisor;
}

int main(){
    int dividendo, divisor, cociente, resto;
    std::cout << "Ingresar dividendo: " << std::endl;
    std::cin >> dividendo;
    std::cout << "Ingresar divisor: " << std::endl;
    std::cin >> divisor;
    division(dividendo, divisor, cociente, resto);
    std::cout << "cociente: " << cociente << " resto: " << resto << std::endl;
}