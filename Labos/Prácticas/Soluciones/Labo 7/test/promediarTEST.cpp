#include "../ejercicios.h"
#include "gtest/gtest.h"


TEST(promediar, diagonal){
    vector<vector<int> > vec(5,vector<int>(5,0));
    for(int i=0;i<5;i++) {
    vec[i][i] = 10*(i+1);
}

vector<vector<int> > res(5,vector<int>(5,0));
    res[0][0] = res[2][3] = res[3][2] = 7;
    res[0][1] = res[1][0] = res[1][2] = res[2][1] = 5;
    res[0][2] = res[2][0] = res[1][3] = res[3][1] = 3;
    res[1][1] = res[2][4] = res[4][2] = 6;
    res[2][2] = 10;
    res[3][3] = 13;
    res[3][4] = res[4][3] = 15;
    res[4][4] = 22;
    EXPECT_EQ(promediar(vec), res);
}

TEST(promediar, mat2){
    vector<vector<int> > vec(5,vector<int>(5,0)),res(5,vector<int>(5,1));
    for(int i=0;i<5;i++) {
    for(int j=0;j<5;j++) {
    if(i%2==j%2) {
    vec[i][j] = 2;
    }
    }
    }
    res[1][2] = res[3][2] = res[2][1] = res[2][3] = 0;
    EXPECT_EQ(promediar(vec), res);
}