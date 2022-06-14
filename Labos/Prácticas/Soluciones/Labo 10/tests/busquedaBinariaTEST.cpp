#include "../src/ejercicios.h"
#include "gtest/gtest.h"


TEST(busquedaBinaria, loContiene) {
    vector<int> v = {1,2,3,4,5,6,7,8};
    int res = busquedaBinaria(v, 3);
    EXPECT_EQ(res, 2);
}

TEST(busquedaBinaria, noLoContiene) {
    vector<int> v = {1,2,3,4,5,7,8};
    int res = busquedaBinaria(v, 6);
    EXPECT_EQ(res, -1);
}

TEST(busquedaBinaria, sonTodosMayores) {
    vector<int> v = {1,2,3,4,5,7,8};
    int res = busquedaBinaria(v, 0);
    EXPECT_EQ(res, -1);
}

TEST(busquedaBinaria, sonTodosMenores) {
    vector<int> v = {1,2,3,4,5,7,8};
    int res = busquedaBinaria(v, 9);
    EXPECT_EQ(res, -1);
}