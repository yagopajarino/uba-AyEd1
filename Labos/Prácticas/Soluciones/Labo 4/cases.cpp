#include <iostream>
#include "cases.h"
#include "ejercicios.h"
#include <cmath> 

using namespace std;

void printBeginTest(int testNumber, string testName){
    cout << "Corriendo test " << testNumber << " " << testName << endl;
}

void printEndTest(int testNumber, string testName){
    cout << "Finalizado test " << testNumber << " " << testName << endl << endl;
}

bool esAproximado(const float calc, const float orig){
    float precision = 0.01;
    float absErr = abs(calc-orig);
    if(calc == 0 || orig == 0){
        return absErr < precision;
    }else{
        return (absErr / abs(calc)) < precision;
    }
}


bool asegurar(bool estimated, bool expected) {
    return estimated == expected;
}

bool test01_estaOrdenado(){
    int testNumber = 1;
    string testName = "estaOrdenado";
    
    printBeginTest(testNumber, testName);
    
    vector<int> ordDesc = {123, 3, 0, -1, -123};
    vector<int> ordAsc = {-501, 0, 12, 456, 501, 99999};
    vector<int> vacio = {};
    vector<int> desord = {-1, 0, 1, -1, 56, 98, 10};
    vector<int> unoSolo = {23};
    vector<int> soloDos = {1,2};
    vector<int> pico = {-4,-3,-2,-1,0,-1,-2,-3,-4};
    vector<int> dosPicos = {0,1,2,3,4,3,2,1,0,1,2,3,4,3,2,1};
    vector<int> iguales = {0,0,0,0,0,0,0,0,0,0};
    
    bool res = asegurar(estaOrdenado(ordDesc), true);
    res &= asegurar(estaOrdenado(ordAsc), true);
    res &= asegurar(estaOrdenado(vacio), true);
    res &= asegurar(estaOrdenado(desord), false);
    res &= asegurar(estaOrdenado(unoSolo), true);
    res &= asegurar(estaOrdenado(soloDos), true);
    res &= asegurar(estaOrdenado(dosPicos), false);
    res &= asegurar(estaOrdenado(iguales), true);

    printEndTest(testNumber, testName);
    return res;
}

bool test02_esPrimo(){
    int testNumber = 2;
    string testName = "esPrimo";
    printBeginTest(testNumber, testName);
    
    bool res = asegurar(esPrimo(0), false);
    res &= asegurar(esPrimo(1), false);
    res &= asegurar(esPrimo(2), true);
    res &= asegurar(esPrimo(3), true);
    res &= asegurar(esPrimo(5), true);
    res &= asegurar(esPrimo(17), true);
    res &= asegurar(esPrimo(-2), false);
    res &= asegurar(esPrimo(919), true);
    res &= asegurar(esPrimo(643), true);
    res &= asegurar(esPrimo(-643), false);
    res &= asegurar(esPrimo(100), false);
    printEndTest(testNumber, testName);
    return res;
}

bool test03_pertenece(){
    int testNumber = 3;
    string testName = "pertenece";
    printBeginTest(testNumber, testName);
    
    vector<int> enteros= {5, -323, 253, 0, -7, 100};
    vector<int> vacio= {};
    vector<int> todosIguales = {1,1,1,1,1,1,1,1,1,1,1};
    
    bool res = asegurar(pertenece(0,enteros), true);
    res &= asegurar(pertenece(7,enteros), false);
    res &= asegurar(pertenece(100,enteros), true);
    res &= asegurar(pertenece(-323,enteros), true);
    res &= asegurar(pertenece(1,vacio), false);
    res &= asegurar(pertenece(1,todosIguales), true);
    res &= asegurar(pertenece(4,todosIguales), false);
    printEndTest(testNumber, testName);
    return res;
}

bool test04_desvioEstandar(){
    int testNumber = 4;
    string testName = "desvioEstandar";
    printBeginTest(testNumber, testName);
    
    vector<float> notas = {20,15,26,32,18,28,35,14,26,22,17};
    vector<float> norm = {-0.5, 0.98, 1.2, -1.0, -0.345, 0.478, 1.230};
    vector<float> todosCero = {0,0,0,0,0};
    vector<float> otraData = {9.87, 9.60, 9.56, 8.01, 7.99, 9.87, 7.67, 9.14};
    
    bool res = esAproximado(desvioEstandar(notas), 6.6332);
    res &= esAproximado(desvioEstandar(norm), 0.83790);
    res &= esAproximado(desvioEstandar(todosCero), 0);
    res &= esAproximado(desvioEstandar(otraData), 0.86354);
    printEndTest(testNumber, testName);
    return res;
}

bool test05_fibonacci(){
    int testNumber = 5;
    string testName = "fibonacci";
    printBeginTest(testNumber, testName);
    
    bool res = asegurar(fibonacci(0), 0);
    res &= asegurar(fibonacci(1), 1);
    res &= asegurar(fibonacci(2), 1);
    res &= asegurar(fibonacci(3), 2);
    res &= asegurar(fibonacci(4), 3);
    res &= asegurar(fibonacci(5), 5);
    res &= asegurar(fibonacci(7), 13);
    res &= asegurar(fibonacci(15), 610);
    res &= asegurar(fibonacci(50), 12586269025);
    res &= asegurar(fibonacci(16), 987);
    res &= asegurar(fibonacci(45), 1134903170);
    printEndTest(testNumber, testName);
    return res;
}

bool test06_maximoComunDivisor(){
    int testNumber = 6;
    string testName = "maximoComunDivisor";
    printBeginTest(testNumber, testName);
    
    bool res = asegurar(maximoComunDivisor(1,1), 1);
    res &= asegurar(maximoComunDivisor(1,2), 1);
    res &= asegurar(maximoComunDivisor(6,2), 2);
    res &= asegurar(maximoComunDivisor(17,19), 1);
    res &= asegurar(maximoComunDivisor(100,0), 100);
    res &= asegurar(maximoComunDivisor(100,10), 10);
    res &= asegurar(maximoComunDivisor(28,56), 28);
    res &= asegurar(maximoComunDivisor(6,10), 2);
    res &= asegurar(maximoComunDivisor(-6,10), 2);
    res &= asegurar(maximoComunDivisor(10,-6), 2);
    res &= asegurar(maximoComunDivisor(0,1), 1);
    
    printEndTest(testNumber, testName);
    return res;
}

bool test07_sumaDoble(){
    int testNumber = 7;
    string testName = "sumaDoble";
    printBeginTest(testNumber, testName);
    
    vector<int> impares = {1,3,5,7,9,11,23,33,99,101};
    vector<int> pares= {2,4,6,8,10,50,990};
    vector<int> mezcla = {-1, 0, 500, 22, -2, 35, 16, -10, 12, 66, 76, -2};
    vector<int> vacio= {};
    vector<int> paresNeg = {-2,1,1,1,-2,2,1,-2,-2,1};
    
    bool res = asegurar(sumaDoble(impares), 0);
    res &= asegurar(sumaDoble(pares), 2140);
    res &= asegurar(sumaDoble(mezcla), 1384);
    res &= asegurar(sumaDoble(vacio), 0);
    res &= asegurar(sumaDoble(paresNeg), 4);
    printEndTest(testNumber, testName);
    return res;
}

bool test08_cantPalabras(){
    int testNumber = 8;
    string testName = "cantPalabras";
    printBeginTest(testNumber, testName);

    bool res = true;
    // Poner el path completo o bien en CLion entrar a Run->Edit Configuration y en donde dice
    // "Working directory" escribir la ruta en donde se encuentra el archivo main.cpp
    res &= asegurar(cantPalabras("datos/loremIpsum.txt"), 98);
    res &= asegurar(cantPalabras("datos/losprofetas.txt"), 64);

    printEndTest(testNumber, testName);
    return res;
}

bool test09_valorMedio(){
    int testNumber = 9;
    string testName = "valorMedio";
    printBeginTest(testNumber, testName);

    bool res = true;
    res &= esAproximado(valorMedio(), 0.4948);

    printEndTest(testNumber, testName);
    return res;
}

bool test10_fraccion(){
    int testNumber = 10;
    string testName = "fraccion";
    printBeginTest(testNumber, testName);

    vector<int> variado = {1,2,3,-5,7,9,-11,23,-33,99};
    vector<int> todosPos = {1,2,3,7,9,23,99};
    vector<int> todosNeg = {-1,-2,-3,-7,-9,-23,-99};
    vector<int> con0= {0,0,-2,4,6,8,10,50,0};
    vector<int> todos0s = {0,0,0,0};
    vector<int> vacio= {};
    vector<int> todosIgualesPos = {1,1,1,1,1,1,1};
    vector<int> todosIgualesNeg = {-1,-1,-1,-1,-1,-1,-1};

    float calc;
    bool res = true;
    fraccion(variado,calc);
    res &= esAproximado(calc, 0.7);    
    fraccion(todosPos,calc);
    res &= esAproximado(calc, 1);
    fraccion(todosNeg,calc);
    res &= esAproximado(calc, 0);
    fraccion(con0,calc);
    res &= esAproximado(calc, 0.555);
    fraccion(todos0s,calc);
    res &= esAproximado(calc , 0);
    fraccion(vacio,calc);
    res &= esAproximado(calc, 0);
    fraccion(todosIgualesPos,calc);
    res &= esAproximado(calc, 1);
    fraccion(todosIgualesNeg,calc);
    res &= esAproximado(calc, 0);

    printEndTest(testNumber, testName);
    return res;
}