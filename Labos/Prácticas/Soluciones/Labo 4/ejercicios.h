#ifndef EJERCICIOS_INCLUDED_H
#define EJERCICIOS_INCLUDED_H

#include <vector>
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

//Ejercicio 1
bool estaOrdenado(vector<int> v);

// Ejercicio 2
bool esPrimo(int numero);

// Ejercicio 3
bool pertenece(int elemento, vector<int> v);

// Ejercicio 4
float desvioEstandar(vector<float> v);

// Ejercicio 5
long fibonacci(int k);

// Ejercicio 6
int maximoComunDivisor(int x, int y);

// Ejercicio 7
int sumaDoble(vector<int> v);
	
// Ejercicio 8
int cantPalabras(string filename);

// Ejercicio 9
float valorMedio();

// Ejercicio 10
void fraccion(vector<int>, float);

#endif // EJERCICIOS_INCLUDED_H