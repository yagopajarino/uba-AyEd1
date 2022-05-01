#include "vectores.h"
#include "fstream"
#include "string"

// Función para probar en main.cpp si este módulo fue cargado correctamente
void holaModuloVectores(){
    cout << "El módulo vectores fue cargado correctamente" << endl;
}


//Ejercicio
bool divide(vector<int> v, int a){
	// Dados un vector v y un int a, decide si a divide a todos los numeros de v.
    int i = 0;
    while (i < v.size()){
        if (v[i] % a != 0){
            return false;
        }
        i++;
    }
    return true;
}

//Ejercicio
int mayor(vector<int> v){
	// Dado un vector v, devuelve el valor maximo encontrado.
    int mayor = v[0];
    int i = 0;
    while (i < v.size()) {
        if (v[i] > mayor) {
            mayor = v[i];
        }
        i++;
    }
    return mayor;
}

//Ejercicio
vector<int> reverso(vector<int> v){
	// Dado un vector v, devuelve el reverso.
    int i = 0;
    vector<int> rev = v;
    while (i < v.size()) {
        rev[i] = v[v.size() - (i + 1)];
        i++;
    }
    return rev;
}

//Ejercicio
vector<int> rotar(vector<int> v, int k){
	// Dado un vector v y un entero k, rotar k posiciones los elementos de v.
	// [1,2,3,4,5,6] rotado 2, deberia dar [3,4,5,6,1,2].
    while (k > 0){
        v.push_back(v[0]);
        v = std::vector<int>(v.begin() + 1, v.end());
        k--;
    }
    return v;
}

//Ejercicio

bool esPrimo(int n) {
    int i = 2;
    while (i < n) {
        if (n % i == 0) {
            return false;
        }
        i++;
    }
    return true;
}


vector<int> factoresPrimos(int n){
	//que dado un entero devuelve un vector con los factores primos del mismo
    int i = 2;
    vector<int> res;
    while (i < n){
        if (esPrimo(i)) {
            if (n % i == 0) {
               res.push_back(i);
            }
        }
    i++;
    }
    return res;
}

//Ejercicio
void mostrarVector(vector<int> v){
	//que dado un vector de enteros muestra por la salida estándar, el vector
	// Ejemplo: si el vector es <1, 2, 5, 65> se debe mostrar en pantalla [1, 2, 5, 65]
    cout << "[";
    for (int i = 0; i < v.size() -1; ++i) {
        cout << v[i] << ", ";
    }
    cout << v[v.size() - 1] << "]";
}

// Ejercicio
vector<int> leerVector(string nombreArchivo) {
    ifstream file;
    file.open(nombreArchivo);
    int x;
    vector<int> res;
    while (true) {
        file >> x;
        if( file.eof() ) break;
        res.push_back(x);
    }
    file.close();
    return res;
}

//Ejercicio
void guardarVector(vector<int> v, string nombreArchivo) {
    ofstream file;
    file.open("../archivos/" + nombreArchivo + ".txt");
    for (int i = 0; i < v.size(); ++i) {
        file << v[i] << " ";
    }
    file.close();
    cout << "Archivo guardado" << endl;
}

// Ejercicio
// suma los elementos a izquierda del indice, sin incluirlo
int sumaIzquierda(int i, vector<int> v){
    int suma = 0;
    for (int j = 0; j < i; ++j) {
        suma = suma + v[j];
    }
    return suma;
}

// suma los elementos a derecha del indice, incluyendolo
int sumaDerecha(int i, vector<int> v){
    int suma = 0;
    for (int j = i; j < v.size(); ++j) {
        suma = suma + v[j];
    }
    return suma;
}

int elementoMedio(vector<int>v) {
    int i = 0;
    while (i < v.size()) {
        int si = sumaIzquierda(i, v);
        int sd = sumaDerecha(i,v);
        if (si > sd) {
            return v[i-1];
        }
        i++;
    }
    return v[v.size()-1];
}


// Ejercicio
bool yaSalio(int n, vector<int> v){
    bool res = false;
    int i = 0;
    while (i < v.size()){
        if (v[i] == n){
            res = true;
        }
        i++;
    }
    return res;
}

void cantApariciones(string nombreArchivo){
    vector<int> v = leerVector("../archivos/"+ nombreArchivo + ".in" );
    vector<int> numerosYaContados;
    int i = 0;
    ofstream file;
    file.open("../archivos/out/" + nombreArchivo + ".txt");
    while (i < v.size()){
        if (!yaSalio(v[i], numerosYaContados)){
            int contador = 0;
            int j = 0;
            while (j < v.size()){
                if (v[i] == v[j]){
                    contador++;
                }
                j++;
            }
            file << v[i] << " " << contador << endl;
            numerosYaContados.push_back(v[i]);
        }
        i++;
    }
}

//Ejercicio
int cantidadAparicionesDePalabra(string nombreArchivo, string palabra){
    ifstream textFile;
    textFile.open("../archivos/" + nombreArchivo + ".in");
    vector<string> texto;
    string p;
    while (true) {
        textFile >> p;
        if( textFile.eof() ) break;
        texto.push_back(p);
    }
    int contador = 0;
    for (int i = 0; i < texto.size(); ++i) {
        if (texto[i]==palabra){
            contador++;
        }
    }
    return contador;
}

// Ejercicio
vector<int> getVectorDelFile(string nombreArchivo){
    ifstream inFile;
    inFile.open(nombreArchivo);
    vector<int> res;
    int n = 0;
    while (true) {
        inFile >> n;
        if( inFile.eof() ) break;
        res.push_back(n);
    }
    inFile.close();
    return res;
}


void promedio(string nombreArchivoIn1, string nombreArchivoIn2, string nombreArchivoOut){
    ofstream salida;
    salida.open(nombreArchivoOut);

    vector<int> v = getVectorDelFile(nombreArchivoIn1);
    vector<int> w = getVectorDelFile(nombreArchivoIn2);

    for (int i = 0; i < v.size(); ++i) {
        float prom = float (v[i] + w[i]) / 2.0;
        salida << prom << " ";
    }
    salida.close();
}

void ordenarSecuencias(string nombreArchivoIn1, string nombreArchivoIn2, string nombreArchivoOut){
    vector<int> v = getVectorDelFile(nombreArchivoIn1);
    vector<int> w = getVectorDelFile(nombreArchivoIn2);
    ofstream salida;
    salida.open(nombreArchivoOut);

    for (int i = 0; i < v.size(); ++i) {
        if (v[i] < w[i]){
            salida << v[i] << " " << w[i] << " ";
        }
        else{
            salida << w[i] << " " << v[i] << " ";
        }
    }
    salida.close();
}

// Ejercicio
bool in(int x, vector<int> v){
    bool res = false;
    for (int i = 0; i < v.size(); ++i) {
        if (x == v[i]){
            res = true;
        }
    }
    return res;
}


vector<int> sinRepetidos(vector<int> v){
    vector<int> res;
    for (int i = 0; i < v.size(); ++i) {
        if ( !in(v[i], res) ){
            res.push_back(v[i]);
        }
    }
    return res;
}

vector<int> interseccion(){
    string nombreUno, nombreDos;
    cout << "Ingresar nombre de archivo uno: ";
    cin >> nombreUno;
    cout << "Ingresar nombre de archivo dos: ";
    cin >> nombreDos;

    vector<int> v = getVectorDelFile(nombreUno);
    vector<int> w = getVectorDelFile(nombreDos);

    vector<int> res;
    for (int i = 0; i < v.size(); ++i) {
        for (int j = 0; j < w.size(); ++j) {
            if (v[i] == w[j]) {
                res.push_back(v[i]);
            }
        }
    }
    res = sinRepetidos(res);
    mostrarVector(res);
    return res;
}
