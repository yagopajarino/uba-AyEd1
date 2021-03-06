#include "../ejercicios.h"
#include "gtest/gtest.h"

TEST(multiplicar, mat1){
    vector<vector<int> > m1(3,vector<int>(4)), m2(4,vector<int>(5)), res(3,vector<int>(5));
    m1[0][0] = 1;
    m1[0][1] = 2;
    m1[0][2] = 3;
    m1[0][3] = 4;
    m1[1][0] = 5;
    m1[1][1] = 6;
    m1[1][2] = 7;
    m1[1][3] = 8;
    m1[2][0] = 9;
    m1[2][1] = 10;
    m1[2][2] = 11;
    m1[2][3] = 12;

    m2[0][0] = 1;
    m2[0][1] = 2;
    m2[0][2] = 3;
    m2[0][3] = 1;
    m2[0][4] = 2;
    m2[1][0] = 3;
    m2[1][1] = 1;
    m2[1][2] = 2;
    m2[1][3] = 3;
    m2[1][4] = 1;
    m2[2][0] = 2;
    m2[2][1] = 3;
    m2[2][2] = 1;
    m2[2][3] = 2;
    m2[2][4] = 3;
    m2[3][0] = 1;
    m2[3][1] = 2;
    m2[3][2] = 3;
    m2[3][3] = 1;
    m2[3][4] = 2;

    res[0][0] = 17;
    res[0][1] = 21;
    res[0][2] = 22;
    res[0][3] = 17;
    res[0][4] = 21;

    res[1][0] = 45;
    res[1][1] = 53;
    res[1][2] = 58;
    res[1][3] = 45;
    res[1][4] = 53;

    res[2][0] = 73;
    res[2][1] = 85;
    res[2][2] = 94;
    res[2][3] = 73;
    res[2][4] = 85;

    EXPECT_EQ(multiplicar(m1,m2), res);
}

TEST(multiplicar, identidad){
    vector<vector<int> > m1(5,vector<int>(5,0)), m2(5,vector<int>(5)), res;
    m1[0][0] = m1[1][1] = m1[2][2] = m1[3][3] = m1[4][4] = 1;
    m2[0][0] = 1;
    m2[0][1] = 2;
    m2[0][2] = 3;
    m2[0][3] = 1;
    m2[0][4] = 2;
    m2[1][0] = 3;
    m2[1][1] = 1;
    m2[1][2] = 2;
    m2[1][3] = 3;
    m2[1][4] = 1;
    m2[2][0] = 2;
    m2[2][1] = 3;
    m2[2][2] = 1;
    m2[2][3] = 2;
    m2[2][4] = 3;
    m2[3][0] = 1;
    m2[3][1] = 2;
    m2[3][2] = 3;
    m2[3][3] = 1;
    m2[3][4] = 2;
    m2[4][0] = 1;
    m2[4][1] = 2;
    m2[4][2] = 3;
    m2[4][3] = 1;
    m2[4][4] = 2;

    res = m2;
    EXPECT_EQ(multiplicar(m1,m2), res);
}

