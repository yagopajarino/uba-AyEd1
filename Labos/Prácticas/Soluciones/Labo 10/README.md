# Laboratorio 10 - Búsqueda y ordenamiento

## Ejercicio 1

### Pregunta a

```C++
int busquedaBinaria(vector<int> v, int x) {
    // Resuelbo casos particulares. Ver teórica 8.
    if (v.size() == 0) {
        return -1;
    }
    else if (v.size() == 1) {
        return v[0] == x ? 0 : -1;
    }
    else if (x < v[0]) {
        return -1;
    }
    else if (x >= v[v.size()-1]) {
        return v[v.size()-1] == x ? v.size()-1 : -1;
    } else {
        int i = 0;
        int j = v.size() - 1;
        while (j > i + 1) {
            int k = (i+j) / 2;
            if (v[k] > x) {
                j = k;
            }
            else {
                i = k;
            }
        }
        return v[i] == x ? i : -1;
    }
}
```

### Pregunta b

```C++
int busquedaJumpSearch(vector<int> v, int x) {
    if (x < v[0] || x > v[v.size()-1]) {
        return -1;
    }
    // Busco el indice donde se pasa
    int jump = 2;
    int i = jump;
    while (i < v.size() && v[i] < x) {
        i += jump;
    }
    // Hago busqueda lineal en el intervalo
    int d = i - jump;
    while (v[d] < x) {
        d++;
    }
    return v[d] > x ? -1 : d;
}
```

## Ejercicio 2

| n      | O(log(n)) | O(sqrt(n)) |
| ------ | --------- | ---------- |
| 100    | 0.005     | 0.002      |
| 1000   | 0.017     | 0.018      |
| 10000  | 0.158     | 0.169      |
| 100000 | 1.366     | 1.677      |

No cambian los valores dependiendo el valor de los elementos de _v_.

## Ejercicio 3

| n      | v.size() | v.push_back(e) | v.pop_back() | v[0]  | v[v.size()-1] | v[0] = e | v[v.size()-1] = e | v.flip() | v.clear() |
| ------ | -------- | -------------- | ------------ | ----- | ------------- | -------- | ----------------- | -------- | --------- |
| 100    | 0.001    | 0.002          | 0            | 0.001 | 0             | 0.002    | 0                 | 0.002    | 0.001     |
| 1000   | 0.003    | 0.002          | 0.001        | 0     | 0.001         | 0        | 0.002             | 0.001    | 0.012     |
| 10000  | 0.001    | 0.001          | 0.001        | 0.001 | 0             | 0.001    | 0                 | 0.001    | 0.088     |
| 100000 | 0.004    | 0              | 0.001        | 0.001 | 0.001         | 0.001    | 0.001             | 0.004    | 0.93      |
