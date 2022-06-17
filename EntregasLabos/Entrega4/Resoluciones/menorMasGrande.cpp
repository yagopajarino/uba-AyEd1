#include <vector>
#include <iostream>

using namespace std;

int menorMasGrande(vector<int> v,int x){
    int i = 0;
    while (i < v.size() && v[i] <= x){
        i++;
    }
    return i == v.size() ? -1 : i;
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
    cin >> x;
    
    // Evaluo si el vector v esta ordenado
    int res = menorMasGrande(v,x);
    
    // Imprimo la salida
    cout << res;
    
    return 0;
}
