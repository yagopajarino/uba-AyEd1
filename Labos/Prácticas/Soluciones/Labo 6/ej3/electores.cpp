#include "electores.h"
#include <vector>

using namespace std;

float deltaEleccion(int mes, int dia) {
    int diasTotales = 365;
    return float (9 + 30 + 31) / float (diasTotales);
}

float fracCumplida(int mes, int dia) {
    int diasTotales = 365;
    int diasCumplidos = 0;
    vector<int> meses = {31,28,31,30,31,30,31,31,30,31,30,31};
    mes --;
    for (int i = mes + 1; i < 12; ++i) {
        diasCumplidos += meses[i];
    }
    diasCumplidos += meses[mes] - dia;
    return float(diasCumplidos) / float(diasTotales);
}

float getEdad(int a, int m, int d) {
    float años = 2022 - a;
    años += fracCumplida(m,d);
    años -= deltaEleccion(m,d);
    return años;
}

bool fechaInvalida(int a, int m, int d) {
    if ( a > 2022 || m > 12 || m < 1 || d < 1 || d > 31 ) {
        return 4;
    }
}

int validarVotante(int a, int m, int d) {
    if ( fechaInvalida(a, m ,d) ) {
        return 4;
    }
    int res = 3;
    float edad = getEdad(a,m,d);
    if (edad < 0){
        res = 4;
    }
    else if (edad < 16.0 ) {
        res = 0;
    } else if ( (16.0 <= edad) && (edad < 18.0) ) {
        res = 1;
    } else if ( (18.0 <= edad) && (edad < 70.0) ) {
        res = 2;
    }
    return res;
}
