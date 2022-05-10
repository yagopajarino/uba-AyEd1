#include "ejercicios.h"


// Ejercicio 1
bool existePico(vector<int> v){
    int i = 1;
    bool res = false;
    while (i < v.size() - 1){
        if (v[i] > v[i-1] && v[i] > v[i+1]){
            res = true;
        }
        i++;
    }
	return res;
}

// Ejercicio 2
int mcd(int m, int n){
    int a = m >= n ? m : n;
    int b = m < n ? m : n;
    while(b != 0) {
        int resto = a%b;
        a = b;
        b = resto;
    }
	return a;
}

// Ejercicio 3
int indiceMinSubsec(vector<int> v, int l, int r){
    int res = r;
    int i = r;
    while (i >= l) {
        if (v[i] < v[res]) {
            res = i;
        }
        i--;
    }
	return res;
}

// Ejercicio 4
void ordenar1(vector<int>& v){
    int i = 0;
    vector<int> res = v;
    while (i < v.size()) {
        int indiceMenor = indiceMinSubsec(res, 0, res.size() - 1);
        v[i] = res[indiceMenor];
        res.erase(res.begin() + indiceMenor);
        i++;
    }
}

// Ejercicio 5
void ordenar2(vector<int>& v){
	return;
}

// Ejercicio 6
tuple<int,int> division(int n, int d){
    int q = 0;
    int r = n;
    while (r > d) {
        r = r-d;
        q++;
    }
	return make_tuple(q,r);
}
