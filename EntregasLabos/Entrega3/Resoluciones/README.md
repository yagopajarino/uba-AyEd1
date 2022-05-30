# Entrega 3

## Ejercicio 1

```C++
void trasponer(vector<vector<int> > &m) {
    vector<vector<int>> copia = m;
    int filas = m.size();
    int columnas = m[0].size();
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            m[i][j] = copia[j][i];
        }
    }
}
```

## Ejercicio 2

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

bool esTriangular(const vector<vector<int> > &m){
    return (esTriangularSuperior(m) || esTriangularInferior(m));
}
```

## Ejercicio 3

```C++
bool subsecuencia(string s, string t) {
    bool condicionesIniciales = s.size() <= t.size() || s.size() == 0;
    int i = 0;
    int j = 0;
    while (i < s.size() && j < t.size()) {
        if (s[i] == t[j]) {
            i++;
        }
        j++;
    }
    return i == s.size() && condicionesIniciales;
}
```

## Ejercicio 4

```C++
string rotarUltimo(string s, int k){
    string res;
    res.push_back(k);
    int i = 0;
    while (i < s.size() - 1){
        res.push_back(s[i]);
        i++;
    }
    return res;
}

string rotar(string s, int j){
    string res(s);
    int rotaciones = j % s.size();
    int i = 0;
    while (i < rotaciones) {
        res = rotarUltimo(res, res[res.size() - 1]);
        i++;
    }
    return res;
}
```
