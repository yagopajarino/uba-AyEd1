#include "ejercicios.h"
#include <time.h>
#include "iostream"
#include <fstream>

using namespace std;

int main() {
/*
    vector<int> a = construir_vector(1000, "iguales");
    vector<int> b = construir_vector(10000, "iguales");
    vector<int> c = construir_vector(100000, "iguales");
*/

/*
// Tiempos para el gráfico
    ofstream myfile;
    myfile.open ("./tiempos.csv");
    myfile << "n" << "," << "hayDuplicados(n)" << "," << "cn^2" << endl;

    for (int i = 0; i < 10000; i+=500) {
        vector<int> v = construir_vector(i, "asc");
        double t0 = clock();
        bool h = hayDuplicados(v);
        double t1 = clock();
        double tiempo = (double(t1-t0)/ CLOCKS_PER_SEC);
        double c = (6/double(1000000000)) * i * i;
        myfile << i << "," << tiempo << "," << c << endl;
    }

    myfile.close();
*/

// Ejercicio 4
/*
    for (int i = 100; i <= 100000; i *= 10) {
        cout << "n: " << i << endl;
        double t0 = clock();
        int h = mismoNumero(1);
        double t1 = clock();
        double tiempo = (double(t1-t0)/ CLOCKS_PER_SEC);
        cout << "O(1): " << tiempo << endl;

        vector<int> v;
        for (int j = 0; j < i; ++j) {
            v.push_back(j);
        }

        t0 = clock();
        bool b = busquedaLineal(v, -1);
        t1 = clock();
        tiempo = (double(t1-t0)/ CLOCKS_PER_SEC);
        cout << "O(n): " << tiempo << endl;

        */
/*t0 = clock();
        int c = sumaTripleMatriz(v);
        t1 = clock();
        tiempo = (double(t1-t0)/ CLOCKS_PER_SEC);
        cout << "O(n^3): " << tiempo << endl;*//*


        t0 = clock();
        bool d = busqueda_binaria(v, -1);
        t1 = clock();
        tiempo = (double(t1-t0)/ CLOCKS_PER_SEC);
        cout << "O(n.log(n)): " << tiempo << endl;
    }
*/

    // Ejercicio 6
    ofstream myfile;
    myfile.open ("./tiemposEj6.csv");
    myfile << "n" << "," << "algunSubconjSuma(n)" << endl;


    for (int i = 0; i < 37; i+=3) {
        cout << "Iter nro. " << i << endl;
        vector<int> v;
        for (int j = 0; j < i; ++j) {
            v.push_back(j);
        }
        int suma = (i*i+1) / 2 + 1;
        double t0 = clock();
        bool r = algunSubconjSuma(v, suma);
        double t1 = clock();
        double tiempo = (double(t1-t0)/ CLOCKS_PER_SEC);
        myfile << i << "," << tiempo << endl;
    }
    return 0;
}