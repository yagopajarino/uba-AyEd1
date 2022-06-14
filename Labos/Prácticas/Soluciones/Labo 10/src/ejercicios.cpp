#include "vector"
#include "ejercicios.h"


using namespace std;

int busquedaBinaria(vector<int> v, int x) {
    // Salvo casos particulares
    if (v.size() == 0) {
        return -1;
    }
    else if (v.size() == 1) {
        return v[0] == x ? 0 : -1;
    }
    else if (x < v[0]) {
        return -1;
    }
    else if (x >= v[v.size()-1]) {
        return v[v.size()-1] == x ? v.size()-1 : -1;
    } else {
        int i = 0;
        int j = v.size() - 1;
        while (j > i + 1) {
            int k = (i+j) / 2;
            if (v[k] > x) {
                j = k;
            }
            else {
                i = k;
            }
        }
        return v[i] == x ? i : -1;
    }
}

int busquedaJumpSearch(vector<int> v, int x) {
    if (x < v[0]) {
        return -1;
    }
    // Busco el indice donde se pasa
    int jump = 2;
    int i = jump;
    while (i < v.size() && v[i] < x) {
        i += jump;
    }
    // Hago busqueda lineal en el intervalo
    int d = i - jump;
    while (v[d] < x && d < v.size()) {
        d++;
    }
    return (v[d] > x || d == v.size()) ? -1 : d;
}

int indicePico (vector <int > v) {
    if (v[0] >= v[1]) {
        return 0;
    } else if (v[v.size() - 1] >= v[v.size() - 2]) {
        return v.size()-1;
    } else {
        int i = 1;
        while (i < v.size()-1 && !(v[i] >= v[i-1] && v[i] >= v[i+1])) {
            i++;
        }
        return i;
    }
}

int findMinPos(vector<int>& v, int d, int h) {
    int min = d;
    for (int i = d+1; i < h; ++i) {
        if (v[i] < v[min]) {
            min = i;
        }
    }
    return min;
}

void sort(vector<int>& v) {
    int i = 0;
    while (i < v.size() - 1) {
        int minPos = findMinPos(v, i, v.size());
        int temp = v[i];
        v[i] = v[minPos];
        v[minPos] = temp;
        i++;
    }
}

int puntoFijo (vector <int > v) {
    int i = 0;
    while ( i < v.size() && v[i] != i ){
        i++;
    }
    return i == v.size() ? -1 : i;
}

int encontrarRotado (vector <int > v, int x) {
    return 1;
}

int menorMasGrande (vector <int > v, int x) {
    int i = 0;
    while (i < v.size() && v[i] <= x){
        i++;
    }
    return i == v.size() ? -1 : i;
}