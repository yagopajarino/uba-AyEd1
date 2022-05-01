#ifndef GENERADOR_H
#define GENERADOR_H

#include <vector>

void generarDatosLaboratorio();
bool noEstaEnVector(const std::vector<int> & v, int num);
std::vector<int> randomSinRepeticion(int n, int k);

#endif