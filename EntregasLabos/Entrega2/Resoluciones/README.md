# Entrega 2

## Ejercicio 1

```C++
int maximoComunDivisor(int x, int y){
  int a = maximo(x,y);
  int b = minimo(x,y);
  int resto;
  while(b!=0){
    resto = a%b;
    a = b;
    b = resto;
  }
  return a;
 }
```

## Ejercicio 2

```C++
bool existePico(vector<int> v){
    bool res = false;
    int i = 1;
    while (i < v.size()-1){
        if ((v[i] > v[i-1]) && (v[i] > v[i+1])){
            res = true;
        }
        i++;
    }
    return res;
}
```

## Ejercicio 3

```C++
int indiceMinSubsec(vector<int> v, int l, int r){
    int res = r;
    int i = r;
    while (i>=l){
        if (v[i] < v[res]){
            res = i;
        }
        i--;
    }
    return res;
}
```

## Ejercicio 4

```C++
void ordenar1(vector<int>& v){
    int i = 0;
    vector<int> res = v;
    while (i < v.size()){
        int indiceMenor = indiceMinSubsec(res, 0, res.size()-1);
        v[i] = res[indiceMenor];
        res.erase(res.begin()+indiceMenor);
        i++;
    }
}
```
