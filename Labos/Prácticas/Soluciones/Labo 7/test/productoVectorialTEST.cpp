#include "../ejercicios.h"
#include "gtest/gtest.h"

TEST(productoVectorial, igualDimension){
    vector<int> u = {2,3,4};
    vector<int> v = {4,3,2};
    vector<vector<int> > expected = {
            {8,  6,  4},
            {12,  9,  6},
            {16, 12,  8}
    };
    vector<vector<int> > real = productoVectorial(u,v);
    EXPECT_EQ(real, expected);
}

TEST(productoVectorial, distintaDimension){
    vector<int> u = {6,7,8,9};
    vector<int> v = {1,2,3};
    vector<vector<int> > expected = {
            { 6, 12, 18},
            {7, 14, 21},
            {8, 16, 24},
            {9, 18, 27}
    };
    vector<vector<int> > real = productoVectorial(u,v);
    EXPECT_EQ(real, expected);
}

TEST(productoVectorial, unoXuno){
    vector<int> u = {6};
    vector<int> v = {2};
    vector<vector<int> > expected = {
            {12}
    };
    vector<vector<int> > real = productoVectorial(u,v);
    EXPECT_EQ(real, expected);
}