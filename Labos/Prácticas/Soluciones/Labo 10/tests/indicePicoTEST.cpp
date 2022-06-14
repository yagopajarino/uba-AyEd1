#include "../src/ejercicios.h"
#include "gtest/gtest.h"

using namespace std;

TEST(indicePico, enExtremoInicial) {
    vector<int> v = {5,4,3,2,1};
    int res = indicePico(v);
    EXPECT_EQ(res, 0);
}

TEST(indicePico, enExtremoFinal) {
    vector<int> v = {1,2,3,4,5,6};
    int res = indicePico(v);
    EXPECT_EQ(res, 5);
}

TEST(indicePico, enElMedio) {
    vector<int> v = {1,2,3,4,3,2,1};
    int res = indicePico(v);
    EXPECT_EQ(res, 3);
}