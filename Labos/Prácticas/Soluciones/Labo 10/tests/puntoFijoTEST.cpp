#include "../src/ejercicios.h"
#include "gtest/gtest.h"

using namespace std;

TEST(puntoFijo, enExtremoInicial) {
    vector<int> v = {0,2,3,4,5};
    int res = puntoFijo(v);
    EXPECT_EQ(res, 0);
}

TEST(puntoFijo, enExtremoFinal) {
    vector<int> v = {2,3,4,5,4};
    int res = puntoFijo(v);
    EXPECT_EQ(res, 4);
}

TEST(puntoFijo, enElMedio) {
    vector<int> v = {2,3,2,5,7};
    int res = puntoFijo(v);
    EXPECT_EQ(res, 2);
}

TEST(puntoFijo, noHay) {
    vector<int> v = {2,3,4,5,6};
    int res = puntoFijo(v);
    EXPECT_EQ(res, -1);
}

TEST(puntoFijo, devuelveElPrimero) {
    vector<int> v = {2,3,2,5,6,5,8,7};
    int res = puntoFijo(v);
    EXPECT_EQ(res, 2);
}
