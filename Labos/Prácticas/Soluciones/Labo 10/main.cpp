#include "gtest/gtest.h"
#include <time.h>
#include "src/ejercicios.h"


int main(int argc, char **argv) {
// Tests suites
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();

// Ejercicio 2
/*
    int n = 100;
    int clockPerMs = CLOCKS_PER_SEC / 1000;
    while (n <= 100000) {
        vector<int> v;
        for (int i = 0; i < n; ++i) {
            v.push_back(i);
        }

        double t0 = clock();
        busquedaBinaria(v, 0);
        double t1 = clock();
        double tiempoBinaria = (double(t1-t0)/ clockPerMs);

        t0 = clock();
        busquedaJumpSearch(v, n+1);
        t1 = clock();
        double tiempoJump = (double(t1-t0)/ clockPerMs);


        // Impresiones en terminal
        cout << "size " << ", n: " << n << ", tiempo: " << tiempoBinaria << endl;
        cout << "push " << ", n: " << n << ", tiempo: " << tiempoJump << endl;
        n *= 10;
    }
*/

// Ejercicio 3
/*
    int n = 100;
    int clockPerMs = CLOCKS_PER_SEC / 1000;
    while (n <= 100000) {
        vector<int> v;
        vector<bool> w;
        for (int i = 0; i < n; ++i) {
            v.push_back(i);
            w.push_back(true);
        }
        int z = n - 1;

        double t0 = clock();
        v.size();
        double t1 = clock();
        double tiempoSize = (double(t1-t0)/ clockPerMs);

        t0 = clock();
        v.push_back(1);
        t1 = clock();
        double tiempoPush = (double(t1-t0)/ clockPerMs);

        t0 = clock();
        v.pop_back();
        t1 = clock();
        double tiempoPop = (double(t1-t0)/ clockPerMs);

        t0 = clock();
        v[0];
        t1 = clock();
        double tiempoV0 = (double(t1-t0)/ clockPerMs);

        t0 = clock();
        v[z];
        t1 = clock();
        double tiempoVz = (double(t1-t0)/ clockPerMs);

        t0 = clock();
        v[0] = 1;
        t1 = clock();
        double tiempoAsig0 = (double(t1-t0)/ clockPerMs);

        t0 = clock();
        v[z] = 1;
        t1 = clock();
        double tiempoAsigZ = (double(t1-t0)/ clockPerMs);

        t0 = clock();
        w.flip();
        t1 = clock();
        double tiempoFlip = (double(t1-t0)/ clockPerMs);

        t0 = clock();
        v.clear();
        t1 = clock();
        double tiempoClear = (double(t1-t0)/ clockPerMs);


        // Impresiones en terminal
        cout << "size " << ", n: " << n << ", tiempo: " << tiempoSize << endl;
        cout << "push " << ", n: " << n << ", tiempo: " << tiempoPush << endl;
        cout << "pop  " << ", n: " << n << ", tiempo: " << tiempoPop << endl;
        cout << "v[0] " << ", n: " << n << ", tiempo: " << tiempoV0 << endl;
        cout << "v[z] " << ", n: " << n << ", tiempo: " << tiempoVz << endl;
        cout << "asig0" << ", n: " << n << ", tiempo: " << tiempoAsig0 << endl;
        cout << "asigZ" << ", n: " << n << ", tiempo: " << tiempoAsigZ << endl;
        cout << "flip " << ", n: " << n << ", tiempo: " << tiempoFlip << endl;
        cout << "clear" << ", n: " << n << ", tiempo: " << tiempoClear << endl;
        n *= 10;
    }
*/


}