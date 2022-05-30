# Laboratorio 8. Strings

Uso de la clase `string``

Cabecera para poder usar las clases `vector`y `string`

```C++
#include <string>
#include <vector>

using namespace std;

```

En todos los casos intenté utilizar la lógica vista en la [Teórica 8](https://github.com/yagopajarino/uba-AyEd1/blob/main/Te%C3%B3ricas/Te%C3%B3rica%208.pdf)

## Ejercicio 1

Separar una palabra usando el delimitador dado.

La primer solución que armé no encontraba la palabra del final, porque no tiene delimitador que la marque

```C++
vector<string> split(string s, char delim){
	vector<string> v;
    int i = 0;
    s += delim;
    string pal = "";
    int l = s.size();
    while (i < l) {
        if (s[i] != delim) {
            pal += s[i];
        }
        else {
            if (pal.size() != 0) {
                v.push_back(pal);
                pal = "";
            }
        }
        i++;
    }
	return v;
}
```

Notar que `s += delim;` agrega el delimitador al final de `s`para que el ciclo la encuentre.

## Ejercicio 2

No usar comillas dobles al definir variables de tipo `char`.

Uso la función del ejercicio anterior para tener un vector de palabras, luego armo el `res`cambiando el orden. Había que tener en cuenta no agregar un " " al final de la palabra.

```C++
string darVueltaPalabra(string s){
    string res = "";
    vector<string> palabras = split(s, ' ');
    int i = palabras.size() - 1;
    while (i >= 0) {
        res += palabras[i];
        if (i != 0) {
            res += ' ';
        }
        i--;
    }
    return res;
}

```

## Ejercicio 3

Uso dos indices, el primero para los elementos de `s1` y el otro para `s2`. Voy preguntando si en j-esimo lugar está el elemento de `s1` que estoy buscando.

Salgo del ciclo cuando `i == s1.size()` es decir cuando encontré todos los elementos de `s1` en `s2` o cuando llegué al final de `s2` y por lo tanto no no llegué a cubrir todos los elementos de `s1`.

```C++
bool subsecuencia(string s1, string s2) {
    bool condicionesIniciales = s1.size() <= s2.size() || s1.size() == 0;
    int i = 0;
    int j = 0;
    while (i < s1.size() && j < s2.size()) {
        if (s1[i] == s2[j]) {
            i++;
        }
        j++;
    }
	return i == s1.size() && condicionesIniciales;
}
```

## Ejercicio 4

```C++
bool esAnagrama(string s, string t) {
    bool res = true;
    int i = 0;
    while (i < s.size()) {
        char letra = s[i];
        if (cantidadApariciones(letra, s) != cantidadApariciones(letra, t)) {
            res = false;
        }
        i++;
    }
    return res && s.size() == t.size();
}

vector<vector<string> > agruparAnagramas(vector<string> v){
	vector<vector<string> > res;
    vector<string> k;
    k.push_back(v[0]);
    res.push_back(k);
    int i = 1;
    while (i < v.size()) {
        int j = 0;
        while (j < res.size() && !esAnagrama(v[i], res[j][0])) {
            j++;
        }
        if (j < res.size()) {
            res[j].push_back(v[i]);
        } else {
            vector<string> clase;
            clase.push_back(v[i]);
            res.push_back(clase);
        }
        i++;
    }
	return res;
}

```

## Ejercicio 5

```C++
bool esPalindromo(string s){
	int i = 0;
    while (i < s.size()/2 && s[i] == s[s.size()-i-1]) {
        i++;
    }
	return i == s.size()/2;
}
```

## Ejercicio 6

```C++
bool tieneRepetidos(string s){
    bool result = false;
	int i = 0;
    while (i < s.size()) {
        int j = i+1;
        while (j < s.size()) {
            if (s[i] == s[j]) {
                result = true;
            }
            j++;
        }
        i++;
    }
	return result && s.size() > 1;
}
```

## Ejercicio 7

```C++
// Auxiliar para rotar un elemento
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

TODO 8, 9, 10.
