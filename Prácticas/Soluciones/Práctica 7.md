# Práctica 7. Ciclos a partir de invariantes

La subo en [markdown](https://www.markdownguide.org/) porque la resolución de ejercicios pide únicamente generar código, pero hacerlo en un `.cpp` perdía la posibilidad de poner texto y laTeX.

## Ejercicio 1

Me piden generar un programa que copia una secuencia usando el invariante:

$ I \equiv (0 \leq i \leq |s| \wedge |r| = i) \wedge_L (\forall j: \mathbb{Z})(0 \leq j <i \implies_L s[j] = r[j]) $

Se ve que el invariante pide que se vaya rellenando la nueva secuencia de adelante hacia el final, y en cada iteración agregar un nuevo elemento.

```C++
#include <vector>

use namespace std;

vector<int> copiarSecuencia(vector<int> s) {
    vector<int> r;
    int i = 0;
    while(i < s.size()) {
        r.push_back(s[i]);
    }
    return r;
}

```
