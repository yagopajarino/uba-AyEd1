#include <vector>
#include <iostream>
#include <fstream>  
#include <algorithm>
#include "generador.h"

using namespace std;


void generarDatosLaboratorio(){
	// declaracion de variables
    int n,j,k;
    
	srand(1); //pongo semilla

    // ejercicio 8
    cout << "Generando archivos para ejercicio 8" << endl;
	ofstream outfile("leerVector.in"); // 10 numeros entre 1 y 50
	n=10;
	k=50;
	for(j=0; j < n - 1; j++ ){
        outfile << rand()%k + 1 << ' ';
    }
    // grabo el ultimo elemento luego del espacio y cierro el archivo
    outfile << rand()%k + 1;
	outfile.close();
    
	// ejercicio 10
    cout << "Generando archivos para ejercicio 10" << endl;
    outfile.open("elementoMedio.in"); // vector ejemplo
	outfile<<"1 2 3 4";
	outfile.close();

    // ejercicio 11
    cout << "Generando archivos para ejercicio 11" << endl;
	outfile.open("10000NumerosEntre1y50.in"); //10000 numeros random entre 1 y 50
	n=10000;
	k=50;
	for(j=0; j < n - 1; j++ ){
        outfile << rand()%k + 1 << ' ';
    }
    outfile << rand()%k + 1;
	outfile.close();
	
	outfile.open("cantidadApariciones.in"); //5000 numeros random entre 1 y 50
	n=5000;
	k=50;
	for(j=0; j < n - 1; j++ ){
        outfile << rand()%k + 1 << ' ';
    }
    outfile << rand()%k + 1;
	outfile.close();
	
    // ejercicio 13
    cout << "Generando archivos para ejercicio 13" << endl;
	outfile.open("promedio1.in"); //100 numeros random entre 1 y 10
	ofstream outfile2("promedio2.in"); //100 numeros random entre 1 y 10
	n=100;
	k=10;
	for(j=0; j < n - 1; j++ ){
        outfile << rand()%k + 1 << ' ';
        outfile2 << rand()%k + 1 << ' ';
    }
    outfile << rand()%k + 1;
    outfile2 << rand()%k + 1;
	outfile.close();
	outfile2.close();

    // ejercicio 14
    cout << "Generando archivos para ejercicio 14" << endl;
	outfile.open("ordenarSecuencia1.in"); // todos los pares entre 1 y 1000
	outfile2.open("ordenarSecuencia2.in"); // todos los impares entre 1 y 1000
	n=1000;
	k=1;
	while(k < n - 1){
		outfile <<k+1<< ' ';
		outfile2 <<k<<' ';
		k+=2;
	}
	outfile <<k+1<< ' ';
	outfile2 <<k<<' ';
	outfile.close();
	outfile2.close();
	
    // ejercicio 15
    cout << "Generando archivos para ejercicio 15" << endl;
	outfile.open("interseccion1.in"); //20 random entre 1 y 50 Sin repeticion
	outfile2.open("interseccion2.in"); //20 random entre 1 y 50 Sin repeticion
	n=20;
	k=50;
    
    vector<int> numeros1 = randomSinRepeticion(n,k);
    vector<int> numeros2 = randomSinRepeticion(n,k);
       
    for(j = 0; j < n - 1; j++ ){
        outfile << numeros1[j]<< ' ';
        outfile2 << numeros2[j]<< ' ';
    }
    outfile << numeros1[n-1];
    outfile2 << numeros2[n-1];
	outfile.close();
	outfile2.close();
	
}

bool noEstaEnVector(const vector<int> & v, int num) {
    bool resp = true; // asumo que no esta, si lo encuentro, lo cambio a falso
    int i = 0;  // variable de control
    while (i < v.size()) {
        if (v[i] == num) {
            resp = false;
        }
        i++;
    }
    return resp;
}

vector<int> randomSinRepeticion(int n, int k) {
    
    vector<int> numeros(n);
    int num, j = 0;
    
	while( j < n ){
        num = rand()%k + 1;
        if(noEstaEnVector(numeros,num) == true) {
            numeros[j] = num;
            j++;
        }
    }
    return numeros;
}
