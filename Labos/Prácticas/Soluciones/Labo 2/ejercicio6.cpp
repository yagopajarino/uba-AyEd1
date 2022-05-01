//
// Created by Yago Pajariño on 19/04/2022.
//

int triplicaPorValor(float n) {
    return n * 3;
}

void triplicaPorReferencia(float& n) {
    n = n*3;
}


int main() {
    float cuenta;
    // por valor
    cuenta = triplicaPorValor(cuenta);
    // por referencia
    triplicaPorReferencia(cuenta);
}