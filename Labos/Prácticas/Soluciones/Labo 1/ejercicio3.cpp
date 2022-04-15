//
// Created by Yago Pajariño on 15/04/2022.
//

#include "iostream"

int f(int a,int b) {
    if(a>b) {
        return a+b;
    }
    else {
        return a*b;
    }

}

int main() {
    int a,b;
    std::cout << "ingresar número: " << std::endl;
    std::cin >> a;
    std::cout << "ingresar número: " << std::endl;
    std::cin >> b;
    std::cout << "resultado: " << f(a,b) <<std::endl;
    return 0;
}
