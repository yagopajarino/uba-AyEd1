//
// Created by Yago Pajariño on 15/04/2022.
//

#include <iostream>

// --------------------------Iterativa--------------------------
int fibo(int n){
    int x=0,y=1;
    for (int i = 2; i < n; ++i) {
        int temp = x;
        x = y;
        y = y + temp;
    }
    return x+y;
}
// --------------------------Iterativa--------------------------



// --------------------------Recursiva--------------------------
//int fibo(int n){
//    if(n == 0){
//        return 0;
//    }
//    else if (n == 1){
//        return 1;
//    }
//    else {
//        return fibo(n-2) + fibo(n-1);
//    }
//}

// --------------------------Recursiva--------------------------

int main(){
    int n;
    std::cout << "Ingrese número:" << std::endl;
    std::cin >> n;
    std::cout << "Número de fibonacci nro " << n << ": " << fibo(n) << std::endl;
}