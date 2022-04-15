//
// Created by Yago Pajariño on 15/04/2022.
//

#include "iostream"

// ------------------------------recursiva------------------------------
//int sumaDeImparesMenoresIgualesQueN(int n){
//    if(n == 1) {
//        return 1;
//    }
//    else {
//        if(n % 2 == 1){
//            return n + sumaDeImparesMenoresIgualesQueN(n-2);
//        }
//        else {
//            return sumaDeImparesMenoresIgualesQueN(n - 1);
//        }
//    }
//}
// ------------------------------recursiva------------------------------

// ------------------------------iterativa------------------------------
int sumaDeImparesMenoresQueN(int n){
    int r = 0;
    for (int i = 1; i < n ; ++i) {
        if(i % 2 == 1){
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
    std::cout << "Suma de impares menores que " << n << ": " << sumaDeImparesMenoresQueN(n) << std::endl;

}