#include "../src/ejercicios.h"
#include "gtest/gtest.h"


using namespace std;

TEST(jumpSearch, loContieneEnElMedio) {
    vector<int> v = {1,2,3,4,5,6,7,8,9,10};
    int res = busquedaJumpSearch(v, 8);
    EXPECT_EQ(res, 7);
}

TEST(jumpSearch, loContieneEnExtremoInicial) {
    vector<int> v = {1,2,3,4,5,6,7,8,9,10};
    int res = busquedaJumpSearch(v, 1);
    EXPECT_EQ(res, 0);
}

TEST(jumpSearch, loContieneEnExtremoFinal) {
    vector<int> v = {1,2,3,4,5,6,7,8,9,10};
    int res = busquedaJumpSearch(v, 10);
    EXPECT_EQ(res, 9);
}

TEST(jumpSearch, noLoContiene) {
    vector<int> v = {1,2,3,4,5,7,8,9,10};
    int res = busquedaJumpSearch(v, 6);
    EXPECT_EQ(res, -1);
}

TEST(jumpSearch, sonTodosMayores) {
    vector<int> v = {1,2,3,4,5,7,8,9,10};
    int res = busquedaJumpSearch(v, 0);
    EXPECT_EQ(res, -1);
}

TEST(jumpSearch, sonTodosMenores) {
    vector<int> v = {1,2,3,4,5,7,8,9,10};
    int res = busquedaJumpSearch(v, 11);
    EXPECT_EQ(res, -1);
}
