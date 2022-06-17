#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

vector<int> count(vector<int> &v)
{
    vector<int> res(150, 0);
    for (int i = 0; i < v.size(); ++i)
    {
        res[v[i]] = res[v[i]] + 1;
    }
    return res;
}

void ordenar(vector<int> &v)
{
    vector<int> c = count(v);
    int pos = 0;
    for (int i = c.size() - 1; i >= 0; --i)
    {
        while (c[i] > 0)
        {
            v[pos] = i;
            c[i] = c[i] - 1;
            pos++;
        }
    }
}

int bestFit(int W, vector<int> &items)
{
    multiset<int> restos;
    for (int i = 0; i < (int)items.size(); ++i)
    {
        restos.insert(W);
    }
    int res = 0;
    for (int i = 0; i < (int)items.size(); ++i)
    {
        multiset<int>::iterator it = restos.lower_bound(items[i]);
        int restoAct = *it;
        if (restoAct == W)
        {
            res++;
        }
        restoAct -= items[i];
        restos.erase(it);
        restos.insert(restoAct);
    }
    return res;
}

int main()
{
    int N, W, aux;

    // Se levantan los items y la capacidad del contenedor
    cin >> N >> W;
    vector<int> items;
    for (int i = 0; i < N; ++i)
    {
        cin >> aux;
        items.push_back(aux);
    }
    // Se corre best-fit
    int cant1 = bestFit(W, items);
    cout << "Con la idea bestFit, se consigue una asignacion con " << cant1 << " contenedores" << endl;

    // Se ordenan los items
    ordenar(items);
    // Se corre best-fit-decreasing
    int cant2 = bestFit(W, items);
    cout << "Con la idea bestFitDecreasing, se consigue una asignacion con " << cant2 << " contenedores" << endl;

    return 0;
}
