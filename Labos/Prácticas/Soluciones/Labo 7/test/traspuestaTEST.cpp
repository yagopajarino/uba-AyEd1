#include "../ejercicios.h"
#include "gtest/gtest.h"

TEST(trasponer, unoXuno){
    vector<vector<int> > vec(4,vector<int>(4,0)), res(4,vector<int>(4,0));
    vec[0][1] = res[1][0] = 1;
    vec[0][2] = res[2][0] = 2;
    vec[0][3] = res[3][0] = 3;
    vec[1][0] = res[0][1] = 8;
    vec[1][2] = res[2][1] = 4;
    vec[1][3] = res[3][1] = 5;
    vec[2][0] = res[0][2] = 0;
    vec[2][1] = res[1][2] = 15;
    vec[2][3] = res[3][2] = 6;
    vec[3][0] = res[0][3] = 4;
    vec[3][1] = res[1][3] = 13;
    vec[3][2] = res[2][3] = 10;
    vec[0][0] = res[0][0] = vec[1][1] = res[1][1] = 10;
    vec[2][2] = res[2][2] = vec[3][3] = res[3][3] = 20;
    trasponer(vec);
    EXPECT_EQ(vec, res);
}

TEST(trasponer, simetrica){
    vector<vector<int> > vec(5,vector<int>(5));
    for(int i=0;i<5;i++) {
        for(int j=0;j<5;j++) {
            vec[i][j] = i+j;
        }
    }
    vector<vector<int> > res = vec;
    trasponer(vec);
    EXPECT_EQ(vec, res);
}

TEST(trasponer, Mat3){
    vector<vector<int> > vec(6,vector<int>(6)), res(6,vector<int>(6));
    for(int i=0;i<6;i++) {
        for(int j=0;j<=i;j++) {
            vec[i][j] = (i*13+j*17)%19;
            res[j][i] = vec[i][j];
        }
    }
    trasponer(vec);
    EXPECT_EQ(vec, res);
}