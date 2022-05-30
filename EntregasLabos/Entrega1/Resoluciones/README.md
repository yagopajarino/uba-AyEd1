# Entrega 1

## Ejercicio 1

Fibonacci iterativo.

```C++
int fibonacci(int n){
    int a = 0;
    int b = 1;
    for (int i = 1; i < n; ++i) {
       int temp = a;
       a = a + b;
       b = temp;
    }
    return a+b;
}
```

## Ejercicio 2

```C++
void division(int dividendo, int divisor, int& cociente, int& resto){
    cociente = 0;
    while (dividendo >= divisor) {
        cociente++;
        dividendo = dividendo - divisor;
    }
    resto = dividendo;
}
```

## Ejercicio 3

```C++
void swap(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
}
```

## Ejercicio 4

```C++
bool estaOrdenadoCreciente(vector<int> v) {
    int len = v.size();
    int i = 1;
    while (i < len) {
        if (v[i] > v[i-1]){
            return false;
        }
        i++;
    }
    return true;
}

bool estaOrdenadoDecreciente(vector<int> v) {
    int len = v.size();
    int i = 1;
    while (i < len) {
        if (v[i] < v[i-1]){
            return false;
        }
        i++;
    }
    return true;
}

bool estaOrdenado(vector<int> v){
    return (estaOrdenadoCreciente(v) || estaOrdenadoDecreciente(v));
}
```

## Ejercicio 5

```C++
vector<int> rotar(vector<int> v, int k){
    while (k > 0) {
        v.push_back(v[0]);
        v = std::vector<int>(v.begin() + 1, v.end());
        k--;
    }
    return v;
}
```
