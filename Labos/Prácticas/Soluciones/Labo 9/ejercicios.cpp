#include "ejercicios.h"

using namespace std;

void mostrar_vector(vector<int>& v){
    string vector = "[";
    if(v.size() > 0){
        for(int i=0; i < v.size()-1; i++){
            vector = vector + to_string(v[i]) + ", ";
        }
    }

    if(v.size() != 0){
        vector = vector + to_string(v[v.size()-1]) + "]";
    }else{
        vector = vector + "]";
    }

    cout << vector << endl;
}

vector<int> construir_vector(int n, string disposicion){

    vector<int> res;
    srand (time(NULL));
    int numero;

    if (disposicion == "asc"){
        for(int i=0; i < n; i++){
            res.push_back(i);
        }
    }else if(disposicion == "desc"){
        for(int i=n-1; i >= 0; i--){
            res.push_back(i);
        }

    }else if(disposicion == "azar"){
        for(int i=0; i < n; i++){
            numero = rand() % 100;
            res.push_back(numero);
        }
    }else if(disposicion == "iguales"){
        numero = rand() % 100;
        for(int i=0; i < n; i++){
            res.push_back(numero);
        }
    }else{
        cout << "Dispocisión no válida" << endl;
    }

    return res;
}

bool hayDuplicados (vector<int>& v){
    bool res = false ; int i = 0; int j = 0;

    while ( i < v . size ()){
        j = 0;
        while ( j < v . size ()){
            if ( i != j && v [ i ] == v [ j ]){
                res = true ;
            }
            j ++;
        }
        i ++;
    }

    return res;
}


bool busqueda_binaria(vector<int> &s, int x) {
    int low = 0;
    int high = s.size() -1;
    while( low+1 < high ) {
        int mid = (low+high) / 2;
        if( s[mid] <= x ) {
            low = mid;
        } else {
            high = mid;
        }
    }
    return s[low] == x;
}




// Dado un vector de enteros, devuelve verdadero si
// existe un subconjunto tal que la suma sea igual a sum
bool algunSubconjSuma(vector<int>& vec, int sum)
{
    return aux(vec, vec.size() - 1, sum);
}

bool aux(vector<int>& vec, int i, int sum)
{
    if (sum == 0) return true;
    if (i < 0 || sum < 0) return false;
    bool prueba1 = aux(vec, i - 1, sum - vec[i]);
    bool prueba2 = aux(vec, i - 1, sum);
    return prueba1 || prueba2;
}

// Ejemplo O(1)
int mismoNumero(int n) {
    return n;
}

// Ejemplo O(n)
bool busquedaLineal(vector<int> v, int k) {
    bool res = false;
    for (int i = 0; i < v.size(); ++i) {
        if (v[i] == k) {
            res = true;
        }
    }
    return res;
}

// Ejemplo O(n^3)
int sumaTripleMatriz(vector<int> v){
    int res = 0;
    for (int i = 0; i < v.size(); ++i) {
        for (int j = 0; j < v.size(); ++j) {
            for (int k = 0; k < v.size(); ++k) {
                res += v[k];
            }
        }
    }
    return res;
}