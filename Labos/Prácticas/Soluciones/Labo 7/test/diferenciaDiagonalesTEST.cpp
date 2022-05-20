#include "../ejercicios.h"
#include "gtest/gtest.h"

TEST(diferenciaDiagonales, test1){
    vector<vector<int> > m = {
            {10,2,3,4},
            {5,10,7,8},
            {10,9,8,7},
            {4,0,0,1}
    };
    EXPECT_EQ(diferenciaDiagonales(m), 5);
}

TEST(diferenciaDiagonales, test2){
    vector<vector<int> > m = {
            {1,2,3,4},
            {5,6,7,8},
            {10,9,8,7},
            {0,0,0,1}
    };
    EXPECT_EQ(diferenciaDiagonales(m), 4);
}

TEST(diferenciaDiagonales, test3){
    vector<vector<int> > m = {
            {1,2,3,1},
            {5,2,2,8},
            {10,3,3,7},
            {4,0,0,4}
    };
    EXPECT_EQ(diferenciaDiagonales(m), 0);
}

TEST(diferenciaDiagonales, test4){
    vector<vector<int> > m = {
            {-1,2,3,-4},
            {5,-6,7,8},
            {1,-9,-8,7},
            {0,0,0,1}
    };
    EXPECT_EQ(diferenciaDiagonales(m), 8);
}

TEST(diferenciaDiagonales, test5){
    vector<vector<int> > m = {
            {-1,2},
            {6,-6}
    };
    EXPECT_EQ(diferenciaDiagonales(m), 15);
}

TEST(diferenciaDiagonales, test6){
    vector<vector<int> > m = {
            {-1}
    };
    EXPECT_EQ(diferenciaDiagonales(m), 0);
}



