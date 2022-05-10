#include <vector>
#include <iostream>

using namespace std;

int indiceMinSubsec(vector<int> v, int l, int r){
    int res = r;
    int i = r;
    while (i>=l){
        if (v[i] < v[res]){
            res = i;
        }
        i--;
    }
    return res;
}


void ordenar1(vector<int>& v){
    int i = 0;
    vector<int> res = v;
    while (i < v.size()){
        int indiceMenor = indiceMinSubsec(res, 0, res.size()-1);
        v[i] = res[indiceMenor];
        res.erase(res.begin()+indiceMenor);
        i++;
    }
}

int main() {
    /* No hace falta modificar el main */
    
    // Leo las entradas
    int n; //Longitud del vector
    cin >> n;
    int i = 0;
    int x;
    vector<int> v;// En v leo el vector
    while (i<n){
        cin >> x;
        v.push_back(x);
        i++;
    }

    // Hago el ordenamiento
    ordenar1(v);
    
    // Imprimo el vector resultado
    i = 0;
    while (i < v.size()){
        cout << v[i] << " ";
        i++;
    }
    
    return 0;
}
