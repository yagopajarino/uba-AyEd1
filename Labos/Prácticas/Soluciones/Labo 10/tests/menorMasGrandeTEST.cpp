#include "../src/ejercicios.h"
#include "gtest/gtest.h"

using namespace std;

TEST(menorMasGrande, enElMedio) {
    vector<int> v = {1,2,3,4,5,6};
    int x = 4;
    int res = menorMasGrande(v, x);
    EXPECT_EQ(res, 4);
}

TEST(menorMasGrande, enExtremoInicial) {
    vector<int> v = {1,2,3,4,5,6};
    int x = 0;
    int res = menorMasGrande(v, x);
    EXPECT_EQ(res, 0);
}

TEST(menorMasGrande, enExtremoFinal) {
    vector<int> v = {1,2,3,4,5,6};
    int x = 5;
    int res = menorMasGrande(v, x);
    EXPECT_EQ(res, 5);
}

TEST(menorMasGrande, noHay) {
    vector<int> v = {1,2,3,4,5,6};
    int x = 7;
    int res = menorMasGrande(v, x);
    EXPECT_EQ(res, -1);
}
