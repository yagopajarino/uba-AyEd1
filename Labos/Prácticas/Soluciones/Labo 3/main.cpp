#include "generador.h"
#include "vectores.h"
#include "fstream"

using namespace std;

int main() {
    // funcion para generar automaticamente los archivos numericos
    // generarDatosLaboratorio(); // descomentar para crear automaticamente los archivos necesarios en la parte de entrada-salida. Una vez creados, se puede volver a comentar
    holaModuloVectores(); // función definida en vectores.cpp
/*
    // test rotar
    vector<int> v {1,2,3,4,5,6};
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    vector<int> w;
    w = rotar(v, 2);
    cout << endl;
    for (int i = 0; i < w.size(); ++i) {
        cout << w[i] << " ";
    }
*/

/*
 * test factoresPrimos
    int n = 2805;
    cout << n << endl;
    vector<int> w;
    w = factoresPrimos(n);
    for (int i = 0; i < w.size(); ++i) {
        cout << w[i] << " ";
    }
*/

/*
    // Test mostrarVector
    vector<int> v(0);
    mostrarVector(v);
*/

    // Test leerVector
    //mostrarVector(leerVector("../archivos/leerVector.in"));

/*
    // Test guardarVector
    vector<int> w {1,2,3,4,5};
    guardarVector(w, "guardarVector");
*/

/*
    // Test elementoMedio
    vector<int> v = leerVector("../archivos/elementoMedio.in");
    cout << elementoMedio(v);
*/

/*
    // Test cantApariciones
    cantApariciones("cantidadApariciones");
    cantApariciones("10000NumerosEntre1y50");
*/

/*
    // Test cantidadAparicionesDePalabra
    cout << cantidadAparicionesDePalabra("cantidadAparicionesDePalabra", "libro");
*/
/*
    // Test promedio
    promedio("../archivos/promedio1.in", "../archivos/promedio2.in", "../archivos/out/promedio.in");
*/

/*
    // Test ordenarSecuencias
    ordenarSecuencias("../archivos/ordenarSecuencia1.in", "../archivos/ordenarSecuencia2.in", "../archivos/out/ordenarSecuencias.txt");
*/

/*
    // Test interseccion
    // "../archivos/interseccion1.in"
    // "../archivos/interseccion2.in"
    interseccion();
*/

    return 0;
}

