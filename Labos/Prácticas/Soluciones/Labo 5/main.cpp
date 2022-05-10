#include <iostream>
#include <cassert>
#include "ejercicios.h"
#include "cases.h"

using namespace std;

int main()
{
    int exitos = 0;
    int total = 6;
    
    cout << "Test 01" << endl;
    exitos += test01_existePico() ? 1 : 0;
    cout << "Test 02" << endl;
    exitos += test02_mcd() ? 1 : 0;
    cout << "Test 03" << endl;
    exitos += test03_indiceMinSubsec() ? 1 : 0;
    cout << "Test 04" << endl;
    exitos += test04_ordenar1() ? 1 : 0;
    cout << "Test 05" << endl;
    exitos += test05_ordenar2() ? 1 : 0;
    cout << "Test 06" << endl;
    exitos += test06_division() ? 1 : 0;
   
    cout << "# Ejercicios correctos:" << exitos << endl;
    cout << "# Ejercicios incorrectos: " << total - exitos << endl;
}

