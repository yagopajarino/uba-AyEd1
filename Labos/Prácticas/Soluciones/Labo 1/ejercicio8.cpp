//
// Created by Yago Pajariño on 15/04/2022.
//

#include "iostream"

// ------------------------------recursiva------------------------------

// ------------------------------recursiva------------------------------

// ------------------------------iterativa------------------------------

int factorial(int n){
    int r = 1;
    for (int i = 1; i <= n; ++i) {
        r *= i;
    }
    return r;
}

int combinatorio(int n, int k) {
    return (factorial(n) / (factorial(n-k) * factorial(k)));
}
// ------------------------------iterativa------------------------------

int main() {
    int n, k;
    std::cout << "Ingrese número:" << std::endl;
    std::cin >> n;
    std::cout << "Ingrese número:" << std::endl;
    std::cin >> k;
    std::cout << "Combinatorio de " << n << ", " << k << ": " << combinatorio(n, k) << std::endl;

}