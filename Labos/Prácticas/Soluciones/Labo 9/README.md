# Laboratorio 9 - Complejidad

## Ejercicio 1

Simulaciones usando la función `hayDuplicados`

| Nro | Vector                                                | n      | Tiempo (seg) |
| --- | ----------------------------------------------------- | ------ | ------------ |
| 1   | `vector<int> a = construir_vector(1000,"asc");`       | 1000   | 0.005739     |
| 1a  | `vector<int> a = construir_vector(1000,"iguales");`   | 1000   | 0.006081     |
| 2   | `vector<int> a = construir_vector(10000,"asc");`      | 10000  | 0.695449     |
| 2a  | `vector<int> a = construir_vector(10000,"iguales");`  | 10000  | 0.669529     |
| 3   | `vector<int> a = construir_vector(100000,"asc");`     | 100000 | 61.1787      |
| 3a  | `vector<int> a = construir_vector(100000,"iguales");` | 100000 | 57.0989      |

Se ve que la constante $c$ es del orden de $ \frac{6}{1'000'000'000} $

Si $ n = 2'200'000'000 \implies T = \frac{6}{1'000'000'000} \cdot 2'200'000'000^2 = 29'040'000'000 $ segundos. Aprox 335 días. 😅

## Ejercicio 2

Gráfico con tiempos de la función hayDuplicados y la función de complejidad con la constante estimada en el punto anterior.

(Agregar img del gráfico)

## Ejercicio 3

Cambiando las guardas la función queda

```C++
bool hayDuplicados (vector<int>& v){
    bool res = false ; int i = 0; int j = 0;
    while ( i < v . size () && res = false){
        j = 0;
        while ( j < v . size () && res = false){
            if ( i != j && v [ i ] == v [ j ]){
                res = true ;
            }
            j ++;
        }
        i ++;
    }
    return res;
}
```

Sin embargo la complejidad no cambia dado que esta se mide en función del peor case de ejecución, en este caso al igual que en el anterior, es aquel en el que no hay duplicados.

## Ejercicio 4

|            | O(1)     | O(n)     | O(n^3)   | O(log(n)) |
| ---------- | -------- | -------- | -------- | --------- |
| n = 100    | 0.000017 | 0.000006 | 0.006061 | 0.000002  |
| n = 1000   | 0.000002 | 0.000025 | 4.06266  | 0.000002  |
| n = 10000  | 0        | 0.000137 | nan      | 0.000007  |
| n = 100000 | 0.000002 | 0.001963 | nan      | 0.000002  |

## Ejercicio 6

Creo que el peor caso de ejecución del programa es cuando sum $ \geq $ sum(v)

(gráfico de la simulación (a))
(gráfico de la simulación (b))

Se ve que a partir de un tamaño de vector $ n = 35 $ el tiempo de ejecución del programa crece exponencialmente.
