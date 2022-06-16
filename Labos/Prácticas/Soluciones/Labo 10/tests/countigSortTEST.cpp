#include "../src/ejercicios.h"
#include "gtest/gtest.h"

using namespace std;

TEST(countingSort, todosPositivos) {
    vector<int> v = {4,6,2,3,8,9,45,6,5,5};
    vector<int> sorted = {2,3,4,5,5,6,6,8,9,45};
    countSort(v);
    EXPECT_EQ(v, sorted);
}

TEST(countingSort, posYneg) {
    vector<int> v = {4,6,0,3,8,-9,45,6,5,5};
    vector<int> sorted = {-9,0,3,4,5,5,6,6,8,45};
    countSort(v);
    EXPECT_EQ(v, sorted);
}