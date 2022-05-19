#include <iostream>
#include "ejercicios.h"
#include "cases.h"
#include "gtest/gtest.h"

using namespace std;

int main(int argc, char **argv)
{
    int exitos = 0;
    int total = 0;
       
/*
    cout << "Tests Ejercicio 1" << endl;
    exitos += productoVectorialTest_test1() ? 1 : 0;
    exitos += productoVectorialTest_test2() ? 1 : 0;
    exitos += productoVectorialTest_test3() ? 1 : 0;
    cout << "Correctos:" << exitos << endl;
    total += exitos;
    
    exitos = 0;
    cout << "Tests Ejercicio 2" << endl;
    exitos += trasponerTest_test1() ? 1 : 0;
    exitos += trasponerTest_test2() ? 1 : 0;
    exitos += trasponerTest_test3() ? 1 : 0;
    cout << "Correctos:" << exitos << endl;
    total += exitos;
    
    exitos = 0;
    cout << "Tests Ejercicio 3" << endl;
    exitos += multiplicarTest_test1() ? 1 : 0;
    exitos += multiplicarTest_test2() ? 1 : 0;
    cout << "Correctos:" << exitos << endl;
    total += exitos;

    exitos = 0;
    cout << "Tests Ejercicio 4" << endl;
    exitos += promediarTest_test1() ? 1 : 0;
    exitos += promediarTest_test2() ? 1 : 0;
    cout << "Correctos:" << exitos << endl;
    total += exitos;

    exitos = 0;
    cout << "Tests Ejercicio 5" << endl;
    exitos += contarPicosTest_test1() ? 1 : 0;
    exitos += contarPicosTest_test2() ? 1 : 0;
    cout << "Correctos:" << exitos << endl;
    total += exitos;

    exitos = 0;
    cout << "Tests Ejercicio 6" << endl;
    exitos += esTriangularTest_test1() ? 1 : 0;
    exitos += esTriangularTest_test2() ? 1 : 0;
    exitos += esTriangularTest_test3() ? 1 : 0;
    exitos += esTriangularTest_test4() ? 1 : 0;
    exitos += esTriangularTest_test5() ? 1 : 0;
    cout << "Correctos:" << exitos << endl;
    total += exitos;
    
    exitos = 0;
    cout << "Tests Ejercicio 7" << endl;
    exitos += hayAmenazaTest_test1() ? 1 : 0;
    exitos += hayAmenazaTest_test2() ? 1 : 0;
    exitos += hayAmenazaTest_test3() ? 1 : 0;
    exitos += hayAmenazaTest_test4() ? 1 : 0;
    exitos += hayAmenazaTest_test5() ? 1 : 0;
    cout << "Correctos:" << exitos << endl;
    total += exitos;
    
    exitos = 0;
    cout << "Tests Ejercicio 8" << endl;
    exitos += diferenciaDiagonalesTest_test1() ? 1 : 0;
    exitos += diferenciaDiagonalesTest_test2() ? 1 : 0;
    exitos += diferenciaDiagonalesTest_test3() ? 1 : 0;
    exitos += diferenciaDiagonalesTest_test4() ? 1 : 0;
    exitos += diferenciaDiagonalesTest_test5() ? 1 : 0;
    exitos += diferenciaDiagonalesTest_test6() ? 1 : 0;
    cout << "Correctos:" << exitos << endl;
    total += exitos;

    cout << "# Ejercicios incorrectos: " << 28 - total << endl;
*/
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();

}

