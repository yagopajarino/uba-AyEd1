# Práctica 8 - Tiempos de ejecución de peor caso

## Ejercicio 1

- 3 operaciones
- 4 operaciones
- 7 operaciones

## Ejercicio 2

- O($n$)
- O($n$)
- O($n$)
- O($n^2$)
- O($n$)

## Ejercicio 3

1. Falso. Puede existir un tamaño de vector a partir del cual A sea más eficiente que B.
2. Falso. La notación O grande clasifica los arlgoritmos, pero no precisa el tiempo de ejecución.
3. Falso. No necesariamente es 100.
4. Verdadero.
5. Verdadero.

## Ejercicio 4

El programa toma un vector y devuelve la longitud de la mayor subsecuencia de elementos iguales.

El tiempo de ejecución del pero caso es O(n)

```C++
int mesetaMasLarga(vector<int> &v) {
    int i = 0;
    int j = 1;
    int maxMeseta = 0;
    int meseta;
    while (i < v.size() && j < v.size() && v[i]==v[j]) {
        if (j < v.size() && v[i]==v[j]) {
            j++;
        }
        else {
            meseta = j-i;
            i = j;
            if (meseta > maxMeseta) {
                maxMeseta = meseta;
            }
        }
    }
    return maxMeseta;
}
```

## Ejercicio 5

El programa hacerAlgo tiene un ciclo que en su cuerpo llama a una función que a su vez tiene un ciclo, por lo tanto el tiempo de ejecución de pero caso será O(n^2)

## Ejercicio 6

f recibe una secuencia s de floats y devuelve el mayor producto de numberos positivos de una subsecuencia de s.

h $\in$ O(n)

Función h:

- Ejemplo peor caso: `[1,2,3,4,5], 4`
- Ejemplo mejor caso: `[1,2,3,4,5], 0`

Las tres funciones, en el peor caso de ejecución, ejecutan un ciclo completo por la cantidad de elementos de s. Luego si n es igual a la cantidad de elementos de s, $f \in O(n^3)$

## Ejercicio 7

a) Tiene tiempo de ejecución del peor caso del orden de O($log_2(n)$)

b) No es posible.

c) Sí es posible, usando logaritmos y la suma geométrica.

## Ejercicio 8

### Pregunta a

```C++
int determinanteTriangular(vector<vector<int>> m) {
    int res = 1;
    for (int i = 0; i < m.size(), i++) {
        res *= m[i][i];
    }
}
```

### Pregunta b

```C++
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
```
