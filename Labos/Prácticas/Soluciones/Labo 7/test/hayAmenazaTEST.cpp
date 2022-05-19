#include "../ejercicios.h"
#include "gtest/gtest.h"

TEST(hayAmenaza, amenaza0){
    vector<vector<int> > vec(8,vector<int>(8,0));
    vec[0][2] = vec[1][5] = vec[2][3] = vec[3][0] = vec[4][7] = vec[5][4] = vec[6][6] = vec[7][1] = 1;
    EXPECT_EQ(hayAmenaza(vec), 0);
}

TEST(hayAmenaza, amenaza1){
    vector<vector<int> > vec(8,vector<int>(8,0));
    vec[0][2] = vec[1][5] = vec[2][3] = vec[3][0] = vec[4][7] = vec[5][1] = vec[6][6] = vec[7][4] = 1;
    EXPECT_EQ(hayAmenaza(vec), 0);
}

TEST(hayAmenaza, amenaza2){
    vector<vector<int> > vec(3,vector<int>(4,0));
    vec[0][0] = vec[1][3] = vec[2][1] = 1;
    EXPECT_EQ(hayAmenaza(vec), 0);
}

TEST(hayAmenaza, amenaza3){
    vector<vector<int> > vec(3,vector<int>(4,0));
    vec[0][0] = vec[2][3] = vec[2][1] = 1;
    EXPECT_EQ(hayAmenaza(vec), 0);
}

TEST(hayAmenaza, amenaza4){
    vector<vector<int> > vec(3,vector<int>(4,0));
    vec[0][0] = vec[1][3] = vec[2][3] = 1;
    EXPECT_EQ(hayAmenaza(vec), 0);
}