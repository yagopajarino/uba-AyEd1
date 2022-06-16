#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <set>
#include <time.h>

using namespace std;

void insert(vector<int> &s, int i) {
    for (int j = i; j > 0; j--) {
        if (s[j] > s[j-1]) {
            int temp = s[j];
            s[j] = s[j-1];
            s[j-1] = s[temp];
        }
    }
}

void insertionSort(vector<int> &s) {
    for (int i = 0; i < s.size(); i++) {
        insert(s,i);
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

void selectionSort(vector<int>& v) {
    int i = 0;
    while (i < v.size() - 1) {
        int minPos = findMinPos(v, i, v.size());
        int temp = v[i];
        v[i] = v[minPos];
        v[minPos] = temp;
        i++;
    }
}

void ordenar(vector<int> &items){
    double t0 = clock();
    insertionSort(items);
    double t1 = clock();
    double timeSelection = (t1 - t0) / CLOCKS_PER_SEC;

/*
    t0 = clock();
    selectionSort(items);
    t1 = clock();
    double timeInsertion = (t1 - t0) / CLOCKS_PER_SEC;
*/

    cout << "timeSelection: " << timeSelection << endl;
/*
    cout << "timeInsertion: " << timeInsertion << endl;
*/
}


int bestFit(int W, vector<int> &items){
	multiset<int> restos;
	for(int i=0; i<(int)items.size(); ++i){
		restos.insert(W);
	}
	int res = 0;
	for(int i=0; i<(int)items.size(); ++i){
		multiset<int>::iterator it = restos.lower_bound(items[i]);
		int restoAct = *it;
		if(restoAct==W){
			res++;
		}
		restoAct -= items[i];
		restos.erase(it);
		restos.insert(restoAct);
	}
	return res;
}

int main(){
	int N, W, aux;

	//Se levantan los items y la capacidad del contenedor
	cout << "Se levantan los items y la capacidad del contenedor";
	ifstream bpp("BPP.in");
	bpp >> N >> W;
	vector<int> items;
	for(int i=0; i<N; ++i){
		bpp >> aux;
		items.push_back(aux);
	}
	bpp.close();
	//Se corre best-fit
	int cant1 = bestFit(W, items);
	cout << "Con la idea bestFit, se consigue una asignacion con " << cant1 << " contenedores" << endl;

	//Se ordenan los items
	ordenar(items);
	//Se corre best-fit-decreasing
	int cant2 = bestFit(W, items);
	cout << "Con la idea bestFitDecreasing, se consigue una asignacion con " << cant2 << " contenedores" << endl;

	return 0;
}
