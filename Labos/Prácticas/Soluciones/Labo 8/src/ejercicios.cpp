#include "ejercicios.h"

/* Para compilar */ 

using namespace std;

vector<string> split(string s, char delim){
	vector<string> v;
    int i = 0;
    s += delim; // Agrego el delim al final para que me separe la última palabra
    string pal = "";
    int l = s.size();
    while (i < l) {
        if (s[i] != delim) {
            pal += s[i];
        }
        else {
            if (pal.size() != 0) {
                v.push_back(pal);
                pal = "";
            }
        }
        i++;
    }
	return v;
}

string darVueltaPalabra(string s){
    string res = "";
    vector<string> palabras = split(s, ' ');
    int i = palabras.size() - 1;
    while (i >= 0) {
        res += palabras[i];
        if (i != 0) {
            res += ' ';
        }
        i--;
    }
    return res;
}

// Decidir si s1 es substring o subsecuencia de s2
bool subsecuencia(string s1, string s2) {
    bool condicionesIniciales = s1.size() <= s2.size() || s1.size() == 0;
    int i = 0;
    int j = 0;
    while (i < s1.size() && j < s2.size()) {
        if (s1[i] == s2[j]) {
            i++;
        }
        j++;
    }
	return i == s1.size() && condicionesIniciales;
}

int cantidadApariciones(char c, string s) {
    int i = 0;
    int count = 0;
    while (i < s.size()) {
        if (s[i] == c) {
            count++;
        }
        i++;
    }
    return count;
}

bool esAnagrama(string s, string t) {
    bool res = true;
    int i = 0;
    while (i < s.size()) {
        char letra = s[i];
        if (cantidadApariciones(letra, s) != cantidadApariciones(letra, t)) {
            res = false;
        }
        i++;
    }
    return res && s.size() == t.size();
}

// Mismo orden relativo de conjunto de anagramas y dentro de cada vector y con repetidos
vector<vector<string> > agruparAnagramas(vector<string> v){
	vector<vector<string> > res;
    vector<string> k;
    k.push_back(v[0]);
    res.push_back(k);
    int i = 1;
    while (i < v.size()) {
        int j = 0;
        while (j < res.size() && !esAnagrama(v[i], res[j][0])) {
            j++;
        }
        if (j < res.size()) {
            res[j].push_back(v[i]);
        } else {
            vector<string> clase;
            clase.push_back(v[i]);
            res.push_back(clase);
        }
        i++;
    }
	return res;
}

bool esPalindromo(string s){
	int i = 0;
    while (i < s.size()/2 && s[i] == s[s.size()-i-1]) {
        i++;
    }
	return i == s.size()/2;
}

bool tieneRepetidos(string s){
    bool result = false;
	int i = 0;
    while (i < s.size()) {
        int j = i+1;
        while (j < s.size()) {
            if (s[i] == s[j]) {
                result = true;
            }
            j++;
        }
        i++;
    }
	return result && s.size() > 1;
}

string rotarUltimo(string s, int k){
    string res;
    res.push_back(k);
    int i = 0;
    while (i < s.size() - 1){
        res.push_back(s[i]);
        i++;
    }
    return res;
}

string rotar(string s, int j){
	string res(s);
    int rotaciones = j % s.size();
    int i = 0;
    while (i < rotaciones) {
        res = rotarUltimo(res, res[res.size() - 1]);
        i++;
    }
	return res;
}

// no se puede usar substring
string darVueltaK(string s, int k){
	string res(s);
	return res;
}

string abueloLaino(string s){
    string res;
    return res;
}

int cantidadDeFelicitaciones(vector<string> v){
    int res;
    return res;
}

int middleOut(string s, string t){

    return 0;
}
