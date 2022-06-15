# Laboratorio 11

## Bin Packing Problem

Tiempos de computo en las implementaciones de ordenamiento.

| n       | selection | insertion |
| ------- | --------- | --------- |
| 1000    | 0.002173  | 0.002108  |
| 10000   | 0.22829   | 0.309118  |
| 100000  | 20.9843   | 19.0956   |
| 1000000 | -         | -         |

Los archivos con con 1000000 tienen tiempo de ejecución aprox. 2000 segundos (33 mins).

Tienen tiempo de ejecución O($n^2$)

## Anagramas

### Versión ordenando strings

```C++
void ordenarString(string &palabra){
    for (int i = 0; i < palabra.size()-1; ++i) {
        int minPos = findMinPos(palabra, i, palabra.size());
        char temp = palabra[i];
        palabra[i] = palabra[minPos];
        palabra[minPos] = temp;
    }
}

bool esAnagrama1(string p1, string p2){
    ordenarString(p1);
    ordenarString(p2);
    return p1 == p2;
}
```

### Versión usando primos

```C++
bool esPrimo(int n) {
    int i = 2;
    while (i < n && n % i != 0) {
        i++;
    }
    return i == n;
}

int charToPrimo(char c){
    vector<int> primos = {2};
    for (int i = 1; i < posicionEnAlfabeto('z'); ++i) {
        int j = primos[primos.size()-1] + 1;
        while (!esPrimo(j)) {
            j++;
        }
        primos.push_back(j);
        i++;
    }
	return primos[posicionEnAlfabeto(c)];
}

bool esAnagrama2(string p1, string p2){
    int puntUno = 1;
    int puntDos = 1;
    for (int i = 0; i < p1.size(); ++i) {
        puntUno *= charToPrimo(p1[i]);
    }
    for (int i = 0; i < p2.size(); ++i) {
        puntDos *= charToPrimo(p2[i]);
    }
	return puntUno == puntDos;
}
```
