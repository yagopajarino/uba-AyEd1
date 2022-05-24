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
        i++;
    }
    return r;
}
```

## Ejercicio 2

Me piden completar el programa que permita incrementar en uno cada elemento de una secuencia, usando el invariante,

$ I \equiv 0 \leq i \leq |s| \wedge (\forall j: \mathbb{Z})(0 \leq j < i \implies_L s[j] = S_0[j] + 1) $

Luego,

```C++
void incSecuencia(vector<int> &a) {
    int i = 0;
    while(i < a.size()) {
        a[i] = a[i] + 1;
        i++;
    }
}
```

## Ejercicio 3

Busco contar la cantidad de apariciones de un elemento en una secuencia, utilizando como invariante:

$ I \equiv 0 \leq i \leq |s| \wedge_L r = \#Apariciones(subseq(s,0,i),e) $

Y un `for` como estructura de control de iteración.

```C++
int cantidadApariciones(vector<int> s, int e) {
    int r = 0;
    for(int i = 0; i < s.size(), i++) {
        if (s[i] == e) {
            r++;
        }
        i++;
    }
    return r;
}
```

## Ejercicio 4

Me piden un ciclo que eleve al cuadrado cada elemento de la secuencia. Y que cumpla con el invariante:

$ I \equiv (|s| = |S_0| \wedge -1 \leq i \leq |s|-1) \wedge_L \\(\forall j: \mathbb{Z})(0 \leq j \leq i \implies_L s[j] = S_0[j]^2) \wedge \\(\forall j: \mathbb{Z})(i < j < |s| \implies_L s[j] = S_0=[j]) $

Y armar dos implementaciones.

Veo que el invariante itera entre $ -1 \leq i \leq |s|-1 $. Es raro que itere desde $-1$ y también me pide que en cada iteración el i-ésimo elemento esté elevado al cuadrado.

```C++
// Implementación usando while

int i = -1;
while(i < s.size()-1) {
    i++;
    s[i] = s[i] * s[i];
}
```

```C++
// Implementación usando for

for(int i = -1, i < s.size()-1, i++) {
    i++;
    s[i] = s[i] * s[i];
}
```

## Ejercicio 5

Me piden armar un programa que duplique cada elemento de una secuencia, que cumpla con el siguiente invariante,

$ I \equiv (|s| = |S_0| \wedge (0 \leq i \leq |s|/2)) \wedge_L \\ subseq(s, 0, |s|-2*i) = subseq(s_0, 0, |s_0|-2*i) \wedge \\(\forall k: \mathbb{Z})(|s|-2*i \leq k < |s| \implies_L s[k] = 2*s_0[k]) $

Mirando el invariante, veo que en cada iteración se duplican dos elementos de la secuencia y lo hace desde el final hacia adelante.

Creo que el invariante no es correcto pues para $i = 0$ el para todo del invariante se indefine. Lo voy a resolver con un $<$ estricto.

```C++
vector<int> duplicarElementos(vector<int> s) {
    vector<int> result(s.size());
    int i = 0;
    while (i < s.size() / 2) {
        result[s.size() - 2*i - 1] = s[s.size() - 2*i - 1] * 2;
        result[s.size() - 2*i - 2] = s[s.size() - 2*i - 2] * 2;
    }
    return result;
}
```

## Ejercicio 6

Resuelto en clase de práctica [ver](https://youtu.be/IeFq_DTtOvY?list=PLX6SuoBtqI_5xA5CUu0EaYDAns2gcAo8n)

```C++
void dividirPorPromedio(vector<float> &s) {
    float p = promedio(s);
    int i = 0;
    while (i < s.size() / 2) {
        s[i] = s[i] / p;
        s[s.size() - i - 1 ] = s[s.size() - i - 1 ] / 2;
        i++;
    }
}
```
