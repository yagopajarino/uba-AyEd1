#include "../ejercicios.h"
#include "gtest/gtest.h"

TEST(esTriangular, superior) {
    vector<vector<int> > m = {
            {1,2,0,4},
            {0,2,0,0},
            {0,0,3,4},
            {0,0,0,4}
    };
    bool res = esTriangular(m);
    EXPECT_TRUE(res);
}

TEST(esTriangular, inferior) {
    vector<vector<int> > m = {
            {1,0,0,0},
            {0,2,0,0},
            {0,8,3,0},
            {0,0,0,4}
    };
    bool res = esTriangular(m);
    EXPECT_TRUE(res);
}

TEST(esTriangular, casiTriangular) {
    vector<vector<int> > m = {
            {1,0,0,0},
            {0,2,3,0},
            {0,0,3,0},
            {1,0,0,0}
    };
    bool res = esTriangular(m);
    EXPECT_FALSE(res);
}

TEST(esTriangular, cerosEnDiagonal) {
    vector<vector<int> > m = {
            {0,0,0,4},
            {0,0,0,0},
            {0,0,0,0},
            {1,0,0,0}
    };
    bool res = esTriangular(m);
    EXPECT_FALSE(res);
}

TEST(esTriangular, dosXdos) {
    vector<vector<int> > m = {
            {1,8},
            {0,2},
    };
    bool res = esTriangular(m);
    EXPECT_TRUE(res);
}

