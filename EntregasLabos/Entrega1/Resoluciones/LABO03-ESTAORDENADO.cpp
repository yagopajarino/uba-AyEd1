// Está ordenado si el i-esimo es mayor/menor ESTRICTO al anterior/siguiente.

#include <iostream>
#include <vector>

using namespace std;

bool estaOrdenadoCreciente(vector<int> v) {
    int len = v.size();
    int i = 1;
    while (i < len) {
        if (v[i] > v[i-1]){
            return false;
        }
        i++;
    }
    return true;
}

bool estaOrdenadoDecreciente(vector<int> v) {
    int len = v.size();
    int i = 1;
    while (i < len) {
        if (v[i] < v[i-1]){
            return false;
        }
        i++;
    }
    return true;
}

bool estaOrdenado(vector<int> v){
    /* COMPLETAR */
    return (estaOrdenadoCreciente(v) || estaOrdenadoDecreciente(v));
}
    
int main() {
    /* No hace falta modificar el main */
    // Leo las entradas
    int n; 
    cin >> n;
    int i = 0;
    int x;
    vector<int> v;// En v leo el vector
    while (i<n){
        cin >> x;
        v.push_back(x);
        i++;
    }
    
    // Evaluo si el vector v esta ordenado
    bool res = estaOrdenado(v);
    
    // Imprimo la salida
    cout << (res?"True":"False");
    
    return 0;
}
