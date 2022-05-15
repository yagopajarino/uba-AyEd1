#include "../llenarTaxis.h"
#include "gtest/gtest.h"

// Escribir tests aca:
TEST(llenarTaxis, todasMismoValor0){
    int result = llenarTaxis3(0,0,0);
    EXPECT_EQ(result, 0);
}

TEST(llenarTaxis, todasMismoValor1){
    int result = llenarTaxis3(1,1,1);
    EXPECT_EQ(result, 2);
}

TEST(llenarTaxis, todasMismoValor2){
    int result = llenarTaxis3(4,4,4);
    EXPECT_EQ(result, 6);
}

TEST(llenarTaxis, todasMismoValor3){
    int result = llenarTaxis3(5,5,5);
    EXPECT_EQ(result, 8);
}

TEST(llenarTaxis, diferenteTamañoG2Par1){
    int result = llenarTaxis3(2,4,7);
    EXPECT_EQ(result, 9);
}

TEST(llenarTaxis, diferenteTamañoG2Par2){
    int result = llenarTaxis3(9,6,4);
    EXPECT_EQ(result, 9);
}

TEST(llenarTaxis, diferenteTamañoG2Impar1){
    int result = llenarTaxis3(5,5,4);
    EXPECT_EQ(result, 7);
}

TEST(llenarTaxis, diferenteTamañoG2Impar2){
    int result = llenarTaxis3(2,7,6);
    EXPECT_EQ(result, 10);
}