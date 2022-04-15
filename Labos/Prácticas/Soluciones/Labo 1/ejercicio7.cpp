//
// Created by Yago Pajariño on 15/04/2022.
//

#include "iostream"

// ------------------------------recursiva------------------------------

// ------------------------------recursiva------------------------------

// ------------------------------iterativa------------------------------
int sumaDivisores(int n){
    int r = 0;
    for (int i = 1; i <= n; ++i) {
        if (n % i == 0){
            r += i;
        }
    }
    return r;
}
// ------------------------------iterativa------------------------------

int main() {
    int n;
    std::cout << "Ingrese número:" << std::endl;
    std::cin >> n;
    std::cout << "Suma de devisores de " << n << ": " << sumaDivisores(n) << std::endl;

}