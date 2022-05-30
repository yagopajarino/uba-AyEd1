#include "ejercicios.h"

vector<vector<int> > productoVectorial(vector<int> u, vector<int> v){
	vector<vector<int>> res(u.size(), vector<int>(v.size()));
    for (int i = 0; i < u.size(); ++i) {
        for (int j = 0; j < v.size(); ++j) {
            res[i][j] = u[i] * v[j];
        }
    }
	return res;
}

void trasponer(vector<vector<int> > &m) {
    vector<vector<int>> copia = m;
    int filas = m.size();
    int columnas = m[0].size();
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            m[i][j] = copia[j][i];
        }
    }
}

vector<vector<int> > multiplicar(vector<vector<int> > m1, vector<vector<int> > m2){
	vector<vector<int> > res(m1.size(), vector<int>(m2[0].size()));
    for (int i = 0; i < m1.size(); ++i) {
        for (int j = 0; j < m2[0].size(); ++j) {
            res[i][j] = 0;
            for (int k = 0; k < m2.size(); ++k) {
                res[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }
    return res;
}

// Ejercicio 4
bool enRango(vector<vector<int> > m, int a, int b) {
    bool res = false;
    if ((0 <= a) && (a < m.size()) && (0 <= b) && (b < m[0].size())) {
        res = true;
    }
    return res;
}

int promedioVecinos(vector<vector<int> > m, int fila, int columna) {
    int res = 0;
    int count = 0;
    for (int i = fila-1; i <= fila+1; ++i) {
        for (int j = columna-1; j <= columna +1; ++j) {
            if ( enRango(m, i, j)) {
                res += m[i][j];
                count++;
            }
        }
    }
    return res / count;
}

vector<vector<int> > promediar(vector<vector<int> > m){
	vector<vector<int> > res(m.size(), vector<int>(m[0].size()));
    int filas = m.size();
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < m[i].size(); ++j) {
            res[i][j] = promedioVecinos(m, i, j);
        }
    }
	return res;
}

// Ejercicio 5
bool esPico(vector<vector<int> > m, int i, int j) {
    bool res = true;
    for (int a = i-1; a <= i+1; ++a) {
        for (int b = j-1; b <= j+1; ++b) {
            if ( (a != i || b != j) && enRango(m, a, b)) {
                if (m[i][j] <= m[a][b]) {
                    res = false;
                }
            }
        }
    }
    return res;
}

int contarPicos(vector<vector<int> > m){
    int res = 0;
    for (int i = 0; i < m.size(); ++i) {
        for (int j = 0; j < m[i].size(); ++j) {
            if (esPico(m,i,j)) {
                res++;
            }
        }
    }
	return res;
}

// Ejercicio 6
bool esTriangularSuperior(vector<vector<int> > m) {
    for (int i = 0; i < m.size(); ++i) {
        for (int j = 0; j < i; ++j) {
            if (m[i][j] != 0) {
                return false;
            }
        }
    }
    return true;
}

bool esTriangularInferior(vector<vector<int> > m) {
    for (int i = 0; i < m.size(); ++i) {
        for (int j = 0; j < i; ++j) {
            if (m[j][i] != 0) {
                return false;
            }
        }
    }
    return true;
}

bool esTriangular(vector<vector<int> > m){
	return (esTriangularSuperior(m) || esTriangularInferior(m));
}

// Ejercicio 7
int abs(int n) {
    if (n < 0) {
        n = -n;
    }
    return n;
}

bool hayReina(vector<vector<int> > m, int i, int j) {
    if (m[i][j] == 1) {
        return true;
    } else return false;
}

bool hayAmenaza(vector<vector<int> > m){
    for (int i = 0; i < m.size(); ++i) {
        for (int j = 0; j < m[0].size(); ++j) {
            for (int k = 0; k < m.size(); ++k) {
                for (int l = 0; l < m[0].size(); ++l) {
                    if ((i != k || j != l) && ((i == k) || (j == l) || (abs(i - k) == abs(j - l))) && hayReina(m,i,j) && hayReina(m,k,l)) {
                        return true;
                    }
                }
            }
        }
    }
	return false;
}

// Ejercicio 8
int diferenciaDiagonales(vector<vector<int> > m) {
    int d1 = 0;
    int d2 = 0;
    for (int i = 0; i < m.size(); ++i) {
        d1 += m[i][i];
        d2 += m[i][m.size() - i - 1];
    }
    return abs(d1-d2);
}

// Adicional: TaTeTi
int tateti(vector<vector<int> > m){
    int resultado = 2;
    int puntJugadorUno = 1;
    int puntJugadorDos = 1;
    vector<int> primos = {2,3,5,7,11,13,17,19,23};
    vector<int> ganadores = {2*3*5, 7*11*13, 17*19*23, 2*7*17, 3*11*19, 5*13*23, 2*11*23, 5*11*17};
    // Asigno puntajes para cada jugador
    for (int i = 0; i < m.size(); ++i) {
        for (int j = 0; j < m[0].size(); ++j) {
            if (m[i][j] == 0) {
                puntJugadorUno *= primos[3*i+j];
            } else if (m[i][j] == 1) {
                puntJugadorDos *= primos[3*i+j];
            } else {
                resultado = 3;
            }
        }
    }
    // Verifico si hay ganador
    int i = 0;
    while (i < ganadores.size() && (resultado == 2 || resultado == 3) ){
        if (puntJugadorUno % ganadores[i] == 0) {
            resultado = 0;
        } else if (puntJugadorDos % ganadores[i] == 0) {
            resultado = 1;
        }
        i++;
    }
    return resultado;
}