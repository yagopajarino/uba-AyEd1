#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "anagramas.h"
using namespace std;

int main(){
    string palabra, palabra2;
    cout << "Ingrese una palabra en ingles con letras en minuscula:" << endl;
    cin >> palabra;

    ifstream dicci ("ingles.dic");
    vector<string> listaPalabras;
    string word;
    while(getline(dicci, word)){
        word.pop_back();
        listaPalabras.push_back(word);
    }
    int cantidadAnagrama = 0;
    for (int i = 0; i < listaPalabras.size(); ++i)
    {
        if (esAnagrama(listaPalabras[i], palabra)) {
            cout << "Son anagramas: " << listaPalabras[i] << " y " << palabra << endl;
            cantidadAnagrama++;
        }
    }
    cout << "La cantidad de anagramas es: " << cantidadAnagrama << endl;
    return 0;
}

bool esAnagrama(string p1, string p2){
    // CAMBIAR AQUI QUE IMPLEMENTACION USAR
    return esAnagrama2(p1,p2);
}

bool esAnagrama1(string p1, string p2){
    //devuelve true sii p1 es anagrama de p2
    //esta versión usa ordenar
    ordenarString(p1);
    ordenarString(p2);
    return p1 == p2;
}

bool esAnagrama2(string p1, string p2){
    int puntUno = 1;
    int puntDos = 1;
    for (int i = 0; i < p1.size(); ++i) {
        puntUno *= charToPrimo(p1[i]);
    }
    for (int i = 0; i < p2.size(); ++i) {
        puntDos *= charToPrimo(p2[i]);
    }
	return puntUno == puntDos;
}

int findMinPos(string &s, int d, int h) {
    int min = d;
    for (int i = d+1; i < h; i++) {
        if (posicionEnAlfabeto(s[i]) < posicionEnAlfabeto(s[min])) {
            min = i;
        }
    }
    return min;
}
void ordenarString(string &palabra){
    for (int i = 0; i < palabra.size()-1; ++i) {
        int minPos = findMinPos(palabra, i, palabra.size());
        char temp = palabra[i];
        palabra[i] = palabra[minPos];
        palabra[minPos] = temp;
    }
}

bool esPrimo(int n) {
    int i = 2;
    while (i < n && n % i != 0) {
        i++;
    }
    return i == n;
}

int charToPrimo(char c){
    vector<int> primos = {2};
    for (int i = 1; i < posicionEnAlfabeto('z'); ++i) {
        int j = primos[primos.size()-1] + 1;
        while (!esPrimo(j)) {
            j++;
        }
        primos.push_back(j);
        i++;
    }
	return primos[posicionEnAlfabeto(c)];
}

int posicionEnAlfabeto(char c){
    return c - 'a';
}
