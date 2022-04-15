//
// Created by Yago Pajariño on 15/04/2022.
//

#include "iostream"

bool esPrimo(int n){
    for (int i = 2; i < n; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int a;
    std::cout << "Ingresar número: " << std::endl;
    std::cin >> a;
    std::cout << "resultado: " << esPrimo(a) <<std::endl;
    return 0;
}
