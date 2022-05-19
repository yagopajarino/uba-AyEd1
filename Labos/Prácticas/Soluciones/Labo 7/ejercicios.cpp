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
	//COMPLETAR
	return;
}

vector<vector<int> > multiplicar(vector<vector<int> > m1, vector<vector<int> > m2){
	//COMPLETAR
	vector<vector<int> > res;
	return res;
}

vector<vector<int> > promediar(vector<vector<int> > m){
	//COMPLETAR
	vector<vector<int> > res;
	return res;
}

int contarPicos(vector<vector<int> > m){
	//COMPLETAR
	return true;
}

bool esTriangular(vector<vector<int> > m){
	//COMPLETAR
	return true;
}

bool hayAmenaza(vector<vector<int> > m){
	//COMPLETAR
	return true;
}

int diferenciaDiagonales(vector<vector<int> > m) {
    //COMPLETAR
    return 0;
}